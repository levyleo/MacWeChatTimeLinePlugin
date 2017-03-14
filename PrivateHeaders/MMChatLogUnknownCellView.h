//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMChatLogBaseCellView.h"

@class MMTextView;

@interface MMChatLogUnknownCellView : MMChatLogBaseCellView
{
    MMTextView *_unknownTipsTextView;
}

+ (double)contentHeightWithAttrString:(id)arg1 constrainedToWidth:(double)arg2;
+ (id)attrStringWithDataField:(id)arg1;
+ (double)cellHeightWithFavItemDataField:(id)arg1 parentMessage:(id)arg2 parentFavItem:(id)arg3 constrainedToWidth:(double)arg4;
@property(retain, nonatomic) MMTextView *unknownTipsTextView; // @synthesize unknownTipsTextView=_unknownTipsTextView;
- (void).cxx_destruct;
- (void)populateWithFavItemDataField:(id)arg1;
- (void)populateWithFavItemDataField:(id)arg1 parentMessage:(id)arg2;
- (void)populateWithFavItemDataField:(id)arg1 parentFavItem:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
