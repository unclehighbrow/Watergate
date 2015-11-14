using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class TitleScreen : MonoBehaviour {

	GameSingleton gameSingleton;

	// Use this for initialization
	void Start () {
		gameSingleton = GameSingleton.Instance;
		string level = "tutorial";
		if (PlayerPrefs.GetInt("seenTutorial") >= 1) {
			level = "level1";
		}
		GameObject.Find ("start_button")
			.GetComponent<Button>().onClick
			.AddListener(() => gameSingleton.LoadLevel(level));
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
