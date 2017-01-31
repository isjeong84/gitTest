//
//  AppDelegate.h
//  gitTest
//
//  Created by enbsoft on 2017. 1. 31..
//  Copyright © 2017년 Soo. All rights reserved.
//
// 배포용 Branch
// Job1  내용 커밋중...


#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

