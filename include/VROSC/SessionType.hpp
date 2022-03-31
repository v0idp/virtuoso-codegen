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
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: SessionType
  struct SessionType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionType, "VROSC", "SessionType");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SessionType
  // [TokenAttribute] Offset: FFFFFFFF
  struct SessionType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SessionType
    constexpr SessionType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public VROSC.SessionType Local
    static constexpr const int Local = 0;
    // Get static field: static public VROSC.SessionType Local
    static ::VROSC::SessionType _get_Local();
    // Set static field: static public VROSC.SessionType Local
    static void _set_Local(::VROSC::SessionType value);
    // static field const value: static public VROSC.SessionType Cloud
    static constexpr const int Cloud = 1;
    // Get static field: static public VROSC.SessionType Cloud
    static ::VROSC::SessionType _get_Cloud();
    // Set static field: static public VROSC.SessionType Cloud
    static void _set_Cloud(::VROSC::SessionType value);
    // static field const value: static public VROSC.SessionType Community
    static constexpr const int Community = 2;
    // Get static field: static public VROSC.SessionType Community
    static ::VROSC::SessionType _get_Community();
    // Set static field: static public VROSC.SessionType Community
    static void _set_Community(::VROSC::SessionType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // VROSC.SessionType
  #pragma pack(pop)
  static check_size<sizeof(SessionType), 0 + sizeof(int)> __VROSC_SessionTypeSizeCheck;
  static_assert(sizeof(SessionType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
