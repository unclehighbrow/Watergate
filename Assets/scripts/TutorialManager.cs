using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class TutorialManager : MonoBehaviour {
	public Text uiText;
	public Text shadowText;

	int currentLines;
	bool next = false;
	bool writing = false;
	int mode = 1;
	int goalsHit = 0;

	public GameObject wallHolder1;
	public GameObject wallHolder2;
	public Player woodward;
	public Player bernstein;
	public LevelManager levelManager;
	public Image image;
	public Sprite woodwardSprite;
	public Sprite bernsteinSprite;
	public Sprite deepThroatSprite;

	IEnumerator DisplayLine(string text, Sprite sprite) {
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
					if (shadowText.cachedTextGenerator.lineCount > currentLines) {
						currentLines = shadowText.cachedTextGenerator.lineCount;
						newLine = true;
					}	
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
		writing = false;
	}

	IEnumerator StartSecondPart() {
		while (!next) {
			yield return new WaitForEndOfFrame();
		}
		wallHolder1.SetActive(false);
		StartCoroutine(DisplayLine("Hold up. I'm Bernstein! You gotta control us at the same time!", bernsteinSprite));
		next = false;
		wallHolder2.SetActive(true);
		woodward.Reset();
		woodward.transform.position = new Vector3(-1.5f, -9.5f, 0f);
		bernstein.gameObject.SetActive(true);
		levelManager.players.Add(bernstein);
	}

	IEnumerator StartGame() {
		while (!next) {
			yield return new WaitForEndOfFrame();
		}
		Application.LoadLevel(2);
	}

	public void GoalHit(Goal goal) {
		next = false;
		if (mode == 1) {
			StartCoroutine(DisplayLine("Yay! You can swipe a little early to make cornering easier.", woodwardSprite));
			StartCoroutine(StartSecondPart());
			mode = 2;
		} else if (mode == 2) {
			goalsHit++;
			if (goalsHit == 2) {
				StartCoroutine(DisplayLine("You got this. Let's get to the hotel to investigate the burglary!", bernsteinSprite));
				next = false;
				StartCoroutine(StartGame());
			}
		}
	}

	
	// Use this for initialization
	void Start () {
		StartCoroutine(DisplayLine("Hi, I'm Woodward. Swipe on me to get out of this maze! I've got reporting to do!", woodwardSprite));
		wallHolder1.SetActive(true);
		wallHolder2.SetActive(false);
		bernstein.gameObject.SetActive(false);
	}
	
	// Update is called once per frame
	void Update () {		
		// mouse
		if (Input.GetMouseButtonDown(0)) {
			next = true;
		}
		// touch
		Touch[] touches = Input.touches;
		for (int i = 0 ; i < Input.touchCount; i++) {
			Touch touch = touches[i];
			if (touch.phase == TouchPhase.Began) {
				next = true;
			}
		}
	}
}
