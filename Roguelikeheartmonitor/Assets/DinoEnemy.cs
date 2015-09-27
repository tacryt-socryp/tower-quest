using UnityEngine;
using System.Collections;

public class DinoEnemy : basicEnemyScript {
	public DinoEnemy() {
		this.health = 10;
		this.wander = true;
		this.follow = false;
		this.wasWandering = true;
		this.wanderMoves = 0;
		this.speed = 2f;
	}
}
