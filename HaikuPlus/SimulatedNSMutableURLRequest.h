/*
 *
 * Copyright 2014 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import <Foundation/Foundation.h>

@interface SimulatedNSMutableURLRequest : NSMutableURLRequest

@property(nonatomic, strong) id object;
@property(nonatomic, strong) NSError *error;

/**
 * The simulated request is told how the request should be fulfilled. If an error is not nil,
 * then the error will be returned. Otherwise, the object will be returned.
 *
 * @param object The object that should be returned from the network request or nil.
 * @param error The error that should be returned or nil.
 */
- (void)setResponse:(id)object withError:(NSError *)error;

@end
