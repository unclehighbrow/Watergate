using UnityEngine;
using System.Collections;

public class GameOver : MonoBehaviour {
	public void TryAgain() {
		GameSingleton.Instance.LoadFirstLevel();
	}
}
