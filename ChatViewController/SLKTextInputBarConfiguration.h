//
//  SLKTextInputBarConfiguration.h
//  Pods
//
//  Created by Joseph Daryl Locsin on 03/08/2017.
//
//

#import <Foundation/Foundation.h>
@import UIKit;

@interface SLKTextInputBarConfiguration : NSObject

@property (nonatomic, retain) UIColor * _Nullable backgroundColor;

// textView
@property (nonatomic, assign) CGFloat textViewBorderWidth; // default is 0.5
@property (nonatomic, retain) UIColor * _Nullable textViewBorderColor;

@property (nonatomic, assign) UIButtonType buttonTypeRight; // default is System
@property (nonatomic, assign) BOOL isLeftButtonHidden; // default is YES

@end
