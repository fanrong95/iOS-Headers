/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@class NSIndexSet, NSObject, NSWeakCallback;

#pragma mark Named Structures

struct CFURLProtocolImplementation_V0 {
    int _field1;
    void *_field2;
    void *_field3;
    void *_field4;
    void *_field5;
    void *_field6;
    void *_field7;
    void *_field8;
    void *_field9;
};

struct CGPoint {
    float _field1;
    float _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    float width;
    float height;
};

struct InternalInit {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
    char _field5;
    long long _field6;
};

struct NSSlice {
    void **items;
    char wantsStrong;
    char wantsWeak;
    char wantsARC;
    char shouldCopyIn;
    char usesStrong;
    char usesWeak;
    char usesARC;
    char usesSentinel;
    char pointerPersonality;
    char integerPersonality;
    char simpleReadClear;
    NSWeakCallback *callback;
    void *sizeFunction;
    void *hashFunction;
    void *isEqualFunction;
    void *describeFunction;
    void *acquireFunction;
    void *relinquishFunction;
    void *allocateFunction;
    void *freeFunction;
    void *readAt;
    void *clearAt;
    void *storeAt;
};

struct _NSLTToken {
    unsigned short _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned int _field4;
    union {
        void *_field1;
        struct {
            unsigned char _field1;
            unsigned char _field2;
        } _field2;
    } _field5;
};

struct _NSRange {
    unsigned int location;
    unsigned int length;
};

struct _NSRefCountedRunArray {
    void *_field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    struct _NSRunArrayItem _field8[0];
};

struct _NSRunArrayItem {
    unsigned int _field1;
    id _field2;
};

struct _NSSimpleAttributeDictionaryElement {
    unsigned int hash;
    id key;
    id value;
};

struct _URIParseInfo {
    int userinfoNameOffset;
    int userinfoPasswordOffset;
    int hostOffset;
    int portOffset;
    int pathOffset;
    int paramOffset;
    int queryOffset;
    int fragmentOffset;
    int endOffset;
    unsigned int schemeExists:1;
    unsigned int authorityExists:1;
    unsigned int userinfoNameExists:1;
    unsigned int userinfoPasswordExists:1;
    unsigned int hostExists:1;
    unsigned int portExists:1;
    unsigned int paramExists:1;
    unsigned int queryExists:1;
    unsigned int fragmentExists:1;
};

struct _ftsent {
    struct _ftsent *_field1;
    struct _ftsent *_field2;
    struct _ftsent *_field3;
    long _field4;
    void *_field5;
    char *_field6;
    char *_field7;
    int _field8;
    int _field9;
    unsigned short _field10;
    unsigned short _field11;
    unsigned long long _field12;
    int _field13;
    unsigned short _field14;
    short _field15;
    unsigned short _field16;
    unsigned short _field17;
    unsigned short _field18;
    struct stat *_field19;
    char _field20[1];
};

struct _xmlDoc;

struct _xmlHashTable;

struct _xmlNode;

struct _xmlParserCtxt {
    struct _xmlSAXHandler *_field1;
    void *_field2;
    struct _xmlDoc *_field3;
    int _field4;
    int _field5;
    char *_field6;
    char *_field7;
    int _field8;
    int _field9;
    struct _xmlParserInput *_field10;
    int _field11;
    int _field12;
    struct _xmlParserInput **_field13;
    struct _xmlNode *_field14;
    int _field15;
    int _field16;
    struct _xmlNode **_field17;
    int _field18;
    struct _xmlParserNodeInfoSeq {
        unsigned long _field1;
        unsigned long _field2;
        struct _xmlParserNodeInfo *_field3;
    } _field19;
    int _field20;
    int _field21;
    int _field22;
    int _field23;
    int _field24;
    int _field25;
    struct _xmlValidCtxt {
        void *_field1;
        void *_field2;
        void *_field3;
        struct _xmlNode *_field4;
        int _field5;
        int _field6;
        struct _xmlNode **_field7;
        unsigned int _field8;
        struct _xmlDoc *_field9;
        int _field10;
        struct _xmlValidState *_field11;
        int _field12;
        int _field13;
        struct _xmlValidState *_field14;
        struct _xmlAutomata *_field15;
        struct _xmlAutomataState *_field16;
    } _field26;
    int _field27;
    int _field28;
    char *_field29;
    char *_field30;
    int _field31;
    int _field32;
    char **_field33;
    long _field34;
    long _field35;
    int _field36;
    int _field37;
    int _field38;
    char *_field39;
    char *_field40;
    char *_field41;
    int *_field42;
    int _field43;
    int _field44;
    int *_field45;
    int _field46;
    struct _xmlParserInput *_field47;
    int _field48;
    int _field49;
    int _field50;
    int _field51;
    void *_field52;
    int _field53;
    int _field54;
    void *_field55;
    int _field56;
    int _field57;
    struct _xmlDict *_field58;
    char **_field59;
    int _field60;
    int _field61;
    char *_field62;
    char *_field63;
    char *_field64;
    int _field65;
    int _field66;
    int _field67;
    char **_field68;
    int *_field69;
    void **_field70;
    struct _xmlHashTable *_field71;
    struct _xmlHashTable *_field72;
    int _field73;
    int _field74;
    int _field75;
    int _field76;
    struct _xmlNode *_field77;
    int _field78;
    struct _xmlAttr *_field79;
    struct _xmlError {
        int _field1;
        int _field2;
        char *_field3;
        int _field4;
        char *_field5;
        int _field6;
        char *_field7;
        char *_field8;
        char *_field9;
        int _field10;
        int _field11;
        void *_field12;
        void *_field13;
    } _field80;
    int _field81;
    unsigned long _field82;
    unsigned long _field83;
    struct _xmlParserNodeInfo *_field84;
    int _field85;
    int _field86;
    struct _xmlParserNodeInfo *_field87;
    int _field88;
    unsigned long _field89;
};

struct _xmlParserInput;

struct _xmlParserNodeInfo;

struct _xmlSAXHandler {
    void *_field1;
    void *_field2;
    void *_field3;
    void *_field4;
    void *_field5;
    void *_field6;
    void *_field7;
    void *_field8;
    void *_field9;
    void *_field10;
    void *_field11;
    void *_field12;
    void *_field13;
    void *_field14;
    void *_field15;
    void *_field16;
    void *_field17;
    void *_field18;
    void *_field19;
    void *_field20;
    void *_field21;
    void *_field22;
    void *_field23;
    void *_field24;
    void *_field25;
    void *_field26;
    void *_field27;
    unsigned int _field28;
    void *_field29;
    void *_field30;
    void *_field31;
    void *_field32;
};

struct _xmlValidState;

struct addrinfo {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    unsigned int _field5;
    char *_field6;
    struct sockaddr *_field7;
    struct addrinfo *_field8;
};

struct internal_state;

struct objc_method_description {
    SEL _field1;
    char *_field2;
};

struct sockaddr;

struct stat {
    int st_dev;
    unsigned short st_mode;
    unsigned short st_nlink;
    unsigned long long st_ino;
    unsigned int st_uid;
    unsigned int st_gid;
    int st_rdev;
    struct timespec st_atimespec;
    struct timespec st_mtimespec;
    struct timespec st_ctimespec;
    struct timespec st_birthtimespec;
    long long st_size;
    long long st_blocks;
    int st_blksize;
    unsigned int st_flags;
    unsigned int st_gen;
    int st_lspare;
    long long st_qspare[2];
};

struct timespec {
    int tv_sec;
    long tv_nsec;
};

struct z_stream_s {
    char *next_in;
    unsigned int avail_in;
    unsigned int total_in;
    char *next_out;
    unsigned int avail_out;
    unsigned int total_out;
    char *msg;
    struct internal_state *state;
    void *zalloc;
    void *zfree;
    void *opaque;
    int data_type;
    unsigned int adler;
    unsigned int reserved;
};

#pragma mark Typedef'd Structures

typedef struct {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
    int _field5;
    id _field6;
    id _field7;
    id _field8;
} CDStruct_2b292156;

typedef struct {
    id _field1;
    id _field2;
} CDStruct_a70f6672;

typedef struct {
    id _field1;
    void *_field2;
} CDStruct_c69bce23;

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned char _field5;
    unsigned char _field6;
    unsigned char _field7;
    unsigned char _field8;
    unsigned char _field9;
    unsigned char _field10;
    unsigned char _field11;
    unsigned char _field12;
    unsigned char _field13;
    unsigned char _field14;
    unsigned char _field15;
    unsigned char _field16;
} CDStruct_bd2f613f;

typedef struct {
    unsigned int kind;
    NSObject *oldValue;
    NSObject *newValue;
    NSIndexSet *indexes;
    id extraData;
} CDStruct_26283fc3;

typedef struct {
    unsigned int _field1;
    id _field2[4];
} CDStruct_e8a1eea0;

typedef struct {
    unsigned long _field1;
    id *_field2;
    unsigned long *_field3;
    unsigned long _field4[5];
} CDStruct_11f37819;

typedef struct {
    unsigned int _field1[8];
} CDStruct_6ad76789;

typedef struct {
    unsigned int :8;
    unsigned int :4;
    unsigned int :1;
    unsigned int :1;
    unsigned int :18;
    unsigned short _field1[8];
} CDStruct_5fe7aead;

typedef struct {
    float m11;
    float m12;
    float m21;
    float m22;
    float tX;
    float tY;
} CDStruct_a65eae4f;

typedef struct {
    int _field1;
    void *_field2;
    void *_field3;
    void *_field4;
    void *_field5;
} CDStruct_60d14f2d;

typedef struct {
    int _field1;
    int _field2;
} CDStruct_1ef3fb1f;

#pragma mark Typedef'd Unions

typedef union {
    id _field1;
    id _field2;
} CDUnion_a1fd0927;

