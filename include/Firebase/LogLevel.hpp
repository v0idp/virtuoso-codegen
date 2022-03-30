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
// Type namespace: Firebase
namespace Firebase {
  // Forward declaring type: LogLevel
  struct LogLevel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Firebase::LogLevel, "Firebase", "LogLevel");
// Type namespace: Firebase
namespace Firebase {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.LogLevel
  // [TokenAttribute] Offset: FFFFFFFF
  struct LogLevel/*, public ::System::Enum*/ {
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
    // Creating value type constructor for type: LogLevel
    constexpr LogLevel(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Firebase.LogLevel Verbose
    static constexpr const int Verbose = 0;
    // Get static field: static public Firebase.LogLevel Verbose
    static ::Firebase::LogLevel _get_Verbose();
    // Set static field: static public Firebase.LogLevel Verbose
    static void _set_Verbose(::Firebase::LogLevel value);
    // static field const value: static public Firebase.LogLevel Debug
    static constexpr const int Debug = 1;
    // Get static field: static public Firebase.LogLevel Debug
    static ::Firebase::LogLevel _get_Debug();
    // Set static field: static public Firebase.LogLevel Debug
    static void _set_Debug(::Firebase::LogLevel value);
    // static field const value: static public Firebase.LogLevel Info
    static constexpr const int Info = 2;
    // Get static field: static public Firebase.LogLevel Info
    static ::Firebase::LogLevel _get_Info();
    // Set static field: static public Firebase.LogLevel Info
    static void _set_Info(::Firebase::LogLevel value);
    // static field const value: static public Firebase.LogLevel Warning
    static constexpr const int Warning = 3;
    // Get static field: static public Firebase.LogLevel Warning
    static ::Firebase::LogLevel _get_Warning();
    // Set static field: static public Firebase.LogLevel Warning
    static void _set_Warning(::Firebase::LogLevel value);
    // static field const value: static public Firebase.LogLevel Error
    static constexpr const int Error = 4;
    // Get static field: static public Firebase.LogLevel Error
    static ::Firebase::LogLevel _get_Error();
    // Set static field: static public Firebase.LogLevel Error
    static void _set_Error(::Firebase::LogLevel value);
    // static field const value: static public Firebase.LogLevel Assert
    static constexpr const int _Assert = 5;
    // Get static field: static public Firebase.LogLevel Assert
    static ::Firebase::LogLevel _get_Assert();
    // Set static field: static public Firebase.LogLevel Assert
    static void _set_Assert(::Firebase::LogLevel value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Firebase.LogLevel
  #pragma pack(pop)
  static check_size<sizeof(LogLevel), 16 + sizeof(int)> __Firebase_LogLevelSizeCheck;
  static_assert(sizeof(LogLevel) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
