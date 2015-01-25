using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class GameSingleton : Singleton<GameSingleton> {
	public int score = 0;
	public int lives = 5;
	public float playerSpeed = 1f;
	public float burglarSpeed = 1f;
	public float playerSpeedMultiplier = 1.1f;
	public float burglarSpeedMultiplier = 1.2f;
	public Text scoreUi;
	public List<GameObject> lifeUis;

	// Use this for initialization
	void Start () {
		scoreUi = GameObject.Find ("score").GetComponent<Text>();
		lifeUis = new List<GameObject>(GameObject.FindGameObjectsWithTag("life"));
		lifeUis.Sort(SortByName);
		DontDestroyOnLoad(GameObject.FindObjectOfType<Canvas>());
	}

	public static int SortByName(MonoBehaviour o1, MonoBehaviour o2) {
		return o1.name.CompareTo(o2.name);
	}

	public static int SortByName(GameObject o1, GameObject o2) {
		return o1.name.CompareTo(o2.name);
	}
	
	// Update is called once per frame
	void Update () {
		scoreUi.text = score.ToString().PadLeft(5, '0');
	}

	public void LoadNextLevel() {
		if (Application.loadedLevel + 1 >= Application.levelCount - 1) { // -1 for game over, probably -2 for title screen
			Application.LoadLevel(0);
		} else {
			Application.LoadLevel(Application.loadedLevel + 1);
		}
		playerSpeed *= playerSpeedMultiplier;
		burglarSpeed *= burglarSpeedMultiplier;
	}

	public void Die() {
		lifeUis[--lives].GetComponent<Image>().enabled = false;
		if (lives <= 0) {
			Application.LoadLevel("game_over");
		} 
	}

	public void LoadFirstLevel() {
		Debug.Log ("lol");
		lives = 5;
		foreach (GameObject lifeUi in lifeUis) {
			lifeUi.GetComponent<Image>().enabled = true;
		}

		Application.LoadLevel(0);
	}
}
