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
	protected Animator animator;
	public Vector2 preference = Vector2.zero;
	Node[,] grid;
	public Color spriteColor;
	static List<Vector2> possibleDirs = new List<Vector2>{
		new Vector2(0f,1f),
		new Vector2(0f,-1f),
		new Vector2(1f,0f),
		new Vector2(-1f,0f)
	};

	List<Vector2> path;

	void OnDrawGizmos() {
		if (path != null)  {
			foreach (Vector2 n in path) {
				Gizmos.color = spriteColor;
				Gizmos.DrawCube(new Vector3(n.x, n.y, -1), Vector3.one * .7f);
			}
		}
		path = new List<Vector2>();
	}

	void InitializeGrid() {
		for (int x = 0; x < levelManager.gridSizeX; x++) {
			for (int y = 0; y < levelManager.gridSizeY; y++) {
				grid[x,y] = new Node(new Vector2(x,y));
			}
		}

	}

	// Use this for initialization
	public void Start () {
		startPosition = transform.position;
		levelManager = GameObject.FindObjectOfType<LevelManager>();
		grid = new Node[levelManager.gridSizeX,levelManager.gridSizeY];
		InitializeGrid();
		path = new List<Vector2>();
		animator = GetComponent<Animator>();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void SetDirection(Vector2 direction) {
		this.direction = direction;
		animator.SetFloat("x", direction.x);
		animator.SetFloat("y", direction.y);
	}
	
	public void Reset() {
		transform.position = startPosition;
		destination = Vector2.zero;
		preference = Vector2.zero;
		direction = Vector2.zero;
		animator.SetBool("dead", false);
		animator.SetBool("scare", false);
		animator.SetFloat("x", 0f);
		animator.SetFloat("y", 0f);
		animator.Play("Idle");
	}

	public void findNextDestination(Vector2 finalDestination, bool towards) {
		if (finalDestination != Vector2.zero) {
			finalDestination = new Vector2(Mathf.Round(finalDestination.x), Mathf.Round(finalDestination.y));

			Vector2 primaryDirection = Vector2.zero;
			Vector2 secondaryDirection = Vector2.zero;
			if (towards) {
				List<Node> open = new List<Node>();
				HashSet<Node> closed = new HashSet<Node>();
				open.Add(grid[Mathf.FloorToInt(transform.position.x), Mathf.FloorToInt(transform.position.y)]);
				while (true) {
					Node currentNode = open[0];
					for (int i = 1; i < open.Count; i ++) {
						if (open[i].fCost() < currentNode.fCost() || open[i].fCost() == currentNode.fCost() && open[i].hCost < currentNode.hCost) {
							currentNode = open[i];
						}
					}
					open.Remove(currentNode);
					closed.Add(currentNode);

					if (currentNode.position.x == Mathf.FloorToInt(finalDestination.x) && currentNode.position.y == Mathf.FloorToInt(finalDestination.y)) {
						Node parent = currentNode.parent;
						path.Add (currentNode.position);
						while (parent != null) {
							path.Add(parent.position);
							parent = parent.parent;
						}

						Vector2 correctDestination = path[Mathf.Max(0, path.Count - 2)];
						primaryDirection = correctDestination - (Vector2)transform.position;
						InitializeGrid();
						break;
					}

					List<Node> neighbors = new List<Node>();
					if (currentNode.position.x > 0  && valid(currentNode.position, -Vector2.right)) 
						neighbors.Add(grid[(int)currentNode.position.x - 1, (int)currentNode.position.y]);
					if (currentNode.position.x < levelManager.gridSizeX - 1 && valid(currentNode.position, Vector2.right)) 
						neighbors.Add(grid[(int)currentNode.position.x + 1, (int)currentNode.position.y]);
					if (currentNode.position.y > 0 && valid(currentNode.position, -Vector2.up)) 
						neighbors.Add(grid[(int)currentNode.position.x, (int)currentNode.position.y - 1]);
					if (currentNode.position.y < levelManager.gridSizeY - 1 && valid(currentNode.position, Vector2.up)) 
						neighbors.Add(grid[(int)currentNode.position.x, (int)currentNode.position.y + 1]);

					foreach (Node neighbor in neighbors) {
						if (closed.Contains(neighbor)) {
							continue;
						}
						int newMovementCostToNeighbor = currentNode.gCost + GetDistance(currentNode.position, neighbor.position);
						if (newMovementCostToNeighbor < neighbor.gCost || !open.Contains(neighbor)) {
							neighbor.gCost = newMovementCostToNeighbor;
							neighbor.hCost = GetDistance(neighbor.position, finalDestination);
							neighbor.parent = currentNode;

							if (!open.Contains(neighbor)) {
								open.Add(neighbor);
							}
						}
					}
				}
			}


			Vector2 vectorToPlayer = finalDestination - (Vector2)transform.position;
			Vector2 xDirection = vectorToPlayer.x > 0 ? Vector2.right : -Vector2.right;
			Vector2 yDirection = vectorToPlayer.y > 0 ? Vector2.up : -Vector2.up;
			Vector2 actualDirection = Vector2.zero;
			if (Mathf.Abs(vectorToPlayer.x) > Mathf.Abs (vectorToPlayer.y)) { // horizontal
				if (primaryDirection == Vector2.zero)
					primaryDirection = xDirection;
				secondaryDirection = yDirection;
			} else {
				if (primaryDirection == Vector2.zero)
					primaryDirection = yDirection;
				secondaryDirection = xDirection;
			}
			
			if (!towards) {
				primaryDirection = -primaryDirection;
				secondaryDirection = -secondaryDirection;
			}
			
			if ((valid(primaryDirection) && (Random.Range(1,10) <= intelligence &&  primaryDirection != -direction)) || animator.GetBool("dead")) {
				actualDirection = primaryDirection;
			} else if (valid(secondaryDirection) && Random.Range(1,10) <= intelligence && secondaryDirection != -direction) {
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
			SetDirection(actualDirection);
			destination = (Vector2)transform.position + actualDirection;
		}
	}

	public int GetDistance(Vector2 start, Vector2 end) {
		return Mathf.RoundToInt(Mathf.Abs(start.x - end.x) + Mathf.Abs(start.y - end.y));
	}

	bool valid (Vector2 pos, Vector2 dir) {
		if (!possibleDirs.Contains(dir)) {
			return false;
		}
		RaycastHit2D[] hits = Physics2D.LinecastAll(pos, pos + dir*.6f);
		for (int i = 0; i < hits.Length; i++) {
			if (hits[i].transform.gameObject.tag == "wall") { 
				return false;
			}
		}
		return true;
	}

	bool valid(Vector2 dir) {
		Vector2 pos = (Vector2)transform.position;
		return valid (pos, dir);
	}
}
