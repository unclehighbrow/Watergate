using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class LevelManager : Singleton<LevelManager> {
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
		float deviceWidth;
		float deviceHeight;
		#if UNITY_EDITOR
		deviceWidth = GetGameView().x;
		deviceHeight = GetGameView().y;
		#else
		deviceWidth = Screen.width;
		deviceHeight = Screen.height;
		#endif
		Debug.Log ("width: " + deviceWidth);
		Debug.Log ("height: " + deviceHeight);
		Debug.Log ("ratil: " + deviceWidth/deviceHeight);
		     }

	private Vector2 GetGameView() {
		System.Type T = System.Type.GetType("UnityEditor.GameView,UnityEditor");
		System.Reflection.MethodInfo getSizeOfMainGameView =
			T.GetMethod("GetSizeOfMainGameView",System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Static);
		System.Object resolution = getSizeOfMainGameView.Invoke(null, null);
		return (Vector2)resolution;
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
		foreach (Burglar burglar in burglars) {
			burglar.GetComponent<SpriteRenderer>().color = Color.blue;
		}
	}

	void EndScareMode() {
		scareMode = false;
		foreach (Burglar burglar in burglars) {
			burglar.GetComponent<SpriteRenderer>().color = Color.white;
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
