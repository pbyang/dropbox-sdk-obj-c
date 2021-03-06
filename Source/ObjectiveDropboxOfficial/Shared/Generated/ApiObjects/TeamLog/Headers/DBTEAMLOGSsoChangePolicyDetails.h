///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGSsoChangePolicyDetails;
@class DBTEAMPOLICIESSsoPolicy;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SsoChangePolicyDetails` struct.
///
/// Changed single sign-on setting for team.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSsoChangePolicyDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// New single sign-on policy.
@property (nonatomic, readonly) DBTEAMPOLICIESSsoPolicy *dNewValue;

/// Previous single sign-on policy. Might be missing due to historical data gap.
@property (nonatomic, readonly, nullable) DBTEAMPOLICIESSsoPolicy *previousValue;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param dNewValue New single sign-on policy.
/// @param previousValue Previous single sign-on policy. Might be missing due to
/// historical data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewValue:(DBTEAMPOLICIESSsoPolicy *)dNewValue
                    previousValue:(nullable DBTEAMPOLICIESSsoPolicy *)previousValue;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param dNewValue New single sign-on policy.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewValue:(DBTEAMPOLICIESSsoPolicy *)dNewValue;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SsoChangePolicyDetails` struct.
///
@interface DBTEAMLOGSsoChangePolicyDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGSsoChangePolicyDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGSsoChangePolicyDetails` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSsoChangePolicyDetails` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGSsoChangePolicyDetails *)instance;

///
/// Deserializes `DBTEAMLOGSsoChangePolicyDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSsoChangePolicyDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGSsoChangePolicyDetails` object.
///
+ (DBTEAMLOGSsoChangePolicyDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
