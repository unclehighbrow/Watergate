using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class InterstitialManager : TutorialBase {
	public DialogObject[] scriptHolder;

	// Use this for initialization
	public new void Start () {
		base.Start ();
		List<DialogObject> script = new List<DialogObject>();
		script.Add(new DialogObject("First funny thing", bernsteinSprite));
		script.Add(new DialogObject("second funny thing", woodwardSprite));
		for (int i = 0; i<script.Count; i++) {
			StartCoroutine(DoDisplayLine(script[i].text, script[i].sprite, i));
		}
		StartCoroutine(NextLevel (script.Count));
	}

	IEnumerator NextLevel(int scriptSize) {
		while (Line < scriptSize) {
			yield return new WaitForEndOfFrame();
		}
		GameSingleton.Instance.LoadNextLevel();
	}
	
	// Update is called once per frame
	public new void Update () {
		base.Update();
	}

	IEnumerator DoDisplayLine(string text, Sprite sprite, int line) {
		bool done = false;
		while (!done) {
			if (line == Line) {
				Debug.Log ("staring up: " + line);
				StartCoroutine(DisplayLine(text, bernsteinSprite, true));
				done = true;
			} else {
				yield return new WaitForEndOfFrame();
			}
		}
		yield return null;
	}
}
