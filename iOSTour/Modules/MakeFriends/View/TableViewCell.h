//
//  TableViewCell.h
//  UniversalApp
//
//  Created by Wesly on 2017/8/1.
//  Copyright © 2017年 Wesly. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CellModel.h"

@interface TableViewCell : UITableViewCell

@property (nonatomic,strong) CellModel * model;
@end
