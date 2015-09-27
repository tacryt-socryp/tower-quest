#import <Foundation/Foundation.h>

#import <HealthKit/HealthKit.h>

@interface HealthKitConnector : NSObject

@property (nonatomic) HKHealthStore *healthStore;

@property (nonatomic) int age;
@property (nonatomic) int weight;
@property (nonatomic) int steps;
@property (nonatomic) int calories;
@property (nonatomic) int sleep;

- (void)retrieveHKInfo;

@end

