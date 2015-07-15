using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class InterstitialManager : TutorialBase {
	public Conversation[] scriptHolder;

	// Use this for initialization
	public new void Start () {
		base.Start ();
		Conversation conversation = scriptHolder[Random.Range(0,scriptHolder.Length)];
		for (int i = 0; i < conversation.DialogObjects.Length; i++) {
			StartCoroutine(DoDisplayLine(conversation.DialogObjects[i].text, conversation.DialogObjects[i].sprite, i));
		}
		StartCoroutine(NextLevel(conversation.DialogObjects.Length));
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
				StartCoroutine(DisplayLine(text, sprite, true));
				done = true;
			} else {
				yield return new WaitForEndOfFrame();
			}
		}
		yield return null;
	}
}
