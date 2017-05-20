//
//  IndicatorViewController.m
//  DGActivityIndicator
//
//  Created by Frédéric Humbert-Droz on 20.05.17.
//
//

#import "SingleIndicatorViewController.h"

#import "DGActivityIndicatorView.h"

@interface SingleIndicatorViewController ()

@property (nonatomic, weak) IBOutlet UIButton *toggleAnimationStateButton;
@property (nonatomic, weak) IBOutlet UILabel *animationTypeLabel;

@property (nonatomic, weak) IBOutlet DGActivityIndicatorView *indicatorView;

@end

@implementation SingleIndicatorViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    [self updateInterface];
}

- (void)updateInterface
{
    self.animationTypeLabel.text = [NSString stringWithFormat:@"Animation %@", @(self.indicatorView.type)];
    
    NSString *title = self.indicatorView.isAnimating ? @"Stop animation" : @"Start animation";
    [self.toggleAnimationStateButton setTitle:title forState:UIControlStateNormal];
}



#pragma mark - Actions

- (IBAction)toggleAnimation:(id)sender
{
    if (self.indicatorView.animating) {
        [self.indicatorView stopAnimating];
    } else {
        [self.indicatorView startAnimating];
    }
    
    [self updateInterface];
}

- (IBAction)updateAnimationType:(id)sender
{
    NSUInteger currentType = self.indicatorView.type;
    NSUInteger newType = (currentType + 1) % 33;
    
    [self.indicatorView setType:(DGActivityIndicatorAnimationType)newType];
    [self updateInterface];
}

@end
