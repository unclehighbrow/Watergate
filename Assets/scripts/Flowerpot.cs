﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Flowerpot : Person {
	WarpZone enter;
	WarpZone exit;
	int minIntelligence = 6;
	int startIntelligence = 10;

	public new void Start () {
		base.Start();
		if (!levelManager.tutorial) {
			enter = levelManager.warpZones[Random.Range(0, levelManager.warpZones.Count)];
			if (enter.transform.position.x < 0) {
				transform.position = (Vector2)enter.transform.position + Vector2.right;
			} else {
				transform.position = (Vector2)enter.transform.position - Vector2.right;
			}
			exit = enter.outWarpZone;
			speed = 0.05f;
			intelligence = startIntelligence;
		}
	}
	
	void FixedUpdate () {
		if (levelManager.levelStarted) {
			if (destination != Vector2.zero && (Vector2)transform.position != destination) { // go to destination
				Vector2 p = Vector2.MoveTowards(transform.position, destination, speed);
				GetComponent<Rigidbody2D>().MovePosition(p);
			} else {
				if (!levelManager.tutorial) {
					findNextDestination(exit.transform.position, true);
					intelligence -= 2;
					intelligence = Mathf.Max(minIntelligence, intelligence);
				}
			}
		}
	}
}
