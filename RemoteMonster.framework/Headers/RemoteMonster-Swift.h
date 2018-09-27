// Generated by Apple Swift version 4.2 (swiftlang-1000.11.37.1 clang-1000.11.45.1)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import Foundation;
@import ObjectiveC;
@import WebRTC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="RemoteMonster",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


SWIFT_CLASS("_TtC13RemoteMonster12FractionLost")
@interface FractionLost : NSObject
@property (nonatomic) NSInteger level;
@property (nonatomic) float max;
@property (nonatomic) float min;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end



typedef SWIFT_ENUM(NSInteger, REMON_AECUNPACK_STATE, closed) {
  REMON_AECUNPACK_STATESTART = 0,
  REMON_AECUNPACK_STATEERROR = 1,
  REMON_AECUNPACK_STATEWROTE = 2,
  REMON_AECUNPACK_STATECOMPLTE = 3,
};


SWIFT_CLASS("_TtC13RemoteMonster11RatingValue")
@interface RatingValue : NSObject
@property (nonatomic) NSInteger level;
@property (nonatomic) float value;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


/// RemoteMonster API를 사용하기 위한 가장 기본이 되는 클래스. Remon클래스를 통해 서버와 연결하고 명령을 보내고 종료한다. 서버로부터 메시지를 받는 것은 주로 RemonDelegate를 통해 처리한다.
SWIFT_CLASS("_TtC13RemoteMonster5Remon")
@interface Remon : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, RemonAudioMode, closed) {
  RemonAudioModeVoice = 0,
  RemonAudioModeMusic = 1,
};


///
SWIFT_PROTOCOL("_TtP13RemoteMonster22RemonCallBlockSettable_")
@protocol RemonCallBlockSettable
- (void)onConnectWithBlock:(void (^ _Nonnull)(NSString * _Nullable))block;
- (void)onCompleteWithBlock:(void (^ _Nonnull)(void))block;
- (void)onFetchWithBlock:(void (^ _Nonnull)(NSArray<NSDictionary<NSString *, NSString *> *> * _Nonnull))block;
@end

enum RemonCloseType : NSInteger;
@class NSError;
@class RemonStatReport;
@class RTCAudioSession;

/// 이 클래스는 Remon 클래스를 사용을 돕는 도우미 역확을 합니다.
/// RemonController를 사용하면 Remon를 직접 사용하는 것보다 더욱 쉽게 Remon의 기능으르 사용 할 수 있으며 Remon를 직접 사용하는 것과 거의 같은 기능을 이용 할 수 있습니다.
SWIFT_CLASS("_TtC13RemoteMonster15RemonController")
@interface RemonController : NSObject <RTCAudioSessionDelegate>
- (void)startDumpWithFileName:(NSString * _Nonnull)withFileName maxSizeInBytes:(int64_t)maxSizeInBytes;
- (void)stopDump;
- (void)unpackAecDumpWithDumpName:(NSString * _Nullable)dumpName resultFileName:(NSString * _Nonnull)resultFileName progress:(void (^ _Nonnull)(NSError * _Nullable, enum REMON_AECUNPACK_STATE))progress;
- (void)onInitWithBlock:(void (^ _Nonnull)(void))block;
- (void)onCloseWithBlock:(void (^ _Nonnull)(enum RemonCloseType))block;
- (void)onObjcErrorWithBlock:(void (^ _Nonnull)(NSError * _Nonnull))block;
- (void)onRemonStatReportWithBlock:(void (^ _Nonnull)(RemonStatReport * _Nonnull))block;
@property (nonatomic, copy) NSString * _Nullable channelID;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
- (void)closeRemon;
- (void)observeValueForKeyPath:(NSString * _Nullable)keyPath ofObject:(id _Nullable)object change:(NSDictionary<NSKeyValueChangeKey, id> * _Nullable)change context:(void * _Nullable)context;
- (void)audioSessionDidStartPlayOrRecord:(RTCAudioSession * _Nonnull)session;
@end


///
SWIFT_CLASS_NAMED("RemonIBController")
@interface RemonIBController : RemonController
///
@property (nonatomic) BOOL onlyAudio;
///
@property (nonatomic) NSInteger videoWidth;
///
@property (nonatomic) NSInteger videoHeight;
///
@property (nonatomic) NSInteger fps;
///
@property (nonatomic, copy) NSString * _Nullable serviceId;
///
@property (nonatomic, copy) NSString * _Nullable serviceKey;
///
@property (nonatomic, copy) NSString * _Nonnull wsUrl;
///
@property (nonatomic, copy) NSString * _Nonnull restUrl;
///
@property (nonatomic) BOOL useFrontCamera;
@end

@class RemonConfig;
@class RemonSearchResult;

///
SWIFT_CLASS("_TtC13RemoteMonster9RemonCall")
@interface RemonCall : RemonIBController <RemonCallBlockSettable>
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
///
- (void)connect:(NSString * _Nonnull)ch :(RemonConfig * _Nullable)config;
///
- (void)fetchCallsWithComplete:(void (^ _Nonnull)(NSArray<RemonSearchResult *> * _Nullable))complete;
- (void)fetchCallsWithIsTest:(BOOL)isTest complete:(void (^ _Nonnull)(NSArray<RemonSearchResult *> * _Nullable))complete;
///
- (void)onConnectWithBlock:(void (^ _Nonnull)(NSString * _Nullable))block;
///
- (void)onFetchWithBlock:(void (^ _Nonnull)(NSArray<NSDictionary<NSString *, NSString *> *> * _Nonnull))block;
- (void)onCompleteWithBlock:(void (^ _Nonnull)(void))block;
@end



///
SWIFT_CLASS("_TtC13RemoteMonster9RemonCast")
@interface RemonCast : RemonIBController
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/// 방송에 접속 합니다.
/// - Parameters:
/// - chId: 접속 하려는 방송의 채널 ID
/// - config: 이 인자를 전달 하면 RemonCast의 설정이 무시 되고, config의 설정 값을 따릅니다.
- (void)joinWithChId:(NSString * _Nonnull)chId AndConfig:(RemonConfig * _Nullable)config;
- (void)joinWithChId:(NSString * _Nonnull)chId;
/// 방송을 생성 합니다.
/// - Parameter config: 이 인자를 전달 하면 RemonCast의 설정이 무시 되고, config의 설정 값을 따릅니다.
- (void)create:(RemonConfig * _Nullable)config;
/// 방송 목록을 가져 옵니다.
/// - Parameter complete: 패치 완료 블럭. error 인자가 nil 이라면 RemonSearchResult 목록을 전달 합니다.
- (void)fetchCastsWithComplete:(void (^ _Nonnull)(NSArray<RemonSearchResult *> * _Nullable))complete;
- (void)fetchCastsWithIsTest:(BOOL)isTest complete:(void (^ _Nonnull)(NSArray<RemonSearchResult *> * _Nullable))complete;
- (void)onCreateWithBlock:(void (^ _Nonnull)(NSString * _Nullable))block;
- (void)onJoinWithBlock:(void (^ _Nonnull)(NSString * _Nullable))block;
- (void)onFetchWithBlock:(void (^ _Nonnull)(NSArray<NSDictionary<NSString *, NSString *> *> * _Nonnull))block;
@end

typedef SWIFT_ENUM(NSInteger, RemonChannelType, closed) {
  RemonChannelTypeP2p = 0,
  RemonChannelTypeViewer = 1,
  RemonChannelTypeBroadcast = 2,
};

typedef SWIFT_ENUM(NSInteger, RemonCloseType, closed) {
  RemonCloseTypeMINE = 0,
  RemonCloseTypeOTHER = 1,
  RemonCloseTypeUNKNOWN = 2,
  RemonCloseTypeOTHER_UNEXPECTED = 3,
};

@class RTCIceServer;

/// Remon을 실행하기 전에 여러가지 통신/방송 상태를 미리 설정할 필요가 있음. 필수적으로
/// key와 serviceId가 있으며 그 외에도 음성만 사용하고자 할 경우 videoCall = false로 해야하며
/// 비디오 코덱등도 수정이 가능하다.
SWIFT_CLASS("_TtC13RemoteMonster11RemonConfig")
@interface RemonConfig : NSObject
@property (nonatomic, copy) NSString * _Nonnull restUrl;
@property (nonatomic, copy) NSString * _Nonnull wsUrl;
@property (nonatomic, copy) NSArray<RTCIceServer *> * _Nonnull iceServers;
/// RemoteMonster서버로부터 발급받은 인증 키
@property (nonatomic, copy) NSString * _Nonnull key;
/// RemoteMonster API를 사용하기 위해 필요한 서비스 id. Remotemonster 홈페이지에서 요청하여 받는다.
@property (nonatomic, copy) NSString * _Nonnull serviceId;
/// Remon객체를 생성하면 서버와 인증 후 받게 되는 일회성 용도의 token.
@property (nonatomic, copy) NSString * _Nonnull token;
/// 음성만 사용할 경우 false, 영상도 사용할 경우 true
@property (nonatomic) BOOL videoCall;
@property (nonatomic, copy) NSString * _Nonnull startVideoBitrate;
/// 송출할 비디오의 영상 코덱. 기본은 H264이며 VP9, VP8등을 사용할 수 있다.
@property (nonatomic, copy) NSString * _Nonnull videoCodec;
/// 송출할 비디오의 가로길이. 기본값은 640
@property (nonatomic) NSInteger videoWidth;
/// 송출할 비디오의 세로길이. 기본값은 480
@property (nonatomic) NSInteger videoHeight;
/// 송출할 비디오의 frames per second. 기본값은 30
@property (nonatomic) NSInteger videoFps;
@property (nonatomic) BOOL autoCaptureStart;
/// P2P, BROADCAST, VIEWER
@property (nonatomic) enum RemonChannelType channelType;
@property (nonatomic, copy) NSString * _Nonnull sendonly;
@property (nonatomic, copy) NSString * _Nonnull id;
@property (nonatomic) BOOL debugMode;
/// 사용할 카메라 포지션
@property (nonatomic) BOOL useFrontCamera;
@property (nonatomic) RTCLoggingSeverity debugLevel;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end




SWIFT_CLASS("_TtC13RemoteMonster17RemonSearchResult")
@interface RemonSearchResult : NSObject
@property (nonatomic, copy) NSString * _Nonnull chId;
@property (nonatomic, copy) NSString * _Nonnull serviceId;
@property (nonatomic, copy) NSString * _Nonnull status;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC13RemoteMonster15RemonStatReport")
@interface RemonStatReport : NSObject
@property (nonatomic, copy) NSString * _Nonnull localCandidate;
@property (nonatomic, copy) NSString * _Nonnull remoteCandidate;
@property (nonatomic) NSInteger localFrameWidth;
@property (nonatomic) NSInteger localFrameHeight;
@property (nonatomic) NSInteger remoteFrameWidth;
@property (nonatomic) NSInteger remoteFrameHeight;
@property (nonatomic) NSInteger localFrameRate;
@property (nonatomic) NSInteger remoteFrameRate;
@property (nonatomic) NSInteger availableSendBandwidth;
@property (nonatomic) NSInteger availableReceiveBandwidth;
@property (nonatomic) float rtt;
@property (nonatomic) float localAudioFractionLost;
@property (nonatomic) float localVideoFractionLost;
@property (nonatomic) float remoteAudioFractionLost;
@property (nonatomic) float remoteVideoFractionLost;
@property (nonatomic) float bytesReceived;
@property (nonatomic, copy) NSString * _Nonnull fullStatReport;
- (RatingValue * _Nonnull)getRemoteAudioFractionLost SWIFT_WARN_UNUSED_RESULT;
- (RatingValue * _Nonnull)getLocalAudioFractionLost SWIFT_WARN_UNUSED_RESULT;
- (RatingValue * _Nonnull)getRemoteVideoFractionLost SWIFT_WARN_UNUSED_RESULT;
- (RatingValue * _Nonnull)getLoaclVideoFractionLost SWIFT_WARN_UNUSED_RESULT;
- (RatingValue * _Nonnull)getRttRating SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

/// Remon의 상태
/// INIT: Remon을 생성하여 서버와 연결되기까지 과정을 의미
typedef SWIFT_ENUM(NSInteger, RemonState, closed) {
/// 객체를 생성하여 서버와 웹소켓으로 연결되는 과정의 상태를 의미
  RemonStateINIT = 0,
/// 채널을 생성하고 상대의 연결을 기다리고 있을 때의 상태
  RemonStateWAIT = 1,
/// 상대편 채널에 접속중일 때의 상태
  RemonStateCONNECT = 2,
/// 상호간에 연결이 완료되었을 때의 상태
  RemonStateCREATE = 3,
/// 방송 생성 후 상태
  RemonStateCOMPLETE = 4,
/// 통신 연결을 수행하다가 오류가 발생하였을 때의 상태
  RemonStateFAIL = 5,
/// 통신 연결 후 빠져나갔을 때의 상태
  RemonStateEXIT = 6,
  RemonStateCLOSE = 7,
};


/// RemonController의 remoteView 또는 localView를 등록 했다면 RemonViewFrameObserver가 각각의 뷰의 frame변화를 추적 합니다.
SWIFT_CLASS("_TtC13RemoteMonster22RemonViewFrameObserver")
@interface RemonViewFrameObserver : NSObject
- (void)observeValueForKeyPath:(NSString * _Nullable)keyPath ofObject:(id _Nullable)object change:(NSDictionary<NSKeyValueChangeKey, id> * _Nullable)change context:(void * _Nullable)context;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC13RemoteMonster10StatResult")
@interface StatResult : NSObject
@property (nonatomic) NSInteger availableReceiveBandwidth;
@property (nonatomic) NSInteger availableSendBandwidth;
@property (nonatomic) NSInteger fractionRating;
@property (nonatomic) NSInteger localAudioFractionLost;
@property (nonatomic) NSInteger localAudioFractionRating;
@property (nonatomic, copy) NSString * _Nonnull localCandidate;
@property (nonatomic) NSInteger localFrameHeight;
@property (nonatomic) NSInteger localFrameRate;
@property (nonatomic) NSInteger localFrameWidth;
@property (nonatomic) NSInteger localVideoFractionLost;
@property (nonatomic) NSInteger localVideoFractionRating;
@property (nonatomic) NSInteger remoteAudioFractionLost;
@property (nonatomic) NSInteger remoteAudioFractionRating;
@property (nonatomic, copy) NSString * _Nonnull remoteCandidate;
@property (nonatomic) NSInteger remoteFrameHeight;
@property (nonatomic) NSInteger remoteFrameRate;
@property (nonatomic) NSInteger remoteFrameWidth;
@property (nonatomic) NSInteger remoteVideoFractionLost;
@property (nonatomic) NSInteger remoteVideoFractionRating;
@property (nonatomic) NSInteger rtt;
@property (nonatomic) NSInteger rttRating;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


/// WebSocket objects are bidirectional network streams that communicate over HTTP. RFC 6455.
SWIFT_CLASS("_TtC13RemoteMonster9WebSocket")
@interface WebSocket : NSObject
@property (nonatomic, readonly) NSInteger hashValue;
/// Create a WebSocket object with a deferred connection; the connection is not opened until the .open() method is called.
- (nonnull instancetype)init;
@end


@interface WebSocket (SWIFT_EXTENSION(RemoteMonster))
/// Transmits message to the server over the WebSocket connection.
/// :param: text The message (string) to be sent to the server.
- (void)sendWithText:(NSString * _Nonnull)text;
/// Transmits message to the server over the WebSocket connection.
/// :param: data The message (binary) to be sent to the server.
- (void)sendWithData:(NSData * _Nonnull)data;
@end


/// WebSocketDelegate is an Objective-C alternative to WebSocketEvents and is used to delegate the events for the WebSocket connection.
SWIFT_PROTOCOL("_TtP13RemoteMonster17WebSocketDelegate_")
@protocol WebSocketDelegate
/// A function to be called when the WebSocket connection’s readyState changes to .Open; this indicates that the connection is ready to send and receive data.
- (void)webSocketOpen;
/// A function to be called when the WebSocket connection’s readyState changes to .Closed.
- (void)webSocketClose:(NSInteger)code reason:(NSString * _Nonnull)reason wasClean:(BOOL)wasClean;
/// A function to be called when an error occurs.
- (void)webSocketError:(NSError * _Nonnull)error;
@optional
/// A function to be called when a message (string) is received from the server.
- (void)webSocketMessageText:(NSString * _Nonnull)text;
/// A function to be called when a message (binary) is received from the server.
- (void)webSocketMessageData:(NSData * _Nonnull)data;
/// A function to be called when a pong is received from the server.
- (void)webSocketPong;
/// A function to be called when the WebSocket process has ended; this event is guarenteed to be called once and can be used as an alternative to the “close” or “error” events.
- (void)webSocketEnd:(NSInteger)code reason:(NSString * _Nonnull)reason wasClean:(BOOL)wasClean error:(NSError * _Nullable)error;
@end

/// The WebSocketReadyState enum is used by the readyState property to describe the status of the WebSocket connection.
typedef SWIFT_ENUM(NSInteger, WebSocketReadyState, closed) {
/// The connection is not yet open.
  WebSocketReadyStateConnecting = 0,
/// The connection is open and ready to communicate.
  WebSocketReadyStateOpen = 1,
/// The connection is in the process of closing.
  WebSocketReadyStateClosing = 2,
/// The connection is closed or couldn’t be opened.
  WebSocketReadyStateClosed = 3,
};


SWIFT_CLASS("_TtC13RemoteMonster9aecunpack")
@interface aecunpack : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
