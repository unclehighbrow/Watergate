using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class TitleScreen : MonoBehaviour {

	// Use this for initialization
	void Start () {
		int level = 1;
		if (PlayerPrefs.GetInt("seenTutorial") == 1) {
			level = 2;
		}
		GameObject.Find ("start_button")
			.GetComponent<Button>().onClick
			.AddListener(() => GameSingleton.Instance.LoadLevel(level));
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
