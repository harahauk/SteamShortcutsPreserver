//
//  SteamShortcutsPreserverAppDelegate.h
//  SteamShortcutsPreserver
//
//  Created by Harald Hauknes on 6/3/11.
//  Copyright 2011 NTNU. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface SteamShortcutsPreserverAppDelegate : NSObject <NSApplicationDelegate> {
@private
    NSWindow *window;

    IBOutlet NSTextField *words;
}
- (IBAction)fixShortcuts:(id)sender;
- (BOOL) steamPathIsCorrect:(NSMutableString *)steam_path;
- (BOOL)backupFileExists:(NSMutableString *)backup_path;

@property (assign) IBOutlet NSWindow *window;

@end
