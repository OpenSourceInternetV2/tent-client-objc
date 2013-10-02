//
//  WebViewController.h
//  TentClient
//
//  Created by Jesse Stuart on 10/1/13.
//  Copyright (c) 2013 Tent.is, LLC. All rights reserved.
//  Use of this source code is governed by a BSD-style license that can be found in the LICENSE file.
//

#import <UIKit/UIKit.h>

@interface WebViewController : UIViewController <UIWebViewDelegate>

@property (nonatomic) UIWebView *webView;

- (void)loadRequest:(NSURLRequest *)request withCompletionBlock:(void (^)(NSURLRequest *))completion;

@end