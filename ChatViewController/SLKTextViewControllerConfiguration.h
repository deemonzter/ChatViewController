//
//  SLKTextViewControllerConfiguration.h
//  Pods
//
//  Created by Joseph Daryl Locsin on 03/08/2017.
//
//

#import <Foundation/Foundation.h>


@class SLKTextInputbar;

@interface SLKTextViewControllerConfiguration : NSObject

@property (nonatomic, retain) SLKTextInputbar * _Nullable textInputBarConfiguration;

+ (SLKTextViewControllerConfiguration * _Nonnull)defaultConfiguration;

@end
