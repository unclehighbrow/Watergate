using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Tutorial2Manager : TutorialBase {
	public GameObject invisibleWall;


	// Use this for initialization
	void Start () {
		StartCoroutine(DisplayLine("I'm Deep Throat! If you get a flowerpot, I'm your third guy!", deepThroatSprite, false));
	}
	
	// Update is called once per frame
	public new void Update () {
		base.Update();
	}

	public override void GoalHit(Goal goal) {
		next = false;
		goalsHit++;
		if (goalsHit == 1) {
			StartCoroutine(DisplayLine("That's it! If a burglar gets me, the reporters can keep going!", deepThroatSprite, false));
			Destroy(invisibleWall);
			Destroy(goal);
		}
		if (goalsHit == 3) {
			StartCoroutine(DisplayLine("Okay! Trust no one! And follow the pellets!", deepThroatSprite, true));
			next = false;
			StartCoroutine(StartGame());
		}
	}

	IEnumerator StartGame() {
		while (!next) {
			yield return new WaitForEndOfFrame();
		}
		PlayerPrefs.SetInt("seenTutorial", 2);
		Application.LoadLevel(2);
	}

}
