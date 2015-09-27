using UnityEngine;
using System.Collections;

public class StatScreen : MonoBehaviour {

	int age = -2;
	int weight = -2;
	int steps = -2;
	int calories = -2;
	int sleep = -2;

	bool querying = false;

	// Use this for initialization
	void Start () {
		HealthKit.RetrieveHealthInfo();
		querying = true;

	}
	
	// Update is called once per frame
	void Update () {
		if (querying && Time.frameCount % 10 == 0)
		{
			// 2. Check if all the data has been retrieved, but it's optional, goto #3
			if(HealthKit.isRetrieved()){
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

		Debug.Log ("Age: " + age);
		Debug.Log ("Weight: " + weight);
		Debug.Log ("Steps: " + steps);
		Debug.Log ("Calories: " + calories);
		Debug.Log ("Sleep: " + sleep);
	}
}
