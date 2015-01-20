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
	public int burglarsEatenInScareMode = 0;


	void Start() {
		pelletHolder = GameObject.Find("pellet_holder");
		players = new List<Player>(GameObject.FindObjectsOfType<Player>());
		burglars = new List<Burglar>(GameObject.FindObjectsOfType<Burglar>());
     }

	void Update() {
		if (pelletHolder.transform.childCount == 0) {
			GameSingleton.Instance.LoadNextLevel();
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
			burglar.Reset();
		}
		foreach (Player player in players) {
			player.Reset();
		}
		GameSingleton.Instance.Die();
	}
}
