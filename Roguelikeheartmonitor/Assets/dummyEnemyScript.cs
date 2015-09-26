using UnityEngine;
using System.Collections;

public class dummyEnemyScript : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnCollisionEnter2D(Collision2D coll) {
		Debug.Log("dummy 2d collision senter");
		
		if (coll.gameObject.tag == "hitBox") {
			Destroy(gameObject);
		}
	}
}
