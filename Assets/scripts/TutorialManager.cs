using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class TutorialManager : TutorialBase {

	IEnumerator StartSecondPart() {
		StopEllipsis();
		while (!next) {
			yield return new WaitForEndOfFrame();
		}
		wallHolder1.SetActive(false);
		StartCoroutine(DisplayLine("Hold up. I'm Bernstein! You gotta control us at the same time!", bernsteinSprite, false));
		next = false;
		wallHolder2.SetActive(true);
		woodward.Reset();
		woodward.transform.position = new Vector3(-1.5f, -9.5f, 0f);
		bernstein.gameObject.SetActive(true);
		levelManager.players.Add(bernstein);
		tutorialArrowB.SetActive(true);
		tutorialArrowW.SetActive(true);	
	}

	IEnumerator StartGame() {
		while (!next) {
			yield return new WaitForEndOfFrame();
		}
		PlayerPrefs.SetInt("seenTutorial", 1);
		Application.LoadLevel(2);
	}

	public override void GoalHit(Goal goal) {
		next = false;
		if (mode == 1) {
			StartCoroutine(DisplayLine("Yay! You can swipe a little early to make cornering easier.", woodwardSprite, true));
			StartCoroutine(StartSecondPart());
			mode = 2;
		} else if (mode == 2) {
			goalsHit++;
			if (goalsHit == 2) {
				StartCoroutine(DisplayLine("You got this. Let's get to the hotel to investigate the burglary!", bernsteinSprite, true));
				next = false;
				StartCoroutine(StartGame());
			}
		}
	}

	
	// Use this for initialization
	void Start () {
		StartCoroutine(DisplayLine("Hi, I'm Woodward. Swipe on me to get out of this maze! I've got reporting to do!", woodwardSprite, false));
		wallHolder1.SetActive(true);
		wallHolder2.SetActive(false);
		bernstein.gameObject.SetActive(false);
		tutorialArrowB.SetActive(false);
	}
	
	// Update is called once per frame
	public new void Update () {		
		base.Update();
		if (woodward.direction.y > 0) {
			tutorialArrowW.SetActive(false);
		}
		if (bernstein.direction.y > 0) {
			tutorialArrowB.SetActive(false);
		}
	}
}
