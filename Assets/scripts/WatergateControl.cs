﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class WatergateControl : MonoBehaviour {
	Hashtable touchMap = new Hashtable();
	//Hashtable ignoreTouchMap = new Hashtable();
	Vector3 firstMousePosition;
	LevelManager levelManager;

	void Start() {
		levelManager = GameObject.FindObjectOfType<LevelManager>();
	}

	void Update () {		
		if (Time.timeScale < 1) {
			return;
		}

#if UNITY_EDITOR
		// mouse
		if (Input.GetMouseButtonDown(0)) {
			firstMousePosition = Input.mousePosition;
		}
		if (Input.GetMouseButtonUp(0)) {
			performMove(firstMousePosition, Input.mousePosition);
		}
		
		if (Input.GetKeyDown("a")) {
			levelManager.players[0].applyDirection(-Vector2.right);
		} else if (Input.GetKeyDown("s")) {
			levelManager.players[0].applyDirection(-Vector2.up);
		} else if (Input.GetKeyDown("d")) {
			levelManager.players[0].applyDirection(Vector2.right);
		} else if (Input.GetKeyDown("w")) {
			levelManager.players[0].applyDirection(Vector2.up);
		}
		
		if (Input.GetKeyDown("j")) {
			levelManager.players[1].applyDirection(-Vector2.right);
		} else if (Input.GetKeyDown("k")) {
			levelManager.players[1].applyDirection(-Vector2.up);
		} else if (Input.GetKeyDown("l")) {
			levelManager.players[1].applyDirection(Vector2.right);
		} else if (Input.GetKeyDown("i")) {
			levelManager.players[1].applyDirection(Vector2.up);
		}
#else		
		// touch
		Touch[] touches = Input.touches;
		for (int i = 0 ; i < Input.touchCount; i++) {
			Touch touch = touches[i];
			if (touch.phase == TouchPhase.Began) {
				touchMap[touch.fingerId] = touch.position;
			} else if (touch.phase == TouchPhase.Moved && touchMap.ContainsKey(touch.fingerId)) {
				Vector2 firstTouch = (Vector2) touchMap[touch.fingerId];
				performMove(firstTouch, touch.position);
				touchMap.Remove(touch.fingerId);
			}
		}
#endif

	}

	void performMove(Vector3 start, Vector3 end) {
		Vector3 worldStart = Camera.main.ScreenToWorldPoint(start);
		float smallestDistance = -1;
		Player player = null;


		foreach (Player iPlayer in levelManager.players) {
			float distance = Mathf.Abs(Vector3.Distance(iPlayer.transform.position, worldStart));
			if (smallestDistance == -1 || distance < smallestDistance) {
				smallestDistance = distance;
				player = iPlayer;
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
			Debug.Log ("direction:" + direction);
			player.applyDirection(direction);
		}
	}
}
