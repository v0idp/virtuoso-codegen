// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.RuntimeStructs
#include "Mono/RuntimeStructs.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Mono::RuntimeStructs::GenericParamInfo, "Mono", "RuntimeStructs/GenericParamInfo");
// Type namespace: Mono
namespace Mono {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Mono.RuntimeStructs/Mono.GenericParamInfo
  // [TokenAttribute] Offset: FFFFFFFF
  struct RuntimeStructs::GenericParamInfo/*, public ::System::ValueType*/ {
    public:
    public:
    // Mono.RuntimeStructs/Mono.MonoClass* pklass
    // Size: 0x8
    // Offset: 0x0
    ::Mono::RuntimeStructs::MonoClass* pklass;
    // Field size check
    static_assert(sizeof(::Mono::RuntimeStructs::MonoClass*) == 0x8);
    // System.IntPtr name
    // Size: 0x8
    // Offset: 0x8
    ::System::IntPtr name;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // System.UInt16 flags
    // Size: 0x2
    // Offset: 0x10
    uint16_t flags;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // Padding between fields: flags and: token
    char __padding2[0x2] = {};
    // System.UInt32 token
    // Size: 0x4
    // Offset: 0x14
    uint token;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Mono.RuntimeStructs/Mono.MonoClass** constraints
    // Size: 0x8
    // Offset: 0x18
    ::Mono::RuntimeStructs::MonoClass** constraints;
    // Field size check
    static_assert(sizeof(::Mono::RuntimeStructs::MonoClass**) == 0x8);
    public:
    // Creating value type constructor for type: GenericParamInfo
    constexpr GenericParamInfo(::Mono::RuntimeStructs::MonoClass* pklass_ = {}, ::System::IntPtr name_ = {}, uint16_t flags_ = {}, uint token_ = {}, ::Mono::RuntimeStructs::MonoClass** constraints_ = {}) noexcept : pklass{pklass_}, name{name_}, flags{flags_}, token{token_}, constraints{constraints_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: Mono.RuntimeStructs/Mono.MonoClass* pklass
    ::Mono::RuntimeStructs::MonoClass*& dyn_pklass();
    // Get instance field reference: System.IntPtr name
    ::System::IntPtr& dyn_name();
    // Get instance field reference: System.UInt16 flags
    uint16_t& dyn_flags();
    // Get instance field reference: System.UInt32 token
    uint& dyn_token();
    // Get instance field reference: Mono.RuntimeStructs/Mono.MonoClass** constraints
    ::Mono::RuntimeStructs::MonoClass**& dyn_constraints();
  }; // Mono.RuntimeStructs/Mono.GenericParamInfo
  #pragma pack(pop)
  static check_size<sizeof(RuntimeStructs::GenericParamInfo), 24 + sizeof(::Mono::RuntimeStructs::MonoClass**)> __Mono_RuntimeStructs_GenericParamInfoSizeCheck;
  static_assert(sizeof(RuntimeStructs::GenericParamInfo) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
