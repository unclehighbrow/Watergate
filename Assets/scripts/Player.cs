using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Player : Person {

	public Vector2 preference = Vector2.zero;
	public bool isDeepThroat = false;
	public GameObject deepThroatPrefab;

	void FixedUpdate () {
		if (levelManager.levelStarted) {
			if (destination != Vector2.zero && (Vector2)transform.position != destination) { // go to destination
				Vector2 p = Vector2.MoveTowards(transform.position, destination, speed * GameSingleton.Instance.playerSpeed);
				rigidbody2D.MovePosition(p);
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
			destination = (Vector2)transform.position + dir;
			SetDirection(dir);
		}
	}

	public void Reset() {
		transform.position = startPosition;
		destination = Vector2.zero;
		preference = Vector2.zero;
		direction = Vector2.zero;
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

	void OnTriggerEnter2D(Collider2D col) {
		if (col.gameObject.CompareTag("pellet")) {
			Destroy(col.gameObject);
			GameSingleton.Instance.score += 10;
		} else if (col.gameObject.CompareTag("power_pellet")) {
			levelManager.StartScareMode();
			Destroy(col.gameObject);
		} else if (col.gameObject.CompareTag("burglar")) {
			Burglar burglar = col.gameObject.GetComponent<Burglar>();
			if (!burglar.GetComponent<Animator>().GetBool("dead")) {
				if (burglar.GetComponent<Animator>().GetBool("scare") ^ isDeepThroat) {
					burglar.Die();
					GameSingleton.Instance.score += (100 * levelManager.burglarsEatenInScareMode);
					levelManager.burglarsEatenInScareMode++;
				} else if (isDeepThroat) {
					levelManager.players.Remove (this);
					Destroy(this.gameObject);
				} else {
					levelManager.Die();
				}
			}
		} else if (col.gameObject.CompareTag("flowerpot") && !isDeepThroat) {
			Player newDeepThroat = ((GameObject)Instantiate(deepThroatPrefab, transform.position, Quaternion.identity)).GetComponent<Player>();
			newDeepThroat.destination = destination - direction;
			newDeepThroat.direction = -direction;
			levelManager.players.Add(newDeepThroat);
			Destroy(col.gameObject);
		}
	}

	public void applyDirection(Vector2 newDirection) {
		levelManager.levelStarted = true;
		if (newDirection == -this.direction) { // quick turn
			destination = (destination + newDirection);
			SetDirection(newDirection);

		} else if (destination != Vector2.zero && (Vector2)transform.position != destination) { // usual
			preference = newDirection;
		} else { // if you happen to end the swipe right on a destinatio
			SetDestination(newDirection);
		}
	}

}
