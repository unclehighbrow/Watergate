using UnityEngine;
using System.Collections;
using UnityEngine.UI;


public class TutorialBase : MonoBehaviour {
	public Text uiText;
	public Text shadowText;
	public Text ellipsisText;
	
	protected int currentLines;
	protected bool next = false;
	protected bool writing = false;
	protected int mode = 1;
	protected int goalsHit = 0;
	
	public GameObject wallHolder1;
	public GameObject wallHolder2;
	public Player woodward;
	public Player bernstein;
	public LevelManager levelManager;
	public Image image;
	public Sprite woodwardSprite;
	public Sprite bernsteinSprite;
	public Sprite deepThroatSprite;
	public GameObject tutorialArrowW;
	public GameObject tutorialArrowB;

	public void Update() {
		// mouse
		if (Input.GetMouseButtonDown(0)) {
			next = true;
		}
		// touch
		Touch[] touches = Input.touches;
		for (int i = 0 ; i < Input.touchCount; i++) {
			Touch touch = touches[i];
			if (touch.phase == TouchPhase.Began) {
				StopEllipsis();
				next = true;
			}
		}

	}
	
	public void StopEllipsis() {
		StopCoroutine("Ellipsis");
		ellipsisText.text = "";
	}
	
	public IEnumerator DisplayLine(string text, Sprite sprite, bool ellipsis) {
		StopEllipsis();
		while (writing) {
			yield return new WaitForEndOfFrame();
		}
		writing = true;
		shadowText.text = "";
		uiText.text = "";
		currentLines = 1;
		string[] words = text.Split(' ');
		image.sprite = sprite;
		yield return new WaitForEndOfFrame(); // this renders the shadowtext to reset it
		while (uiText.text.Length < text.Length) {
			if (words.Length >= 2) {
				shadowText.text = words[0] + " " + words[1] + " "; // the shadow text is looking two words ahead, i think because it needs to wait for the render?
			}
			for (int i = 0; i < words.Length; i++) {
				string word = words[i];
				
				bool newLine = false;
				if (i + 3 <= words.Length) {
					shadowText.text += words[i + 2] + " ";
				} 
				if (shadowText.cachedTextGenerator.lineCount > currentLines) {
					currentLines = shadowText.cachedTextGenerator.lineCount;
					newLine = true;
				}	
				
				foreach (char letter in word) {
					uiText.text += letter;
					yield return new WaitForSeconds(.02f);
				}
				
				if (newLine) {
					uiText.text += "\n";
					newLine = false;
				} else {
					uiText.text += " ";
				}
			}
		}
		if (ellipsis) {
			StartCoroutine("Ellipsis");
		} else {
			StopEllipsis();
		}
		writing = false;
	}

	public virtual void GoalHit(Goal goal) {
	}
	
	public IEnumerator Ellipsis() {
		while (true) {
			ellipsisText.text += ".";
			if (ellipsisText.text.Length == 4) {
				ellipsisText.text = "";
			}
			yield return new WaitForSeconds(.3f);
		}
	}
}
