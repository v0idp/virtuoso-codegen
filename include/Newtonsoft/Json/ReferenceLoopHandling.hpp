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
  // Forward declaring type: ReferenceLoopHandling
  struct ReferenceLoopHandling;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::ReferenceLoopHandling, "Newtonsoft.Json", "ReferenceLoopHandling");
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.ReferenceLoopHandling
  // [TokenAttribute] Offset: FFFFFFFF
  struct ReferenceLoopHandling/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ReferenceLoopHandling
    constexpr ReferenceLoopHandling(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Newtonsoft.Json.ReferenceLoopHandling Error
    static constexpr const int Error = 0;
    // Get static field: static public Newtonsoft.Json.ReferenceLoopHandling Error
    static ::Newtonsoft::Json::ReferenceLoopHandling _get_Error();
    // Set static field: static public Newtonsoft.Json.ReferenceLoopHandling Error
    static void _set_Error(::Newtonsoft::Json::ReferenceLoopHandling value);
    // static field const value: static public Newtonsoft.Json.ReferenceLoopHandling Ignore
    static constexpr const int Ignore = 1;
    // Get static field: static public Newtonsoft.Json.ReferenceLoopHandling Ignore
    static ::Newtonsoft::Json::ReferenceLoopHandling _get_Ignore();
    // Set static field: static public Newtonsoft.Json.ReferenceLoopHandling Ignore
    static void _set_Ignore(::Newtonsoft::Json::ReferenceLoopHandling value);
    // static field const value: static public Newtonsoft.Json.ReferenceLoopHandling Serialize
    static constexpr const int Serialize = 2;
    // Get static field: static public Newtonsoft.Json.ReferenceLoopHandling Serialize
    static ::Newtonsoft::Json::ReferenceLoopHandling _get_Serialize();
    // Set static field: static public Newtonsoft.Json.ReferenceLoopHandling Serialize
    static void _set_Serialize(::Newtonsoft::Json::ReferenceLoopHandling value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Newtonsoft.Json.ReferenceLoopHandling
  #pragma pack(pop)
  static check_size<sizeof(ReferenceLoopHandling), 0 + sizeof(int)> __Newtonsoft_Json_ReferenceLoopHandlingSizeCheck;
  static_assert(sizeof(ReferenceLoopHandling) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
