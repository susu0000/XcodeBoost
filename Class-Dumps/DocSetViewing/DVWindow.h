//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindow.h"

@class WVPageFindWebView;

@interface DVWindow : NSWindow
{
    id _mainController;
    WVPageFindWebView *webView;
    BOOL _proxyWaitingForDragEvent;
    BOOL _proxyButtonWasDisabled;
    BOOL _firstResponderIsLocked;
}

@property(retain, nonatomic) WVPageFindWebView *webView; // @synthesize webView;
@property(retain, nonatomic) id mainController; // @synthesize mainController=_mainController;
- (void)PBX_nestRight:(id)arg1;
- (void)PBX_nestLeft:(id)arg1;
- (void)enterSelection:(id)arg1;
- (void)findSelectionInFile:(id)arg1;
- (void)findPrevious:(id)arg1;
- (void)findNext:(id)arg1;
- (void)showIncrementalFindBar:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)swipeWithEvent:(id)arg1;
- (void)selectKeyViewFollowingView:(id)arg1;
- (void)selectKeyViewPrecedingView:(id)arg1;
- (void)activateFromWindowMenu:(id)arg1;
- (void)activateFromDockMenu:(id)arg1;
- (void)setFirstResponderIsLocked:(BOOL)arg1;
- (BOOL)firstResponderIsLocked;
- (void)sendEvent:(id)arg1;
- (BOOL)makeFirstResponder:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;

@end
