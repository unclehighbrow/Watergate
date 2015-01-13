using UnityEngine;
using System.Collections;

public class LevelManager : Singleton<LevelManager> {
	GameObject pelletHolder = null;
	public bool scareMode = false;
	public bool levelStarted = false;
	float timer;
	float timerStart = 10;

	void Start() {
		pelletHolder = GameObject.Find ("pellet_holder");
		Debug.Log ("pellet holder size: " + pelletHolder.transform.childCount);
	}

	void Update() {
		if (pelletHolder.transform.childCount == 0) {
			Application.LoadLevel ("maze");
		}
		if (scareMode) {
			timer -= Time.deltaTime;
			if (timer <= 0) {
				EndScareMode();
			}
		}
	}

	public void StartScareMode() {
		scareMode = true;
		timer = timerStart;
		GameObject[] burglars = GameObject.FindGameObjectsWithTag("burglar");
		for (int i = 0; i < burglars.Length; i++) {
			burglars[i].GetComponent<SpriteRenderer>().color = Color.blue;
		}
	}

	void EndScareMode() {
		scareMode = false;
		GameObject[] burglars = GameObject.FindGameObjectsWithTag("burglar");
		for (int i = 0; i < burglars.Length; i++) {
			burglars[i].GetComponent<SpriteRenderer>().color = Color.white;
		}
	}

	public void Die() {
		levelStarted = false;
		GameObject[] burglars = GameObject.FindGameObjectsWithTag("burglar");
		for (int i = 0; i < burglars.Length; i++) {
			burglars[i].transform.position = burglars[i].GetComponent<Burglar>().startPosition;
			burglars[i].GetComponent<Burglar>().destination = Vector2.zero;
		}
		GameObject[] players = GameObject.FindGameObjectsWithTag("Player");
		for (int i = 0; i < players.Length; i++) {
			Debug.Log ("ressetting " + players[i].name);
			players[i].transform.position = players[i].GetComponent<Player>().startPosition;
			players[i].GetComponent<Player>().destination = Vector2.zero;
			players[i].GetComponent<Player>().preference = Vector2.zero;
			players[i].GetComponent<Player>().direction = Vector2.zero;

		}

	}
}
