using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Burglar : Person {
	public float scareModeSpeedMultiplier = .6f;
	public float deadSpeedMultiplier = 5f;
	public Color color;
	public Color scareColor;
	public Color deadColor;

	public new void Start () {
		base.Start();
		GetComponent<SpriteRenderer>().color = color;
	}
	
	public void StartScareMode() {
		if (!animator.GetBool("dead") && !animator.GetBool("scare")) {
			GetComponent<SpriteRenderer>().color = scareColor;
			SetDirection(-1 * direction);
			destination = (destination + direction);
			speed *= scareModeSpeedMultiplier;
			animator.SetBool("scare", true);
		}
	}
	
	public void EndScareMode() {
		if (animator.GetBool("scare")) {
			GetComponent<SpriteRenderer>().color = color;
			speed /= scareModeSpeedMultiplier;
			animator.SetBool("scare", false);
		}
	}

	public void Die() {
		if (!animator.GetBool("dead")) {
			animator.SetBool("dead", true);
			EndScareMode();
			speed *= deadSpeedMultiplier;
			GetComponent<SpriteRenderer>().color = deadColor;
			waypointCounter = waypoints.Count - 1;
		}
	}

	public void Undie() {
		if (animator.GetBool("dead")) {
			speed /= deadSpeedMultiplier;
			GetComponent<SpriteRenderer>().color = color;
			animator.SetBool("dead", false);
		}
	}
	
	void FixedUpdate () {
		if (levelManager.levelStarted) {
			if (destination != Vector2.zero && (Vector2)transform.position != destination) { // go to destination
				Vector2 p = Vector2.MoveTowards(transform.position, destination, speed * GameSingleton.Instance.burglarSpeed);
				rigidbody2D.MovePosition(p);
			} else {
				if (waypoints.Count > waypointCounter && !animator.GetBool("dead")) { // at start, follow waypoints out of the box
					Transform waypoint = waypoints[waypointCounter];
					if (waypoint.position == transform.position) {
						waypointCounter += 1;
					} else {
						direction = waypoint.position - transform.position; // this would make a big vector if more than one space
						destination = waypoint.position;
					}
				} else if (animator.GetBool("dead") && ((Vector2)transform.position == startPosition)) {
					Undie();
				} else {
					Vector2 finalDestination = Vector2.zero; 
					if (animator.GetBool("dead")) {
						Transform waypoint = waypoints[waypointCounter];
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
							if (player != null && player.transform != null && !player.isDeepThroat )  {
								float distance = Mathf.Abs(Vector3.Distance(player.transform.position, transform.position));
								if (smallestDistance == -1 || distance < smallestDistance) {
									smallestDistance = distance;
									playerToFollow = player;
								}
							}
						}
						finalDestination = playerToFollow.transform.position;
					}

					findNextDestination(finalDestination, !animator.GetBool("scare"));
				}
			}		
		}
	}
}
