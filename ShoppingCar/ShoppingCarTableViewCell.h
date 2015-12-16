//
//  ShoppingCarTableViewCell.h
//  ShoppingCar
//
//  Created by admin on 15/12/14.
//  Copyright © 2015年 刘怀轩. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ShoppingCarTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *goodsImage;
@property (weak, nonatomic) IBOutlet UILabel *goodsName;
- (IBAction)minus:(id)sender;
@property (weak, nonatomic) IBOutlet UITextField *goodsNum;

- (IBAction)add:(id)sender;
- (IBAction)trash:(id)sender;
@property (weak, nonatomic) IBOutlet UILabel *goodsPrice;
@property (weak, nonatomic) IBOutlet UIButton *total;

@end
