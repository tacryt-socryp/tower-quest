
private var querying : boolean = false;
private var label = "";

private var centerx = Screen.width / 2;
private var centery = Screen.height / 2;

private var labelStyle : GUIStyle = new GUIStyle();

private var age : int;
private var weight : int;
private var steps : int;
private var calories : int;
private var sleep : int;// minutes

function Start () 
{
	labelStyle.alignment = TextAnchor.MiddleCenter;
	labelStyle.normal.textColor = Color.white;
	
	age = -1;
	weight = -1;
	steps = -1;
	calories = -1;
	sleep = -1;
}

function OnGUI () 
{
	GUI.Label(new Rect(centerx - 50, 25, 100, 25), "HealthKit", labelStyle);
	
	if (!querying && GUI.Button(new Rect(centerx - 50, 50, 100, 25), "Retrive Data"))
	{
		// 1. First call this method directly, goto #2
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
			// 2. Check if all the data has been retrieved, but it's optional, goto #3
			if(HealthKit.isRetrieved()){
				label = "HealthKit Data Updated";
				querying = false;
			}
			
			// 3. You can always retrieve the current stat
			//	  If the value is -1, then:
			//        it has not been retrieved OR
			//        does not exist OR
			//        we were no given permission
			// In any case, check the logs in xcode and unity. I log every possible case.
			age = HealthKit.age();
			weight = HealthKit.weight();
			steps = HealthKit.steps();
			calories = HealthKit.calories();
			sleep = HealthKit.sleep();
		}
	}
	
	// Display status
	GUI.Label(new Rect(centerx - 50, 75, 100, 25), label, labelStyle);
	
	// List HK data
	GUI.Label(new Rect(centerx - 50, 100, 100, 25), "Age: "+age.ToString()+" years", labelStyle); 
	GUI.Label(new Rect(centerx - 50, 125, 100, 25), "Weight: "+weight.ToString()+" lbs", labelStyle);
	GUI.Label(new Rect(centerx - 50, 150, 100, 25), "Steps: "+steps.ToString()+" steps", labelStyle);
	GUI.Label(new Rect(centerx - 50, 175, 100, 25), "Calories: "+calories.ToString()+" calories", labelStyle);
	GUI.Label(new Rect(centerx - 50, 200, 100, 25), "Sleep: "+sleep.ToString()+" minutes", labelStyle);
}

