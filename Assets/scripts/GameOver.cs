using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class GameOver : MonoBehaviour {
	public Text HighScore;
	public SpriteRenderer Nixon;
	public SpriteRenderer LeftHand;
	public SpriteRenderer RightHand;

	void Start() {
		GameObject.Find("score").GetComponent<Text>().text = GameSingleton.Instance.score.ToString().PadLeft(5, '0');
		if (GameSingleton.Instance.RecordScore()) {
			HighScore = GameObject.Find("high_score").GetComponent<Text>();
			Nixon = GameObject.Find ("nixon").GetComponent<SpriteRenderer>();
			LeftHand = GameObject.Find ("left_hand").GetComponent<SpriteRenderer>();
			RightHand = GameObject.Find ("right_hand").GetComponent<SpriteRenderer>();
			StartCoroutine("FadeInHighScore");
		}
	}

	IEnumerator FadeInHighScore() {
		while (HighScore.color.a <= 1) {
			Color highScoreColor = new Color(HighScore.color.r, HighScore.color.g, HighScore.color.b, HighScore.color.a + .005f);
			HighScore.color = highScoreColor;
			HighScore.rectTransform.localScale += Vector3.one * .001f;
			if (Nixon.color.a > .1f) {
				Color nixonColor = new Color(Nixon.color.r, Nixon.color.g, Nixon.color.b, Nixon.color.a - .005f);
				Nixon.color = nixonColor;
				RightHand.color = nixonColor;
				LeftHand.color = nixonColor;
			}
			yield return new WaitForEndOfFrame();
		}
	}

	public void ShowLeaderboardUI() {
		GameSingleton.Instance.ShowLeaderboardUI();
	}

	public void TryAgain() {
		GameSingleton.Instance.playerSpeed = 1f;
		GameSingleton.Instance.burglarSpeed = 1f;
		GameSingleton.Instance.LoadLevel("level1");
	}
}
