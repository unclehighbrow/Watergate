using UnityEngine;
using System.Collections;

public class Test : MonoBehaviour {
	LevelManager levelManager;


	// Use this for initialization
	void Start() {
		levelManager = GameObject.FindObjectOfType<LevelManager>();
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetKeyDown("1")) {
			levelManager.StartScareMode();
		}
		if (Input.GetKeyDown("2")) {
			levelManager.EndScareMode();
		}
		if (Input.GetKeyDown("3")) {
			levelManager.burglars[0].Die();
		}
	}
}
