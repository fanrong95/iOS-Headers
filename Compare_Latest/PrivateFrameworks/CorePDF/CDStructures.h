/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark Named Structures

struct CGAffineTransform {
    float a;
    float b;
    float c;
    float d;
    float tx;
    float ty;
};

struct CGColor;

struct CGColorSpace;

struct CGImage;

struct CGPDFContentStream;

struct CGPDFDictionary;

struct CGPDFStream;

struct CGPath;

struct CGPoint {
    float x;
    float y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    float width;
    float height;
};

struct CPInlineContainer {
    unsigned int _field1;
    id _field2;
    struct CPInlineContainer *_field3;
};

struct CPListInfo {
    unsigned int _field1;
    unsigned int _field2;
    struct CGRect _field3;
    struct __CFString *_field4;
    int _field5;
    unsigned int _field6;
    unsigned int _field7;
    int _field8;
    _Bool _field9;
    _Bool _field10;
    _Bool _field11;
    void *_field12;
};

struct CPMultiUnicodes;

struct CPPDFChar {
    struct CPPDFObject _field1;
    unsigned short _field2;
    unsigned short _field3;
    struct CGPoint _field4;
    struct CGSize _field5;
    struct CPPDFStyle *_field6;
    float _field7;
    int _field8;
};

struct CPPDFClipBuffer {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int *_field3;
    unsigned int _field4;
};

struct CPPDFContext {
    struct CGRect _field1;
    unsigned int _field2;
    struct CPPDFGraphicState *_field3;
    struct CPPDFGraphicState *_field4;
    struct CGPDFContentStream *_field5[250];
    unsigned int _field6;
    struct PrimitiveBuffer _field7;
    struct PrimitiveBuffer _field8;
    struct PrimitiveBuffer _field9;
    struct CPPDFClipBuffer _field10;
    struct __CFDictionary *_field11;
    struct __CFDictionary *_field12;
    struct __CFDictionary *_field13;
    struct CPPDFStyle *_field14;
    int *_field15;
    unsigned int _field16;
    unsigned int _field17;
    unsigned int _field18;
    int _field19;
    struct CPMultiUnicodes *_field20;
    int _field21;
    int _field22;
    unsigned int *_field23;
    struct CGPath **_field24;
    char _field25;
};

struct CPPDFGraphicState;

struct CPPDFImage {
    struct CPPDFObject _field1;
    unsigned int _field2;
    struct CGPDFStream *_field3;
    int _field4;
    struct CGImage *_field5;
    struct CGAffineTransform _field6;
    struct CGPDFDictionary *_field7;
    float _field8;
    struct CGColor *_field9;
};

struct CPPDFObject {
    struct CGRect _field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct CPPDFShape {
    struct CPPDFObject _field1;
    unsigned int _field2;
    struct CPPDFStyle *_field3;
    int _field4;
    struct CGPath *_field5;
    char _field6;
    struct CGAffineTransform _field7;
    struct CGAffineTransform _field8;
};

struct CPPDFStyle {
    struct CGColor *_field1;
    struct CGColorSpace *_field2;
    struct CGColor *_field3;
    struct CGColorSpace *_field4;
    float _field5;
    float _field6;
    unsigned char _field7;
    unsigned char _field8;
    int _field9;
    float _field10;
    id _field11;
    float _field12;
    union CGPDFObject *_field13;
    union CGPDFObject *_field14;
    struct CGColor *_field15;
    struct CPPDFStyle *_field16;
};

struct PrimitiveBuffer {
    void *_field1;
    void *_field2;
    void *_field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    int _field8;
};

struct _NSRange {
    unsigned int _field1;
    unsigned int _field2;
};

struct __CFDictionary;

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int _field1;
    double _field2;
    double _field3;
    double _field4;
} CDStruct_2a61e2ef;

typedef struct {
    double _field1;
    unsigned int _field2;
    double _field3;
    double _field4;
    unsigned int _field5;
    double _field6;
    double _field7;
    char _field8;
    double _field9;
    double _field10;
    double _field11;
    double _field12;
    double _field13;
    double _field14;
    double _field15;
    double _field16;
    double _field17;
    double _field18;
    double _field19;
    char _field20;
} CDStruct_071390ef;

typedef struct {
    float _field1;
    float _field2;
} CDStruct_b2fbf00d;

typedef struct {
    int location;
    int length;
} CDStruct_dff5684f;

typedef struct CDStruct_183601bc;

typedef struct {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    int _field5;
    int *_field6;
    struct CPPDFStyle *_field7;
} CDStruct_efade31e;

typedef struct {
    struct CGPoint _field1;
    struct CGPoint _field2;
    struct CGPoint _field3;
    struct CGPoint _field4;
} CDStruct_95077174;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    int _field3;
    int _field4;
    struct CGRect _field5;
} CDStruct_a823b51b;

typedef struct {
    float fontStretch;
    float fontWeight;
    unsigned int flags;
    struct CGRect fontBBox;
    float italicAngle;
    float ascent;
    float descent;
    float leading;
    float capHeight;
    float xHeight;
    float stemV;
    float stemH;
    float avgWidth;
    float maxWidth;
    float missingWidth;
    float spaceWidth;
    float underlinePosition;
    float underlineThickness;
} CDStruct_8bce2348;

#pragma mark Named Unions

union CGPDFObject;

