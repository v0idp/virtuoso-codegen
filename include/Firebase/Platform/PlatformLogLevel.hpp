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
// Type namespace: Firebase.Platform
namespace Firebase::Platform {
  // Forward declaring type: PlatformLogLevel
  struct PlatformLogLevel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Platform::PlatformLogLevel, "Firebase.Platform", "PlatformLogLevel");
// Type namespace: Firebase.Platform
namespace Firebase::Platform {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Platform.PlatformLogLevel
  // [TokenAttribute] Offset: FFFFFFFF
  struct PlatformLogLevel/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PlatformLogLevel
    constexpr PlatformLogLevel(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Firebase.Platform.PlatformLogLevel Verbose
    static constexpr const int Verbose = 0;
    // Get static field: static public Firebase.Platform.PlatformLogLevel Verbose
    static ::Firebase::Platform::PlatformLogLevel _get_Verbose();
    // Set static field: static public Firebase.Platform.PlatformLogLevel Verbose
    static void _set_Verbose(::Firebase::Platform::PlatformLogLevel value);
    // static field const value: static public Firebase.Platform.PlatformLogLevel Debug
    static constexpr const int Debug = 1;
    // Get static field: static public Firebase.Platform.PlatformLogLevel Debug
    static ::Firebase::Platform::PlatformLogLevel _get_Debug();
    // Set static field: static public Firebase.Platform.PlatformLogLevel Debug
    static void _set_Debug(::Firebase::Platform::PlatformLogLevel value);
    // static field const value: static public Firebase.Platform.PlatformLogLevel Info
    static constexpr const int Info = 2;
    // Get static field: static public Firebase.Platform.PlatformLogLevel Info
    static ::Firebase::Platform::PlatformLogLevel _get_Info();
    // Set static field: static public Firebase.Platform.PlatformLogLevel Info
    static void _set_Info(::Firebase::Platform::PlatformLogLevel value);
    // static field const value: static public Firebase.Platform.PlatformLogLevel Warning
    static constexpr const int Warning = 3;
    // Get static field: static public Firebase.Platform.PlatformLogLevel Warning
    static ::Firebase::Platform::PlatformLogLevel _get_Warning();
    // Set static field: static public Firebase.Platform.PlatformLogLevel Warning
    static void _set_Warning(::Firebase::Platform::PlatformLogLevel value);
    // static field const value: static public Firebase.Platform.PlatformLogLevel Error
    static constexpr const int Error = 4;
    // Get static field: static public Firebase.Platform.PlatformLogLevel Error
    static ::Firebase::Platform::PlatformLogLevel _get_Error();
    // Set static field: static public Firebase.Platform.PlatformLogLevel Error
    static void _set_Error(::Firebase::Platform::PlatformLogLevel value);
    // static field const value: static public Firebase.Platform.PlatformLogLevel Assert
    static constexpr const int _Assert = 5;
    // Get static field: static public Firebase.Platform.PlatformLogLevel Assert
    static ::Firebase::Platform::PlatformLogLevel _get_Assert();
    // Set static field: static public Firebase.Platform.PlatformLogLevel Assert
    static void _set_Assert(::Firebase::Platform::PlatformLogLevel value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Firebase.Platform.PlatformLogLevel
  #pragma pack(pop)
  static check_size<sizeof(PlatformLogLevel), 0 + sizeof(int)> __Firebase_Platform_PlatformLogLevelSizeCheck;
  static_assert(sizeof(PlatformLogLevel) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
