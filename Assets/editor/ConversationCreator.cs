using UnityEngine;
using System.Collections;
using UnityEditor;

public class ConversationCreator : MonoBehaviour {
	[MenuItem("Assets/Create/Conversation")]
	public static void CreateAsset() {
		//Create a new instance of our scriptable object
		Conversation conversation =
			ScriptableObject.CreateInstance<Conversation>();
		//Create a .asset file for our new object and save it
		AssetDatabase.CreateAsset(conversation,
		                          "Assets/dialog/newConversation.asset");
		AssetDatabase.SaveAssets();
		//Now switch the inspector to our new object
		EditorUtility.FocusProjectWindow();
		Selection.activeObject = conversation;
	}
}
