using UnityEngine;
using System.Collections;

public class shootRepeating : MonoBehaviour {

	// Use this for initialization
	public Vector2 offset;
	public Vector2 direction;
	public float speed;
	public float frequency;
	public GameObject projectile;

	void Start () {
		InvokeRepeating("Shoot", 0.0f, frequency);
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void Shoot() {
		var shot = Instantiate(projectile, transform.position + new Vector3(offset.x, offset.y, 0), Quaternion.identity) as GameObject;
		shot.GetComponent<projectileScript>().speed = speed;
		shot.GetComponent<projectileScript>().direction = direction;
	}
}
