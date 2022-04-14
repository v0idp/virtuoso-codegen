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
// Type namespace: System.Xml.XPath
namespace System::Xml::XPath {
  // Forward declaring type: XPathNamespaceScope
  struct XPathNamespaceScope;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XPath::XPathNamespaceScope, "System.Xml.XPath", "XPathNamespaceScope");
// Type namespace: System.Xml.XPath
namespace System::Xml::XPath {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XPath.XPathNamespaceScope
  // [TokenAttribute] Offset: FFFFFFFF
  struct XPathNamespaceScope/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: XPathNamespaceScope
    constexpr XPathNamespaceScope(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Xml.XPath.XPathNamespaceScope All
    static constexpr const int All = 0;
    // Get static field: static public System.Xml.XPath.XPathNamespaceScope All
    static ::System::Xml::XPath::XPathNamespaceScope _get_All();
    // Set static field: static public System.Xml.XPath.XPathNamespaceScope All
    static void _set_All(::System::Xml::XPath::XPathNamespaceScope value);
    // static field const value: static public System.Xml.XPath.XPathNamespaceScope ExcludeXml
    static constexpr const int ExcludeXml = 1;
    // Get static field: static public System.Xml.XPath.XPathNamespaceScope ExcludeXml
    static ::System::Xml::XPath::XPathNamespaceScope _get_ExcludeXml();
    // Set static field: static public System.Xml.XPath.XPathNamespaceScope ExcludeXml
    static void _set_ExcludeXml(::System::Xml::XPath::XPathNamespaceScope value);
    // static field const value: static public System.Xml.XPath.XPathNamespaceScope Local
    static constexpr const int Local = 2;
    // Get static field: static public System.Xml.XPath.XPathNamespaceScope Local
    static ::System::Xml::XPath::XPathNamespaceScope _get_Local();
    // Set static field: static public System.Xml.XPath.XPathNamespaceScope Local
    static void _set_Local(::System::Xml::XPath::XPathNamespaceScope value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // System.Xml.XPath.XPathNamespaceScope
  #pragma pack(pop)
  static check_size<sizeof(XPathNamespaceScope), 0 + sizeof(int)> __System_Xml_XPath_XPathNamespaceScopeSizeCheck;
  static_assert(sizeof(XPathNamespaceScope) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
