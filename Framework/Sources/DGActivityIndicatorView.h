//
//  DGActivityIndicatorView.h
//  DGActivityIndicatorExample
//
//  Created by Danil Gontovnik on 5/23/15.
//  Copyright (c) 2015 Danil Gontovnik. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for DGActivityIndicator.
FOUNDATION_EXPORT double DGActivityIndicatorVersionNumber;

//! Project version string for DGActivityIndicator.
FOUNDATION_EXPORT const unsigned char DGActivityIndicatorVersionString[];

typedef NS_ENUM(NSUInteger, DGActivityIndicatorAnimationType) {
    DGActivityIndicatorAnimationTypeNineDots,
    DGActivityIndicatorAnimationTypeTriplePulse,
    DGActivityIndicatorAnimationTypeFiveDots,
    DGActivityIndicatorAnimationTypeRotatingSquares,
    DGActivityIndicatorAnimationTypeDoubleBounce,
    DGActivityIndicatorAnimationTypeTwoDots,
    DGActivityIndicatorAnimationTypeThreeDots,
    DGActivityIndicatorAnimationTypeBallPulse,
    DGActivityIndicatorAnimationTypeBallClipRotate,
    DGActivityIndicatorAnimationTypeBallClipRotatePulse,
    DGActivityIndicatorAnimationTypeBallClipRotateMultiple,
    DGActivityIndicatorAnimationTypeBallRotate,
    DGActivityIndicatorAnimationTypeBallZigZag,
    DGActivityIndicatorAnimationTypeBallZigZagDeflect,
    DGActivityIndicatorAnimationTypeBallTrianglePath,
    DGActivityIndicatorAnimationTypeBallScale,
    DGActivityIndicatorAnimationTypeLineScale,
    DGActivityIndicatorAnimationTypeLineScaleParty,
    DGActivityIndicatorAnimationTypeBallScaleMultiple,
    DGActivityIndicatorAnimationTypeBallPulseSync,
    DGActivityIndicatorAnimationTypeBallBeat,
    DGActivityIndicatorAnimationTypeLineScalePulseOut,
    DGActivityIndicatorAnimationTypeLineScalePulseOutRapid,
    DGActivityIndicatorAnimationTypeBallScaleRipple,
    DGActivityIndicatorAnimationTypeBallScaleRippleMultiple,
    DGActivityIndicatorAnimationTypeTriangleSkewSpin,
    DGActivityIndicatorAnimationTypeBallGridBeat,
    DGActivityIndicatorAnimationTypeBallGridPulse,
    DGActivityIndicatorAnimationTypeRotatingSandglass,
    DGActivityIndicatorAnimationTypeRotatingTrigons,
    DGActivityIndicatorAnimationTypeTripleRings,
    DGActivityIndicatorAnimationTypeCookieTerminator,
    DGActivityIndicatorAnimationTypeBallSpinFadeLoader
};

IB_DESIGNABLE
@interface DGActivityIndicatorView : UIView

- (id)initWithType:(DGActivityIndicatorAnimationType)type;
- (id)initWithType:(DGActivityIndicatorAnimationType)type tintColor:(UIColor *)tintColor;
- (id)initWithType:(DGActivityIndicatorAnimationType)type tintColor:(UIColor *)tintColor size:(CGFloat)size;


#if TARGET_INTERFACE_BUILDER
@property (nonatomic, assign) IBInspectable NSInteger type;
#else
@property (nonatomic, assign) DGActivityIndicatorAnimationType type;
#endif

@property (nonatomic) CGFloat size;

@property (nonatomic, readonly, getter=isAnimating) IBInspectable BOOL animating;

- (void)startAnimating;
- (void)stopAnimating;

@end
