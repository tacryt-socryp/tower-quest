using UnityEngine;
using System.Collections;

public class basicEnemyScript : MonoBehaviour {
	
	// Use this for initialization
	public int health = 10;
	public GameObject basicHit;
	Color startingColor;
	void Start () {
		InvokeRepeating("Attack", 3.0f, 2.5f);
		startingColor = this.GetComponent<SpriteRenderer>().color;
	}
	
	// Update is called once per frame
	void Update () {

	}
	
	void OnCollisionEnter2D(Collision2D coll) {
		if (coll.gameObject.tag == "hitBox") {
			var boxScript = coll.gameObject.GetComponent<hitBoxScript>();
			if (boxScript) {
				this.health -= boxScript.damage;
				if (this.health <= 0) {
					Die();
				}
				this.GetComponent<SpriteRenderer>().color = new Color(0.7f, 0.2f, 0.2f);
				Invoke("MoveBack", 0.2f);
			}
			this.GetComponent<Rigidbody2D>().MovePosition(new Vector2(this.transform.position.x, this.transform.position.y) + new Vector2(this.transform.position.x - FindObjectOfType<PlayerScript>().transform.position.x, this.transform.position.y - FindObjectOfType<PlayerScript>().transform.position.y).normalized * 0.1f);
		}
	}

	void Attack() {
		Instantiate(basicHit, transform.position, Quaternion.identity);
		Invoke("MoveBack", 0.2f);
		this.GetComponent<SpriteRenderer>().color = new Color(0.6f, 0.6f, 0.99f);
	}

	void MoveBack() {
		this.GetComponent<SpriteRenderer>().color = startingColor;
	}

	void Die() {
		Destroy(gameObject);
	}
}
