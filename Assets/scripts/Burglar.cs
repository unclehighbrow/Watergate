using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Burglar : MonoBehaviour {

	public Vector2 destination = Vector2.zero;
	public Vector2 direction = Vector2.zero;
	public float speed = .03f;
	public int intelligence = 5;
	public Vector2 startPosition = Vector2.zero;
	public Color color;
	public List<Transform> waypoints;
	bool turnedForScareMode = false;
	public LevelManager levelManager;

	void Start () {
		startPosition = transform.position;
		GetComponent<SpriteRenderer>().color = color;
		levelManager = GameObject.FindObjectOfType<LevelManager>();
	}
	
	void FixedUpdate () {
		if (levelManager.levelStarted) {
			bool scareMode = levelManager.scareMode;

			if (!turnedForScareMode && scareMode) {
				direction = -direction;
				destination = (destination + direction);
				turnedForScareMode = true;
			} else if (destination != Vector2.zero && (Vector2)transform.position != destination) { // go to destination
				Vector2 p = Vector2.MoveTowards(transform.position, destination, speed * (scareMode?.6f:1f));
				rigidbody2D.MovePosition(p);
			} else {
				if (waypoints.Count > 0) {
					Transform waypoint = waypoints[0];
					if (waypoint.position == transform.position) {
						waypoints.Remove(waypoint);
					} else {
						direction = waypoint.position - transform.position; // this would make a big vector if more than one space
						destination = waypoint.position;
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
					if (playerToFollow != null) {
						Vector2 vectorToPlayer = playerToFollow.transform.position - transform.position;
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

						if (scareMode) {
							primaryDirection = -primaryDirection;
							secondaryDirection = -secondaryDirection;
						}


						if (valid (primaryDirection) && Random.Range(1,10) <= intelligence && primaryDirection != -direction) {
							actualDirection = primaryDirection;
						} else if (valid(secondaryDirection) && Random.Range(1,10) <= intelligence && secondaryDirection != -direction) {
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
			    (hits[i].transform.gameObject.tag == "invisible_wall" && waypoints.Count == 0)) { 
				// you can only go through invisible wall if you're going through your waypoints
				return false;
			}
		}
		return true;
	}
}
