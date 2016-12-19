//
//  AppDelegate.h
//  RamblerSchoolTest
//
//  Created by Vasyura Anastasiya on 19/12/2016.
//  Copyright © 2016 Rambler&Co. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

