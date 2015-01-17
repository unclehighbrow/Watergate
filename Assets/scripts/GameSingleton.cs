using UnityEngine;
using System.Collections;

public class GameSingleton : Singleton<GameSingleton> {
	public int score = 0;


	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnGUI() {
		//The conversation text
		GUI.Label(new Rect(10, 30, 50 + 30, 20),
		          score.ToString());
	}
}
