using UnityEngine;
using System.Collections;

public class drawHealthScript : MonoBehaviour {

	GUIText text;
	public GameObject pman;
	void Start () {
		text = this.GetComponent<GUIText>() as GUIText;	
	}
	
	// Update is called once per frame
	void Update () {
		text.text = pman.GetComponent<PlayerScript>().GetHealthMessage();
	}
}
