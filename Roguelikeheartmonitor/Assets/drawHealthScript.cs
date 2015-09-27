using UnityEngine;
using System.Collections;

public class drawHealthScript : MonoBehaviour {

	GUIText text;
	public PlayerScript pman;
	void Start () {
		text = this.GetComponent<GUIText>() as GUIText;	
		if (pman == null) {
			pman = FindObjectOfType<PlayerScript>() as PlayerScript;
		}
	}
	
	// Update is called once per frame
	void Update () {
		text.text = pman.GetHealthMessage();
	}
}
