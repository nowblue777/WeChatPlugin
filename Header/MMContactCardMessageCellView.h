//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMMessageCellView.h"

@class MMAvatarImageView, MMContactCardData, MMView, NSString, NSTextField;

__attribute__((visibility("hidden")))
@interface MMContactCardMessageCellView : MMMessageCellView
{
    MMContactCardData *_contactCardData;
    MMView *_containerView;
    MMAvatarImageView *_contactCardAvatar;
    NSTextField *_contactCardNickName;
    NSTextField *_contactCardUserName;
    NSString *_stripeHeading;
}

+ (double)cellHeightWithMessage:(id)arg1 constrainedToWidth:(double)arg2;
@property(retain, nonatomic) NSString *stripeHeading; // @synthesize stripeHeading=_stripeHeading;
@property(retain, nonatomic) NSTextField *contactCardUserName; // @synthesize contactCardUserName=_contactCardUserName;
@property(retain, nonatomic) NSTextField *contactCardNickName; // @synthesize contactCardNickName=_contactCardNickName;
@property(retain, nonatomic) MMAvatarImageView *contactCardAvatar; // @synthesize contactCardAvatar=_contactCardAvatar;
@property(retain, nonatomic) MMView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) MMContactCardData *contactCardData; // @synthesize contactCardData=_contactCardData;
- (void).cxx_destruct;
- (void)setChoosable:(BOOL)arg1;
- (BOOL)allowChoose;
- (void)showProfile:(unsigned long long)arg1;
- (void)sendMessage:(id)arg1;
- (BOOL)allowContextMenuForEvent:(id)arg1;
- (BOOL)allowCopy;
- (void)writeIntoPasteboard:(id)arg1 orItem:(id)arg2 provideDataForType:(id)arg3;
- (id)draggablePasteboardTypes;
- (id)draggingImage;
- (BOOL)draggingEnabled;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (struct CGRect)clickableArea;
- (void)drawRect:(struct CGRect)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (struct CGRect)bubbleFrame;
- (void)populateWithMessage:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

