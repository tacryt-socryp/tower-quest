using UnityEngine;
using System.Collections;

public class hitBoxScript : MonoBehaviour {
	
	public int damage = 10;
	public int deathHastCome = 1; //frames this will exist for
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		if (deathHastCome == 0) {
			Destroy(gameObject);
		}

		deathHastCome--;
	}
}
