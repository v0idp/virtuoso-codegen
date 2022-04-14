// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XmlCharType
#include "System/Xml/XmlCharType.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: MS::Internal::Xml::XPath
namespace MS::Internal::Xml::XPath {
  // Skipping declaration: LexKind because it is already included!
}
// Completed forward declares
// Type namespace: MS.Internal.Xml.XPath
namespace MS::Internal::Xml::XPath {
  // Forward declaring type: XPathScanner
  class XPathScanner;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MS::Internal::Xml::XPath::XPathScanner);
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::XPath::XPathScanner*, "MS.Internal.Xml.XPath", "XPathScanner");
// Type namespace: MS.Internal.Xml.XPath
namespace MS::Internal::Xml::XPath {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: MS.Internal.Xml.XPath.XPathScanner
  // [TokenAttribute] Offset: FFFFFFFF
  class XPathScanner : public ::Il2CppObject {
    public:
    // Nested type: ::MS::Internal::Xml::XPath::XPathScanner::LexKind
    struct LexKind;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind
    // [TokenAttribute] Offset: FFFFFFFF
    struct LexKind/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: LexKind
      constexpr LexKind(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Comma
      static constexpr const int Comma = 44;
      // Get static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Comma
      static ::MS::Internal::Xml::XPath::XPathScanner::LexKind _get_Comma();
      // Set static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Comma
      static void _set_Comma(::MS::Internal::Xml::XPath::XPathScanner::LexKind value);
      // static field const value: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Slash
      static constexpr const int Slash = 47;
      // Get static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Slash
      static ::MS::Internal::Xml::XPath::XPathScanner::LexKind _get_Slash();
      // Set static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Slash
      static void _set_Slash(::MS::Internal::Xml::XPath::XPathScanner::LexKind value);
      // static field const value: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind At
      static constexpr const int At = 64;
      // Get static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind At
      static ::MS::Internal::Xml::XPath::XPathScanner::LexKind _get_At();
      // Set static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind At
      static void _set_At(::MS::Internal::Xml::XPath::XPathScanner::LexKind value);
      // static field const value: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Dot
      static constexpr const int Dot = 46;
      // Get static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Dot
      static ::MS::Internal::Xml::XPath::XPathScanner::LexKind _get_Dot();
      // Set static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Dot
      static void _set_Dot(::MS::Internal::Xml::XPath::XPathScanner::LexKind value);
      // static field const value: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind LParens
      static constexpr const int LParens = 40;
      // Get static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind LParens
      static ::MS::Internal::Xml::XPath::XPathScanner::LexKind _get_LParens();
      // Set static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind LParens
      static void _set_LParens(::MS::Internal::Xml::XPath::XPathScanner::LexKind value);
      // static field const value: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind RParens
      static constexpr const int RParens = 41;
      // Get static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind RParens
      static ::MS::Internal::Xml::XPath::XPathScanner::LexKind _get_RParens();
      // Set static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind RParens
      static void _set_RParens(::MS::Internal::Xml::XPath::XPathScanner::LexKind value);
      // static field const value: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind LBracket
      static constexpr const int LBracket = 91;
      // Get static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind LBracket
      static ::MS::Internal::Xml::XPath::XPathScanner::LexKind _get_LBracket();
      // Set static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind LBracket
      static void _set_LBracket(::MS::Internal::Xml::XPath::XPathScanner::LexKind value);
      // static field const value: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind RBracket
      static constexpr const int RBracket = 93;
      // Get static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind RBracket
      static ::MS::Internal::Xml::XPath::XPathScanner::LexKind _get_RBracket();
      // Set static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind RBracket
      static void _set_RBracket(::MS::Internal::Xml::XPath::XPathScanner::LexKind value);
      // static field const value: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Star
      static constexpr const int Star = 42;
      // Get static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Star
      static ::MS::Internal::Xml::XPath::XPathScanner::LexKind _get_Star();
      // Set static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Star
      static void _set_Star(::MS::Internal::Xml::XPath::XPathScanner::LexKind value);
      // static field const value: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Plus
      static constexpr const int Plus = 43;
      // Get static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Plus
      static ::MS::Internal::Xml::XPath::XPathScanner::LexKind _get_Plus();
      // Set static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Plus
      static void _set_Plus(::MS::Internal::Xml::XPath::XPathScanner::LexKind value);
      // static field const value: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Minus
      static constexpr const int Minus = 45;
      // Get static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Minus
      static ::MS::Internal::Xml::XPath::XPathScanner::LexKind _get_Minus();
      // Set static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Minus
      static void _set_Minus(::MS::Internal::Xml::XPath::XPathScanner::LexKind value);
      // static field const value: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Eq
      static constexpr const int Eq = 61;
      // Get static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Eq
      static ::MS::Internal::Xml::XPath::XPathScanner::LexKind _get_Eq();
      // Set static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Eq
      static void _set_Eq(::MS::Internal::Xml::XPath::XPathScanner::LexKind value);
      // static field const value: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Lt
      static constexpr const int Lt = 60;
      // Get static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Lt
      static ::MS::Internal::Xml::XPath::XPathScanner::LexKind _get_Lt();
      // Set static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Lt
      static void _set_Lt(::MS::Internal::Xml::XPath::XPathScanner::LexKind value);
      // static field const value: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Gt
      static constexpr const int Gt = 62;
      // Get static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Gt
      static ::MS::Internal::Xml::XPath::XPathScanner::LexKind _get_Gt();
      // Set static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Gt
      static void _set_Gt(::MS::Internal::Xml::XPath::XPathScanner::LexKind value);
      // static field const value: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Bang
      static constexpr const int Bang = 33;
      // Get static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Bang
      static ::MS::Internal::Xml::XPath::XPathScanner::LexKind _get_Bang();
      // Set static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Bang
      static void _set_Bang(::MS::Internal::Xml::XPath::XPathScanner::LexKind value);
      // static field const value: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Dollar
      static constexpr const int Dollar = 36;
      // Get static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Dollar
      static ::MS::Internal::Xml::XPath::XPathScanner::LexKind _get_Dollar();
      // Set static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Dollar
      static void _set_Dollar(::MS::Internal::Xml::XPath::XPathScanner::LexKind value);
      // static field const value: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Apos
      static constexpr const int Apos = 39;
      // Get static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Apos
      static ::MS::Internal::Xml::XPath::XPathScanner::LexKind _get_Apos();
      // Set static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Apos
      static void _set_Apos(::MS::Internal::Xml::XPath::XPathScanner::LexKind value);
      // static field const value: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Quote
      static constexpr const int Quote = 34;
      // Get static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Quote
      static ::MS::Internal::Xml::XPath::XPathScanner::LexKind _get_Quote();
      // Set static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Quote
      static void _set_Quote(::MS::Internal::Xml::XPath::XPathScanner::LexKind value);
      // static field const value: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Union
      static constexpr const int Union = 124;
      // Get static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Union
      static ::MS::Internal::Xml::XPath::XPathScanner::LexKind _get_Union();
      // Set static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Union
      static void _set_Union(::MS::Internal::Xml::XPath::XPathScanner::LexKind value);
      // static field const value: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Ne
      static constexpr const int Ne = 78;
      // Get static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Ne
      static ::MS::Internal::Xml::XPath::XPathScanner::LexKind _get_Ne();
      // Set static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Ne
      static void _set_Ne(::MS::Internal::Xml::XPath::XPathScanner::LexKind value);
      // static field const value: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Le
      static constexpr const int Le = 76;
      // Get static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Le
      static ::MS::Internal::Xml::XPath::XPathScanner::LexKind _get_Le();
      // Set static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Le
      static void _set_Le(::MS::Internal::Xml::XPath::XPathScanner::LexKind value);
      // static field const value: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Ge
      static constexpr const int Ge = 71;
      // Get static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Ge
      static ::MS::Internal::Xml::XPath::XPathScanner::LexKind _get_Ge();
      // Set static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Ge
      static void _set_Ge(::MS::Internal::Xml::XPath::XPathScanner::LexKind value);
      // static field const value: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind And
      static constexpr const int And = 65;
      // Get static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind And
      static ::MS::Internal::Xml::XPath::XPathScanner::LexKind _get_And();
      // Set static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind And
      static void _set_And(::MS::Internal::Xml::XPath::XPathScanner::LexKind value);
      // static field const value: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Or
      static constexpr const int Or = 79;
      // Get static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Or
      static ::MS::Internal::Xml::XPath::XPathScanner::LexKind _get_Or();
      // Set static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Or
      static void _set_Or(::MS::Internal::Xml::XPath::XPathScanner::LexKind value);
      // static field const value: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind DotDot
      static constexpr const int DotDot = 68;
      // Get static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind DotDot
      static ::MS::Internal::Xml::XPath::XPathScanner::LexKind _get_DotDot();
      // Set static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind DotDot
      static void _set_DotDot(::MS::Internal::Xml::XPath::XPathScanner::LexKind value);
      // static field const value: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind SlashSlash
      static constexpr const int SlashSlash = 83;
      // Get static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind SlashSlash
      static ::MS::Internal::Xml::XPath::XPathScanner::LexKind _get_SlashSlash();
      // Set static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind SlashSlash
      static void _set_SlashSlash(::MS::Internal::Xml::XPath::XPathScanner::LexKind value);
      // static field const value: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Name
      static constexpr const int Name = 110;
      // Get static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Name
      static ::MS::Internal::Xml::XPath::XPathScanner::LexKind _get_Name();
      // Set static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Name
      static void _set_Name(::MS::Internal::Xml::XPath::XPathScanner::LexKind value);
      // static field const value: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind String
      static constexpr const int String = 115;
      // Get static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind String
      static ::MS::Internal::Xml::XPath::XPathScanner::LexKind _get_String();
      // Set static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind String
      static void _set_String(::MS::Internal::Xml::XPath::XPathScanner::LexKind value);
      // static field const value: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Number
      static constexpr const int Number = 100;
      // Get static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Number
      static ::MS::Internal::Xml::XPath::XPathScanner::LexKind _get_Number();
      // Set static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Number
      static void _set_Number(::MS::Internal::Xml::XPath::XPathScanner::LexKind value);
      // static field const value: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Axe
      static constexpr const int Axe = 97;
      // Get static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Axe
      static ::MS::Internal::Xml::XPath::XPathScanner::LexKind _get_Axe();
      // Set static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Axe
      static void _set_Axe(::MS::Internal::Xml::XPath::XPathScanner::LexKind value);
      // static field const value: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Eof
      static constexpr const int Eof = 69;
      // Get static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Eof
      static ::MS::Internal::Xml::XPath::XPathScanner::LexKind _get_Eof();
      // Set static field: static public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind Eof
      static void _set_Eof(::MS::Internal::Xml::XPath::XPathScanner::LexKind value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated]] int& dyn_value__();
    }; // MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind
    #pragma pack(pop)
    static check_size<sizeof(XPathScanner::LexKind), 0 + sizeof(int)> __MS_Internal_Xml_XPath_XPathScanner_LexKindSizeCheck;
    static_assert(sizeof(XPathScanner::LexKind) == 0x4);
    public:
    // private System.String xpathExpr
    // Size: 0x8
    // Offset: 0x10
    ::StringW xpathExpr;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 xpathExprIndex
    // Size: 0x4
    // Offset: 0x18
    int xpathExprIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind kind
    // Size: 0x4
    // Offset: 0x1C
    ::MS::Internal::Xml::XPath::XPathScanner::LexKind kind;
    // Field size check
    static_assert(sizeof(::MS::Internal::Xml::XPath::XPathScanner::LexKind) == 0x4);
    // private System.Char currentChar
    // Size: 0x2
    // Offset: 0x20
    ::Il2CppChar currentChar;
    // Field size check
    static_assert(sizeof(::Il2CppChar) == 0x2);
    // Padding between fields: currentChar and: name
    char __padding3[0x6] = {};
    // private System.String name
    // Size: 0x8
    // Offset: 0x28
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String prefix
    // Size: 0x8
    // Offset: 0x30
    ::StringW prefix;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String stringValue
    // Size: 0x8
    // Offset: 0x38
    ::StringW stringValue;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Double numberValue
    // Size: 0x8
    // Offset: 0x40
    double numberValue;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Boolean canBeFunction
    // Size: 0x1
    // Offset: 0x48
    bool canBeFunction;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: canBeFunction and: xmlCharType
    char __padding8[0x7] = {};
    // private System.Xml.XmlCharType xmlCharType
    // Size: 0x8
    // Offset: 0x50
    ::System::Xml::XmlCharType xmlCharType;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlCharType) == 0x8);
    public:
    // Get instance field reference: private System.String xpathExpr
    [[deprecated]] ::StringW& dyn_xpathExpr();
    // Get instance field reference: private System.Int32 xpathExprIndex
    [[deprecated]] int& dyn_xpathExprIndex();
    // Get instance field reference: private MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind kind
    [[deprecated]] ::MS::Internal::Xml::XPath::XPathScanner::LexKind& dyn_kind();
    // Get instance field reference: private System.Char currentChar
    [[deprecated]] ::Il2CppChar& dyn_currentChar();
    // Get instance field reference: private System.String name
    [[deprecated]] ::StringW& dyn_name();
    // Get instance field reference: private System.String prefix
    [[deprecated]] ::StringW& dyn_prefix();
    // Get instance field reference: private System.String stringValue
    [[deprecated]] ::StringW& dyn_stringValue();
    // Get instance field reference: private System.Double numberValue
    [[deprecated]] double& dyn_numberValue();
    // Get instance field reference: private System.Boolean canBeFunction
    [[deprecated]] bool& dyn_canBeFunction();
    // Get instance field reference: private System.Xml.XmlCharType xmlCharType
    [[deprecated]] ::System::Xml::XmlCharType& dyn_xmlCharType();
    // public System.String get_SourceText()
    // Offset: 0x11A4C28
    ::StringW get_SourceText();
    // private System.Char get_CurerntChar()
    // Offset: 0x11A4C30
    ::Il2CppChar get_CurerntChar();
    // public MS.Internal.Xml.XPath.XPathScanner/MS.Internal.Xml.XPath.LexKind get_Kind()
    // Offset: 0x11A4C38
    ::MS::Internal::Xml::XPath::XPathScanner::LexKind get_Kind();
    // public System.String get_Name()
    // Offset: 0x11A4C40
    ::StringW get_Name();
    // public System.String get_Prefix()
    // Offset: 0x11A4C48
    ::StringW get_Prefix();
    // public System.String get_StringValue()
    // Offset: 0x11A4C50
    ::StringW get_StringValue();
    // public System.Double get_NumberValue()
    // Offset: 0x11A4C58
    double get_NumberValue();
    // public System.Boolean get_CanBeFunction()
    // Offset: 0x11A4C60
    bool get_CanBeFunction();
    // public System.Void .ctor(System.String xpathExpr)
    // Offset: 0x11A18A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XPathScanner* New_ctor(::StringW xpathExpr) {
      static auto ___internal__logger = ::Logger::get().WithContext("::MS::Internal::Xml::XPath::XPathScanner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XPathScanner*, creationType>(xpathExpr)));
    }
    // private System.Boolean NextChar()
    // Offset: 0x11A4BC8
    bool NextChar();
    // private System.Void SkipSpace()
    // Offset: 0x11A4C68
    void SkipSpace();
    // public System.Boolean NextLex()
    // Offset: 0x11A372C
    bool NextLex();
    // private System.Double ScanNumber()
    // Offset: 0x11A4E28
    double ScanNumber();
    // private System.Double ScanFraction()
    // Offset: 0x11A4CA8
    double ScanFraction();
    // private System.String ScanString()
    // Offset: 0x11A4D6C
    ::StringW ScanString();
    // private System.String ScanName()
    // Offset: 0x11A4F14
    ::StringW ScanName();
  }; // MS.Internal.Xml.XPath.XPathScanner
  #pragma pack(pop)
  static check_size<sizeof(XPathScanner), 80 + sizeof(::System::Xml::XmlCharType)> __MS_Internal_Xml_XPath_XPathScannerSizeCheck;
  static_assert(sizeof(XPathScanner) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::XPath::XPathScanner::LexKind, "MS.Internal.Xml.XPath", "XPathScanner/LexKind");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathScanner::get_SourceText
// Il2CppName: get_SourceText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (MS::Internal::Xml::XPath::XPathScanner::*)()>(&MS::Internal::Xml::XPath::XPathScanner::get_SourceText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathScanner*), "get_SourceText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathScanner::get_CurerntChar
// Il2CppName: get_CurerntChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (MS::Internal::Xml::XPath::XPathScanner::*)()>(&MS::Internal::Xml::XPath::XPathScanner::get_CurerntChar)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathScanner*), "get_CurerntChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathScanner::get_Kind
// Il2CppName: get_Kind
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MS::Internal::Xml::XPath::XPathScanner::LexKind (MS::Internal::Xml::XPath::XPathScanner::*)()>(&MS::Internal::Xml::XPath::XPathScanner::get_Kind)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathScanner*), "get_Kind", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathScanner::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (MS::Internal::Xml::XPath::XPathScanner::*)()>(&MS::Internal::Xml::XPath::XPathScanner::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathScanner*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathScanner::get_Prefix
// Il2CppName: get_Prefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (MS::Internal::Xml::XPath::XPathScanner::*)()>(&MS::Internal::Xml::XPath::XPathScanner::get_Prefix)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathScanner*), "get_Prefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathScanner::get_StringValue
// Il2CppName: get_StringValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (MS::Internal::Xml::XPath::XPathScanner::*)()>(&MS::Internal::Xml::XPath::XPathScanner::get_StringValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathScanner*), "get_StringValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathScanner::get_NumberValue
// Il2CppName: get_NumberValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (MS::Internal::Xml::XPath::XPathScanner::*)()>(&MS::Internal::Xml::XPath::XPathScanner::get_NumberValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathScanner*), "get_NumberValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathScanner::get_CanBeFunction
// Il2CppName: get_CanBeFunction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (MS::Internal::Xml::XPath::XPathScanner::*)()>(&MS::Internal::Xml::XPath::XPathScanner::get_CanBeFunction)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathScanner*), "get_CanBeFunction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathScanner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathScanner::NextChar
// Il2CppName: NextChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (MS::Internal::Xml::XPath::XPathScanner::*)()>(&MS::Internal::Xml::XPath::XPathScanner::NextChar)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathScanner*), "NextChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathScanner::SkipSpace
// Il2CppName: SkipSpace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MS::Internal::Xml::XPath::XPathScanner::*)()>(&MS::Internal::Xml::XPath::XPathScanner::SkipSpace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathScanner*), "SkipSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathScanner::NextLex
// Il2CppName: NextLex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (MS::Internal::Xml::XPath::XPathScanner::*)()>(&MS::Internal::Xml::XPath::XPathScanner::NextLex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathScanner*), "NextLex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathScanner::ScanNumber
// Il2CppName: ScanNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (MS::Internal::Xml::XPath::XPathScanner::*)()>(&MS::Internal::Xml::XPath::XPathScanner::ScanNumber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathScanner*), "ScanNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathScanner::ScanFraction
// Il2CppName: ScanFraction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (MS::Internal::Xml::XPath::XPathScanner::*)()>(&MS::Internal::Xml::XPath::XPathScanner::ScanFraction)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathScanner*), "ScanFraction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathScanner::ScanString
// Il2CppName: ScanString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (MS::Internal::Xml::XPath::XPathScanner::*)()>(&MS::Internal::Xml::XPath::XPathScanner::ScanString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathScanner*), "ScanString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathScanner::ScanName
// Il2CppName: ScanName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (MS::Internal::Xml::XPath::XPathScanner::*)()>(&MS::Internal::Xml::XPath::XPathScanner::ScanName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathScanner*), "ScanName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
