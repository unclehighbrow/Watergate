using UnityEngine;
using System.Collections;

public class Player : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnTriggerEnter2D(Collider2D col) {
		if (col.gameObject.tag == "pellet") {
			Destroy(col.gameObject);
		} else if (col.gameObject.tag == "power_pellet") {
			Destroy(col.gameObject);
		} else if (col.gameObject.tag == "burglar") {
			Debug.Log ("foudn burglar");
			// Destroy(this.gameObject);
		}
	}
}
