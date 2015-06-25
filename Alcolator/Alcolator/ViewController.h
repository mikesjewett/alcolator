//
//  ViewController.h
//  Alcolator
//
//  Created by Mike Jewett on 6/15/15.
//  Copyright (c) 2015 Mike Jewett. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *beerPercentTextField;
@property (weak, nonatomic) IBOutlet UISlider *beerCountSlider;
@property (weak, nonatomic) IBOutlet UILabel *resultLabel;

- (float)numberOfContainersForEquivalentAlcoholAmount:(int)numberOfDrinks;
- (void)buttonPressed:(UIButton *)sender;

@end

