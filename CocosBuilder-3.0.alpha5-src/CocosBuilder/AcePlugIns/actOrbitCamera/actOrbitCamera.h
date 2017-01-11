/*
 * CocosBuilder: http://www.cocosbuilder.com
 *
 * Copyright (c) 2012 Zynga Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#import "cocos2d.h"

typedef struct  {
    CGPoint position;
    float scaleX;
    float scaleY;
    float skewX;
    float skewY;
    float rotationX;
    float rotationY;
    BOOL visible;
    
} _ParentStartInfo;

@interface actOrbitCamera : CCNode
{
    float m_time;
    float m_radius;
    float m_deltaRadius;
    float m_angleZ;
    float m_deltaAngleZ;
    float m_angleX;
    float m_deltaAngleX;
    
    BOOL actionPlay;
    
    _ParentStartInfo parentStartInfo;
}


@property (nonatomic,assign) float m_time;
@property (nonatomic,assign) float m_radius;
@property (nonatomic,assign) float m_deltaRadius;
@property (nonatomic,assign) float m_angleZ;
@property (nonatomic,assign) float m_deltaAngleZ;
@property (nonatomic,assign) float m_angleX;
@property (nonatomic,assign) float m_deltaAngleX;

@property (nonatomic,assign) BOOL actionPlay;

@end