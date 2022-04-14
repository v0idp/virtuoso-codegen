// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Unity.UnityTls
#include "Mono/Unity/UnityTls.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Mono.Unity.UnityTls/Mono.Unity.unitytls_error_code
#include "Mono/Unity/UnityTls_unitytls_error_code.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::UnityTls::unitytls_errorstate, "Mono.Unity", "UnityTls/unitytls_errorstate");
// Type namespace: Mono.Unity
namespace Mono::Unity {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Mono.Unity.UnityTls/Mono.Unity.unitytls_errorstate
  // [TokenAttribute] Offset: FFFFFFFF
  struct UnityTls::unitytls_errorstate/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.UInt32 magic
    // Size: 0x4
    // Offset: 0x0
    uint magic;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public Mono.Unity.UnityTls/Mono.Unity.unitytls_error_code code
    // Size: 0x4
    // Offset: 0x4
    ::Mono::Unity::UnityTls::unitytls_error_code code;
    // Field size check
    static_assert(sizeof(::Mono::Unity::UnityTls::unitytls_error_code) == 0x4);
    // private System.UInt64 reserved
    // Size: 0x8
    // Offset: 0x8
    uint64_t reserved;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    public:
    // Creating value type constructor for type: unitytls_errorstate
    constexpr unitytls_errorstate(uint magic_ = {}, ::Mono::Unity::UnityTls::unitytls_error_code code_ = {}, uint64_t reserved_ = {}) noexcept : magic{magic_}, code{code_}, reserved{reserved_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.UInt32 magic
    [[deprecated]] uint& dyn_magic();
    // Get instance field reference: public Mono.Unity.UnityTls/Mono.Unity.unitytls_error_code code
    [[deprecated]] ::Mono::Unity::UnityTls::unitytls_error_code& dyn_code();
    // Get instance field reference: private System.UInt64 reserved
    [[deprecated]] uint64_t& dyn_reserved();
  }; // Mono.Unity.UnityTls/Mono.Unity.unitytls_errorstate
  #pragma pack(pop)
  static check_size<sizeof(UnityTls::unitytls_errorstate), 8 + sizeof(uint64_t)> __Mono_Unity_UnityTls_unitytls_errorstateSizeCheck;
  static_assert(sizeof(UnityTls::unitytls_errorstate) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
