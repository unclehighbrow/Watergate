using UnityEngine;
using System.Collections;

public class InterstitialManager : TutorialBase {

	// Use this for initialization
	void Start () {
		StartCoroutine(DisplayLine("Here's a funny thing!", bernsteinSprite, true));
	}
	
	// Update is called once per frame
	public new void Update () {
		base.Update();
	}
}
