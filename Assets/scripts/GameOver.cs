using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class GameOver : MonoBehaviour {

	void Start() {
		GameObject.Find("score").GetComponent<Text>().text = GameSingleton.Instance.score.ToString().PadLeft(5, '0');
		if (GameSingleton.Instance.RecordScore()) {
			Debug.Log ("damn son, that's a high score");
		}
	}

	public void ShowLeaderboardUI() {
		GameSingleton.Instance.ShowLeaderboardUI();
	}

	public void TryAgain() {
		GameSingleton.Instance.LoadLevel(2);
	}
}
