using UnityEngine;
using System.Collections;

public class PlayerScript : MonoBehaviour {

	// Use this for initialization
	public float speed = 1.0f;
	public int damage = 1;
	public int maxHealth = 10;
	public int currentHealth = 9;
	public Vector2 dir = Vector2.zero;
	Vector2 lastDir = Vector2.right;
	public int leftRight = 1;
	public GameObject basicHit;
	public float basicHitDist; //distance relative to a player facing right that the basic attack hitbox should center
	bool attackNextFrame = false;
	public SpriteRenderer spriteRend;
	public Sprite standingLeft;
	public Sprite[] walkingLeft;
	public Sprite standingRight;
	public Sprite[] walkingRight;
	public float animSpeed = 0.5f;


	void Start () {
		spriteRend = this.GetComponent<SpriteRenderer>();
	}
	
	// Update is called once per frame
	void Update () {
		Move();
		Attack();
		updateSprite();
	}

	void Move() {
		//this.transform.Translate(new Vector3(dir.x, dir.y, 0) * speed);
		this.GetComponent<Rigidbody2D>().MovePosition(new Vector2(this.transform.position.x, this.transform.position.y) + dir * speed);
	}

	void Attack() {
		if (attackNextFrame) {
			//instantiate damage particle and perform anim
			Instantiate(basicHit, transform.position + new Vector3(leftRight, 0, 0) * basicHitDist, Quaternion.identity);
			attackNextFrame = false;
		}
	}

	public void setDirection(string direction) {
		switch (direction) {
		case "up":
			dir = new Vector2(0, 1);
			lastDir = dir;
			break;
		
		case "down":
			dir = new Vector2(0, -1);
			lastDir = dir;
			break;

		case "left":
			dir = new Vector2(-1, 0);
			lastDir = dir;
			leftRight = -1;
			break;

		case "right":
			dir = new Vector2(1, 0);
			lastDir = dir;
			leftRight = 1;
			break;

		case "none":
			dir = Vector2.zero;
			break;

		}
	}

	public void setAttacking(string attackType) {
		switch (attackType) {
		case "basicAttack":
			attackNextFrame = true;
			break;

		default:
			attackNextFrame = false;
			break;
		}
	}

	void updateSprite() {
		if(leftRight == -1) {
			if (dir == Vector2.zero) {
				this.spriteRend.sprite = standingLeft;
			} else {
				this.spriteRend.sprite = walkingLeft[(int) Mathf.Round(Time.frameCount * animSpeed) % walkingLeft.Length];
			}
		} else {
			if (dir == Vector2.zero) {
				this.spriteRend.sprite = standingRight;
			} else {
				this.spriteRend.sprite = walkingRight[(int) Mathf.Round(Time.frameCount * animSpeed) % walkingRight.Length];
			}
		}
	}
}
