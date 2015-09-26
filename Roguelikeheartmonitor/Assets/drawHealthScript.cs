using UnityEngine;
using System.Collections;

public class drawHealthScript : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		Debug.DrawLine(Vector3.zero, new Vector3(100, 100, 000), Color.green);
	}
}
