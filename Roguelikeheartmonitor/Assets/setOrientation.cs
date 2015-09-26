using UnityEngine;
using System.Collections;

public class setOrientation : MonoBehaviour {

	// Use this for initialization
	public ScreenOrientation o;
	void Start () {
		Screen.orientation = o;
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
