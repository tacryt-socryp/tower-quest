using UnityEngine;
using System.Collections;

public class basicEnemyScript : MonoBehaviour {

	private Vector3 wayPoint;
	// Use this for initialization
	public int health;
	public bool wander;
	public bool follow;
	public bool wasWandering;
	public int wanderMoves;
	public float speed;
	public GameObject basicHit;
	public Color startingColor;

	public basicEnemyScript() {
		this.health = 10;
		this.wander = true;
		this.follow = false;
		this.wasWandering = true;
		this.wanderMoves = 0;
		this.speed = 1f;
	}

	void Start () {
		InvokeRepeating("Attack", 3.0f, 2.5f);
		startingColor = this.GetComponent<SpriteRenderer>().color;
		if (this.wander) {
			Wander();
		}
	}
	
	// Update is called once per frame
	void Update () {
		if (this.wander) {
			if ((this.transform.position - wayPoint).magnitude < 3 || this.wanderMoves > 15) {
				Wander ();
			}
			this.GetComponent<Rigidbody2D> ().MovePosition (
			new Vector2 (
				this.transform.position.x,
				this.transform.position.y
			) - new Vector2 (
				this.transform.position.x - wayPoint.x,
				this.transform.position.y - wayPoint.y
			).normalized * 0.01f * this.speed);
			this.wanderMoves++;
		} else if (this.follow) {
			var playerObj = FindObjectOfType<PlayerScript> ();
			this.GetComponent<Rigidbody2D> ().MovePosition (
			new Vector2 (
				this.transform.position.x,
				this.transform.position.y
			) - new Vector2 (
				this.transform.position.x - playerObj.transform.position.x,
				this.transform.position.y - playerObj.transform.position.y
			).normalized * 0.02f * this.speed);
		}
	}
	
	void OnCollisionEnter2D(Collision2D coll) {
		if (coll.gameObject.tag == "hitBox") {
			var boxScript = coll.gameObject.GetComponent<hitBoxScript> ();
			if (boxScript) {
				this.health -= boxScript.damage;
				if (this.health <= 0) {
					Die ();
				}
				this.GetComponent<SpriteRenderer> ().color = new Color (0.7f, 0.2f, 0.2f);
				Invoke ("MoveBack", 0.2f);
			}
			this.GetComponent<Rigidbody2D> ().MovePosition (new Vector2 (this.transform.position.x, this.transform.position.y) + new Vector2 (this.transform.position.x - FindObjectOfType<PlayerScript> ().transform.position.x, this.transform.position.y - FindObjectOfType<PlayerScript> ().transform.position.y).normalized * 0.1f);
		} else {
			var playerObj = FindObjectOfType<PlayerScript> ();
			var playerScript = coll.gameObject.GetComponent<PlayerScript> ();
			if (playerScript) {
				Transform t = playerScript.GetComponent<Transform> ();
				Transform t1 = this.GetComponent<Transform> ();

				playerScript.GetComponent<Rigidbody2D> ().AddForce(new Vector2(
					(t.position.x - this.transform.position.x),
					(t.position.y - this.transform.position.y)
				).normalized * 150f);
				this.GetComponent<Rigidbody2D> ().AddForce(new Vector2(
					(t1.position.x - this.transform.position.x),
					(t1.position.y - this.transform.position.y)
				).normalized * 150f);
				playerScript.enabled = false;
				this.enabled = false;
				playerScript.currentHealth = playerScript.currentHealth - 1;
				playerScript.GetComponent<SpriteRenderer>().color = new Color(0.7f, 0.2f, 0.2f);
				playerScript.Invoke("MoveBack", 0.2f);
				Invoke ("enablePlayer", 0.25f);
				Invoke ("enableMonster", 0.25f);
			} else if (Mathf.Sqrt(
						Mathf.Pow(playerObj.transform.position.x - this.transform.position.x, 2) +
						Mathf.Pow(playerObj.transform.position.y - this.transform.position.y, 2)
					) < 6) {
				if (this.wander) {
					this.wasWandering = true;
					this.wander = false;
				}
				// Follow player.
				this.follow = true;
			} else if (this.wasWandering) {
				this.wander = true;
				this.follow = false;
			}


		}
	}

	public void Wander() {
		this.wayPoint = (Random.insideUnitSphere + this.transform.position) * 6;
		this.wasWandering = false;
		this.wanderMoves = 0;
	}

	void enablePlayer() {
		FindObjectOfType<PlayerScript> ().enabled = true;
	}

	void enableMonster() {
		this.enabled = true;
	}

	public void Attack() {
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
