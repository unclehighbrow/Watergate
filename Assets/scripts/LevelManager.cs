using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class LevelManager : MonoBehaviour {
	GameObject pelletHolder = null;
	public bool scareMode = false;
	public bool levelStarted = false;
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

	public void Pause() {
		Time.timeScale = 0;
		pausePanel.alpha = 1;
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
		scoreUi = GameObject.Find ("score").GetComponent<Text>();
		lifeUis = new List<GameObject>(GameObject.FindGameObjectsWithTag("life"));
		lifeUis.Sort(Util.SortByName);
		pausePanel = GameObject.Find("pause_panel").GetComponent<CanvasGroup>(); 
		GameObject.Find("resume_button").GetComponent<Button>().onClick.AddListener(()=>Resume());
		GameObject.Find("pause_button").GetComponent<Button>().onClick.AddListener(()=>Pause());
		timeUntilFlowerpot = Random.Range(1, 2);
     }

	void Update() {
		if (levelStarted) {
			if (pelletHolder.transform.childCount == 0) {
				GameSingleton.Instance.LoadNextLevel();
			}
			if (scareMode) {
				timer -= Time.deltaTime;
				if (timer <= 0) {
					EndScareMode();
				}
			}
			scoreUi.text = GameSingleton.Instance.score.ToString().PadLeft(5, '0');
			if (timeUntilFlowerpot > 0) {
				timeUntilFlowerpot -= Time.deltaTime;
				if (timeUntilFlowerpot <= 0) {
					Instantiate(flowerpot);
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

	void EndScareMode() {
		scareMode = false;
		foreach (Burglar burglar in burglars) {
			burglar.EndScareMode();
		}
	}

	public void Die() {
		levelStarted = false;
		foreach (Burglar burglar in burglars) {
			burglar.Reset();
		}
		foreach (Player player in players) {
			player.Reset();
		}
		GameSingleton.Instance.lives--;
		lifeUis[GameSingleton.Instance.lives].GetComponent<Image>().enabled = false;
		GameSingleton.Instance.Die();
	}
}
