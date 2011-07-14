//
//  EventDetailView.h
//  27C3
//
//  Created by Philip Brechler on 08.12.10.
//  Copyright 2010 TimeCoast Communications. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WebView.h"
#import "ReminderView.h"

@class Event, WebView, ReminderView;

@interface EventDetailView : UIViewController <UIActionSheetDelegate, UIAlertViewDelegate> {

	Event *aEvent;
	WebView *wvController;
	ReminderView *rvController;
	
	IBOutlet UITextView *abstractText;
	IBOutlet UILabel *titleLabel;
	IBOutlet UILabel *roomLabel;
	IBOutlet UILabel *startLabel;
	IBOutlet UILabel *durationLabel;
	IBOutlet UILabel *subtitleLabel;
	IBOutlet UILabel *idLabel;
	IBOutlet UILabel *languageLabel;
	IBOutlet UIBarButtonItem *actionButton;
	
	

}

@property (nonatomic, retain) Event *aEvent;

-(IBAction)actionButtonPressed:(id)sender;



@end
