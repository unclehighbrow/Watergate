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

	public void Start() {
		highScore = PlayerPrefs.GetInt("highScore", 0);
		Debug.Log ("got score: " + highScore);
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
		if (Application.loadedLevel + 1 >= Application.levelCount - 3) { // 1 for game over, title, and tutorial
			Application.LoadLevel(2);
		} else {
			Application.LoadLevel(Application.loadedLevel + 1);
		}
		playerSpeed *= playerSpeedMultiplier;
		burglarSpeed *= burglarSpeedMultiplier;
	}

	public void Die() {
		if (lives <= 0) {
			Application.LoadLevel("game_over");
		} 
	}

	public void LoadLevel(int level) {
		this.lives = 3;
		this.score = 0;
		Application.LoadLevel(level);
	}
}
