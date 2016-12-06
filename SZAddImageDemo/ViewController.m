//
//  ViewController.m
//  SZAddImageDemo
//
//  Created by 唯你 on 16/12/6.
//  Copyright © 2016年 唯你. All rights reserved.
//

#import "ViewController.h"
#import "SZAddImage.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    SZAddImage *sz = [[SZAddImage alloc]init];
    [self.view addSubview:sz];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
