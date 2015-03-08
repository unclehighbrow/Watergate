using UnityEngine;
using UnityEditor;
using System.Collections;

public class TransformRounder : MonoBehaviour {

	[MenuItem("GameObject/Round Transform")]
	public static void RoundTransform() {
		GameObject[] gos = Selection.gameObjects;
		foreach (GameObject go in gos) {
			Vector3 position = go.transform.position;
			position.x = Mathf.Round(position.x * 2) / 2;
			position.y = Mathf.Round(position.y * 2) / 2;
			position.z = 0;
			go.transform.position = position;
		}
	}

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
