using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class allStats : MonoBehaviour {
	
	int age = -2;
	int weight = -2;
	int steps = -2;
	int calories = -2;
	int sleep = -2;

	public static float speed = 0;
	public static float health = 0;
	public static float damage = 0;
	
	bool querying = false;

	void Awake() {
		DontDestroyOnLoad (this);
	}

	// Use this for initialization
	void Start () {
		HealthKit.RetrieveHealthInfo();
		querying = true;
		DontDestroyOnLoad (this);
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

			float speed = Mathf.Round ((steps % 10000f) / 10000f + 1);
			float damage = Mathf.Abs (2 - Mathf.Abs (calories - 2000f) / 1250f);
			float health = Mathf.Abs(Mathf.RoundToInt (10f + (sleep - 480f) / 60f));

			this.GetComponent<Text> ().text = calories + " Calories => " + damage + " Attack\n" +
				steps + " Steps => " + speed + " Speed\n" +
					sleep + " Sleep => " + health + " Health";
		}
	}
}
