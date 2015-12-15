//
//  VVBaseCommenter.h
//  VVDocumenter-Xcode
//
//  Created by 王 巍 on 13-7-17.
//
//  Copyright (c) 2015 Wei Wang <onevcat@gmail.com>
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.

#import <Foundation/Foundation.h>

@interface VVBaseCommenter : NSObject

@property (nonatomic, copy) NSString *indent;
@property (nonatomic, copy) NSString *code;
@property (nonatomic, strong) NSMutableArray *arguments;
@property (nonatomic, assign) BOOL hasReturn;
@property (nonatomic, assign) BOOL hasThrows;

-(instancetype) initWithIndentString:(NSString *)indent codeString:(NSString *)code;

-(NSString *) document;

-(NSString *) documentForC;
-(NSString *) documentForSwift;
-(NSString *) documentForSwiftEnum;

-(NSString *) documentForXuyang;//我的自定义

-(void) parseArgumentsInputArgs:(NSString *)rawArgsCode;

-(BOOL) shouldComment;

// Comment methods
-(NSString *) startComment;
-(NSString *) startCommentWithDescriptionTag:(NSString *)tag;
-(NSString *) argumentsComment;
-(NSString *) endComment;
-(NSString *) returnComment;
-(NSString *) sinceComment;

@end
