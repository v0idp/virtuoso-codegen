// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Unity.RemoteConfig
namespace Unity::RemoteConfig {
  // Forward declaring type: RequestHeaderTuple
  struct RequestHeaderTuple;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::RemoteConfig::RequestHeaderTuple, "Unity.RemoteConfig", "RequestHeaderTuple");
// Type namespace: Unity.RemoteConfig
namespace Unity::RemoteConfig {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Unity.RemoteConfig.RequestHeaderTuple
  // [TokenAttribute] Offset: FFFFFFFF
  struct RequestHeaderTuple/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.String key
    // Size: 0x8
    // Offset: 0x0
    ::StringW key;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String value
    // Size: 0x8
    // Offset: 0x8
    ::StringW value;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating value type constructor for type: RequestHeaderTuple
    constexpr RequestHeaderTuple(::StringW key_ = {}, ::StringW value_ = {}) noexcept : key{key_}, value{value_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.String key
    [[deprecated]] ::StringW& dyn_key();
    // Get instance field reference: public System.String value
    [[deprecated]] ::StringW& dyn_value();
  }; // Unity.RemoteConfig.RequestHeaderTuple
  #pragma pack(pop)
  static check_size<sizeof(RequestHeaderTuple), 8 + sizeof(::StringW)> __Unity_RemoteConfig_RequestHeaderTupleSizeCheck;
  static_assert(sizeof(RequestHeaderTuple) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
