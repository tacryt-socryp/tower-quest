using UnityEngine;
using System.Collections;

public class dummyEnemyScript : MonoBehaviour {

	// Use this for initialization
	Color startingColor;
	public int health = 10;
	void Start () {
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
				this.GetComponent<SpriteRenderer>().color = new Color(0.7f, 0.2f, 0.2f);
				Invoke("MoveBack", 0.2f);
				if (this.health <= 0) {
					Die();
				}
			}
			this.GetComponent<Rigidbody2D>().MovePosition(new Vector2(this.transform.position.x, this.transform.position.y) + new Vector2(this.transform.position.x - FindObjectOfType<PlayerScript>().transform.position.x, this.transform.position.y - FindObjectOfType<PlayerScript>().transform.position.y).normalized * 0.1f);
		}
	}

	void MoveBack() {
		this.GetComponent<SpriteRenderer>().color = startingColor;
	}

	void Die() {
		Destroy(gameObject);
	}
}
