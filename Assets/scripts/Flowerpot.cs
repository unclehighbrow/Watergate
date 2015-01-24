using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Flowerpot : Person {
	WarpZone enter;
	WarpZone exit;

	public new void Start () {
		base.Start();
		enter = levelManager.warpZones[Random.Range(0, levelManager.warpZones.Count)];
		if (enter.transform.position.x < 0) {
			transform.position = (Vector2)enter.transform.position + Vector2.right;
		} else {
			transform.position = (Vector2)enter.transform.position - Vector2.right;
		}
		exit = enter.outWarpZone;
		speed = 0.05f;
		intelligence = 6;
	}
	
	void FixedUpdate () {
		if (levelManager.levelStarted) {
			if (destination != Vector2.zero && (Vector2)transform.position != destination) { // go to destination
				Vector2 p = Vector2.MoveTowards(transform.position, destination, speed);
				rigidbody2D.MovePosition(p);
			} else {
				findNextDestination(exit.transform.position, true);
			}
		}
	}
}
