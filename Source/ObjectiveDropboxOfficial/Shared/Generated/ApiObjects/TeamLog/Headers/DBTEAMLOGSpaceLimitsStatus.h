///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGSpaceLimitsStatus;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SpaceLimitsStatus` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSpaceLimitsStatus : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMLOGSpaceLimitsStatusTag` enum type represents the possible tag
/// states with which the `DBTEAMLOGSpaceLimitsStatus` union can exist.
typedef NS_ENUM(NSInteger, DBTEAMLOGSpaceLimitsStatusTag) {
  /// (no description).
  DBTEAMLOGSpaceLimitsStatusWithinQuota,

  /// (no description).
  DBTEAMLOGSpaceLimitsStatusNearQuota,

  /// (no description).
  DBTEAMLOGSpaceLimitsStatusOverQuota,

  /// (no description).
  DBTEAMLOGSpaceLimitsStatusOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMLOGSpaceLimitsStatusTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "within_quota".
///
/// @return An initialized instance.
///
- (instancetype)initWithWithinQuota;

///
/// Initializes union class with tag state of "near_quota".
///
/// @return An initialized instance.
///
- (instancetype)initWithNearQuota;

///
/// Initializes union class with tag state of "over_quota".
///
/// @return An initialized instance.
///
- (instancetype)initWithOverQuota;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "within_quota".
///
/// @return Whether the union's current tag state has value "within_quota".
///
- (BOOL)isWithinQuota;

///
/// Retrieves whether the union's current tag state has value "near_quota".
///
/// @return Whether the union's current tag state has value "near_quota".
///
- (BOOL)isNearQuota;

///
/// Retrieves whether the union's current tag state has value "over_quota".
///
/// @return Whether the union's current tag state has value "over_quota".
///
- (BOOL)isOverQuota;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMLOGSpaceLimitsStatus` union.
///
@interface DBTEAMLOGSpaceLimitsStatusSerializer : NSObject

///
/// Serializes `DBTEAMLOGSpaceLimitsStatus` instances.
///
/// @param instance An instance of the `DBTEAMLOGSpaceLimitsStatus` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSpaceLimitsStatus` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGSpaceLimitsStatus *)instance;

///
/// Deserializes `DBTEAMLOGSpaceLimitsStatus` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSpaceLimitsStatus` API object.
///
/// @return An instantiation of the `DBTEAMLOGSpaceLimitsStatus` object.
///
+ (DBTEAMLOGSpaceLimitsStatus *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
