// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Unity.RemoteConfig.ConfigOrigin
#include "Unity/RemoteConfig/ConfigOrigin.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json::Linq
namespace Newtonsoft::Json::Linq {
  // Forward declaring type: JObject
  class JObject;
}
// Forward declaring namespace: Newtonsoft::Json
namespace Newtonsoft::Json {
  // Forward declaring type: JsonSerializerSettings
  class JsonSerializerSettings;
}
// Forward declaring namespace: Unity::RemoteConfig
namespace Unity::RemoteConfig {
  // Forward declaring type: ConfigManagerImpl
  class ConfigManagerImpl;
  // Forward declaring type: ConfigResponse
  struct ConfigResponse;
}
// Completed forward declares
// Type namespace: Unity.RemoteConfig
namespace Unity::RemoteConfig {
  // Forward declaring type: RuntimeConfig
  class RuntimeConfig;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::RemoteConfig::RuntimeConfig);
DEFINE_IL2CPP_ARG_TYPE(::Unity::RemoteConfig::RuntimeConfig*, "Unity.RemoteConfig", "RuntimeConfig");
// Type namespace: Unity.RemoteConfig
namespace Unity::RemoteConfig {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Unity.RemoteConfig.RuntimeConfig
  // [TokenAttribute] Offset: FFFFFFFF
  class RuntimeConfig : public ::Il2CppObject {
    public:
    public:
    // private Unity.RemoteConfig.ConfigOrigin <origin>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    ::Unity::RemoteConfig::ConfigOrigin origin;
    // Field size check
    static_assert(sizeof(::Unity::RemoteConfig::ConfigOrigin) == 0x4);
    // Padding between fields: origin and: config
    char __padding0[0x4] = {};
    // Newtonsoft.Json.Linq.JObject _config
    // Size: 0x8
    // Offset: 0x18
    ::Newtonsoft::Json::Linq::JObject* config;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Linq::JObject*) == 0x8);
    // Newtonsoft.Json.Linq.JObject metadata
    // Size: 0x8
    // Offset: 0x20
    ::Newtonsoft::Json::Linq::JObject* metadata;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Linq::JObject*) == 0x8);
    // private System.String configKey
    // Size: 0x8
    // Offset: 0x28
    ::StringW configKey;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private Newtonsoft.Json.JsonSerializerSettings rawDateSettings
    // Size: 0x8
    // Offset: 0x30
    ::Newtonsoft::Json::JsonSerializerSettings* rawDateSettings;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::JsonSerializerSettings*) == 0x8);
    public:
    // Get instance field reference: private Unity.RemoteConfig.ConfigOrigin <origin>k__BackingField
    [[deprecated]] ::Unity::RemoteConfig::ConfigOrigin& dyn_$origin$k__BackingField();
    // Get instance field reference: Newtonsoft.Json.Linq.JObject _config
    [[deprecated]] ::Newtonsoft::Json::Linq::JObject*& dyn__config();
    // Get instance field reference: Newtonsoft.Json.Linq.JObject metadata
    [[deprecated]] ::Newtonsoft::Json::Linq::JObject*& dyn_metadata();
    // Get instance field reference: private System.String configKey
    [[deprecated]] ::StringW& dyn_configKey();
    // Get instance field reference: private Newtonsoft.Json.JsonSerializerSettings rawDateSettings
    [[deprecated]] ::Newtonsoft::Json::JsonSerializerSettings*& dyn_rawDateSettings();
    // System.Void set_origin(Unity.RemoteConfig.ConfigOrigin value)
    // Offset: 0x18C4038
    void set_origin(::Unity::RemoteConfig::ConfigOrigin value);
    // System.Void .ctor(Unity.RemoteConfig.ConfigManagerImpl _configmanagerImpl, System.String configKey)
    // Offset: 0x18C1FD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RuntimeConfig* New_ctor(::Unity::RemoteConfig::ConfigManagerImpl* _configmanagerImpl, ::StringW configKey) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::RemoteConfig::RuntimeConfig::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RuntimeConfig*, creationType>(_configmanagerImpl, configKey)));
    }
    // private System.Void ConfigManager_ResponseParsed(Unity.RemoteConfig.ConfigResponse configResponse, Newtonsoft.Json.Linq.JObject obj)
    // Offset: 0x18C4040
    void ConfigManager_ResponseParsed(::Unity::RemoteConfig::ConfigResponse configResponse, ::Newtonsoft::Json::Linq::JObject* obj);
    // public System.String GetString(System.String key, System.String defaultValue)
    // Offset: 0x18C419C
    ::StringW GetString(::StringW key, ::StringW defaultValue);
  }; // Unity.RemoteConfig.RuntimeConfig
  #pragma pack(pop)
  static check_size<sizeof(RuntimeConfig), 48 + sizeof(::Newtonsoft::Json::JsonSerializerSettings*)> __Unity_RemoteConfig_RuntimeConfigSizeCheck;
  static_assert(sizeof(RuntimeConfig) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::RemoteConfig::RuntimeConfig::set_origin
// Il2CppName: set_origin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::RemoteConfig::RuntimeConfig::*)(::Unity::RemoteConfig::ConfigOrigin)>(&Unity::RemoteConfig::RuntimeConfig::set_origin)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Unity.RemoteConfig", "ConfigOrigin")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::RemoteConfig::RuntimeConfig*), "set_origin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Unity::RemoteConfig::RuntimeConfig::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Unity::RemoteConfig::RuntimeConfig::ConfigManager_ResponseParsed
// Il2CppName: ConfigManager_ResponseParsed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::RemoteConfig::RuntimeConfig::*)(::Unity::RemoteConfig::ConfigResponse, ::Newtonsoft::Json::Linq::JObject*)>(&Unity::RemoteConfig::RuntimeConfig::ConfigManager_ResponseParsed)> {
  static const MethodInfo* get() {
    static auto* configResponse = &::il2cpp_utils::GetClassFromName("Unity.RemoteConfig", "ConfigResponse")->byval_arg;
    static auto* obj = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::RemoteConfig::RuntimeConfig*), "ConfigManager_ResponseParsed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{configResponse, obj});
  }
};
// Writing MetadataGetter for method: Unity::RemoteConfig::RuntimeConfig::GetString
// Il2CppName: GetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Unity::RemoteConfig::RuntimeConfig::*)(::StringW, ::StringW)>(&Unity::RemoteConfig::RuntimeConfig::GetString)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* defaultValue = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::RemoteConfig::RuntimeConfig*), "GetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, defaultValue});
  }
};
