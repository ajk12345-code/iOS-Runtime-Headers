/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@class SCNView;

@interface SCNEventHandler : NSObject {
    id _reserved;
    SCNView *_view;
}

@property(readonly) SCNView * view;

- (void)cameraDidChange;
- (void)cameraWillChange;
- (void)dealloc;
- (id)gestureRecognizers;
- (id)init;
- (void)sceneDidChange;
- (void)sceneWillChange;
- (void)setView:(id)arg1;
- (id)view;
- (void)viewDidDraw;
- (void)viewWillDraw;
- (BOOL)wantsRedraw;

@end