/**
 * Tae Won Ha — @hataewon
 *
 * http://taewon.de
 * http://qvacua.com
 *
 * See LICENSE
 */

#import <Cocoa/Cocoa.h>


@class VRFileItem;
@class VRFileItemManager;


@interface VRFileBrowserView : NSView <NSOutlineViewDataSource, NSOutlineViewDelegate>

@property (weak) NSFileManager *fileManager;
@property (weak) VRFileItemManager *fileItemManager;
@property (copy) NSURL *rootUrl;


#pragma mark Public
- (instancetype)initWithRootUrl:(NSURL *)rootUrl;

#pragma mark NSOutlineViewDataSource
- (NSInteger)outlineView:(NSOutlineView *)outlineView numberOfChildrenOfItem:(id)item;
- (id)outlineView:(NSOutlineView *)outlineView child:(NSInteger)index1 ofItem:(id)item;
- (BOOL)outlineView:(NSOutlineView *)outlineView isItemExpandable:(id)item;
- (id)outlineView:(NSOutlineView *)outlineView objectValueForTableColumn:(NSTableColumn *)tableColumn
           byItem:(id)item;

#pragma mark NSView
- (BOOL)mouseDownCanMoveWindow;

- (void)setUp;
@end
