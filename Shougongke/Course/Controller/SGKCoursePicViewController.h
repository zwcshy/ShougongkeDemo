//
//  SGKCoursePicViewController.h
//  Shougongke
//
//  Created by 周德艺 on 16/5/25.
//  Copyright © 2016年 周德艺. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SGKPicViewControllerDataModel.h"

@interface SGKCoursePicViewController : UIViewController

@property (nonatomic, strong) SGKPicViewControllerDataModel *dataModel;
- (void)configureMenuView;

@end
