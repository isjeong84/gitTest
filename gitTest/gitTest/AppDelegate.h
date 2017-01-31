//
//  AppDelegate.h
//  gitTest
//
//  Created by enbsoft on 2017. 1. 31..
//  Copyright © 2017년 Soo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

