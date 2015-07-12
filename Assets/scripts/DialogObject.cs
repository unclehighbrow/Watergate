using UnityEngine;
using System.Collections;

public class DialogObject : ScriptableObject {
	public string text;
	public Sprite sprite;
	public DialogObject(string text, Sprite sprite) {
		this.text = text;
		this.sprite = sprite;
	}
}
