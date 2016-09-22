//
//  SSCalendarYearViewController.h
//  Pods
//
//  Created by Steven Preston on 7/29/13.
//  Copyright (c) 2013 Stellar16. All rights reserved.
//

@interface SSCalendarYearViewController : NSObject <UICollectionViewDataSource>

@property (nonatomic, copy) NSArray *years;
@property (nonatomic, weak) UICollectionView *view;

- (id)initWithView:(UICollectionView *)view;

@end
