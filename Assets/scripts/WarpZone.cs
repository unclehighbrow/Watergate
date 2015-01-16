using UnityEngine;
using System.Collections;

public class WarpZone : MonoBehaviour {
	public WarpZone outWarpZone;


	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnTriggerEnter2D(Collider2D col) {
		Person person = col.gameObject.GetComponent<Person>();
		if (person != null) {
			person.transform.position = (Vector2)outWarpZone.transform.position + person.direction;
			person.destination = (Vector2)outWarpZone.transform.position + 2*person.direction;
		}
	}
}
