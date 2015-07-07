using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Burglar : Person {
	public float scareModeSpeedMultiplier = .6f;
	public float deadSpeedMultiplier = 5f;
	public Player hardTarget;

	public new void Start () {
		base.Start();
		GetComponent<SpriteRenderer>().color = spriteColor;
	}
	
	public void StartScareMode() {
		if (!animator.GetBool("dead") && !animator.GetBool("scare")) {
			hardTarget = null;
			SetDirection(-1 * direction);
			destination = (destination + direction);
			speed *= scareModeSpeedMultiplier;
			animator.SetBool("scare", true);
			GetComponent<SpriteRenderer>().color = Color.white;
		}
		if (animator.GetBool("scare")) {
			GetComponent<SpriteRenderer>().color = Color.white;
		}
	}
	
	public void EndScareMode() {
		if (animator.GetBool("scare")) {
			GetComponent<SpriteRenderer>().color = spriteColor;
			speed /= scareModeSpeedMultiplier;
			animator.SetBool("scare", false);
		}
	}

	public void Die() {
		if (!animator.GetBool("dead")) {
			animator.SetBool("dead", true);
			EndScareMode();
			speed *= deadSpeedMultiplier;
			GetComponent<SpriteRenderer>().color = Color.white;
		}
	}	

	public void Undie() {
		if (animator.GetBool("dead")) {
			speed /= deadSpeedMultiplier;
			GetComponent<SpriteRenderer>().color = spriteColor;
			animator.SetBool("dead", false);
		}
	}
	
	void FixedUpdate () {
		if (levelManager.LevelStarted) {
			if (destination != Vector2.zero && (Vector2)transform.position != destination) { // go to destination
				Vector2 p = Vector2.MoveTowards(transform.position, destination, speed * GameSingleton.Instance.burglarSpeed);
				GetComponent<Rigidbody2D>().MovePosition(p);
			} else {
				if (animator.GetBool("dead") && ((Vector2)transform.position == startPosition)) {
					Undie();
				} else {
					Vector2 finalDestination = Vector2.zero; 
					if (animator.GetBool("dead")) {
						finalDestination = startPosition;
					} else {
						float smallestDistance = -1;
						Player playerToFollow = hardTarget;
						if (playerToFollow == null) {
							foreach (Player player in levelManager.players) {
								if (player != null && player.transform != null && !player.GetComponent<Animator>().GetBool("dead"))  {
									float distance = Mathf.Abs(Vector3.Distance(player.transform.position, transform.position));
									if (smallestDistance == -1 || distance < smallestDistance) {
										smallestDistance = distance;
										playerToFollow = player;
									}
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
