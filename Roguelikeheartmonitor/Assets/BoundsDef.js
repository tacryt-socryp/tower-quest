#pragma strict

function Start () {

}

function Update () {

}

public class BoundsDef {
	public var x : int;
	public var y : int;
	public var width: int;
	public var height: int;

	public function BoundsDef (x, y, width, height) {
		this.x = x;
		this.y = y;
		this.width = width;
		this.height = height;
	}
}