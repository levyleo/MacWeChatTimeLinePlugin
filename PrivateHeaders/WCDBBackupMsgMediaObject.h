//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCDBCoding.h"

@class NSString;

@interface WCDBBackupMsgMediaObject : NSObject <WCDBCoding>
{
    long long talkerId;
    long long MediaId;
    long long MsgSegmentId;
    long long SvrId;
    NSString *MD5;
    NSString *talker;
    NSString *MediaIdStr;
    long long Reserved0;
    long long Reserved1;
    NSString *Reserved2;
    long long m___rowID;
}

+ (void)_initPBTableOfWCDBBackupMsgMediaObject;
+ (id)dummyObject;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
@property(retain, nonatomic) NSString *Reserved2; // @synthesize Reserved2;
@property(nonatomic) long long Reserved1; // @synthesize Reserved1;
@property(nonatomic) long long Reserved0; // @synthesize Reserved0;
@property(retain, nonatomic) NSString *MediaIdStr; // @synthesize MediaIdStr;
@property(retain, nonatomic) NSString *talker; // @synthesize talker;
@property(retain, nonatomic) NSString *MD5; // @synthesize MD5;
@property(nonatomic) long long SvrId; // @synthesize SvrId;
@property(nonatomic) long long MsgSegmentId; // @synthesize MsgSegmentId;
@property(nonatomic) long long MediaId; // @synthesize MediaId;
@property(nonatomic) long long talkerId; // @synthesize talkerId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (const basic_string_805fe43b *)getWCDBPrimaryColumnName;
- (const struct WCDBIndexHelper *)getWCDBIndexArray;
- (unsigned long long)getWCDBIndexArrayCount;
- (const map_d2afedfd *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (const map_d2afedfd *)getFileValueTagIndexMap;
- (id)getFileValueTypeTable;
- (const map_d2afedfd *)getPackedValueTagIndexMap;
- (id)getPackedValueTypeTable;
- (const map_7a576766 *)getValueNameIndexMap;
- (id)getValueTable;
- (const WCDBCondition_0fe98630 *)db_Reserved2;
- (const WCDBCondition_d07af32d *)db_Reserved1;
- (const WCDBCondition_d07af32d *)db_Reserved0;
- (const WCDBCondition_0fe98630 *)db_MediaIdStr;
- (const WCDBCondition_0fe98630 *)db_talker;
- (const WCDBCondition_0fe98630 *)db_MD5;
- (const WCDBCondition_d07af32d *)db_SvrId;
- (const WCDBCondition_d07af32d *)db_MsgSegmentId;
- (const WCDBCondition_d07af32d *)db_MediaId;
- (const WCDBCondition_d07af32d *)db_talkerId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
