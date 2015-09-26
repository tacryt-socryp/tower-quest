#pragma strict
import System.Linq;

public var MAP_WIDTH : int = 64;
public var MAP_HEIGHT : int = 64;

public var max_objects : int;
public var max_levels : int;

public var level : int;
public var bounds : BoundsDef;

public var objects : BoundsDef[];
public var nodes : QuadTree[];

 /*
  * Quadtree Constructor
  * @param Object bounds		bounds of the node, object with x, y, width, height
  * @param Integer max_objects		(optional) max objects a node can hold before splitting into 4 subnodes (default: 10)
  * @param Integer max_levels		(optional) total max levels inside root Quadtree (default: 4) 
  * @param Integer level		(optional) deepth level, required for subnodes  
  */
public function QuadTree(b : BoundsDef, max_o : int, max_l : int, l : int) : QuadTree {
	max_objects = max_o || 10;
	max_levels	= max_l || 4;
	
	level = l || 0;
	bounds = b;
	
	objects = new BoundsDef[max_objects];
	nodes = new QuadTree[max_levels];
}

public function generateDungeon() {
	for (var i = 0; i < max_objects * max_levels; i++) {
		this.insert(bounds);
	}
};


public function randomSlice(curr : int, max : int) : BoundsDef {
	if (curr > max) {return null; }
	var sliceX : float = Mathf.Round(Random.Range(this.bounds.x, this.bounds.x + this.bounds.width));
	var sliceY : float = Mathf.Round(Random.Range(this.bounds.y, this.bounds.y + this.bounds.height));

	if (Mathf.Abs(sliceX - this.bounds.x) < 4) { return this.randomSlice(curr + 1, max); }
	if (Mathf.Abs(this.bounds.x + this.bounds.width - sliceX) < 4) { return this.randomSlice(curr + 1, max); }
	if (Mathf.Abs(sliceY - this.bounds.y) < 4) { return this.randomSlice(curr + 1, max); }
	if (Mathf.Abs(this.bounds.y + this.bounds.height - sliceY) < 4) { return this.randomSlice(curr + 1, max); }
	
	return BoundsDef(sliceX, sliceY, 0, 0);
};

public function printTree () {
	var map = new int[MAP_WIDTH, MAP_HEIGHT];
	for (var i = 0; i < MAP_WIDTH; i++) {
		for (var j = 0; j < MAP_HEIGHT; j++) {
			map[i,j] = 0;
		}
	}
	this.printQuadTree(map);
};

public function printQuadTree (map : int[,]) {
	var qt = this;
	for (var a = 0; a < qt.nodes.length; a++) {
		qt.nodes[a].printQuadTree(map);
	}
	if (qt.objects.length == 0) {
		Debug.Log(map);
	} else {
		for (var i = 0; i < qt.objects.length; i++) {
			for (var x = qt.bounds.x; x < qt.bounds.x + qt.bounds.width; x++) {
				for (var y = qt.bounds.y; y < qt.bounds.y + qt.bounds.height; y++) {
					map[x,y] = 1;
				}
			}
		}
	}
};


/*
 * Split the node into 4 subnodes
 */
public function split () {
	
	var nextLevel	= this.level + 1;
	var subWidth	= Mathf.Round( this.bounds.width / 2 );
	var subHeight 	= Mathf.Round( this.bounds.height / 2 );
		//x 		= Math.round( this.bounds.x ),
		//y 		= Math.round( this.bounds.y );		
 
 	if (subHeight < 4) { return; } // if the space isn't large enough to fit rooms
 	if (subWidth < 4) { return; } // if the space isn't large enough to fit rooms
 
 	var xy : BoundsDef = this.randomSlice(1,10);
 	if (xy == null) { return; }
 	var x : int = xy.x;
 	var y : int = xy.y;
 
 	//top right node
	this.nodes[0] = new QuadTree(BoundsDef(x + subWidth, y, subWidth, subHeight),
		this.max_objects, this.max_levels, nextLevel);
	
	//top left node
	this.nodes[1] = new QuadTree(BoundsDef(x, y, subWidth, subHeight),
		this.max_objects, this.max_levels, nextLevel);
	
	//bottom left node
	this.nodes[2] = new QuadTree(BoundsDef(x, y + subHeight, subWidth, subHeight),
		this.max_objects, this.max_levels, nextLevel);
	
	//bottom right node
	this.nodes[3] = new QuadTree(BoundsDef(x + subWidth, y + subHeight, subWidth, subHeight),
		this.max_objects, this.max_levels, nextLevel);
};


/*
 * Determine which node the object belongs to
 * @param Object pRect		bounds of the area to be checked, with x, y, width, height
 * @return Integer		index of the subnode (0-3), or -1 if pRect cannot completely fit within a subnode and is part of the parent node
 */
public function getIndex ( pRect : BoundsDef ) {
	
	var 	index 			= -1;
	var verticalMidpoint 	= this.bounds.x + (this.bounds.width / 2);
	var horizontalMidpoint 	= this.bounds.y + (this.bounds.height / 2);
 
	//pRect can completely fit within the top quadrants
	var topQuadrant = (pRect.y < horizontalMidpoint && pRect.y + pRect.height < horizontalMidpoint);
		
	//pRect can completely fit within the bottom quadrants
	var bottomQuadrant = (pRect.y > horizontalMidpoint);
	 
	//pRect can completely fit within the left quadrants
	if( pRect.x < verticalMidpoint && pRect.x + pRect.width < verticalMidpoint ) {
		if( topQuadrant ) {
			index = 1;
		} else if( bottomQuadrant ) {
			index = 2;
		}
		
	//pRect can completely fit within the right quadrants	
	} else if( pRect.x > verticalMidpoint ) {
		if( topQuadrant ) {
			index = 0;
		} else if( bottomQuadrant ) {
			index = 3;
		}
	}
 
	return index;
};


/*
 * Insert the object into the node. If the node
 * exceeds the capacity, it will split and add all
 * objects to their corresponding subnodes.
 * @param Object pRect		bounds of the object to be added, with x, y, width, height
 */
public function insert ( pRect : BoundsDef ) {
	
	var i : int = 0;
 	var index : int;
 	
 	//if we have subnodes ...
	if( typeof this.nodes[0] !== 'undefined' ) {
		index = this.getIndex( pRect );
 
	  	if( index != -1 ) {
			this.nodes[index].insert( pRect );	 
		 	return;
		}
	}
 
 	var objects : Array = new Array(this.objects);
 	objects.Push( pRect );
 	
 	this.objects = objects.ToBuiltin(BoundsDef);
 	//this.objects.push( pRect );
	
	if( this.objects.length > this.max_objects && this.level < this.max_levels ) {
		
		//split if we don't already have subnodes
		if( typeof this.nodes[0] === 'undefined' ) {
			this.split();
		}
		
		//add all objects to there corresponding subnodes
		while( i < this.objects.length ) {
			
			index = this.getIndex( this.objects[ i ] );
			
			if( index != -1 ) {
				var b : BoundsDef = objects[i];
				objects.RemoveAt(i);
				this.objects = objects.ToBuiltin(BoundsDef);
			 	this.nodes[index].insert( b );

				//this.nodes[index].insert( this.objects.splice(i, 1)[0] );
			} else {
				i = i + 1;
		 	}
	 	}
	}
 };
 
 
/*
 * Return all objects that could collide with the given object
 * @param Object pRect		bounds of the object to be checked, with x, y, width, height
 * @Return Array		array with all detected objects
 */
public function retrieve ( pRect : BoundsDef ) : BoundsDef[] {
 	
	var index : int = this.getIndex( pRect );
	var returnObjects : BoundsDef[] = this.objects;
		
	//if we have subnodes ...
	if( typeof this.nodes[0] !== 'undefined' ) {
		
		//if pRect fits into a subnode ..
		if( index != -1 ) {
			returnObjects = returnObjects.Concat( this.nodes[index].retrieve( pRect ) );
			
		//if pRect does not fit into a subnode, check it against all subnodes
		} else {
			for( var i=0; i < this.nodes.length; i=i+1 ) {
				returnObjects = returnObjects.Concat( this.nodes[i].retrieve( pRect ) );
			}
		}
	}
 
	return returnObjects;
};

