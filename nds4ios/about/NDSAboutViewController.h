//
//  NDSAboutViewController.h
//  nds4ios
//
//  Created by Developer on 7/8/13.
//  Copyright (c) 2013 InfiniDev. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NDSAboutViewController : UITableViewController {
    BOOL _canTweet;
    IBOutlet UIBarButtonItem *tweetButton;
    IBOutlet UILabel *versionLabel;
}
- (IBAction)sendTweet:(id)sender;

@end
