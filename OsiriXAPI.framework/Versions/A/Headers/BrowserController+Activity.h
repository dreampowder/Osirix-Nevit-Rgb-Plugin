/*=========================================================================
 Program:   OsiriX
 
 Copyright (c) OsiriX Team
 All rights reserved.
 Distributed under GNU - LGPL
 
 See http://www.osirix-viewer.com/copyright.html for details.
 
 This software is distributed WITHOUT ANY WARRANTY; without even
 the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 PURPOSE.
 =========================================================================*/

#import "BrowserController.h"
#import "NoVibrancyTableView.h"

@interface BrowserController (Activity)

-(void)awakeActivity;
-(void)deallocActivity;

@end


@interface ThreadsTableView : NoVibrancyTableView
@end
