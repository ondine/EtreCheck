/***********************************************************************
 ** Etresoft
 ** John Daniel
 ** Copyright (c) 2014. All rights reserved.
 **********************************************************************/

#import <Foundation/Foundation.h>

// Perform the check.
@interface Checker : NSObject
  {
  NSMutableDictionary * results;
  NSMutableDictionary * completed;
  dispatch_queue_t queue;
  }

// Do the check and return the report.
- (NSAttributedString *) check;

@end
