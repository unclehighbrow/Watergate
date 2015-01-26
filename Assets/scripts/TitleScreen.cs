using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class TitleScreen : MonoBehaviour {

	// Use this for initialization
	void Start () {
		GameObject.Find ("start_button")
			.GetComponent<Button>().onClick
			.AddListener(() => GameSingleton.Instance.LoadFirstLevel());
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
