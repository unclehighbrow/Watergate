using UnityEngine;
using System.Collections;

public class Node {

	public int gCost;
	public int hCost;
	public Vector2 position;
	public Node parent;

	public int fCost() {
		return gCost + hCost;
	}

	public Node(Vector2 position) {
		this.position = position;
	}

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
