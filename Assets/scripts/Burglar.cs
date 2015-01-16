﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Burglar : MonoBehaviour {

	public Vector2 destination = Vector2.zero;
	public Vector2 direction = Vector2.zero;
	public float speed = .03f;
	public float scareModeSpeedMultiplier = .6f;
	public float deadSpeedMultiplier = 5f;
	public int intelligence = 5;
	public Vector2 startPosition = Vector2.zero;
	public Color color;
	public List<Transform> waypoints;
	public LevelManager levelManager;
	public bool dead = false;
	int waypointCounter = 0;

	void Start () {
		startPosition = transform.position;
		GetComponent<SpriteRenderer>().color = color;
		levelManager = GameObject.FindObjectOfType<LevelManager>();
	}
	
	public void StartScareMode() {
		GetComponent<SpriteRenderer>().color = Color.blue;
		direction = -direction;
		destination = (destination + direction);
		speed *= scareModeSpeedMultiplier;
	}
	
	public void EndScareMode() {
		if (!dead) {
			GetComponent<SpriteRenderer>().color = color;
			speed /= scareModeSpeedMultiplier;
		}
	}

	public void Die() {
		dead = true;
		EndScareMode();
		speed *= deadSpeedMultiplier;
		GetComponent<SpriteRenderer>().color = Color.black;
		waypointCounter = waypoints.Count - 1;
	}

	public void Undie() {
		speed /= deadSpeedMultiplier;
		GetComponent<SpriteRenderer>().color = color;
		dead = false;
	}
	
	void FixedUpdate () {
		if (levelManager.levelStarted) {
			bool scareMode = levelManager.scareMode;

			if (destination != Vector2.zero && (Vector2)transform.position != destination) { // go to destination
				Vector2 p = Vector2.MoveTowards(transform.position, destination, speed);
				rigidbody2D.MovePosition(p);
			} else {
				if (waypoints.Count > waypointCounter && !dead) { // at start, follow waypoints out of the box
					Transform waypoint = waypoints[waypointCounter];
					if (waypoint.position == transform.position) {
						waypointCounter += 1;
					} else {
						direction = waypoint.position - transform.position; // this would make a big vector if more than one space
						destination = waypoint.position;
					}
				} else if (dead && ((Vector2)transform.position == startPosition)) {
					Undie();
				} else {
					Vector2 finalDestination = Vector2.zero; 
					if (dead) {
						Debug.Log ("dead, finding last waypoint");
						Transform waypoint = waypoints[waypointCounter];
						Debug.Log ("counter: " + waypointCounter + ", " + waypoint);
						if (waypoint.position == transform.position) {
							if (waypointCounter > 0) {
								waypointCounter -= 1;
							} else {
								finalDestination = startPosition;
							}
						} else {
							finalDestination = waypoint.position;

						}
					} else {
						float smallestDistance = -1;
						Player playerToFollow = null;
						foreach (Player player in levelManager.players) {
							float distance = Mathf.Abs(Vector3.Distance(player.transform.position, transform.position));
							if (smallestDistance == -1 || distance < smallestDistance) {
								smallestDistance = distance;
								playerToFollow = player;
							}
						}
						finalDestination = playerToFollow.transform.position;
					}

					if (finalDestination != Vector2.zero) {
						Vector2 vectorToPlayer = finalDestination - (Vector2)transform.position;
						Vector2 primaryDirection = Vector2.zero;
						Vector2 secondaryDirection = Vector2.zero;
						Vector2 xDirection = vectorToPlayer.x > 0 ? Vector2.right : -Vector2.right;
						Vector2 yDirection = vectorToPlayer.y > 0 ? Vector2.up : -Vector2.up;
						Vector2 actualDirection = Vector2.zero;
						if (Mathf.Abs(vectorToPlayer.x) > Mathf.Abs (vectorToPlayer.y)) { // horizontal
							primaryDirection = xDirection;
							secondaryDirection = yDirection;
						} else {
							primaryDirection = yDirection;
							secondaryDirection = xDirection;
						}

						if (scareMode && !dead) {
							primaryDirection = -primaryDirection;
							secondaryDirection = -secondaryDirection;
						}

						if (valid (primaryDirection) && (Random.Range(1,10) <= intelligence || dead) && primaryDirection != -direction) {
							actualDirection = primaryDirection;
						} else if (valid(secondaryDirection) && (Random.Range(1,10) <= intelligence || dead) && secondaryDirection != -direction) {
							actualDirection = secondaryDirection;
						} else if (valid(direction)) {
							actualDirection = direction;
						} else if (valid (-secondaryDirection)) {
							actualDirection = -secondaryDirection;
						} else if (valid (-primaryDirection)) {
							actualDirection = -primaryDirection;
						} else if (valid(secondaryDirection)) { // if the wrong directions are invalid, go with the right ones
							actualDirection = secondaryDirection;
						} else if (valid(primaryDirection)) {
							actualDirection = primaryDirection;
						}
						direction = actualDirection;
						destination = (Vector2)transform.position + actualDirection;
					}
				}
			}		
		}
	}

	bool valid(Vector2 dir) {
		if (dir == Vector2.zero) {
			return false;
		}
		Vector2 pos = (Vector2)transform.position;
		RaycastHit2D[] hits = Physics2D.LinecastAll(pos, pos + dir*.6f);
		for (int i = 0; i < hits.Length; i++) {
			if (hits[i].transform.gameObject.tag == "wall" ||
			    (hits[i].transform.gameObject.tag == "invisible_wall" && waypoints.Count < waypointCounter + 1)) { 
				// you can only go through invisible wall if you're going through your waypoints
				return false;
			}
		}
		return true;
	}
}
