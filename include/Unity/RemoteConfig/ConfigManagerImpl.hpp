// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Unity.RemoteConfig.ConfigRequestStatus
#include "Unity/RemoteConfig/ConfigRequestStatus.hpp"
// Including type: Unity.RemoteConfig.ConfigResponse
#include "Unity/RemoteConfig/ConfigResponse.hpp"
// Including type: Unity.RemoteConfig.Delivery
#include "Unity/RemoteConfig/Delivery.hpp"
// Including type: Unity.RemoteConfig.Common
#include "Unity/RemoteConfig/Common.hpp"
// Including type: Unity.RemoteConfig.RequestHeaderTuple
#include "Unity/RemoteConfig/RequestHeaderTuple.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Unity::RemoteConfig
namespace Unity::RemoteConfig {
  // Forward declaring type: RuntimeConfig
  class RuntimeConfig;
  // Forward declaring type: DeviceInfo
  class DeviceInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
  // Forward declaring type: Func`3<T1, T2, TResult>
  template<typename T1, typename T2, typename TResult>
  class Func_3;
  // Skipping declaration: ValueType because it is already included!
}
// Forward declaring namespace: Newtonsoft::Json::Linq
namespace Newtonsoft::Json::Linq {
  // Forward declaring type: JObject
  class JObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: TextWriter
  class TextWriter;
}
// Completed forward declares
// Type namespace: Unity.RemoteConfig
namespace Unity::RemoteConfig {
  // Forward declaring type: ConfigManagerImpl
  class ConfigManagerImpl;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::RemoteConfig::ConfigManagerImpl);
DEFINE_IL2CPP_ARG_TYPE(::Unity::RemoteConfig::ConfigManagerImpl*, "Unity.RemoteConfig", "ConfigManagerImpl");
// Type namespace: Unity.RemoteConfig
namespace Unity::RemoteConfig {
  // Size: 0xE0
  #pragma pack(push, 1)
  // Autogenerated type: Unity.RemoteConfig.ConfigManagerImpl
  // [TokenAttribute] Offset: FFFFFFFF
  class ConfigManagerImpl : public ::Il2CppObject {
    public:
    // Nested type: ::Unity::RemoteConfig::ConfigManagerImpl::$$c__DisplayClass38_0
    class $$c__DisplayClass38_0;
    public:
    // private Unity.RemoteConfig.ConfigRequestStatus <requestStatus>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    ::Unity::RemoteConfig::ConfigRequestStatus requestStatus;
    // Field size check
    static_assert(sizeof(::Unity::RemoteConfig::ConfigRequestStatus) == 0x4);
    // Padding between fields: requestStatus and: FetchCompleted
    char __padding0[0x4] = {};
    // private System.Action`1<Unity.RemoteConfig.ConfigResponse> FetchCompleted
    // Size: 0x8
    // Offset: 0x18
    ::System::Action_1<::Unity::RemoteConfig::ConfigResponse>* FetchCompleted;
    // Field size check
    static_assert(sizeof(::System::Action_1<::Unity::RemoteConfig::ConfigResponse>*) == 0x8);
    // private Unity.RemoteConfig.RuntimeConfig <appConfig>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::Unity::RemoteConfig::RuntimeConfig* appConfig;
    // Field size check
    static_assert(sizeof(::Unity::RemoteConfig::RuntimeConfig*) == 0x8);
    // Unity.RemoteConfig.Delivery deliveryPayload
    // Size: 0x28
    // Offset: 0x28
    ::Unity::RemoteConfig::Delivery deliveryPayload;
    // Field size check
    static_assert(sizeof(::Unity::RemoteConfig::Delivery) == 0x28);
    // Unity.RemoteConfig.Common commonPayload
    // Size: 0x48
    // Offset: 0x50
    ::Unity::RemoteConfig::Common commonPayload;
    // Field size check
    static_assert(sizeof(::Unity::RemoteConfig::Common) == 0x48);
    // Unity.RemoteConfig.DeviceInfo deviceInfoPayload
    // Size: 0x8
    // Offset: 0x98
    ::Unity::RemoteConfig::DeviceInfo* deviceInfoPayload;
    // Field size check
    static_assert(sizeof(::Unity::RemoteConfig::DeviceInfo*) == 0x8);
    // private System.Action`2<Unity.RemoteConfig.ConfigResponse,Newtonsoft.Json.Linq.JObject> ResponseParsed
    // Size: 0x8
    // Offset: 0xA0
    ::System::Action_2<::Unity::RemoteConfig::ConfigResponse, ::Newtonsoft::Json::Linq::JObject*>* ResponseParsed;
    // Field size check
    static_assert(sizeof(::System::Action_2<::Unity::RemoteConfig::ConfigResponse, ::Newtonsoft::Json::Linq::JObject*>*) == 0x8);
    // private System.Action`3<Unity.RemoteConfig.ConfigOrigin,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String> RawResponseReturned
    // Size: 0x8
    // Offset: 0xA8
    ::System::Action_3<::Unity::RemoteConfig::ConfigOrigin, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, ::StringW>* RawResponseReturned;
    // Field size check
    static_assert(sizeof(::System::Action_3<::Unity::RemoteConfig::ConfigOrigin, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, ::StringW>*) == 0x8);
    // private System.Action`3<Unity.RemoteConfig.ConfigOrigin,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String> RawResponseValidated
    // Size: 0x8
    // Offset: 0xB0
    ::System::Action_3<::Unity::RemoteConfig::ConfigOrigin, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, ::StringW>* RawResponseValidated;
    // Field size check
    static_assert(sizeof(::System::Action_3<::Unity::RemoteConfig::ConfigOrigin, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, ::StringW>*) == 0x8);
    // System.Collections.Generic.List`1<System.Func`1<Newtonsoft.Json.Linq.JObject>> requestPayloadProviders
    // Size: 0x8
    // Offset: 0xB8
    ::System::Collections::Generic::List_1<::System::Func_1<::Newtonsoft::Json::Linq::JObject*>*>* requestPayloadProviders;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::Func_1<::Newtonsoft::Json::Linq::JObject*>*>*) == 0x8);
    // System.Collections.Generic.List`1<System.Func`1<Unity.RemoteConfig.RequestHeaderTuple>> requestHeaderProviders
    // Size: 0x8
    // Offset: 0xC0
    ::System::Collections::Generic::List_1<::System::Func_1<::Unity::RemoteConfig::RequestHeaderTuple>*>* requestHeaderProviders;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::Func_1<::Unity::RemoteConfig::RequestHeaderTuple>*>*) == 0x8);
    // System.Collections.Generic.List`1<System.Func`3<System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String,System.Boolean>> rawResponseValidators
    // Size: 0x8
    // Offset: 0xC8
    ::System::Collections::Generic::List_1<::System::Func_3<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, ::StringW, bool>*>* rawResponseValidators;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::Func_3<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, ::StringW, bool>*>*) == 0x8);
    // System.String cacheFile
    // Size: 0x8
    // Offset: 0xD0
    ::StringW cacheFile;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.String cacheHeadersFile
    // Size: 0x8
    // Offset: 0xD8
    ::StringW cacheHeadersFile;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private Unity.RemoteConfig.ConfigRequestStatus <requestStatus>k__BackingField
    [[deprecated("Use field access instead!")]] ::Unity::RemoteConfig::ConfigRequestStatus& dyn_$requestStatus$k__BackingField();
    // Get instance field reference: private System.Action`1<Unity.RemoteConfig.ConfigResponse> FetchCompleted
    [[deprecated("Use field access instead!")]] ::System::Action_1<::Unity::RemoteConfig::ConfigResponse>*& dyn_FetchCompleted();
    // Get instance field reference: private Unity.RemoteConfig.RuntimeConfig <appConfig>k__BackingField
    [[deprecated("Use field access instead!")]] ::Unity::RemoteConfig::RuntimeConfig*& dyn_$appConfig$k__BackingField();
    // Get instance field reference: Unity.RemoteConfig.Delivery deliveryPayload
    [[deprecated("Use field access instead!")]] ::Unity::RemoteConfig::Delivery& dyn_deliveryPayload();
    // Get instance field reference: Unity.RemoteConfig.Common commonPayload
    [[deprecated("Use field access instead!")]] ::Unity::RemoteConfig::Common& dyn_commonPayload();
    // Get instance field reference: Unity.RemoteConfig.DeviceInfo deviceInfoPayload
    [[deprecated("Use field access instead!")]] ::Unity::RemoteConfig::DeviceInfo*& dyn_deviceInfoPayload();
    // Get instance field reference: private System.Action`2<Unity.RemoteConfig.ConfigResponse,Newtonsoft.Json.Linq.JObject> ResponseParsed
    [[deprecated("Use field access instead!")]] ::System::Action_2<::Unity::RemoteConfig::ConfigResponse, ::Newtonsoft::Json::Linq::JObject*>*& dyn_ResponseParsed();
    // Get instance field reference: private System.Action`3<Unity.RemoteConfig.ConfigOrigin,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String> RawResponseReturned
    [[deprecated("Use field access instead!")]] ::System::Action_3<::Unity::RemoteConfig::ConfigOrigin, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, ::StringW>*& dyn_RawResponseReturned();
    // Get instance field reference: private System.Action`3<Unity.RemoteConfig.ConfigOrigin,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String> RawResponseValidated
    [[deprecated("Use field access instead!")]] ::System::Action_3<::Unity::RemoteConfig::ConfigOrigin, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, ::StringW>*& dyn_RawResponseValidated();
    // Get instance field reference: System.Collections.Generic.List`1<System.Func`1<Newtonsoft.Json.Linq.JObject>> requestPayloadProviders
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::System::Func_1<::Newtonsoft::Json::Linq::JObject*>*>*& dyn_requestPayloadProviders();
    // Get instance field reference: System.Collections.Generic.List`1<System.Func`1<Unity.RemoteConfig.RequestHeaderTuple>> requestHeaderProviders
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::System::Func_1<::Unity::RemoteConfig::RequestHeaderTuple>*>*& dyn_requestHeaderProviders();
    // Get instance field reference: System.Collections.Generic.List`1<System.Func`3<System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String,System.Boolean>> rawResponseValidators
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::System::Func_3<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, ::StringW, bool>*>*& dyn_rawResponseValidators();
    // Get instance field reference: System.String cacheFile
    [[deprecated("Use field access instead!")]] ::StringW& dyn_cacheFile();
    // Get instance field reference: System.String cacheHeadersFile
    [[deprecated("Use field access instead!")]] ::StringW& dyn_cacheHeadersFile();
    // public Unity.RemoteConfig.ConfigRequestStatus get_requestStatus()
    // Offset: 0x18C1BF8
    ::Unity::RemoteConfig::ConfigRequestStatus get_requestStatus();
    // System.Void set_requestStatus(Unity.RemoteConfig.ConfigRequestStatus value)
    // Offset: 0x18C1C00
    void set_requestStatus(::Unity::RemoteConfig::ConfigRequestStatus value);
    // public Unity.RemoteConfig.RuntimeConfig get_appConfig()
    // Offset: 0x18C1C08
    ::Unity::RemoteConfig::RuntimeConfig* get_appConfig();
    // System.Void set_appConfig(Unity.RemoteConfig.RuntimeConfig value)
    // Offset: 0x18C1C10
    void set_appConfig(::Unity::RemoteConfig::RuntimeConfig* value);
    // System.Void add_ResponseParsed(System.Action`2<Unity.RemoteConfig.ConfigResponse,Newtonsoft.Json.Linq.JObject> value)
    // Offset: 0x18C1C18
    void add_ResponseParsed(::System::Action_2<::Unity::RemoteConfig::ConfigResponse, ::Newtonsoft::Json::Linq::JObject*>* value);
    // System.Void remove_ResponseParsed(System.Action`2<Unity.RemoteConfig.ConfigResponse,Newtonsoft.Json.Linq.JObject> value)
    // Offset: 0x18C1CB8
    void remove_ResponseParsed(::System::Action_2<::Unity::RemoteConfig::ConfigResponse, ::Newtonsoft::Json::Linq::JObject*>* value);
    // System.Void add_RawResponseReturned(System.Action`3<Unity.RemoteConfig.ConfigOrigin,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String> value)
    // Offset: 0x18C1D58
    void add_RawResponseReturned(::System::Action_3<::Unity::RemoteConfig::ConfigOrigin, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, ::StringW>* value);
    // System.Void remove_RawResponseReturned(System.Action`3<Unity.RemoteConfig.ConfigOrigin,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String> value)
    // Offset: 0x18C1DF8
    void remove_RawResponseReturned(::System::Action_3<::Unity::RemoteConfig::ConfigOrigin, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, ::StringW>* value);
    // System.Void add_RawResponseValidated(System.Action`3<Unity.RemoteConfig.ConfigOrigin,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String> value)
    // Offset: 0x18C1E98
    void add_RawResponseValidated(::System::Action_3<::Unity::RemoteConfig::ConfigOrigin, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, ::StringW>* value);
    // System.Void remove_RawResponseValidated(System.Action`3<Unity.RemoteConfig.ConfigOrigin,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String> value)
    // Offset: 0x18C1F38
    void remove_RawResponseValidated(::System::Action_3<::Unity::RemoteConfig::ConfigOrigin, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, ::StringW>* value);
    // public System.Void .ctor(System.String originService, System.String attributionMetadataStr, System.String cacheFileRC, System.String cacheHeadersFileRC)
    // Offset: 0x18C1704
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConfigManagerImpl* New_ctor(::StringW originService, ::StringW attributionMetadataStr, ::StringW cacheFileRC, ::StringW cacheHeadersFileRC) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::RemoteConfig::ConfigManagerImpl::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConfigManagerImpl*, creationType>(originService, attributionMetadataStr, cacheFileRC, cacheHeadersFileRC)));
    }
    // System.Void OnRawResponseReturned(Unity.RemoteConfig.ConfigOrigin origin, System.Collections.Generic.Dictionary`2<System.String,System.String> headers, System.String body)
    // Offset: 0x18C28C4
    void OnRawResponseReturned(::Unity::RemoteConfig::ConfigOrigin origin, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* headers, ::StringW body);
    // public System.Void FetchConfigs(T userAttributes, T2 appAttributes)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T, class T2>
    void FetchConfigs(T userAttributes, T2 appAttributes) {
      static_assert(std::is_convertible_v<T, ::System::ValueType*>);
      static_assert(std::is_convertible_v<T2, ::System::ValueType*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::RemoteConfig::ConfigManagerImpl::FetchConfigs");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "FetchConfigs", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(userAttributes), ::il2cpp_utils::ExtractType(appAttributes)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get()})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, userAttributes, appAttributes);
    }
    // System.Void PostConfig(System.Object userAttributes, System.Object appAttributes)
    // Offset: 0x18C2B8C
    void PostConfig(::Il2CppObject* userAttributes, ::Il2CppObject* appAttributes);
    // System.String PreparePayload(System.Object userAttributes, System.Object appAttributes)
    // Offset: 0x18C2BB4
    ::StringW PreparePayload(::Il2CppObject* userAttributes, ::Il2CppObject* appAttributes);
    // System.Void DoRequest(System.String jsonText)
    // Offset: 0x18C324C
    void DoRequest(::StringW jsonText);
    // public System.Void SaveCache(Unity.RemoteConfig.ConfigOrigin origin, System.Collections.Generic.Dictionary`2<System.String,System.String> headers, System.String result)
    // Offset: 0x18C3874
    void SaveCache(::Unity::RemoteConfig::ConfigOrigin origin, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* headers, ::StringW result);
    // public System.Void LoadFromCache()
    // Offset: 0x18C2330
    void LoadFromCache();
    // Newtonsoft.Json.Linq.JObject CreatePayloadJObjectFromValuesJObject(Newtonsoft.Json.Linq.JObject jObject, System.String type, System.Int64 ts)
    // Offset: 0x18C3664
    ::Newtonsoft::Json::Linq::JObject* CreatePayloadJObjectFromValuesJObject(::Newtonsoft::Json::Linq::JObject* jObject, ::StringW type, int64_t ts);
    // System.Void ToNewlineDelimitedJson(System.IO.TextWriter textWriter, System.Collections.Generic.IEnumerable`1<T> items)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    void ToNewlineDelimitedJson(::System::IO::TextWriter* textWriter, ::System::Collections::Generic::IEnumerable_1<T>* items) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::RemoteConfig::ConfigManagerImpl::ToNewlineDelimitedJson");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ToNewlineDelimitedJson", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(textWriter), ::il2cpp_utils::ExtractType(items)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, textWriter, items);
    }
  }; // Unity.RemoteConfig.ConfigManagerImpl
  #pragma pack(pop)
  static check_size<sizeof(ConfigManagerImpl), 216 + sizeof(::StringW)> __Unity_RemoteConfig_ConfigManagerImplSizeCheck;
  static_assert(sizeof(ConfigManagerImpl) == 0xE0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::RemoteConfig::ConfigManagerImpl::get_requestStatus
// Il2CppName: get_requestStatus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::RemoteConfig::ConfigRequestStatus (Unity::RemoteConfig::ConfigManagerImpl::*)()>(&Unity::RemoteConfig::ConfigManagerImpl::get_requestStatus)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::RemoteConfig::ConfigManagerImpl*), "get_requestStatus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::RemoteConfig::ConfigManagerImpl::set_requestStatus
// Il2CppName: set_requestStatus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::RemoteConfig::ConfigManagerImpl::*)(::Unity::RemoteConfig::ConfigRequestStatus)>(&Unity::RemoteConfig::ConfigManagerImpl::set_requestStatus)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Unity.RemoteConfig", "ConfigRequestStatus")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::RemoteConfig::ConfigManagerImpl*), "set_requestStatus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Unity::RemoteConfig::ConfigManagerImpl::get_appConfig
// Il2CppName: get_appConfig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::RemoteConfig::RuntimeConfig* (Unity::RemoteConfig::ConfigManagerImpl::*)()>(&Unity::RemoteConfig::ConfigManagerImpl::get_appConfig)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::RemoteConfig::ConfigManagerImpl*), "get_appConfig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::RemoteConfig::ConfigManagerImpl::set_appConfig
// Il2CppName: set_appConfig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::RemoteConfig::ConfigManagerImpl::*)(::Unity::RemoteConfig::RuntimeConfig*)>(&Unity::RemoteConfig::ConfigManagerImpl::set_appConfig)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Unity.RemoteConfig", "RuntimeConfig")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::RemoteConfig::ConfigManagerImpl*), "set_appConfig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Unity::RemoteConfig::ConfigManagerImpl::add_ResponseParsed
// Il2CppName: add_ResponseParsed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::RemoteConfig::ConfigManagerImpl::*)(::System::Action_2<::Unity::RemoteConfig::ConfigResponse, ::Newtonsoft::Json::Linq::JObject*>*)>(&Unity::RemoteConfig::ConfigManagerImpl::add_ResponseParsed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Unity.RemoteConfig", "ConfigResponse"), ::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JObject")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::RemoteConfig::ConfigManagerImpl*), "add_ResponseParsed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Unity::RemoteConfig::ConfigManagerImpl::remove_ResponseParsed
// Il2CppName: remove_ResponseParsed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::RemoteConfig::ConfigManagerImpl::*)(::System::Action_2<::Unity::RemoteConfig::ConfigResponse, ::Newtonsoft::Json::Linq::JObject*>*)>(&Unity::RemoteConfig::ConfigManagerImpl::remove_ResponseParsed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Unity.RemoteConfig", "ConfigResponse"), ::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JObject")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::RemoteConfig::ConfigManagerImpl*), "remove_ResponseParsed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Unity::RemoteConfig::ConfigManagerImpl::add_RawResponseReturned
// Il2CppName: add_RawResponseReturned
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::RemoteConfig::ConfigManagerImpl::*)(::System::Action_3<::Unity::RemoteConfig::ConfigOrigin, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, ::StringW>*)>(&Unity::RemoteConfig::ConfigManagerImpl::add_RawResponseReturned)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Unity.RemoteConfig", "ConfigOrigin"), ::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")}), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::RemoteConfig::ConfigManagerImpl*), "add_RawResponseReturned", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Unity::RemoteConfig::ConfigManagerImpl::remove_RawResponseReturned
// Il2CppName: remove_RawResponseReturned
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::RemoteConfig::ConfigManagerImpl::*)(::System::Action_3<::Unity::RemoteConfig::ConfigOrigin, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, ::StringW>*)>(&Unity::RemoteConfig::ConfigManagerImpl::remove_RawResponseReturned)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Unity.RemoteConfig", "ConfigOrigin"), ::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")}), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::RemoteConfig::ConfigManagerImpl*), "remove_RawResponseReturned", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Unity::RemoteConfig::ConfigManagerImpl::add_RawResponseValidated
// Il2CppName: add_RawResponseValidated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::RemoteConfig::ConfigManagerImpl::*)(::System::Action_3<::Unity::RemoteConfig::ConfigOrigin, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, ::StringW>*)>(&Unity::RemoteConfig::ConfigManagerImpl::add_RawResponseValidated)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Unity.RemoteConfig", "ConfigOrigin"), ::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")}), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::RemoteConfig::ConfigManagerImpl*), "add_RawResponseValidated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Unity::RemoteConfig::ConfigManagerImpl::remove_RawResponseValidated
// Il2CppName: remove_RawResponseValidated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::RemoteConfig::ConfigManagerImpl::*)(::System::Action_3<::Unity::RemoteConfig::ConfigOrigin, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, ::StringW>*)>(&Unity::RemoteConfig::ConfigManagerImpl::remove_RawResponseValidated)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Unity.RemoteConfig", "ConfigOrigin"), ::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")}), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::RemoteConfig::ConfigManagerImpl*), "remove_RawResponseValidated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Unity::RemoteConfig::ConfigManagerImpl::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Unity::RemoteConfig::ConfigManagerImpl::OnRawResponseReturned
// Il2CppName: OnRawResponseReturned
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::RemoteConfig::ConfigManagerImpl::*)(::Unity::RemoteConfig::ConfigOrigin, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, ::StringW)>(&Unity::RemoteConfig::ConfigManagerImpl::OnRawResponseReturned)> {
  static const MethodInfo* get() {
    static auto* origin = &::il2cpp_utils::GetClassFromName("Unity.RemoteConfig", "ConfigOrigin")->byval_arg;
    static auto* headers = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    static auto* body = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::RemoteConfig::ConfigManagerImpl*), "OnRawResponseReturned", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{origin, headers, body});
  }
};
// Writing MetadataGetter for method: Unity::RemoteConfig::ConfigManagerImpl::FetchConfigs
// Il2CppName: FetchConfigs
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Unity::RemoteConfig::ConfigManagerImpl::PostConfig
// Il2CppName: PostConfig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::RemoteConfig::ConfigManagerImpl::*)(::Il2CppObject*, ::Il2CppObject*)>(&Unity::RemoteConfig::ConfigManagerImpl::PostConfig)> {
  static const MethodInfo* get() {
    static auto* userAttributes = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* appAttributes = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::RemoteConfig::ConfigManagerImpl*), "PostConfig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userAttributes, appAttributes});
  }
};
// Writing MetadataGetter for method: Unity::RemoteConfig::ConfigManagerImpl::PreparePayload
// Il2CppName: PreparePayload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Unity::RemoteConfig::ConfigManagerImpl::*)(::Il2CppObject*, ::Il2CppObject*)>(&Unity::RemoteConfig::ConfigManagerImpl::PreparePayload)> {
  static const MethodInfo* get() {
    static auto* userAttributes = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* appAttributes = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::RemoteConfig::ConfigManagerImpl*), "PreparePayload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userAttributes, appAttributes});
  }
};
// Writing MetadataGetter for method: Unity::RemoteConfig::ConfigManagerImpl::DoRequest
// Il2CppName: DoRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::RemoteConfig::ConfigManagerImpl::*)(::StringW)>(&Unity::RemoteConfig::ConfigManagerImpl::DoRequest)> {
  static const MethodInfo* get() {
    static auto* jsonText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::RemoteConfig::ConfigManagerImpl*), "DoRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{jsonText});
  }
};
// Writing MetadataGetter for method: Unity::RemoteConfig::ConfigManagerImpl::SaveCache
// Il2CppName: SaveCache
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::RemoteConfig::ConfigManagerImpl::*)(::Unity::RemoteConfig::ConfigOrigin, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, ::StringW)>(&Unity::RemoteConfig::ConfigManagerImpl::SaveCache)> {
  static const MethodInfo* get() {
    static auto* origin = &::il2cpp_utils::GetClassFromName("Unity.RemoteConfig", "ConfigOrigin")->byval_arg;
    static auto* headers = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::RemoteConfig::ConfigManagerImpl*), "SaveCache", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{origin, headers, result});
  }
};
// Writing MetadataGetter for method: Unity::RemoteConfig::ConfigManagerImpl::LoadFromCache
// Il2CppName: LoadFromCache
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::RemoteConfig::ConfigManagerImpl::*)()>(&Unity::RemoteConfig::ConfigManagerImpl::LoadFromCache)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::RemoteConfig::ConfigManagerImpl*), "LoadFromCache", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::RemoteConfig::ConfigManagerImpl::CreatePayloadJObjectFromValuesJObject
// Il2CppName: CreatePayloadJObjectFromValuesJObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JObject* (Unity::RemoteConfig::ConfigManagerImpl::*)(::Newtonsoft::Json::Linq::JObject*, ::StringW, int64_t)>(&Unity::RemoteConfig::ConfigManagerImpl::CreatePayloadJObjectFromValuesJObject)> {
  static const MethodInfo* get() {
    static auto* jObject = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JObject")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ts = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::RemoteConfig::ConfigManagerImpl*), "CreatePayloadJObjectFromValuesJObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{jObject, type, ts});
  }
};
// Writing MetadataGetter for method: Unity::RemoteConfig::ConfigManagerImpl::ToNewlineDelimitedJson
// Il2CppName: ToNewlineDelimitedJson
// Cannot write MetadataGetter for generic methods!
