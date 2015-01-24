using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Person : MonoBehaviour {
	public float speed;
	public Vector2 direction;
	public Vector2 destination;
	public Vector2 startPosition;
	public LevelManager levelManager;
	public int intelligence;
	public int waypointCounter = 0;
	public List<Transform> waypoints = new List<Transform>();
	public bool dead = false;


	// Use this for initialization
	public void Start () {
		startPosition = transform.position;
		levelManager = GameObject.FindObjectOfType<LevelManager>();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void findNextDestination(Vector2 finalDestination, bool towards) {
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
			
			if (!towards) {
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
