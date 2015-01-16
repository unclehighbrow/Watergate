using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class LevelManager : MonoBehaviour{
	GameObject pelletHolder = null;
	public bool scareMode = false;
	public bool levelStarted = false;
	float timer;
	float timerStart = 10;
	public List<Player> players;
	public List<Burglar> burglars = new List<Burglar>();


	void Start() {
		pelletHolder = GameObject.Find("pellet_holder");
		players = new List<Player>(GameObject.FindObjectsOfType<Player>());
		burglars = new List<Burglar>(GameObject.FindObjectsOfType<Burglar>());
//		foreach (Player player in players) {
//			player.levelManager = this;
//		}
//		foreach (Burglar burglar in burglars) {
//			burglar.levelManager = this;
//		}
//		GameObject.FindObjectOfType<WatergateControl>().levelManager = this;
     }

	void Update() {
		if (pelletHolder.transform.childCount == 0) {
			Application.LoadLevel("maze");
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
		foreach (Burglar burglar in burglars) {
			burglar.StartScareMode();
		}
	}

	void EndScareMode() {
		scareMode = false;
		foreach (Burglar burglar in burglars) {
			burglar.EndScareMode();
		}
	}

	public void Die() {
		levelStarted = false;
		foreach (Burglar burglar in burglars) {
			burglar.transform.position = burglar.startPosition;
			burglar.destination = Vector2.zero;
		}
		foreach (Player player in players) {
			player.transform.position = player.startPosition;
			player.destination = Vector2.zero;
			player.preference = Vector2.zero;
			player.direction = Vector2.zero;
		}

	}
}
