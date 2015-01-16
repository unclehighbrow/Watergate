using UnityEngine;
using System.Collections;

public class CameraController : MonoBehaviour {

	// Use this for initialization
	void Awake () {
//		float deviceWidth;
//		float deviceHeight;
//		#if UNITY_EDITOR
//		deviceWidth = GetGameView().x;
//		deviceHeight = GetGameView().y;
//		#else
//		deviceWidth = Screen.width;
//		deviceHeight = Screen.height;
//		#endif
	}
	
	private Vector2 GetGameView() {
		System.Type T = System.Type.GetType("UnityEditor.GameView,UnityEditor");
		System.Reflection.MethodInfo getSizeOfMainGameView =
			T.GetMethod("GetSizeOfMainGameView",System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Static);
		System.Object resolution = getSizeOfMainGameView.Invoke(null, null);
		return (Vector2)resolution;
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
