//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, XCTTestRunSession;

@protocol XCTTestRunSessionDelegate <NSObject>
- (void)testRunSessionDidFinishExecutingTestPlan:(XCTTestRunSession *)arg1 reply:(void (^)(void))arg2;
- (void)testRunSession:(XCTTestRunSession *)arg1 initializationForUITestingDidFailWithError:(NSError *)arg2;
- (void)testRunSessionDidBeginInitializingForUITesting:(XCTTestRunSession *)arg1;
- (void)testRunSessionDidBeginExecutingTestPlan:(XCTTestRunSession *)arg1;
@end

