
private var querying : boolean = false;
private var label = "";

private var centerx = Screen.width / 2;
private var centery = Screen.height / 2;

private var labelStyle : GUIStyle = new GUIStyle();

private var age : int;
private var weight : double;

function Start () 
{
	labelStyle.alignment = TextAnchor.MiddleCenter;
	labelStyle.normal.textColor = Color.white;
	
	age = 0;
	weight = 0;
}

function OnGUI () 
{
	GUI.Label(new Rect(centerx - 50, 25, 100, 25), "HealthKit", labelStyle);
	
	if (!querying && GUI.Button(new Rect(centerx - 50, 50, 100, 25), "Retrive Data"))
	{
		// Start lookup for specified service inside "local" domain
		HealthKit.RetrieveHealthInfo();
		label = "Retrieving HealthKit Data";
		querying = true;
	}
	
	if (querying)
	{
		// Query status only every 10th frame. Managed -> Native calls are quite expensive.
		// Similar coding pattern could be considered as good practice. 
		if (Time.frameCount % 10 == 0)
		{
			if(HealthKit.isRetrieved()){
				label = "HealthKit Data Updated";
				querying = false;
				
				age = HealthKit.age();
				weight = HealthKit.weight();
			}
		}
	}
	
	// Display status
	GUI.Label(new Rect(centerx - 50, 75, 100, 25), label, labelStyle);
	
	// List HK data
	GUI.Label(new Rect(centerx - 50, 100, 100, 25), "Age: "+age.ToString()+" years", labelStyle); 
	GUI.Label(new Rect(centerx - 50, 125, 100, 25), "Weight: "+weight.ToString()+" lbs", labelStyle); 
}