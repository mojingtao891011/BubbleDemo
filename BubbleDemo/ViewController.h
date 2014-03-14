//
//  ViewController.h
//  BubbleDemo
//
//  Created by user on 13-11-18.
//  Copyright (c) 2013年 user. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SRWebSocket.h"
@interface ViewController : UIViewController<UITextFieldDelegate,UITableViewDataSource,UITableViewDelegate,SRWebSocketDelegate>
{
    UIToolbar   *_toolBar;
    UITextField *_textField;
    UITableView *_tableView;
    BOOL         _isSendByMe;
    CGFloat _keyboardDistanceToMove;
    NSMutableArray *_array;

    SRWebSocket *_webSocket;
}

@end
