/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@class NSSet, NSString, NSDictionary;

@interface MBDomain : NSObject  {
    NSString *_name;
    NSString *_rootPath;
    NSSet *_relativePathsToBackupAndRestore;
    NSSet *_relativePathsNotToBackup;
    NSSet *_relativePathsNotToBackupToDrive;
    NSSet *_relativePathsNotToBackupToService;
    NSSet *_relativePathsNotToCheckIfModifiedDuringBackup;
    NSSet *_relativePathsToRestoreOnly;
    NSSet *_relativePathsOfSystemFilesToAlwaysRestore;
    NSSet *_relativePathsNotToRestore;
    NSSet *_relativePathsNotToMigrate;
    NSSet *_relativePathsNotToRestoreToIPods;
    NSSet *_relativePathsToMoveAsideOnRestore;
    NSSet *_relativePathsToBackgroundRestore;
    NSDictionary *_relativePathAggregateDictionaryGroups;
    NSDictionary *_relativePathDomainRedirects;
    BOOL _shouldDigest;
}

@property(readonly) NSString * bundleID;
@property(readonly) NSSet * relativePathsToBackup;
@property(readonly) NSSet * relativePathsToRestore;
@property(getter=isAppDomain,readonly) BOOL appDomain;
@property(getter=isPlaceholderAppDomain,readonly) BOOL placeholderAppDomain;
@property(getter=isUninstalledAppDomain,readonly) BOOL installedAppDomain;
@property BOOL shouldDigest;
@property(retain) NSDictionary * relativePathDomainRedirects;
@property(retain) NSDictionary * relativePathAggregateDictionaryGroups;
@property(retain) NSSet * relativePathsToBackgroundRestore;
@property(retain) NSSet * relativePathsToMoveAsideOnRestore;
@property(retain) NSSet * relativePathsNotToRestoreToIPods;
@property(retain) NSSet * relativePathsNotToMigrate;
@property(retain) NSSet * relativePathsNotToRestore;
@property(retain) NSSet * relativePathsOfSystemFilesToAlwaysRestore;
@property(retain) NSSet * relativePathsToRestoreOnly;
@property(retain) NSSet * relativePathsNotToCheckIfModifiedDuringBackup;
@property(retain) NSSet * relativePathsNotToBackupToService;
@property(retain) NSSet * relativePathsNotToBackupToDrive;
@property(retain) NSSet * relativePathsNotToBackup;
@property(retain) NSSet * relativePathsToBackupAndRestore;
@property(readonly) NSString * rootPath;
@property(readonly) NSString * name;

+ (id)systemDomains;
+ (id)systemDomainsByName;
+ (id)appDomainWithBundleID:(id)arg1 rootPath:(id)arg2;
+ (id)appPlaceholderDomainWithBundleID:(id)arg1 rootPath:(id)arg2;
+ (id)uninstalledAppDomainWithBundleID:(id)arg1;
+ (id)_stringByRemovingCommentsFromValue:(id)arg1 forKey:(id)arg2;
+ (double)_doubleFromStringValueForKey:(id)arg1 plist:(id)arg2;
+ (void)_loadSystemDomains;
+ (id)domainWithName:(id)arg1 rootPath:(id)arg2;
+ (BOOL)_boolFromValue:(id)arg1 forKey:(id)arg2;
+ (id)_setOfStringsFromValue:(id)arg1 forKey:(id)arg2;
+ (id)_relativePathsByAddingSQLiteJournals:(id)arg1;
+ (id)_dictionaryOfStringsToStringFromValue:(id)arg1 forKey:(id)arg2;
+ (BOOL)isAppName:(id)arg1;
+ (BOOL)isAppPlaceholderName:(id)arg1;
+ (id)bundleIDWithName:(id)arg1;
+ (id)nameWithAppBundleID:(id)arg1;
+ (double)systemDomainsVersion;
+ (double)systemDomainsMinSupportedVersion;
+ (double)systemDomainsMaxSupportedVersion;

- (id)bundleID;
- (int)compare:(id)arg1;
- (id)name;
- (id)relativePathsToBackup;
- (id)relativePathsToRestore;
- (BOOL)isPlaceholderAppDomain;
- (BOOL)isUninstalledAppDomain;
- (id)rootPath;
- (BOOL)shouldDigest;
- (void)setShouldDigest:(BOOL)arg1;
- (id)relativePathDomainRedirects;
- (void)setRelativePathDomainRedirects:(id)arg1;
- (id)relativePathAggregateDictionaryGroups;
- (void)setRelativePathAggregateDictionaryGroups:(id)arg1;
- (id)relativePathsToBackgroundRestore;
- (void)setRelativePathsToBackgroundRestore:(id)arg1;
- (id)relativePathsToMoveAsideOnRestore;
- (void)setRelativePathsToMoveAsideOnRestore:(id)arg1;
- (id)relativePathsNotToRestoreToIPods;
- (void)setRelativePathsNotToRestoreToIPods:(id)arg1;
- (id)relativePathsNotToMigrate;
- (void)setRelativePathsNotToMigrate:(id)arg1;
- (id)relativePathsNotToRestore;
- (void)setRelativePathsNotToRestore:(id)arg1;
- (id)relativePathsOfSystemFilesToAlwaysRestore;
- (void)setRelativePathsOfSystemFilesToAlwaysRestore:(id)arg1;
- (id)relativePathsToRestoreOnly;
- (void)setRelativePathsToRestoreOnly:(id)arg1;
- (id)relativePathsNotToCheckIfModifiedDuringBackup;
- (void)setRelativePathsNotToCheckIfModifiedDuringBackup:(id)arg1;
- (id)relativePathsNotToBackupToService;
- (void)setRelativePathsNotToBackupToService:(id)arg1;
- (id)relativePathsNotToBackupToDrive;
- (void)setRelativePathsNotToBackupToDrive:(id)arg1;
- (id)relativePathsNotToBackup;
- (void)setRelativePathsNotToBackup:(id)arg1;
- (id)relativePathsToBackupAndRestore;
- (void)setRelativePathsToBackupAndRestore:(id)arg1;
- (id)initWithName:(id)arg1 plist:(id)arg2;
- (id)initWithName:(id)arg1 rootPath:(id)arg2;
- (BOOL)isEqualToDomain:(id)arg1;
- (BOOL)isAppDomain;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (void)dealloc;

@end