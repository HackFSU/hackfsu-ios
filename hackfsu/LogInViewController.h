//
//  LogInViewController.h
//  hackfsu
//
//  Created by Matt O'Hagan on 2/8/14.
//  Copyright (c) 2014 Isitt Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LogInViewController : UIViewController

- (IBAction)loginButtonTouchHandler:(id)sender;

@property (nonatomic, strong) IBOutlet UIActivityIndicatorView *activityIndicator;

@end
