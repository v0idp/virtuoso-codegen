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
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::UnityTls::unitytls_tlsctx_callbacks, "Mono.Unity", "UnityTls/unitytls_tlsctx_callbacks");
// Type namespace: Mono.Unity
namespace Mono::Unity {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Mono.Unity.UnityTls/Mono.Unity.unitytls_tlsctx_callbacks
  // [TokenAttribute] Offset: FFFFFFFF
  struct UnityTls::unitytls_tlsctx_callbacks/*, public ::System::ValueType*/ {
    public:
    public:
    // public Mono.Unity.UnityTls/Mono.Unity.unitytls_tlsctx_read_callback read
    // Size: 0x8
    // Offset: 0x0
    ::Mono::Unity::UnityTls::unitytls_tlsctx_read_callback* read;
    // Field size check
    static_assert(sizeof(::Mono::Unity::UnityTls::unitytls_tlsctx_read_callback*) == 0x8);
    // public Mono.Unity.UnityTls/Mono.Unity.unitytls_tlsctx_write_callback write
    // Size: 0x8
    // Offset: 0x8
    ::Mono::Unity::UnityTls::unitytls_tlsctx_write_callback* write;
    // Field size check
    static_assert(sizeof(::Mono::Unity::UnityTls::unitytls_tlsctx_write_callback*) == 0x8);
    // public System.Void* data
    // Size: 0x8
    // Offset: 0x10
    void* data;
    // Field size check
    static_assert(sizeof(void*) == 0x8);
    public:
    // Creating value type constructor for type: unitytls_tlsctx_callbacks
    constexpr unitytls_tlsctx_callbacks(::Mono::Unity::UnityTls::unitytls_tlsctx_read_callback* read_ = {}, ::Mono::Unity::UnityTls::unitytls_tlsctx_write_callback* write_ = {}, void* data_ = {}) noexcept : read{read_}, write{write_}, data{data_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public Mono.Unity.UnityTls/Mono.Unity.unitytls_tlsctx_read_callback read
    [[deprecated]] ::Mono::Unity::UnityTls::unitytls_tlsctx_read_callback*& dyn_read();
    // Get instance field reference: public Mono.Unity.UnityTls/Mono.Unity.unitytls_tlsctx_write_callback write
    [[deprecated]] ::Mono::Unity::UnityTls::unitytls_tlsctx_write_callback*& dyn_write();
    // Get instance field reference: public System.Void* data
    [[deprecated]] void*& dyn_data();
  }; // Mono.Unity.UnityTls/Mono.Unity.unitytls_tlsctx_callbacks
  #pragma pack(pop)
  static check_size<sizeof(UnityTls::unitytls_tlsctx_callbacks), 16 + sizeof(void*)> __Mono_Unity_UnityTls_unitytls_tlsctx_callbacksSizeCheck;
  static_assert(sizeof(UnityTls::unitytls_tlsctx_callbacks) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
