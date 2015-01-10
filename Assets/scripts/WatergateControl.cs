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
		string playerToMove = null;

		foreach (KeyValuePair<string, GameObject> playerPair in players) {
			float distance = Mathf.Abs(Vector3.Distance(playerPair.Value.transform.position, worldStart));
			if (smallestDistance == -1 || distance < smallestDistance) {
				smallestDistance = distance;
				playerToMove = playerPair.Key;
			}
		}
		
		if (playerToMove != null) {
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
			SetDestination(playerToMove, direction);
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

			if (destination != Vector2.zero && (Vector2)player.transform.position != destination) {
				Vector2 p = Vector2.MoveTowards(player.transform.position, destination, speed);
				player.rigidbody2D.MovePosition(p);
				// maybe put instant turning around here
				if (Input.GetKey(KeyCode.UpArrow)) {
					preferences[playerName] = Vector2.up;
				} else if (Input.GetKey(KeyCode.RightArrow)) {
					preferences[playerName] = Vector2.right;
				} else if (Input.GetKey(KeyCode.DownArrow)) {
					preferences[playerName] = -Vector2.up;
				} else if (Input.GetKey(KeyCode.LeftArrow)) {
					preferences[playerName] = -Vector2.right;
				}
			} else {
				if (valid(playerName, preference)) {
					SetDestination(playerName, preference);
				} else if (valid(playerName, direction)) {
					SetDestination(playerName, direction);
				} if (Input.GetKey(KeyCode.UpArrow)) {
					SetDestination(playerName, Vector2.up);
				} else if (Input.GetKey(KeyCode.RightArrow)) {
					SetDestination(playerName, Vector2.right);
				} else if (Input.GetKey(KeyCode.DownArrow)) {
					SetDestination (playerName, -Vector2.up);
				} else if (Input.GetKey(KeyCode.LeftArrow)) {
					SetDestination(playerName, -Vector2.right);
				}
			}
		}
	}

	bool valid(string playerName, Vector2 dir) {
		GameObject player = players[playerName];
		Vector2 pos = (Vector2)player.transform.position;
		RaycastHit2D hit = Physics2D.Linecast(pos + dir, pos);
		bool ret =  (hit.collider == player.collider2D);
		Debug.Log ("ret for " + playerName + ": " + ret);
		return ret;
	}

	void SetDestination(string playerName, Vector2 dir) {
		GameObject player = players[playerName];
		if (valid(playerName, dir)) {
			destinations[playerName] = (Vector2)player.transform.position + dir;
			directions[playerName] = dir;
		}
	}
}
