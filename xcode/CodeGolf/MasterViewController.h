//
//  MasterViewController.h
//  CodeGolf
//
//  Created by Bison Zhang on 17/07/12.
//  Copyright (c) 2012 TT-Golf.mobi. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
