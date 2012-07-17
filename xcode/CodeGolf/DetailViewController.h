//
//  DetailViewController.h
//  CodeGolf
//
//  Created by Bison Zhang on 17/07/12.
//  Copyright (c) 2012 TT-Golf.mobi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
