//
//  DemoViewController.h
//  MGBox2 Demo App
//
//  Created by Matt Greenfield on 25/09/12.
//  Copyright (c) 2012 Big Paua. All rights reserved.
//

#import <AssetsLibrary/AssetsLibrary.h>

@class MGScrollView, PhotoBox;

@interface DemoViewController : UIViewController {
    ALAssetsLibrary *assetsLibrary;
    NSMutableArray *groups;
}

@property (nonatomic, weak) IBOutlet MGScrollView *scroller;

- (BOOL)allPhotosLoaded;

@end
