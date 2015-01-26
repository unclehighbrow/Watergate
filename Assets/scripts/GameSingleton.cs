using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class GameSingleton : Singleton<GameSingleton> {
	public int score = 0;
	public int lives = 3;
	public float playerSpeed = 1f;
	public float burglarSpeed = 1f;
	public float playerSpeedMultiplier = 1.1f;
	public float burglarSpeedMultiplier = 1.2f;

	// Use this for initialization
	void Start () {

	}

	
	// Update is called once per frame
	void Update () {

	}

	public void LoadNextLevel() {
		if (Application.loadedLevel + 1 >= Application.levelCount - 1) { // -1 for game over, probably -2 for title screen
			Application.LoadLevel(1);
		} else {
			Application.LoadLevel(Application.loadedLevel + 1);
		}
		playerSpeed *= playerSpeedMultiplier;
		burglarSpeed *= burglarSpeedMultiplier;
	}

	public void Die() {
		if (lives <= 0) {
			Application.LoadLevel("game_over");
		} 
	}

	public void LoadFirstLevel() {
		this.lives = 3;
		this.score = 0;
		Application.LoadLevel(1);
	}
}
