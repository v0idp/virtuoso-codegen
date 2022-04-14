// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Unity.UnityTls
#include "Mono/Unity/UnityTls.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::UnityTls::unitytls_x509verify_result, "Mono.Unity", "UnityTls/unitytls_x509verify_result");
// Type namespace: Mono.Unity
namespace Mono::Unity {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct UnityTls::unitytls_x509verify_result/*, public ::System::Enum*/ {
    public:
    public:
    // public System.UInt32 value__
    // Size: 0x4
    // Offset: 0x0
    uint value;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: unitytls_x509verify_result
    constexpr unitytls_x509verify_result(uint value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return value;
    }
    // static field const value: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_SUCCESS
    static constexpr const uint UNITYTLS_X509VERIFY_SUCCESS = 0u;
    // Get static field: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_SUCCESS
    static ::Mono::Unity::UnityTls::unitytls_x509verify_result _get_UNITYTLS_X509VERIFY_SUCCESS();
    // Set static field: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_SUCCESS
    static void _set_UNITYTLS_X509VERIFY_SUCCESS(::Mono::Unity::UnityTls::unitytls_x509verify_result value);
    // static field const value: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_NOT_DONE
    static constexpr const uint UNITYTLS_X509VERIFY_NOT_DONE = 2147483648u;
    // Get static field: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_NOT_DONE
    static ::Mono::Unity::UnityTls::unitytls_x509verify_result _get_UNITYTLS_X509VERIFY_NOT_DONE();
    // Set static field: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_NOT_DONE
    static void _set_UNITYTLS_X509VERIFY_NOT_DONE(::Mono::Unity::UnityTls::unitytls_x509verify_result value);
    // static field const value: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_FATAL_ERROR
    static constexpr const uint UNITYTLS_X509VERIFY_FATAL_ERROR = 4294967295u;
    // Get static field: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_FATAL_ERROR
    static ::Mono::Unity::UnityTls::unitytls_x509verify_result _get_UNITYTLS_X509VERIFY_FATAL_ERROR();
    // Set static field: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_FATAL_ERROR
    static void _set_UNITYTLS_X509VERIFY_FATAL_ERROR(::Mono::Unity::UnityTls::unitytls_x509verify_result value);
    // static field const value: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_EXPIRED
    static constexpr const uint UNITYTLS_X509VERIFY_FLAG_EXPIRED = 1u;
    // Get static field: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_EXPIRED
    static ::Mono::Unity::UnityTls::unitytls_x509verify_result _get_UNITYTLS_X509VERIFY_FLAG_EXPIRED();
    // Set static field: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_EXPIRED
    static void _set_UNITYTLS_X509VERIFY_FLAG_EXPIRED(::Mono::Unity::UnityTls::unitytls_x509verify_result value);
    // static field const value: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_REVOKED
    static constexpr const uint UNITYTLS_X509VERIFY_FLAG_REVOKED = 2u;
    // Get static field: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_REVOKED
    static ::Mono::Unity::UnityTls::unitytls_x509verify_result _get_UNITYTLS_X509VERIFY_FLAG_REVOKED();
    // Set static field: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_REVOKED
    static void _set_UNITYTLS_X509VERIFY_FLAG_REVOKED(::Mono::Unity::UnityTls::unitytls_x509verify_result value);
    // static field const value: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_CN_MISMATCH
    static constexpr const uint UNITYTLS_X509VERIFY_FLAG_CN_MISMATCH = 4u;
    // Get static field: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_CN_MISMATCH
    static ::Mono::Unity::UnityTls::unitytls_x509verify_result _get_UNITYTLS_X509VERIFY_FLAG_CN_MISMATCH();
    // Set static field: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_CN_MISMATCH
    static void _set_UNITYTLS_X509VERIFY_FLAG_CN_MISMATCH(::Mono::Unity::UnityTls::unitytls_x509verify_result value);
    // static field const value: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_NOT_TRUSTED
    static constexpr const uint UNITYTLS_X509VERIFY_FLAG_NOT_TRUSTED = 8u;
    // Get static field: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_NOT_TRUSTED
    static ::Mono::Unity::UnityTls::unitytls_x509verify_result _get_UNITYTLS_X509VERIFY_FLAG_NOT_TRUSTED();
    // Set static field: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_NOT_TRUSTED
    static void _set_UNITYTLS_X509VERIFY_FLAG_NOT_TRUSTED(::Mono::Unity::UnityTls::unitytls_x509verify_result value);
    // static field const value: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_USER_ERROR1
    static constexpr const uint UNITYTLS_X509VERIFY_FLAG_USER_ERROR1 = 65536u;
    // Get static field: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_USER_ERROR1
    static ::Mono::Unity::UnityTls::unitytls_x509verify_result _get_UNITYTLS_X509VERIFY_FLAG_USER_ERROR1();
    // Set static field: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_USER_ERROR1
    static void _set_UNITYTLS_X509VERIFY_FLAG_USER_ERROR1(::Mono::Unity::UnityTls::unitytls_x509verify_result value);
    // static field const value: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_USER_ERROR2
    static constexpr const uint UNITYTLS_X509VERIFY_FLAG_USER_ERROR2 = 131072u;
    // Get static field: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_USER_ERROR2
    static ::Mono::Unity::UnityTls::unitytls_x509verify_result _get_UNITYTLS_X509VERIFY_FLAG_USER_ERROR2();
    // Set static field: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_USER_ERROR2
    static void _set_UNITYTLS_X509VERIFY_FLAG_USER_ERROR2(::Mono::Unity::UnityTls::unitytls_x509verify_result value);
    // static field const value: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_USER_ERROR3
    static constexpr const uint UNITYTLS_X509VERIFY_FLAG_USER_ERROR3 = 262144u;
    // Get static field: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_USER_ERROR3
    static ::Mono::Unity::UnityTls::unitytls_x509verify_result _get_UNITYTLS_X509VERIFY_FLAG_USER_ERROR3();
    // Set static field: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_USER_ERROR3
    static void _set_UNITYTLS_X509VERIFY_FLAG_USER_ERROR3(::Mono::Unity::UnityTls::unitytls_x509verify_result value);
    // static field const value: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_USER_ERROR4
    static constexpr const uint UNITYTLS_X509VERIFY_FLAG_USER_ERROR4 = 524288u;
    // Get static field: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_USER_ERROR4
    static ::Mono::Unity::UnityTls::unitytls_x509verify_result _get_UNITYTLS_X509VERIFY_FLAG_USER_ERROR4();
    // Set static field: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_USER_ERROR4
    static void _set_UNITYTLS_X509VERIFY_FLAG_USER_ERROR4(::Mono::Unity::UnityTls::unitytls_x509verify_result value);
    // static field const value: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_USER_ERROR5
    static constexpr const uint UNITYTLS_X509VERIFY_FLAG_USER_ERROR5 = 1048576u;
    // Get static field: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_USER_ERROR5
    static ::Mono::Unity::UnityTls::unitytls_x509verify_result _get_UNITYTLS_X509VERIFY_FLAG_USER_ERROR5();
    // Set static field: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_USER_ERROR5
    static void _set_UNITYTLS_X509VERIFY_FLAG_USER_ERROR5(::Mono::Unity::UnityTls::unitytls_x509verify_result value);
    // static field const value: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_USER_ERROR6
    static constexpr const uint UNITYTLS_X509VERIFY_FLAG_USER_ERROR6 = 2097152u;
    // Get static field: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_USER_ERROR6
    static ::Mono::Unity::UnityTls::unitytls_x509verify_result _get_UNITYTLS_X509VERIFY_FLAG_USER_ERROR6();
    // Set static field: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_USER_ERROR6
    static void _set_UNITYTLS_X509VERIFY_FLAG_USER_ERROR6(::Mono::Unity::UnityTls::unitytls_x509verify_result value);
    // static field const value: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_USER_ERROR7
    static constexpr const uint UNITYTLS_X509VERIFY_FLAG_USER_ERROR7 = 4194304u;
    // Get static field: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_USER_ERROR7
    static ::Mono::Unity::UnityTls::unitytls_x509verify_result _get_UNITYTLS_X509VERIFY_FLAG_USER_ERROR7();
    // Set static field: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_USER_ERROR7
    static void _set_UNITYTLS_X509VERIFY_FLAG_USER_ERROR7(::Mono::Unity::UnityTls::unitytls_x509verify_result value);
    // static field const value: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_USER_ERROR8
    static constexpr const uint UNITYTLS_X509VERIFY_FLAG_USER_ERROR8 = 8388608u;
    // Get static field: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_USER_ERROR8
    static ::Mono::Unity::UnityTls::unitytls_x509verify_result _get_UNITYTLS_X509VERIFY_FLAG_USER_ERROR8();
    // Set static field: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_USER_ERROR8
    static void _set_UNITYTLS_X509VERIFY_FLAG_USER_ERROR8(::Mono::Unity::UnityTls::unitytls_x509verify_result value);
    // static field const value: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_UNKNOWN_ERROR
    static constexpr const uint UNITYTLS_X509VERIFY_FLAG_UNKNOWN_ERROR = 134217728u;
    // Get static field: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_UNKNOWN_ERROR
    static ::Mono::Unity::UnityTls::unitytls_x509verify_result _get_UNITYTLS_X509VERIFY_FLAG_UNKNOWN_ERROR();
    // Set static field: static public Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result UNITYTLS_X509VERIFY_FLAG_UNKNOWN_ERROR
    static void _set_UNITYTLS_X509VERIFY_FLAG_UNKNOWN_ERROR(::Mono::Unity::UnityTls::unitytls_x509verify_result value);
    // Get instance field reference: public System.UInt32 value__
    [[deprecated]] uint& dyn_value__();
  }; // Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result
  #pragma pack(pop)
  static check_size<sizeof(UnityTls::unitytls_x509verify_result), 0 + sizeof(uint)> __Mono_Unity_UnityTls_unitytls_x509verify_resultSizeCheck;
  static_assert(sizeof(UnityTls::unitytls_x509verify_result) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
