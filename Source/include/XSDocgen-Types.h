/*******************************************************************************
 * The MIT License (MIT)
 * 
 * Copyright (c) 2014 Jean-David Gadina - www-xs-labs.com
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
 ******************************************************************************/

/* $Id$ */

#ifndef _XSDOCGEN_TYPES_H_
#define _XSDOCGEN_TYPES_H_

#include <stdbool.h>

typedef struct XSDocgen_PageStruct
{
    const char                 * title;
    const char                 * path;
    struct XSDocgen_PageStruct * next;
}
XSDocgen_Page;

typedef struct
{
    bool              help;
    bool              version;
    bool              silent;
    bool              cpp;
    char              _pad_0[ 4 ];
    const char      * headerDoc;
    const char      * source;
    const char      * output;
    const char      * projectName;
    const char      * projectCopyright;
    const char      * projectVersion;
    const char      * projectTimezone;
    const char      * companyName;
    const char      * companyURL;
    const char      * pageHome;
    XSDocgen_Page   * pages;
    const char      * sourceRootPrefix;
    const char      * classPrefix;
    const char      * functionsPrefix;
    const char      * typesPrefix;
}
XSDocgen_Arguments;

#endif /* _XSDOCGEN_TYPES_H_ */
