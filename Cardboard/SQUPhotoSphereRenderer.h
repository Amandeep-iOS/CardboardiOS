//
//  SQUPhotoSphereRenderer.h
//  Cardboard
//
//  Created by Tristan Seifert on 1/17/15.
//  Copyright (c) 2015 Tristan Seifert. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "CardboardKit.h"

@interface SQUPhotoSphereRenderer : NSObject <SQURenderDelegate> {
	SCNSphere *_sphere;
}

@end