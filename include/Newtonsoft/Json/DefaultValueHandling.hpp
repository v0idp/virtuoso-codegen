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
  // Forward declaring type: DefaultValueHandling
  struct DefaultValueHandling;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::DefaultValueHandling, "Newtonsoft.Json", "DefaultValueHandling");
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.DefaultValueHandling
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct DefaultValueHandling/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DefaultValueHandling
    constexpr DefaultValueHandling(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Newtonsoft.Json.DefaultValueHandling Include
    static constexpr const int Include = 0;
    // Get static field: static public Newtonsoft.Json.DefaultValueHandling Include
    static ::Newtonsoft::Json::DefaultValueHandling _get_Include();
    // Set static field: static public Newtonsoft.Json.DefaultValueHandling Include
    static void _set_Include(::Newtonsoft::Json::DefaultValueHandling value);
    // static field const value: static public Newtonsoft.Json.DefaultValueHandling Ignore
    static constexpr const int Ignore = 1;
    // Get static field: static public Newtonsoft.Json.DefaultValueHandling Ignore
    static ::Newtonsoft::Json::DefaultValueHandling _get_Ignore();
    // Set static field: static public Newtonsoft.Json.DefaultValueHandling Ignore
    static void _set_Ignore(::Newtonsoft::Json::DefaultValueHandling value);
    // static field const value: static public Newtonsoft.Json.DefaultValueHandling Populate
    static constexpr const int Populate = 2;
    // Get static field: static public Newtonsoft.Json.DefaultValueHandling Populate
    static ::Newtonsoft::Json::DefaultValueHandling _get_Populate();
    // Set static field: static public Newtonsoft.Json.DefaultValueHandling Populate
    static void _set_Populate(::Newtonsoft::Json::DefaultValueHandling value);
    // static field const value: static public Newtonsoft.Json.DefaultValueHandling IgnoreAndPopulate
    static constexpr const int IgnoreAndPopulate = 3;
    // Get static field: static public Newtonsoft.Json.DefaultValueHandling IgnoreAndPopulate
    static ::Newtonsoft::Json::DefaultValueHandling _get_IgnoreAndPopulate();
    // Set static field: static public Newtonsoft.Json.DefaultValueHandling IgnoreAndPopulate
    static void _set_IgnoreAndPopulate(::Newtonsoft::Json::DefaultValueHandling value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Newtonsoft.Json.DefaultValueHandling
  #pragma pack(pop)
  static check_size<sizeof(DefaultValueHandling), 0 + sizeof(int)> __Newtonsoft_Json_DefaultValueHandlingSizeCheck;
  static_assert(sizeof(DefaultValueHandling) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
