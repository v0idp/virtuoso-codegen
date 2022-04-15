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
// Type namespace: System.Xml.Linq
namespace System::Xml::Linq {
  // Forward declaring type: LoadOptions
  struct LoadOptions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::LoadOptions, "System.Xml.Linq", "LoadOptions");
// Type namespace: System.Xml.Linq
namespace System::Xml::Linq {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Linq.LoadOptions
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct LoadOptions/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: LoadOptions
    constexpr LoadOptions(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Xml.Linq.LoadOptions None
    static constexpr const int None = 0;
    // Get static field: static public System.Xml.Linq.LoadOptions None
    static ::System::Xml::Linq::LoadOptions _get_None();
    // Set static field: static public System.Xml.Linq.LoadOptions None
    static void _set_None(::System::Xml::Linq::LoadOptions value);
    // static field const value: static public System.Xml.Linq.LoadOptions PreserveWhitespace
    static constexpr const int PreserveWhitespace = 1;
    // Get static field: static public System.Xml.Linq.LoadOptions PreserveWhitespace
    static ::System::Xml::Linq::LoadOptions _get_PreserveWhitespace();
    // Set static field: static public System.Xml.Linq.LoadOptions PreserveWhitespace
    static void _set_PreserveWhitespace(::System::Xml::Linq::LoadOptions value);
    // static field const value: static public System.Xml.Linq.LoadOptions SetBaseUri
    static constexpr const int SetBaseUri = 2;
    // Get static field: static public System.Xml.Linq.LoadOptions SetBaseUri
    static ::System::Xml::Linq::LoadOptions _get_SetBaseUri();
    // Set static field: static public System.Xml.Linq.LoadOptions SetBaseUri
    static void _set_SetBaseUri(::System::Xml::Linq::LoadOptions value);
    // static field const value: static public System.Xml.Linq.LoadOptions SetLineInfo
    static constexpr const int SetLineInfo = 4;
    // Get static field: static public System.Xml.Linq.LoadOptions SetLineInfo
    static ::System::Xml::Linq::LoadOptions _get_SetLineInfo();
    // Set static field: static public System.Xml.Linq.LoadOptions SetLineInfo
    static void _set_SetLineInfo(::System::Xml::Linq::LoadOptions value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Xml.Linq.LoadOptions
  #pragma pack(pop)
  static check_size<sizeof(LoadOptions), 0 + sizeof(int)> __System_Xml_Linq_LoadOptionsSizeCheck;
  static_assert(sizeof(LoadOptions) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
