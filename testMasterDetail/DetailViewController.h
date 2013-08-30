//
//  DetailViewController.h
//  testMasterDetail
//
//  Created by qiaorujia on 8/21/13.
//  Copyright (c) 2013 qiaorujia. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
