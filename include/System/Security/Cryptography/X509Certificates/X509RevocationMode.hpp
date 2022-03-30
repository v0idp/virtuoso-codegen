// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509RevocationMode
  struct X509RevocationMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509RevocationMode, "System.Security.Cryptography.X509Certificates", "X509RevocationMode");
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509RevocationMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct X509RevocationMode/*, public ::System::Enum*/ {
    public:
    // Writing base type padding for base size: 0x0 to desired offset: 0x10
    char ___base_padding[0x10] = {};
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x10
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: X509RevocationMode
    constexpr X509RevocationMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509RevocationMode NoCheck
    static constexpr const int NoCheck = 0;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509RevocationMode NoCheck
    static ::System::Security::Cryptography::X509Certificates::X509RevocationMode _get_NoCheck();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509RevocationMode NoCheck
    static void _set_NoCheck(::System::Security::Cryptography::X509Certificates::X509RevocationMode value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509RevocationMode Online
    static constexpr const int Online = 1;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509RevocationMode Online
    static ::System::Security::Cryptography::X509Certificates::X509RevocationMode _get_Online();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509RevocationMode Online
    static void _set_Online(::System::Security::Cryptography::X509Certificates::X509RevocationMode value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509RevocationMode Offline
    static constexpr const int Offline = 2;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509RevocationMode Offline
    static ::System::Security::Cryptography::X509Certificates::X509RevocationMode _get_Offline();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509RevocationMode Offline
    static void _set_Offline(::System::Security::Cryptography::X509Certificates::X509RevocationMode value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Security.Cryptography.X509Certificates.X509RevocationMode
  #pragma pack(pop)
  static check_size<sizeof(X509RevocationMode), 16 + sizeof(int)> __System_Security_Cryptography_X509Certificates_X509RevocationModeSizeCheck;
  static_assert(sizeof(X509RevocationMode) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
