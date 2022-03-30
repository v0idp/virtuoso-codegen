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
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RijndaelManagedTransformMode
  struct RijndaelManagedTransformMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RijndaelManagedTransformMode, "System.Security.Cryptography", "RijndaelManagedTransformMode");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.RijndaelManagedTransformMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct RijndaelManagedTransformMode/*, public ::System::Enum*/ {
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
    // Creating value type constructor for type: RijndaelManagedTransformMode
    constexpr RijndaelManagedTransformMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Security.Cryptography.RijndaelManagedTransformMode Encrypt
    static constexpr const int Encrypt = 0;
    // Get static field: static public System.Security.Cryptography.RijndaelManagedTransformMode Encrypt
    static ::System::Security::Cryptography::RijndaelManagedTransformMode _get_Encrypt();
    // Set static field: static public System.Security.Cryptography.RijndaelManagedTransformMode Encrypt
    static void _set_Encrypt(::System::Security::Cryptography::RijndaelManagedTransformMode value);
    // static field const value: static public System.Security.Cryptography.RijndaelManagedTransformMode Decrypt
    static constexpr const int Decrypt = 1;
    // Get static field: static public System.Security.Cryptography.RijndaelManagedTransformMode Decrypt
    static ::System::Security::Cryptography::RijndaelManagedTransformMode _get_Decrypt();
    // Set static field: static public System.Security.Cryptography.RijndaelManagedTransformMode Decrypt
    static void _set_Decrypt(::System::Security::Cryptography::RijndaelManagedTransformMode value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Security.Cryptography.RijndaelManagedTransformMode
  #pragma pack(pop)
  static check_size<sizeof(RijndaelManagedTransformMode), 16 + sizeof(int)> __System_Security_Cryptography_RijndaelManagedTransformModeSizeCheck;
  static_assert(sizeof(RijndaelManagedTransformMode) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
