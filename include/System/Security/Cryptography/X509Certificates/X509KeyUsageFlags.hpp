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
  // Forward declaring type: X509KeyUsageFlags
  struct X509KeyUsageFlags;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags, "System.Security.Cryptography.X509Certificates", "X509KeyUsageFlags");
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509KeyUsageFlags
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct X509KeyUsageFlags/*, public ::System::Enum*/ {
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
    // Creating value type constructor for type: X509KeyUsageFlags
    constexpr X509KeyUsageFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509KeyUsageFlags None
    static constexpr const int None = 0;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509KeyUsageFlags None
    static ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags _get_None();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509KeyUsageFlags None
    static void _set_None(::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509KeyUsageFlags EncipherOnly
    static constexpr const int EncipherOnly = 1;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509KeyUsageFlags EncipherOnly
    static ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags _get_EncipherOnly();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509KeyUsageFlags EncipherOnly
    static void _set_EncipherOnly(::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509KeyUsageFlags CrlSign
    static constexpr const int CrlSign = 2;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509KeyUsageFlags CrlSign
    static ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags _get_CrlSign();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509KeyUsageFlags CrlSign
    static void _set_CrlSign(::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509KeyUsageFlags KeyCertSign
    static constexpr const int KeyCertSign = 4;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509KeyUsageFlags KeyCertSign
    static ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags _get_KeyCertSign();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509KeyUsageFlags KeyCertSign
    static void _set_KeyCertSign(::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509KeyUsageFlags KeyAgreement
    static constexpr const int KeyAgreement = 8;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509KeyUsageFlags KeyAgreement
    static ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags _get_KeyAgreement();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509KeyUsageFlags KeyAgreement
    static void _set_KeyAgreement(::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509KeyUsageFlags DataEncipherment
    static constexpr const int DataEncipherment = 16;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509KeyUsageFlags DataEncipherment
    static ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags _get_DataEncipherment();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509KeyUsageFlags DataEncipherment
    static void _set_DataEncipherment(::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509KeyUsageFlags KeyEncipherment
    static constexpr const int KeyEncipherment = 32;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509KeyUsageFlags KeyEncipherment
    static ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags _get_KeyEncipherment();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509KeyUsageFlags KeyEncipherment
    static void _set_KeyEncipherment(::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509KeyUsageFlags NonRepudiation
    static constexpr const int NonRepudiation = 64;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509KeyUsageFlags NonRepudiation
    static ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags _get_NonRepudiation();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509KeyUsageFlags NonRepudiation
    static void _set_NonRepudiation(::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509KeyUsageFlags DigitalSignature
    static constexpr const int DigitalSignature = 128;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509KeyUsageFlags DigitalSignature
    static ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags _get_DigitalSignature();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509KeyUsageFlags DigitalSignature
    static void _set_DigitalSignature(::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags value);
    // static field const value: static public System.Security.Cryptography.X509Certificates.X509KeyUsageFlags DecipherOnly
    static constexpr const int DecipherOnly = 32768;
    // Get static field: static public System.Security.Cryptography.X509Certificates.X509KeyUsageFlags DecipherOnly
    static ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags _get_DecipherOnly();
    // Set static field: static public System.Security.Cryptography.X509Certificates.X509KeyUsageFlags DecipherOnly
    static void _set_DecipherOnly(::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Security.Cryptography.X509Certificates.X509KeyUsageFlags
  #pragma pack(pop)
  static check_size<sizeof(X509KeyUsageFlags), 16 + sizeof(int)> __System_Security_Cryptography_X509Certificates_X509KeyUsageFlagsSizeCheck;
  static_assert(sizeof(X509KeyUsageFlags) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
