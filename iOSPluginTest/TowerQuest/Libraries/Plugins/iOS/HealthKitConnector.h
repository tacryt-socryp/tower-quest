#import <Foundation/Foundation.h>

#import <HealthKit/HealthKit.h>

@interface HealthKitConnector : NSObject

@property (nonatomic) HKHealthStore *healthStore;

@property (nonatomic) NSUInteger usersAge;
@property (nonatomic) double usersWeight;

- (void)retrieveHKInfo;

@end

