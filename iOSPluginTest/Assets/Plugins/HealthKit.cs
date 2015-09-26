using UnityEngine;
using System.Collections;
using System.Runtime.InteropServices;

public class HealthKit {

	/* Interface to native implementation */
	
	[DllImport ("__Internal")]
	private static extern void _RetrieveHealthInfo();
	
	[DllImport ("__Internal")]
	private static extern bool _isRetrieved();
	
	[DllImport ("__Internal")]
	private static extern int _age();
	
	[DllImport ("__Internal")]
	private static extern double _weight();
	
	/* Public interface for use inside C# / JS code */
	
	// begin retrieving the health kit data for the current device
	public static void RetrieveHealthInfo()
	{
		// Call plugin only when running on real device
		if (Application.platform != RuntimePlatform.OSXEditor) {
			_RetrieveHealthInfo();
			
		} else {
			Debug.Log("Must be on iOS to use HealthKit");
		}
	}
	
	public static bool isRetrieved()
	{
		if (Application.platform != RuntimePlatform.OSXEditor) {
			return _isRetrieved();
		}
		
		return false;
	}
	
	public static int age()
	{
		if (Application.platform != RuntimePlatform.OSXEditor) {
			return _age();
		}
		
		return 0;
	}
	
	public static double weight()
	{
		if (Application.platform != RuntimePlatform.OSXEditor) {
			return _weight();
		}
		
		return 0;
	}
}
