using UnityEngine;
using System.Collections;

public class followObject : MonoBehaviour {

	// Use this for initialization
	public float speed = 0.1f;
	public GameObject follow;
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		this.GetComponent<Rigidbody2D>().MovePosition(this.transform.position + (follow.transform.position - this.transform.position) * speed);
	}
}
