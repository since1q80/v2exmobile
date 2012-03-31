//
//  VMFavoriteTopicsLoader.h
//  v2exmobile
//
//  Created by Xu Ke <tuoxie007@gmail.com> on 3/19/12.
//  Copyright (c) 2012 Xu Ke.
//  Released under the MIT Licenses.
//

#import "VMLoader.h"

@protocol FavoriteTopicsLoaderDelegate;
@interface VMFavoriteTopicsLoader : VMLoader

- (void)loadFavoriteTopics;

@end

@protocol FavoriteTopicsLoaderDelegate <LoaderDalegate>

- (void)didFinishedLoadingWithTopics:(id)topics;

@end