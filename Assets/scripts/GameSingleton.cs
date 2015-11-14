using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using GooglePlayGames;
using GooglePlayGames.BasicApi;
using UnityEngine.SocialPlatforms;


public class GameSingleton : Singleton<GameSingleton> {
	public int score = 0;
	public int lives = 3;
	public float playerSpeed = 1f;
	public float burglarSpeed = 1f;
	public float scareTimer = 10f;
	public float playerSpeedMultiplier = 1.1f;
	public float burglarSpeedMultiplier = 1.2f;
	public float scareTimerMultipler = .9f;
	public string leaderboard = "watergatedefault";
	public bool loggedIn = false;
	public int highScore;
	public int stashedLevel = -1;

	public bool justBeatTheGame = false;

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
#if UNITY_ANDROID
		PlayGamesPlatform.DebugLogEnabled = true;
		PlayGamesPlatform.Activate();
#endif
		highScore = PlayerPrefs.GetInt("highScore", 0);
		Debug.Log ("about to authenticate");
		Social.localUser.Authenticate(ProcessAuthentication);
		Debug.Log ("done with authentication");
	}

	void ProcessAuthentication (bool success) {
		if (success) {
			Debug.Log ("successfully logged in");
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
			ret = highScore != 0;
			highScore = score;
			PlayerPrefs.SetInt("highScore", score);
		}
		if (loggedIn) {
#if UNITY_IOS
			Social.ReportScore (score, leaderboard, success => {
				Debug.Log(success ? "Reported score successfully" : "Failed to report score");
			});
#endif
#if UNITY_ANDROID
			Social.ReportScore (score, Constants.leaderboard_watergatedefault, success => {
				Debug.Log(success ? "Reported score successfully" : "Failed to report score");
			});
#endif
		}
		return ret;
	}

	public void ShowLeaderboardUI() {
		Social.ShowLeaderboardUI();
	}

	public void LoadNextLevel() {
		justBeatTheGame = false;
		int levelToLoad = (stashedLevel >= 0 ? stashedLevel : Application.loadedLevel) + 1;

#if UNITY_ANDROID
		if (Application.loadedLevelName == "level1") {
			CompleteAchievement(Constants.achievement_beat_the_first_level);
		} else if (Application.loadedLevelName == "level2") {
			CompleteAchievement(Constants.achievement_beat_the_second_level);
		} else if (Application.loadedLevelName == "level3") {
			CompleteAchievement(Constants.achievement_beat_the_third_level);
		} else if (Application.loadedLevelName == "level4") {
			CompleteAchievement(Constants.achievement_beat_the_game);
		}
#endif

		if (PlayerPrefs.GetInt("seenTutorial") == 1) {
			Application.LoadLevel("tutorial2");
		} else if (Random.Range(1,30) == 2 && stashedLevel == -1 && levelToLoad <= Application.levelCount - 5) {  
			Application.LoadLevel("interstitial");
			stashedLevel = Application.loadedLevel;
		} else {
			if (levelToLoad > Application.levelCount - 5) { // tutorial 1+2, interstitial, game over, title
				justBeatTheGame = true;
				stashedLevel = 0;
				Application.LoadLevel("interstitial");
			} else {
				Application.LoadLevel(levelToLoad);
				stashedLevel = -1;
				playerSpeed *= playerSpeedMultiplier;
				burglarSpeed *= burglarSpeedMultiplier;
				scareTimer *= scareTimerMultipler;
			}
		}
	}

	public void CompleteAchievement(string achievement) {
#if UNITY_ANDROID
		Social.ReportProgress(achievement, 100.0f, (bool success) => {
			Debug.Log ("reporting achievement: " + success);
		});
#endif
	}
	
	public void GameOver() {
		stashedLevel = -1;
		Application.LoadLevel("game_over");
	}

	public void LoadLevel(string level) {
		this.lives = 3;
		this.score = 0;
		CompleteAchievement(Constants.achievement_started_the_game);
		Application.LoadLevel(level);
	}
}
