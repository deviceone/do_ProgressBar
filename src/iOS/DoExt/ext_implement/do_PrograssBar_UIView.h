//
//  do_PrograssBar_View.h
//  DoExt_UI
//
//  Created by @userName on @time.
//  Copyright (c) 2015年 DoExt. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "do_PrograssBar_IView.h"
#import "do_PrograssBar_UIModel.h"
#import "doIUIModuleView.h"

@interface do_PrograssBar_UIView : UIView<do_PrograssBar_IView, doIUIModuleView>
//可根据具体实现替换UIView
{
	@private
		__weak do_PrograssBar_UIModel *_model;
}

@end
