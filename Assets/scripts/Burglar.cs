using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Burglar : MonoBehaviour {

	Vector2 destination = Vector2.zero;
	Vector2 direction = Vector2.zero;
	public float speed = .03f;
	public int intelligence = 5;
	List<GameObject> players = new List<GameObject>();

	void Start () {
		players.Add(GameObject.Find("p1"));
		players.Add(GameObject.Find("p2"));
	}
	
	void FixedUpdate () {
		if (destination != Vector2.zero && (Vector2)transform.position != destination) { // go to destination
			Vector2 p = Vector2.MoveTowards(transform.position, destination, speed);
			rigidbody2D.MovePosition(p);
		} else {
			float smallestDistance = -1;
			GameObject playerToFollow = null;
			foreach (GameObject player in players) {
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



				if (valid (primaryDirection) && Random.Range(1,10) <= intelligence) {
					actualDirection = primaryDirection;
				} else if (valid(secondaryDirection) && Random.Range(1,10) <= intelligence) {
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
}
