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
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: NamespaceHandling
  struct NamespaceHandling;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::NamespaceHandling, "System.Xml", "NamespaceHandling");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.NamespaceHandling
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct NamespaceHandling/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: NamespaceHandling
    constexpr NamespaceHandling(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Xml.NamespaceHandling Default
    static constexpr const int Default = 0;
    // Get static field: static public System.Xml.NamespaceHandling Default
    static ::System::Xml::NamespaceHandling _get_Default();
    // Set static field: static public System.Xml.NamespaceHandling Default
    static void _set_Default(::System::Xml::NamespaceHandling value);
    // static field const value: static public System.Xml.NamespaceHandling OmitDuplicates
    static constexpr const int OmitDuplicates = 1;
    // Get static field: static public System.Xml.NamespaceHandling OmitDuplicates
    static ::System::Xml::NamespaceHandling _get_OmitDuplicates();
    // Set static field: static public System.Xml.NamespaceHandling OmitDuplicates
    static void _set_OmitDuplicates(::System::Xml::NamespaceHandling value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Xml.NamespaceHandling
  #pragma pack(pop)
  static check_size<sizeof(NamespaceHandling), 0 + sizeof(int)> __System_Xml_NamespaceHandlingSizeCheck;
  static_assert(sizeof(NamespaceHandling) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
