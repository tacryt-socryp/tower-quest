using UnityEngine;
using System.Collections;

public class nextLevel : MonoBehaviour {

	// Use this for initialization
	public string nextScene;
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnCollisionEnter2D(Collision2D coll) {
		if (coll.gameObject.name == "Player") {
			Application.LoadLevel(nextScene);
		}
	}

	void OnTriggerEnter2D(Collider2D coll) {
		if (coll.name == "Player") {
			Application.LoadLevel(nextScene);
		}
	}
}
