//
//  QuickDialogLocalization.h
//  QuickDialog
//
//  Created by Martin Umgeher on 8/2/13.
//
//

#import <Foundation/Foundation.h>

#undef NSLocalizedString
#define NSLocalizedString(key,_comment) (QuickDialogLocalizationBlock != NULL ? QuickDialogLocalizationBlock(key, _comment) : [[NSBundle mainBundle] localizedStringForKey:(key) value:@"" table:nil])

extern NSString *(^QuickDialogLocalizationBlock)(NSString *key, NSString *comment);