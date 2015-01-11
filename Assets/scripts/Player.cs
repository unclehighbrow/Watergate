using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Player : MonoBehaviour {
	public float speed = .05f;
	public Vector2 direction = Vector2.zero;
	public Vector2 destination = Vector2.zero;
	public Vector2 preference = Vector2.zero;


	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void FixedUpdate () {
		if (destination != Vector2.zero && (Vector2)transform.position != destination) { // go to destination
			Vector2 p = Vector2.MoveTowards(transform.position, destination, speed);
			rigidbody2D.MovePosition(p);
		} else if (destination.x > 5 || destination.x < -5) { // warp tunnel
			destination = new Vector2(-destination.x, destination.y);
			transform.position = new Vector2(-transform.position.x, transform.position.y);
		} else { // make choice
			if (valid(preference)) {
				SetDestination(preference);
				preference = Vector2.zero;
			} else if (valid(direction)) {
				SetDestination(direction);
			} 
		}
	}

	public void SetDestination(Vector2 dir) {
		if (valid(dir)) {
			destination = (Vector2)transform.position + dir;
			direction = dir;
		}
	}

	bool valid(Vector2 dir) {
		if (dir == Vector2.zero) {
			return false;
		}
		Vector2 pos = (Vector2)transform.position;
		RaycastHit2D[] hits = Physics2D.LinecastAll(pos, pos + dir*.4f);
		for (int i = 0; i < hits.Length; i++) {
			if (hits[i].transform.gameObject.tag == "wall") {
				return false;
			}
		}
		return true;
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
