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
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: PInfo
  struct PInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::PInfo, "System.Reflection", "PInfo");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.PInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct PInfo/*, public ::System::Enum*/ {
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
    // Creating value type constructor for type: PInfo
    constexpr PInfo(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Reflection.PInfo Attributes
    static constexpr const int Attributes = 1;
    // Get static field: static public System.Reflection.PInfo Attributes
    static ::System::Reflection::PInfo _get_Attributes();
    // Set static field: static public System.Reflection.PInfo Attributes
    static void _set_Attributes(::System::Reflection::PInfo value);
    // static field const value: static public System.Reflection.PInfo GetMethod
    static constexpr const int GetMethod = 2;
    // Get static field: static public System.Reflection.PInfo GetMethod
    static ::System::Reflection::PInfo _get_GetMethod();
    // Set static field: static public System.Reflection.PInfo GetMethod
    static void _set_GetMethod(::System::Reflection::PInfo value);
    // static field const value: static public System.Reflection.PInfo SetMethod
    static constexpr const int SetMethod = 4;
    // Get static field: static public System.Reflection.PInfo SetMethod
    static ::System::Reflection::PInfo _get_SetMethod();
    // Set static field: static public System.Reflection.PInfo SetMethod
    static void _set_SetMethod(::System::Reflection::PInfo value);
    // static field const value: static public System.Reflection.PInfo ReflectedType
    static constexpr const int ReflectedType = 8;
    // Get static field: static public System.Reflection.PInfo ReflectedType
    static ::System::Reflection::PInfo _get_ReflectedType();
    // Set static field: static public System.Reflection.PInfo ReflectedType
    static void _set_ReflectedType(::System::Reflection::PInfo value);
    // static field const value: static public System.Reflection.PInfo DeclaringType
    static constexpr const int DeclaringType = 16;
    // Get static field: static public System.Reflection.PInfo DeclaringType
    static ::System::Reflection::PInfo _get_DeclaringType();
    // Set static field: static public System.Reflection.PInfo DeclaringType
    static void _set_DeclaringType(::System::Reflection::PInfo value);
    // static field const value: static public System.Reflection.PInfo Name
    static constexpr const int Name = 32;
    // Get static field: static public System.Reflection.PInfo Name
    static ::System::Reflection::PInfo _get_Name();
    // Set static field: static public System.Reflection.PInfo Name
    static void _set_Name(::System::Reflection::PInfo value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Reflection.PInfo
  #pragma pack(pop)
  static check_size<sizeof(PInfo), 16 + sizeof(int)> __System_Reflection_PInfoSizeCheck;
  static_assert(sizeof(PInfo) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
