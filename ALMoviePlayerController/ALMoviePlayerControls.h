//
//  ALMoviePlayerControls.h
//  ALMoviePlayerController
//
//  Created by Anthony Lobianco on 10/8/13.
//  Copyright (c) 2013 Anthony Lobianco. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MediaPlayer/MPMoviePlayerController.h>
#import "ALMoviePlayerController.h"

typedef enum {
    ALMoviePlayerControlsStyleEmbedded,
    ALMoviePlayerControlsStyleFullscreen,
    ALMoviePlayerControlsStyleNone,
} ALMoviePlayerControlsStyle;

typedef enum {
    ALMoviePlayerControlsStateIdle,
    ALMoviePlayerControlsStateLoading,
    ALMoviePlayerControlsStateReady,
} ALMoviePlayerControlsState;

@interface ALMoviePlayerControls : UIView

@property (nonatomic, assign) ALMoviePlayerControlsStyle style;
@property (nonatomic, readonly) ALMoviePlayerControlsState state;
@property (nonatomic, assign) NSTimeInterval fadeDelay;
@property (nonatomic) BOOL timeRemainingDecrements;
@property (nonatomic, readonly, getter = isShowing) BOOL showing;

- (id)initWithMoviePlayer:(ALMoviePlayerController *)moviePlayer style:(ALMoviePlayerControlsStyle)style;

@end

@interface ALMoviePlayerControlsBar : UIView

@end