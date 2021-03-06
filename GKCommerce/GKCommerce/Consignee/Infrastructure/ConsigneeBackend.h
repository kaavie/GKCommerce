//
//  ConsigneeBackend.h
//  GKCommerce
//
//  Created by 小悟空 on 14/11/7.
//  Copyright (c) 2014年 GKCommerce. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Consignee.h"
#import "AreaJSONAssembler.h"

@class ConsigneeBackend;

@protocol ConsigneeBackendDelegate <NSObject>

@optional
- (void)consigneeBackend:(ConsigneeBackend *)aConsigneeBackend
         didReceiveAreas:(NSArray *)areas;
@end


@interface ConsigneeBackend : NSObject

@property (strong, nonatomic) id<ConsigneeBackendDelegate> delegate;
@property (strong, nonatomic) AreaJSONAssembler *areaJSONAssembler;
- (void)requestAreas;
@end
