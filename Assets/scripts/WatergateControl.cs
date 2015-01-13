using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class WatergateControl : MonoBehaviour {
	Dictionary<string,Player> players = new Dictionary<string,Player>();

	Hashtable touchMap = new Hashtable();
	Vector3 firstMousePosition;

	string p1 = "p1";
	string p2 = "p2";

	void Start () {
		players.Add(p1,GameObject.Find(p1).GetComponent<Player>());
		players.Add(p2,GameObject.Find(p2).GetComponent<Player>());
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
		LevelManager.Instance.levelStarted = true;
		Vector3 worldStart = Camera.main.ScreenToWorldPoint(start);
		float smallestDistance = -1;
		Player player = null;


		foreach (KeyValuePair<string, Player> playerPair in players) {
			float distance = Mathf.Abs(Vector3.Distance(playerPair.Value.transform.position, worldStart));
			if (smallestDistance == -1 || distance < smallestDistance) {
				smallestDistance = distance;
				player = playerPair.Value;
			}
		}
		
		if (player != null) {
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
			Vector2 destination = player.destination;
			if (direction == -player.direction) { // quick turn
				player.destination = (destination + direction);
				player.direction = direction;
			} else if (destination != Vector2.zero && (Vector2)player.transform.position != destination) { // usual
				player.preference = direction;
			} else { // if you happen to end the swipe right on a destinatio
				player.SetDestination(direction);
			}
		}
	}
}
