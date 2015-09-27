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
	private static extern int _weight();
	
	[DllImport ("__Internal")]
	private static extern int _steps();
	
	[DllImport ("__Internal")]
	private static extern int _calories();
	
	[DllImport ("__Internal")]
	private static extern int _sleep();
	
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
		
		return -1;
	}
	
	public static int weight()
	{
		if (Application.platform != RuntimePlatform.OSXEditor) {
			return _weight();
		}
		
		return -1;
	}
	
	public static int steps()
	{
		if (Application.platform != RuntimePlatform.OSXEditor) {
			return _steps();
		}
		
		return -1;
	}
	
	public static int calories()
	{
		if (Application.platform != RuntimePlatform.OSXEditor) {
			return _calories();
		}
		
		return -1;
	}

	// minutes in the past 1 day
	public static int sleep()
	{
		if (Application.platform != RuntimePlatform.OSXEditor) {
			return _sleep();
		}
		
		return -1;
	}
}
