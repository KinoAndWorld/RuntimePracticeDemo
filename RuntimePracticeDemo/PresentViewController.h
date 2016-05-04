//
//  PresentViewController.h
//  RuntimePracticeDemo
//
//  Created by kino on 16/5/4.
//  Copyright © 2016年 kino. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum {
    ShowTypeLoading,
    ShowTypeLoadingAndBlank,
    ShowTypeLoadingAndFaiture
}ShowType;

@interface PresentViewController : UIViewController

@property (assign, nonatomic) ShowType showType;

@end
