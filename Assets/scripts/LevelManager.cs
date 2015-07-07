using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class LevelManager : MonoBehaviour {
	GameObject pelletHolder = null;
	public bool scareMode = false;
	float timer;
	float timerStart = 10;
	public List<Player> players;
	public List<Burglar> burglars = new List<Burglar>();
	public List<WarpZone> warpZones;
	public int burglarsEatenInScareMode = 0;
	public Text scoreUi;
	public List<GameObject> lifeUis;
	CanvasGroup pausePanel;
	public float timeUntilFlowerpot;
	public GameObject flowerpot;
	public bool tutorial = false;
	public int level;
	public int gridSizeX;
	public int gridSizeY;
	private bool _levelStarted = false;

	public List<float> cameraSizes = new List<float>();
	static List<float> screenRatios = new List<float> {3f/2f, 16f/9f, 4f/3f};
	//													1.5  1.77 1.33

	public void Start() {
		float currentRatio = GameSingleton.Instance.deviceHeight / GameSingleton.Instance.deviceWidth;
		float bestDiff = 1000;
		int bestRatio = 1;
		for (int i = 0; i < screenRatios.Count; i++) {
			float screenRatio = screenRatios[i];
			float currentDiff = Mathf.Abs(screenRatio - currentRatio);
			if (currentDiff < bestDiff) {
				bestRatio = i;
				bestDiff = currentDiff;
			}
		}

		if (cameraSizes != null && cameraSizes.Count > 0) { // for most levels
			Camera.main.orthographicSize = cameraSizes[bestRatio];
		}

		if (tutorial && bestRatio == 2) {
			CanvasScaler canvasScaler = GameObject.FindObjectOfType<CanvasScaler>();
			Vector2 referenceResolution = canvasScaler.referenceResolution;
			referenceResolution.x = 900;
			canvasScaler.referenceResolution = referenceResolution;
		}
	}
	
	public bool LevelStarted {
		get { return _levelStarted; }
		set {
			if (pelletHolder.transform.childCount != 0 || value == false) {
				_levelStarted = value;
			}
		}
	}


	public void Pause() {
		Time.timeScale = 0;
		pausePanel.alpha = 1;
	}

	void OnApplicationPause(bool pauseStatus) {
		if (pauseStatus && !tutorial) {
			Pause();
		}
	}

	public void Resume() {
		pausePanel.alpha = 0;
		Time.timeScale = 1;
	}

	void Awake() {
		pelletHolder = GameObject.Find("pellet_holder");
		players = new List<Player>(GameObject.FindObjectsOfType<Player>());
		players.Sort(Util.SortByName);
		burglars = new List<Burglar>(GameObject.FindObjectsOfType<Burglar>());
		warpZones = new List<WarpZone>(GameObject.FindObjectsOfType<WarpZone>());
		if (!tutorial) { 
			scoreUi = GameObject.Find ("score").GetComponent<Text>();
			lifeUis = new List<GameObject>(GameObject.FindGameObjectsWithTag("life"));
			lifeUis.Sort(Util.SortByName);
			lifeUis.Reverse();
			pausePanel = GameObject.Find("pause_panel").GetComponent<CanvasGroup>(); 
			GameObject.Find("resume_button").GetComponent<Button>().onClick.AddListener(()=>Resume());
			GameObject.Find("pause_button").GetComponent<Button>().onClick.AddListener(()=>Pause());
			timeUntilFlowerpot = Random.Range(1, 2);
			RectifyLifeUis();
		}
     }

	void FlashBurglars() {
		if (Mathf.FloorToInt(timer * 10) % 6 == 0) {
			foreach (Burglar burglar in burglars) {
				if (burglar.GetComponent<Animator>().GetBool("scare")) {
					burglar.GetComponent<SpriteRenderer>().color = Color.white;
				}
			}
		} else if (Mathf.FloorToInt(timer * 10) % 6 == 3) {
			foreach (Burglar burglar in burglars) {
				if (burglar.GetComponent<Animator>().GetBool("scare")) {
					burglar.GetComponent<SpriteRenderer>().color = burglar.spriteColor;
				}
			}
		}
	}

	IEnumerator LoadNextLevel() {
		int i = 0;
		while (i < 2) {
			i++;
			yield return new WaitForSeconds(1);
		}
		GameSingleton.Instance.LoadNextLevel();
	}
	
	void Update() {
		if (LevelStarted && !tutorial) {
			if (pelletHolder.transform.childCount == 0) {
				LevelStarted = false;
				StartCoroutine(LoadNextLevel());
			}
			if (scareMode) {
				timer -= Time.deltaTime;
				if (timer < 2 && timer > 0) {
					FlashBurglars();
				}
				if (timer <= 0) {
					EndScareMode();
				}
			}
			scoreUi.text = GameSingleton.Instance.score.ToString().PadLeft(5, '0');
			if (PlayerPrefs.GetInt("seenTutorial") == 2) {
				if (timeUntilFlowerpot > 0) {
					timeUntilFlowerpot -= Time.deltaTime;
					if (timeUntilFlowerpot <= 0) {
						Instantiate(flowerpot);
					}
				}
			}
		}
	}

	public void StartScareMode() {
		scareMode = true;
		timer = timerStart;
		foreach (Burglar burglar in burglars) {
			burglar.StartScareMode();
		}
	}

	public void EndScareMode() {
		scareMode = false;
		foreach (Burglar burglar in burglars) {
			burglar.EndScareMode();
		}
		burglarsEatenInScareMode = 0;
	}

	public void RectifyLifeUis() {
		for (int i = 0; i < lifeUis.Count; i++) {
			if (i >= GameSingleton.Instance.lives) {
				lifeUis[i].GetComponent<Image>().enabled = false;
			}
		}
	}

	public void FinishDying() {
		GameSingleton.Instance.lives--;
		RectifyLifeUis();
		if (GameSingleton.Instance.lives <= 0) {
			GameSingleton.Instance.GameOver();
		} else {
			burglarsEatenInScareMode = 0;

			foreach (Burglar burglar in burglars) {
				burglar.EndScareMode();
				burglar.Undie();
				burglar.Reset();
			}
			foreach (Player player in players) {
				if (player.isDeepThroat) {
					Destroy(player.gameObject);
				} else {
					player.Reset();
				}
			}
			players.RemoveAll(p => p.isDeepThroat);

			Flowerpot flowerpot = GameObject.FindObjectOfType<Flowerpot>();
			if (flowerpot != null) {
				Destroy(flowerpot.gameObject);
			}
		}
	}

	public void Die() {
		LevelStarted = false;
		foreach (Player player in players) {
			player.gameObject.GetComponent<Animator>().SetBool("dead", true);
		}
	}
}
