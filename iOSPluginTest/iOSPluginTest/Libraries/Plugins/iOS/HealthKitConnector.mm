
#import "HealthKitConnector.h"

#import "HKHealthStore+AAPLExtensions.h"

@implementation HealthKitConnector

- (id)init
{
    self = [super init];
    
	self.age = -1;
	self.weight = -1;
	self.steps = -1;
	self.calories = -1;
	self.sleep = -1;
	
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
	    NSSet *writeDataTypes = [NSSet new];
	    NSSet *readDataTypes = [self dataTypesToRead];
    
	    [self.healthStore requestAuthorizationToShareTypes:writeDataTypes readTypes:readDataTypes completion:^(BOOL success, NSError *error) {
	        if (!success) {
	            NSLog(@"You didn't allow HealthKit to access these read/write data types. Error: %@.", error);
          	  	return;
	        } else {
	            NSLog(@"You do have access to HealthKit data.");            
	        }
	    }];
	}
}

#pragma mark - HealthKit Permissions

// Returns the types of data that Fit wishes to read from HealthKit.
- (NSSet *)dataTypesToRead
{
	// age
    HKCharacteristicType *birthdayType = [HKObjectType characteristicTypeForIdentifier:HKCharacteristicTypeIdentifierDateOfBirth];
	// weight
    HKQuantityType *weightType = [HKObjectType quantityTypeForIdentifier:HKQuantityTypeIdentifierBodyMass];
	// steps
    HKQuantityType *stepsType = [HKQuantityType quantityTypeForIdentifier:HKQuantityTypeIdentifierStepCount];
	// calories
    HKQuantityType *dietaryCalorieEnergyType = [HKObjectType quantityTypeForIdentifier:HKQuantityTypeIdentifierDietaryEnergyConsumed];
    // sleep
	HKSampleType *sleepType = [HKSampleType categoryTypeForIdentifier:HKCategoryTypeIdentifierSleepAnalysis];
	
    return [NSSet setWithObjects:birthdayType, weightType, stepsType, dietaryCalorieEnergyType, sleepType, nil];
}

#pragma mark - Read HealthKit Data

- (void)retrieveAge
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

        self.age = (int)usersAge;
    }
}

- (void)retrieveWeight
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

            self.weight = usersWeight;
        }
    }];
}

- (void)retrieveSteps
{
    HKQuantityType *stepsType = [HKQuantityType quantityTypeForIdentifier:HKQuantityTypeIdentifierStepCount];

    [self fetchSumOfSamplesTodayForType:stepsType unit:[HKUnit countUnit] completion:^(double totalSteps, NSError *error) {
        if(error){
        	NSLog(@"Error retrieving steps: %@", error);
			
        } else {
        	int steps = totalSteps;
			
			NSLog(@"Total steps today is %d steps", steps);
			
			self.steps = steps;
        }
    }];
}

- (void)retrieveCalories
{
    HKQuantityType *energyConsumedType = [HKObjectType quantityTypeForIdentifier:HKQuantityTypeIdentifierDietaryEnergyConsumed];

    [self fetchSumOfSamplesTodayForType:energyConsumedType unit:[HKUnit kilocalorieUnit] completion:^(double totalCaloriesConsumed, NSError *error) {
        if(error){
        	NSLog(@"Error retrieving calories: %@", error);
			
        } else {
        	int calories = totalCaloriesConsumed;
			
			NSLog(@"Total calories consumed today is %d calories", calories);
			
			self.calories = calories;
        }
    }];
}

- (void)retrieveSleep
{
	NSCalendar *calendar = [NSCalendar currentCalendar];

	NSDate *now = [NSDate date];

	NSDateComponents *components = [calendar components:NSCalendarUnitYear|NSCalendarUnitMonth|NSCalendarUnitDay fromDate:now];

	NSDate *startDate = [calendar dateFromComponents:components];

	NSDate *endDate = [calendar dateByAddingUnit:NSCalendarUnitDay value:1 toDate:startDate options:0];

	HKSampleType *sampleType = [HKSampleType categoryTypeForIdentifier:HKCategoryTypeIdentifierSleepAnalysis];
	NSPredicate *predicate = [HKQuery predicateForSamplesWithStartDate:startDate endDate:endDate options:HKQueryOptionNone];

	HKSampleQuery *query = [[HKSampleQuery alloc] initWithSampleType:sampleType predicate:predicate limit:0 sortDescriptors:nil resultsHandler:^(HKSampleQuery *query, NSArray *results, NSError *error) {
	    if (!results) {
	        NSLog(@"An error occured fetching the user's sleep duration. Error: %@.", error);

	    } else {

	        double minutesSleepAggr = 0;
	        for (HKCategorySample *sample in results) {

	            NSTimeInterval distanceBetweenDates = [sample.endDate timeIntervalSinceDate:sample.startDate];
	            double minutesInAnHour = 60;
	            double minutesBetweenDates = distanceBetweenDates / minutesInAnHour;

	            minutesSleepAggr += minutesBetweenDates;
	        }
	        
            int minutes = minutesSleepAggr;
			
			NSLog(@"Total minutes slept in the past day is %d minutes", minutes);
			
			self.sleep = minutes;
			
		}
	}];
    [self.healthStore executeQuery:query];

}

- (void)fetchSumOfSamplesTodayForType:(HKQuantityType *)quantityType unit:(HKUnit *)unit completion:(void (^)(double, NSError *))completionHandler
{
    NSPredicate *predicate = [self predicateForSamplesToday];
    
    HKStatisticsQuery *query = [[HKStatisticsQuery alloc] initWithQuantityType:quantityType quantitySamplePredicate:predicate options:HKStatisticsOptionCumulativeSum completionHandler:^(HKStatisticsQuery *query, HKStatistics *result, NSError *error) {
        
        HKQuantity *sum = [result sumQuantity];
        
        if (completionHandler) {
            double value = [sum doubleValueForUnit:unit];
            
            completionHandler(value, error);
        }
    }];
    
    [self.healthStore executeQuery:query];
}

- (NSPredicate *)predicateForSamplesToday
{
    NSCalendar *calendar = [NSCalendar currentCalendar];
    
    NSDate *now = [NSDate date];
    
    NSDate *startDate = [calendar startOfDayForDate:now];
    NSDate *endDate = [calendar dateByAddingUnit:NSCalendarUnitDay value:1 toDate:startDate options:0];
    
    return [HKQuery predicateForSamplesWithStartDate:startDate endDate:endDate options:HKQueryOptionStrictStartDate];
}


#pragma mark - Interface to Unity

- (void)retrieveHKInfo
{
    dispatch_async(dispatch_get_main_queue(), ^{
        // Update the user interface based on the current user's health information.
        [self retrieveAge];
        [self retrieveWeight];
        [self retrieveSteps];
        [self retrieveCalories];
        [self retrieveSleep];
    });
}

- (bool)isRetrieved
{
	bool isRetrieved = true;
	
	if (self.age == -1) {
		NSLog(@"isRetrieved: age has not be retrieved.");
		isRetrieved = false;
	}
	if (self.weight == -1) {
		NSLog(@"isRetrieved: weight has not be retrieved.");
		isRetrieved = false;
	}
	if (self.steps == -1) {
		NSLog(@"isRetrieved: steps has not be retrieved.");
		isRetrieved = false;
	}
	if (self.calories == -1) {
		NSLog(@"isRetrieved: calories has not be retrieved.");
		isRetrieved = false;
	}
	if (self.sleep == -1) {
		NSLog(@"isRetrieved: sleep has not be retrieved.");
		isRetrieved = false;
	}
	
	return isRetrieved;
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
		return [hkConnector age];
	}
	
	int _weight()
	{
		return [hkConnector weight];
	}
	
	int _steps()
	{
		return [hkConnector steps];
	}
	
	int _calories()
	{
		return [hkConnector calories];
	}
	
	int _sleep()
	{
		return [hkConnector sleep];
	}
	
	bool _isRetrieved()
	{
		return [hkConnector isRetrieved];
	}
}

