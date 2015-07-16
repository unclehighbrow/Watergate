using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.SocialPlatforms;


public class GameSingleton : Singleton<GameSingleton> {
	public int score = 0;
	public int lives = 3;
	public float playerSpeed = 1f;
	public float burglarSpeed = 1f;
	public float playerSpeedMultiplier = 1.1f;
	public float burglarSpeedMultiplier = 1.2f;
	public string leaderboard = "watergatedefault";
	public bool loggedIn = false;
	public int highScore;
	public int stashedLevel = -1;

	public float deviceWidth;
	public float deviceHeight;

	void Awake () {
		#if UNITY_EDITOR
		deviceWidth = GetGameView().x;
		deviceHeight = GetGameView().y;
		#else
		deviceWidth = Screen.width;
		deviceHeight = Screen.height;
		#endif
	}

	private Vector2 GetGameView() {
		System.Type T = System.Type.GetType("UnityEditor.GameView,UnityEditor");
		System.Reflection.MethodInfo getSizeOfMainGameView =
			T.GetMethod("GetSizeOfMainGameView",System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Static);
		System.Object resolution = getSizeOfMainGameView.Invoke(null, null);
		return (Vector2)resolution;
	}

	public void Start() {
		highScore = PlayerPrefs.GetInt("highScore", 0);
		Social.localUser.Authenticate(ProcessAuthentication);
	}

	void ProcessAuthentication (bool success) {
		if (success) {
			loggedIn = true;
		} else {
			Debug.Log ("Failed to authenticate");
		}
	}

	void FetchScores() {
		if (loggedIn) {
			Social.LoadScores(leaderboard, scores => {
				if (scores.Length > 0) {
					Debug.Log ("Got " + scores.Length + " scores");
					string myScores = "Leaderboard:\n";
					foreach (IScore score in scores)
						myScores += "\t" + score.userID + " " + score.formattedValue + " " + score.date + "\n";
					Debug.Log (myScores);
				}
				else
					Debug.Log ("No scores loaded");
			});
		}
	}

	public bool RecordScore() {
		bool ret = false;
		if (score > highScore) {
			ret = true;
			highScore = score;
			PlayerPrefs.SetInt("highScore", score);
		}
		if (loggedIn) {
			Social.ReportScore (score, leaderboard, success => {
				Debug.Log(success ? "Reported score successfully" : "Failed to report score");
			});
		}
		return ret;
	}

	public void ShowLeaderboardUI() {
		Social.ShowLeaderboardUI();
	}

	public void LoadNextLevel() {
		if (PlayerPrefs.GetInt("seenTutorial") == 1) {
			Application.LoadLevel("tutorial2");
		} else if (Random.Range(1,10) == 2 && stashedLevel == -1) {
			Application.LoadLevel("interstitial");
			stashedLevel = Application.loadedLevel;
		} else {
			int levelToLoad = (stashedLevel > 1 ? stashedLevel : Application.loadedLevel) + 1;
			if (levelToLoad > Application.levelCount - 5) { // tutorial 1+2, interstitial, game over, title
				Application.LoadLevel("level1");
			} else {
				Application.LoadLevel(levelToLoad);
			}
			stashedLevel = -1;
			playerSpeed *= playerSpeedMultiplier;
			burglarSpeed *= burglarSpeedMultiplier;
		}
	}

	public void GameOver() {
		Application.LoadLevel("game_over");
	}

	public void LoadLevel(string level) {
		this.lives = 3;
		this.score = 0;
		Application.LoadLevel(level);
	}
}
