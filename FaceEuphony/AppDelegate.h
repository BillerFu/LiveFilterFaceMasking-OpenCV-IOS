//
//  AppDelegate.h
//  FaceEuphony
//
//  Created by Test Euphony on 11/22/16.
//  Copyright © 2016 EuphonyInc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

