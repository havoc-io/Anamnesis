/*
 * Copyright (c) 2010 Jacob Howard
 * 
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following
 * conditions:
 
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

#import <Cocoa/Cocoa.h>

//Category that will allow us to swizzle and wrap methods in
//TabBarView.  Unforunately I can't just make this a category
//of NSTabView because TabBarView doesn't inherit from NSTabView.
//Its inheritence is:
// TabBarView : SlidingViewsBar : BarBackground : NSView : NSObject
//and TabBarView just implements NSTabViewDelegate.  I could have
//made this a category of NSView I guess, but after coming this far,
//why stop there?
@interface NSObject (ANCustomTabView)

+(void)ANSwizzleANCustomTabView;

//_AN_safari_ methods are not actually implemented, I just use them as handles for swizzling.
//_anamnesis_ methods are swizzling wrappers.
-(void)_AN_safari_tabViewDidChangeNumberOfTabViewItems:(id)arg1;
-(void)_anamnesis_tabViewDidChangeNumberOfTabViewItems:(id)arg1;

@end
