#pragma strict

public function Awake () {
	// Dungeon Size
	var MAP_WIDTH : int = 64;
	var MAP_HEIGHT : int = 64;

	// Room Size
	var ROOM_MAX_SIZE : int = 12;
	var ROOM_MIN_SIZE : int = 4;

	var wallPrefab : GameObject;
	var tilePrefab : GameObject;

	// Dungeon Generation Parameters
	var MAX_DEPTH : int = 10;

	// QuadTree for dungeon distribution
	var quadTree : QuadTree;

	var bounds : BoundsDef = new BoundsDef(0, 0, MAP_WIDTH, MAP_HEIGHT);
	quadTree = new QuadTree(bounds, 10, 4, 0);
	
	quadTree.generateDungeon();
	quadTree.printTree();
}

function Start () {
}

function Update () {

}


