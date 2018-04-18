//
//  AppDelegate.h
//  SixHotAPNSApp
//
//  Created by Jordan Naumann on 4/18/18.
//  Copyright © 2018 SixHotAPNS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WindowsAzureMessaging/WindowsAzureMessaging.h>
#import <UserNotifications/UserNotifications.h>
#import "HubInfo.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate, UNUserNotificationCenterDelegate>

@property (strong, nonatomic) UIWindow *window;


@end

