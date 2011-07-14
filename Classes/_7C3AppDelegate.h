//
//  _7C3AppDelegate.h
//  27C3
//
//  Created by Philip Brechler on 08.12.10.
//  Copyright 2010 TimeCoast Communications. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface _7C3AppDelegate : NSObject <UIApplicationDelegate,UIAlertViewDelegate> {
    
    UIWindow *window;
    UINavigationController *navigationController;
	
	NSMutableArray *events;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;

@property (nonatomic, retain) NSMutableArray *events;

- (BOOL) connectedToNetwork;

@end

