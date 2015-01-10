using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class WatergateControl : MonoBehaviour {
	Dictionary<string,GameObject> players = new Dictionary<string,GameObject>();
	Dictionary<string,Vector2> directions = new Dictionary<string,Vector2>();
	Dictionary<string,Vector2> destinations = new Dictionary<string,Vector2>();
	Dictionary<string,Vector2> preferences = new Dictionary<string,Vector2>();
	Dictionary<string,float> speeds = new Dictionary<string,float>();
	Dictionary<string,float> distances = new Dictionary<string,float>();

	Hashtable touchMap = new Hashtable();
	Vector3 firstMousePosition;

	string p1 = "p1";
	string p2 = "p2";

	void Start () {
		players.Add(p1,GameObject.Find(p1));
		players.Add(p2,GameObject.Find(p2));
		foreach (KeyValuePair<string, GameObject> playerPair in players) {
			destinations.Add(playerPair.Key, playerPair.Value.transform.position);
			preferences.Add(playerPair.Key, Vector2.zero);
			directions.Add(playerPair.Key, Vector2.zero);
			speeds.Add (playerPair.Key, .05f);
			distances.Add (playerPair.Key, 0f);
		}
	}

	void Update () {		
		// mouse
		if (Input.GetMouseButtonDown(0)) {
			firstMousePosition = Input.mousePosition;
		}
		if (Input.GetMouseButtonUp(0)) {
			performMove(firstMousePosition, Input.mousePosition);
		}
		
		// touch
		Touch[] touches = Input.touches;
		for (int i = 0 ; i < Input.touchCount; i++) {
			Touch touch = touches[i];
			if (touch.phase == TouchPhase.Began) {
				touchMap[touch.fingerId] = touch;
			} else if (touch.phase == TouchPhase.Moved) {
				if (touchMap.ContainsKey(touch.fingerId)) {
					Touch firstTouch = (Touch) touchMap[touch.fingerId];
					performMove(firstTouch.position, touch.position);
				}
			}
		}
	}

	void performMove(Vector3 start, Vector3 end) {
		Vector3 worldStart = Camera.main.ScreenToWorldPoint(start);
		float smallestDistance = -1;
		string playerName = null;

		foreach (KeyValuePair<string, GameObject> playerPair in players) {
			float distance = Mathf.Abs(Vector3.Distance(playerPair.Value.transform.position, worldStart));
			if (smallestDistance == -1 || distance < smallestDistance) {
				smallestDistance = distance;
				playerName = playerPair.Key;
			}
		}
		
		if (playerName != null) {
			float xDelta = end.x - start.x;
			float yDelta = end.y - start.y;
			Vector2 direction = Vector2.zero;
			if (Mathf.Abs(xDelta) > Mathf.Abs(yDelta)) { // horizontal
				if (xDelta > 0) {
					direction = Vector2.right;
				} else {
					direction = -Vector2.right;
				}
			} else { // vertical
				if (yDelta > 0) {
					direction = Vector2.up;
				} else {
					direction = -Vector2.up;
				}
			}
			Vector2 destination = destinations[playerName];
			if (direction == -directions[playerName]) { // quick turn
				destinations[playerName] = (destination + direction);
				directions[playerName] = direction;
			} else if (destination != Vector2.zero && (Vector2)players[playerName].transform.position != destination) {
				preferences[playerName] = direction;
			} else {
				SetDestination(playerName, direction);
			}
		}
	}

	
	void FixedUpdate () {
		foreach (KeyValuePair<string, GameObject> playerPair in players) {
			string playerName = playerPair.Key;
			GameObject player = playerPair.Value;
			Vector2 destination = destinations[playerName];
			Vector2 preference = preferences[playerName];
			Vector2 direction = directions[playerName];
			float speed = speeds[playerName];

			if (destination != Vector2.zero && (Vector2)player.transform.position != destination) { // go to destination
				Vector2 p = Vector2.MoveTowards(player.transform.position, destination, speed);
				player.rigidbody2D.MovePosition(p);
			} else if (destination.x > 5 || destination.x < -5) { // warp tunnel
				destinations[playerName] = new Vector2(-destination.x, destination.y);
				player.transform.position = new Vector2(-player.transform.position.x, player.transform.position.y);
				//preferences[playerName] = Vector2.zero;
			} else { // make choice
				if (valid(playerName, preference)) {
					SetDestination(playerName, preference);
					preferences[playerName] = Vector2.zero;
				} else if (valid(playerName, direction)) {
					SetDestination(playerName, direction);
				} 
			}
		}
	}

	bool valid(string playerName, Vector2 dir) {
		if (dir == Vector2.zero) {
			return false;
		}
		GameObject player = players[playerName];
		Vector2 pos = (Vector2)player.transform.position;
		RaycastHit2D[] hits = Physics2D.LinecastAll(pos, pos + dir*.4f);
		for (int i = 0; i < hits.Length; i++) {
			if (hits[i].transform.gameObject.tag == "wall") {
				return false;
			}
		}
		return true;
//		RaycastHit2D hit = Physics2D.Linecast(pos + dir, pos);
//		bool ret =  (hit.collider == player.collider2D);
//		return ret;
	}

	void SetDestination(string playerName, Vector2 dir) {
		GameObject player = players[playerName];
		if (valid(playerName, dir)) {
			Vector2 newDestination = (Vector2)player.transform.position + dir;
			destinations[playerName] = newDestination;
			directions[playerName] = dir;
		}
	}
}
