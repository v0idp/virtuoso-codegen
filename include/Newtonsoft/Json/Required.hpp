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
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Forward declaring type: Required
  struct Required;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Required, "Newtonsoft.Json", "Required");
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Required
  // [TokenAttribute] Offset: FFFFFFFF
  struct Required/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Required
    constexpr Required(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Newtonsoft.Json.Required Default
    static constexpr const int Default = 0;
    // Get static field: static public Newtonsoft.Json.Required Default
    static ::Newtonsoft::Json::Required _get_Default();
    // Set static field: static public Newtonsoft.Json.Required Default
    static void _set_Default(::Newtonsoft::Json::Required value);
    // static field const value: static public Newtonsoft.Json.Required AllowNull
    static constexpr const int AllowNull = 1;
    // Get static field: static public Newtonsoft.Json.Required AllowNull
    static ::Newtonsoft::Json::Required _get_AllowNull();
    // Set static field: static public Newtonsoft.Json.Required AllowNull
    static void _set_AllowNull(::Newtonsoft::Json::Required value);
    // static field const value: static public Newtonsoft.Json.Required Always
    static constexpr const int Always = 2;
    // Get static field: static public Newtonsoft.Json.Required Always
    static ::Newtonsoft::Json::Required _get_Always();
    // Set static field: static public Newtonsoft.Json.Required Always
    static void _set_Always(::Newtonsoft::Json::Required value);
    // static field const value: static public Newtonsoft.Json.Required DisallowNull
    static constexpr const int DisallowNull = 3;
    // Get static field: static public Newtonsoft.Json.Required DisallowNull
    static ::Newtonsoft::Json::Required _get_DisallowNull();
    // Set static field: static public Newtonsoft.Json.Required DisallowNull
    static void _set_DisallowNull(::Newtonsoft::Json::Required value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // Newtonsoft.Json.Required
  #pragma pack(pop)
  static check_size<sizeof(Required), 0 + sizeof(int)> __Newtonsoft_Json_RequiredSizeCheck;
  static_assert(sizeof(Required) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
