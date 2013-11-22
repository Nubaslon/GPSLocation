//
//  ViewController.h
//  GPSLocation
//
//  Created by SAMO Soft on 22.11.13.
//  Copyright (c) 2013 Nubaslon. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface GPSLocationViewController : UIViewController <CLLocationManagerDelegate>
@property (weak, nonatomic) IBOutlet UILabel *latitudeLabel;
@property (weak, nonatomic) IBOutlet UILabel *longitudeLabel;
@property (weak, nonatomic) IBOutlet UILabel *addressLabel;
@property (weak, nonatomic) IBOutlet UILabel *distanseLabel;
- (IBAction)getCurrentLocation:(id)sender;

@end
