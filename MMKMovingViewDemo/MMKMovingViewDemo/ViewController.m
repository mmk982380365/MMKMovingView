//
//  ViewController.m
//  MMKMovingViewDemo
//
//  Created by 马鸣坤 on 15/11/21.
//  Copyright (c) 2015年 lamco. All rights reserved.
//

#import "ViewController.h"
#import "MMKMovingView.h"

@interface ViewController ()<MMKMovingViewDelegate>
@property (strong,nonatomic) MMKMovingView *movingView;
@property (strong, nonatomic) IBOutlet UILabel *countLbl;
@end

@implementation ViewController
static int count=0;
- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    self.movingView=[[MMKMovingView alloc] initWithFrame:CGRectMake(200, 200, 40, 40) buttonType:UIButtonTypeCustom];
    [self.movingView setImage:[UIImage imageNamed:@"[$UZH@%)WX@~RTS6EBMNP2P.jpg"] forState:UIControlStateNormal];
    self.movingView.delegate=self;
    self.movingView.allowAdsorption=NO;
    [self.view addSubview:self.movingView];
}
-(void)buttonAction:(MMKMovingView *)moving{
    count++;
    self.countLbl.text=[NSString stringWithFormat:@"共计%d次",count];
}
- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
