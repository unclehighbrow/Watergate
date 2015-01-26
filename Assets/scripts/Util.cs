using UnityEngine;
using System.Collections;

public class Util : MonoBehaviour {
	
	public static int SortByName(MonoBehaviour o1, MonoBehaviour o2) {
		return o1.name.CompareTo(o2.name);
	}
	
	public static int SortByName(GameObject o1, GameObject o2) {
		return o1.name.CompareTo(o2.name);
	}
}
