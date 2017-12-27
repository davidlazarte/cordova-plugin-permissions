//
//  Created by Douglas Frari on 7/13/15.
//
//  The MIT License (MIT)
//
//  Copyright (c) 2015 Douglas Frari
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <EventKit/EventKit.h>
#import <AssetsLibrary/AssetsLibrary.h>
#import <AVFoundation/AVFoundation.h>
#import <CoreLocation/CoreLocation.h>
#import <Cordova/CDV.h>


/**
 * Type for request the location authorization (AlwaysAuthorization or WhenInUseAuthorization)
 */
enum AuthorizeRequestType {
    AuthorizeRequestTypeAlwaysAuthorization = 1,
    AuthorizeRequestTypeWhenInUseAuthorization = 2    
};


@interface IOSCheckPermissions : CDVPlugin

/**
 *  Get the global instance of ios-check-permission library.
 *
 *  @return instance of IOSCheckPermissions
 */
+ (instancetype) globalInstance;


/**
 *  Enable logs for using the library with monitoring of your functionality. 
 *  The default is NO.
 *
 *  @param enableLogs YES for enable or NO to disable logs.
 */
- (void)enableCheckPermissionLogs:(BOOL)enableLogs;

- (void)checkPermissionAccessForCalendar:(CDVInvokedUrlCommand*)command;
- (void)checkPermissionAccessForReminder:(CDVInvokedUrlCommand*)command;
- (void)checkPermissionAccessForGallery:(CDVInvokedUrlCommand*)command;
- (void)checkPermissionAccessForLocation:(CDVInvokedUrlCommand*)command;

@end
