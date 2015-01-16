using UnityEngine;
using System.Collections;

public class Person : MonoBehaviour {
	public float speed;
	public Vector2 direction;
	public Vector2 destination;
	public Vector2 startPosition;
	public LevelManager levelManager;

	// Use this for initialization
	public void Start () {
		startPosition = transform.position;
		levelManager = GameObject.FindObjectOfType<LevelManager>();
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
