
#import "HealthKitConnector.h"

#import "HKHealthStore+AAPLExtensions.h"

@implementation HealthKitConnector

- (id)init
{
    self = [super init];
    
	self.usersAge = 0;
	self.usersWeight = 0;
	
	[self setupHK];
	
    return self;
}

#pragma mark - HealthKit Setup

- (void)setupHK
{
	self.healthStore = [[HKHealthStore alloc] init];

	// Set up an HKHealthStore, asking the user for read/write permissions. The profile view controller is the
	// first view controller that's shown to the user, so we'll ask for all of the desired HealthKit permissions now.
	// In your own app, you should consider requesting permissions the first time a user wants to interact with
	// HealthKit data.
	if ([HKHealthStore isHealthDataAvailable]) {
	    NSSet *writeDataTypes = [self dataTypesToWrite];
	    NSSet *readDataTypes = [self dataTypesToRead];
    
	    [self.healthStore requestAuthorizationToShareTypes:writeDataTypes readTypes:readDataTypes completion:^(BOOL success, NSError *error) {
	        if (!success) {
	            NSLog(@"You didn't allow HealthKit to access these read/write data types. In your app, try to handle this error gracefully when a user decides not to provide access. The error was: %@. If you're using a simulator, try it on a device.", error);
          	  	return;
	        } else {
	            NSLog(@"HealthKit now has access");            
	        }
	    }];
	}
}

#pragma mark - HealthKit Permissions

// Returns the types of data that Fit wishes to write to HealthKit.
- (NSSet *)dataTypesToWrite
{
    HKQuantityType *dietaryCalorieEnergyType = [HKObjectType quantityTypeForIdentifier:HKQuantityTypeIdentifierDietaryEnergyConsumed];
    HKQuantityType *activeEnergyBurnType = [HKObjectType quantityTypeForIdentifier:HKQuantityTypeIdentifierActiveEnergyBurned];
    HKQuantityType *heightType = [HKObjectType quantityTypeForIdentifier:HKQuantityTypeIdentifierHeight];
    HKQuantityType *weightType = [HKObjectType quantityTypeForIdentifier:HKQuantityTypeIdentifierBodyMass];
    
    return [NSSet setWithObjects:dietaryCalorieEnergyType, activeEnergyBurnType, heightType, weightType, nil];
}

// Returns the types of data that Fit wishes to read from HealthKit.
- (NSSet *)dataTypesToRead
{
    HKQuantityType *dietaryCalorieEnergyType = [HKObjectType quantityTypeForIdentifier:HKQuantityTypeIdentifierDietaryEnergyConsumed];
    HKQuantityType *activeEnergyBurnType = [HKObjectType quantityTypeForIdentifier:HKQuantityTypeIdentifierActiveEnergyBurned];
    HKQuantityType *heightType = [HKObjectType quantityTypeForIdentifier:HKQuantityTypeIdentifierHeight];
    HKQuantityType *weightType = [HKObjectType quantityTypeForIdentifier:HKQuantityTypeIdentifierBodyMass];
    HKCharacteristicType *birthdayType = [HKObjectType characteristicTypeForIdentifier:HKCharacteristicTypeIdentifierDateOfBirth];
    HKCharacteristicType *biologicalSexType = [HKObjectType characteristicTypeForIdentifier:HKCharacteristicTypeIdentifierBiologicalSex];
    
    return [NSSet setWithObjects:dietaryCalorieEnergyType, activeEnergyBurnType, heightType, weightType, birthdayType, biologicalSexType, nil];
}

#pragma mark - Read HealthKit Data

- (void)retrieveUsersAge
{
    NSError *error;
    NSDate *dateOfBirth = [self.healthStore dateOfBirthWithError:&error];
    
    if (!dateOfBirth) {
        NSLog(@"Either an error occured fetching the user's age information or none has been stored yet. In your app, try to handle this gracefully.");
        
    } else {
        // Compute the age of the user.
        NSDate *now = [NSDate date];
        
        NSDateComponents *ageComponents = [[NSCalendar currentCalendar] components:NSCalendarUnitYear fromDate:dateOfBirth toDate:now options:NSCalendarWrapComponents];
        
        NSUInteger usersAge = [ageComponents year];

		NSLog(@"User's age is %lu yrs", (unsigned long)usersAge);

        self.usersAge = usersAge;
    }
}

- (void)retrieveUsersWeight
{
    // Fetch the user's default weight unit in pounds.
    NSMassFormatter *massFormatter = [[NSMassFormatter alloc] init];
    massFormatter.unitStyle = NSFormattingUnitStyleLong;
    
    // Query to get the user's latest weight, if it exists.
    HKQuantityType *weightType = [HKQuantityType quantityTypeForIdentifier:HKQuantityTypeIdentifierBodyMass];

    [self.healthStore aapl_mostRecentQuantitySampleOfType:weightType predicate:nil completion:^(HKQuantity *mostRecentQuantity, NSError *error) {
        if (!mostRecentQuantity) {
            NSLog(@"Either an error occured fetching the user's weight information or none has been stored yet. In your app, try to handle this gracefully.");
            
        } else {
            // Determine the weight in the required unit.
            HKUnit *weightUnit = [HKUnit poundUnit];
            double usersWeight = [mostRecentQuantity doubleValueForUnit:weightUnit];

			NSLog(@"User's weight is %f lbs", usersWeight);

            self.usersWeight = usersWeight;
        }
    }];
}

#pragma mark - Interface to Unity

- (void)retrieveHKInfo
{
    dispatch_async(dispatch_get_main_queue(), ^{
        // Update the user interface based on the current user's health information.
        [self retrieveUsersAge];
        [self retrieveUsersWeight];
    });
}

- (bool)isRetrieved
{
	return (
		(self.usersAge != 0) &&
		(self.usersWeight != 0)
	);
}

@end

static HealthKitConnector* hkConnector = nil;

// When native code plugin is implemented in .mm / .cpp file, then functions
// should be surrounded with extern "C" block to conform C function naming rules
extern "C" {

	void _RetrieveHealthInfo()
	{
		if (hkConnector == nil){
			hkConnector = [[HealthKitConnector alloc] init];
		}
		
		[hkConnector retrieveHKInfo];
	}
	
	int _age()
	{
		return [hkConnector usersAge];
	}
	
	double _weight()
	{
		return [hkConnector usersWeight];
	}
	
	bool _isRetrieved()
	{
		return [hkConnector isRetrieved];
	}
}

