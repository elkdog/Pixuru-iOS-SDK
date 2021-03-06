//
//  PSDKMoveScaleViewController.h
//  PixuruSDK
//
//  Created by Skyler Whittlesey on 9/11/13.
//  Copyright (c) 2013 Skyler Whittlesey. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PSDKCustomButton;

@interface PSDKMoveScaleViewController : UIViewController

@property (strong, nonatomic) UIView *lowerButtonView;
@property (strong, nonatomic) PSDKCustomButton *rotateProductButton;
@property (strong, nonatomic) PSDKCustomButton *rotateImageButton;
@property (strong, nonatomic) UIView *scrollContainerView;
@property (strong, nonatomic) UIImageView *poweredPixView;

@property (nonatomic, strong) UIImage *rotateImage;

@end
