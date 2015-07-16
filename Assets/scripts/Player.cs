using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Player : Person {

	public bool isDeepThroat = false;
	public GameObject deepThroatPrefab;
	public GameObject scoreNotifPrefab;
	public float maxIdleTime = 5;
	public float idleTime = 0;

	void Update() {
		if (levelManager.LevelStarted) {
			idleTime += Time.deltaTime;
			if (idleTime > maxIdleTime) {
				foreach (Burglar burglar in levelManager.burglars) {
					if (!burglar.GetComponent<Animator>().GetBool("scare") && !burglar.GetComponent<Animator>().GetBool("dead")) {
						if (burglar.hardTarget == null) {
							burglar.intelligence += 2;
							burglar.hardTarget = this;
						}
						break;
					}
				}
			}
		}
	}

	void FixedUpdate () {
		if (levelManager.LevelStarted && !animator.GetBool("dead")) {
			if (destination != Vector2.zero && (Vector2)transform.position != destination) { // go to destination
				Vector2 p = Vector2.MoveTowards(transform.position, destination, speed * GameSingleton.Instance.playerSpeed);
				GetComponent<Rigidbody2D>().MovePosition(p);
			} else { // make choice
				if (valid(preference)) {
					SetDestination(preference);
					preference = Vector2.zero;
				} else if (valid(direction)) {
					SetDestination(direction);
				} 
			}
		}
	}

	public void SetDestination(Vector2 dir) {
		if (valid(dir)) {
			idleTime = 0;
			destination = (Vector2)transform.position + dir;
			SetDirection(dir);
		}
	}

	public void FinishDying() {
		levelManager.FinishDying(); // woodward gives the signal in his animation, not bernstein or deep throat
	}

	public void DeepThroatDeath() {
		levelManager.players.Remove(this);
		Destroy (gameObject);
	}

	bool valid(Vector2 dir) {
		if (dir == Vector2.zero) {
			return false;
		}
		Vector2 pos = (Vector2)transform.position;
		RaycastHit2D[] hits = Physics2D.LinecastAll(pos, pos + dir*.6f);
		for (int i = 0; i < hits.Length; i++) {
			if (hits[i].transform.gameObject.tag == "wall" || hits[i].transform.gameObject.tag == "invisible_wall") {
				return false;
			}
		}
		return true;
	}

	IEnumerator RemoveScoreNotif(GameObject scoreNotif) {
		yield return new WaitForSeconds(2);
		Destroy(scoreNotif);
	}

	void ScoreNotif(int score) {
		GameObject scoreNotif = (GameObject)Instantiate(scoreNotifPrefab, transform.position, Quaternion.identity);
		scoreNotif.GetComponent<TextMesh>().text = "" + score;
		StartCoroutine(RemoveScoreNotif(scoreNotif));
	}

	void KillBurglar(Burglar burglar) {
		burglar.Die();
		int bonus = (int)(100 * Mathf.Pow(2, levelManager.burglarsEatenInScareMode));
		ScoreNotif(bonus);
		GameSingleton.Instance.score += bonus;
		levelManager.burglarsEatenInScareMode++;
	}

	void OnTriggerEnter2D(Collider2D col) {
		if (col.gameObject.CompareTag("pellet")) {
			Destroy(col.gameObject);
			GameSingleton.Instance.score += 10;
		} else if (col.gameObject.CompareTag("power_pellet")) {
			levelManager.StartScareMode();
			Destroy(col.gameObject);
		} else if (col.gameObject.CompareTag("burglar")) {
			Burglar burglar = col.gameObject.GetComponent<Burglar>();
			if (!burglar.GetComponent<Animator>().GetBool("dead") && !animator.GetBool("dead")) {
				if (burglar.GetComponent<Animator>().GetBool("scare")) {
					KillBurglar(burglar);
				} else if (isDeepThroat) {
					animator.SetBool("dead", true);
					KillBurglar(burglar);
				} else {
					levelManager.Die();
				}
			}
		} else if (col.gameObject.CompareTag("flowerpot") && !isDeepThroat) {
			Player newDeepThroat = ((GameObject)Instantiate(deepThroatPrefab, transform.position, Quaternion.identity)).GetComponent<Player>();
			newDeepThroat.destination = destination - direction;
			newDeepThroat.direction = -direction;
			newDeepThroat.startPosition = destination;
			levelManager.players.Add(newDeepThroat);
			ScoreNotif(500);
			GameSingleton.Instance.score += 500;
			Destroy(col.gameObject);
		}
	}

	public void applyDirection(Vector2 newDirection) {
		if (!animator.GetBool("dead")) {
			levelManager.LevelStarted = true;
			if (newDirection == -this.direction) { // quick turn
				destination = (destination + newDirection);
				SetDirection(newDirection);

			} else if (destination != Vector2.zero && (Vector2)transform.position != destination) { // usual
				preference = newDirection;
			} else { // if you happen to end the swipe right on a destination
				SetDestination(newDirection);
			}
		}
	}

}
