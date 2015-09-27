using UnityEngine;
using System.Collections;

public class projectileScript : MonoBehaviour {
	
	public Vector2 direction;
	public float speed;
	public float damage;

	public Sprite[] sprite;
	public float animSpeed;
	int spriteIndex = 0;
	Vector3 targetDir;
	Quaternion lookRotation;

	void Start () {
		InvokeRepeating("updateVisuals", 0.0f, animSpeed);
	}
	
	// Update is called once per frame
	void Update () {
		this.GetComponent<Rigidbody2D>().MovePosition(this.transform.position + new Vector3(direction.x * speed, direction.y * speed, 0));
	}

	void updateVisuals() {
		spriteIndex++;
		this.GetComponent<SpriteRenderer>().sprite = sprite[spriteIndex % sprite.Length];
}
