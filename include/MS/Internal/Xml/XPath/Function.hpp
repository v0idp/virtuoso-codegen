// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MS.Internal.Xml.XPath.AstNode
#include "MS/Internal/Xml/XPath/AstNode.hpp"
// Including type: System.Xml.XPath.XPathResultType
#include "System/Xml/XPath/XPathResultType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Completed forward declares
// Type namespace: MS.Internal.Xml.XPath
namespace MS::Internal::Xml::XPath {
  // Forward declaring type: Function
  class Function;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MS::Internal::Xml::XPath::Function);
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::XPath::Function*, "MS.Internal.Xml.XPath", "Function");
// Type namespace: MS.Internal.Xml.XPath
namespace MS::Internal::Xml::XPath {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MS.Internal.Xml.XPath.Function
  // [TokenAttribute] Offset: FFFFFFFF
  class Function : public ::MS::Internal::Xml::XPath::AstNode {
    public:
    // Nested type: ::MS::Internal::Xml::XPath::Function::FunctionType
    struct FunctionType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType
    // [TokenAttribute] Offset: FFFFFFFF
    struct FunctionType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: FunctionType
      constexpr FunctionType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncLast
      static constexpr const int FuncLast = 0;
      // Get static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncLast
      static ::MS::Internal::Xml::XPath::Function::FunctionType _get_FuncLast();
      // Set static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncLast
      static void _set_FuncLast(::MS::Internal::Xml::XPath::Function::FunctionType value);
      // static field const value: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncPosition
      static constexpr const int FuncPosition = 1;
      // Get static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncPosition
      static ::MS::Internal::Xml::XPath::Function::FunctionType _get_FuncPosition();
      // Set static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncPosition
      static void _set_FuncPosition(::MS::Internal::Xml::XPath::Function::FunctionType value);
      // static field const value: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncCount
      static constexpr const int FuncCount = 2;
      // Get static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncCount
      static ::MS::Internal::Xml::XPath::Function::FunctionType _get_FuncCount();
      // Set static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncCount
      static void _set_FuncCount(::MS::Internal::Xml::XPath::Function::FunctionType value);
      // static field const value: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncID
      static constexpr const int FuncID = 3;
      // Get static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncID
      static ::MS::Internal::Xml::XPath::Function::FunctionType _get_FuncID();
      // Set static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncID
      static void _set_FuncID(::MS::Internal::Xml::XPath::Function::FunctionType value);
      // static field const value: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncLocalName
      static constexpr const int FuncLocalName = 4;
      // Get static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncLocalName
      static ::MS::Internal::Xml::XPath::Function::FunctionType _get_FuncLocalName();
      // Set static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncLocalName
      static void _set_FuncLocalName(::MS::Internal::Xml::XPath::Function::FunctionType value);
      // static field const value: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncNameSpaceUri
      static constexpr const int FuncNameSpaceUri = 5;
      // Get static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncNameSpaceUri
      static ::MS::Internal::Xml::XPath::Function::FunctionType _get_FuncNameSpaceUri();
      // Set static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncNameSpaceUri
      static void _set_FuncNameSpaceUri(::MS::Internal::Xml::XPath::Function::FunctionType value);
      // static field const value: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncName
      static constexpr const int FuncName = 6;
      // Get static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncName
      static ::MS::Internal::Xml::XPath::Function::FunctionType _get_FuncName();
      // Set static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncName
      static void _set_FuncName(::MS::Internal::Xml::XPath::Function::FunctionType value);
      // static field const value: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncString
      static constexpr const int FuncString = 7;
      // Get static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncString
      static ::MS::Internal::Xml::XPath::Function::FunctionType _get_FuncString();
      // Set static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncString
      static void _set_FuncString(::MS::Internal::Xml::XPath::Function::FunctionType value);
      // static field const value: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncBoolean
      static constexpr const int FuncBoolean = 8;
      // Get static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncBoolean
      static ::MS::Internal::Xml::XPath::Function::FunctionType _get_FuncBoolean();
      // Set static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncBoolean
      static void _set_FuncBoolean(::MS::Internal::Xml::XPath::Function::FunctionType value);
      // static field const value: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncNumber
      static constexpr const int FuncNumber = 9;
      // Get static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncNumber
      static ::MS::Internal::Xml::XPath::Function::FunctionType _get_FuncNumber();
      // Set static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncNumber
      static void _set_FuncNumber(::MS::Internal::Xml::XPath::Function::FunctionType value);
      // static field const value: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncTrue
      static constexpr const int FuncTrue = 10;
      // Get static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncTrue
      static ::MS::Internal::Xml::XPath::Function::FunctionType _get_FuncTrue();
      // Set static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncTrue
      static void _set_FuncTrue(::MS::Internal::Xml::XPath::Function::FunctionType value);
      // static field const value: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncFalse
      static constexpr const int FuncFalse = 11;
      // Get static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncFalse
      static ::MS::Internal::Xml::XPath::Function::FunctionType _get_FuncFalse();
      // Set static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncFalse
      static void _set_FuncFalse(::MS::Internal::Xml::XPath::Function::FunctionType value);
      // static field const value: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncNot
      static constexpr const int FuncNot = 12;
      // Get static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncNot
      static ::MS::Internal::Xml::XPath::Function::FunctionType _get_FuncNot();
      // Set static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncNot
      static void _set_FuncNot(::MS::Internal::Xml::XPath::Function::FunctionType value);
      // static field const value: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncConcat
      static constexpr const int FuncConcat = 13;
      // Get static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncConcat
      static ::MS::Internal::Xml::XPath::Function::FunctionType _get_FuncConcat();
      // Set static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncConcat
      static void _set_FuncConcat(::MS::Internal::Xml::XPath::Function::FunctionType value);
      // static field const value: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncStartsWith
      static constexpr const int FuncStartsWith = 14;
      // Get static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncStartsWith
      static ::MS::Internal::Xml::XPath::Function::FunctionType _get_FuncStartsWith();
      // Set static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncStartsWith
      static void _set_FuncStartsWith(::MS::Internal::Xml::XPath::Function::FunctionType value);
      // static field const value: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncContains
      static constexpr const int FuncContains = 15;
      // Get static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncContains
      static ::MS::Internal::Xml::XPath::Function::FunctionType _get_FuncContains();
      // Set static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncContains
      static void _set_FuncContains(::MS::Internal::Xml::XPath::Function::FunctionType value);
      // static field const value: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncSubstringBefore
      static constexpr const int FuncSubstringBefore = 16;
      // Get static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncSubstringBefore
      static ::MS::Internal::Xml::XPath::Function::FunctionType _get_FuncSubstringBefore();
      // Set static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncSubstringBefore
      static void _set_FuncSubstringBefore(::MS::Internal::Xml::XPath::Function::FunctionType value);
      // static field const value: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncSubstringAfter
      static constexpr const int FuncSubstringAfter = 17;
      // Get static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncSubstringAfter
      static ::MS::Internal::Xml::XPath::Function::FunctionType _get_FuncSubstringAfter();
      // Set static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncSubstringAfter
      static void _set_FuncSubstringAfter(::MS::Internal::Xml::XPath::Function::FunctionType value);
      // static field const value: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncSubstring
      static constexpr const int FuncSubstring = 18;
      // Get static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncSubstring
      static ::MS::Internal::Xml::XPath::Function::FunctionType _get_FuncSubstring();
      // Set static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncSubstring
      static void _set_FuncSubstring(::MS::Internal::Xml::XPath::Function::FunctionType value);
      // static field const value: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncStringLength
      static constexpr const int FuncStringLength = 19;
      // Get static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncStringLength
      static ::MS::Internal::Xml::XPath::Function::FunctionType _get_FuncStringLength();
      // Set static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncStringLength
      static void _set_FuncStringLength(::MS::Internal::Xml::XPath::Function::FunctionType value);
      // static field const value: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncNormalize
      static constexpr const int FuncNormalize = 20;
      // Get static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncNormalize
      static ::MS::Internal::Xml::XPath::Function::FunctionType _get_FuncNormalize();
      // Set static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncNormalize
      static void _set_FuncNormalize(::MS::Internal::Xml::XPath::Function::FunctionType value);
      // static field const value: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncTranslate
      static constexpr const int FuncTranslate = 21;
      // Get static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncTranslate
      static ::MS::Internal::Xml::XPath::Function::FunctionType _get_FuncTranslate();
      // Set static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncTranslate
      static void _set_FuncTranslate(::MS::Internal::Xml::XPath::Function::FunctionType value);
      // static field const value: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncLang
      static constexpr const int FuncLang = 22;
      // Get static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncLang
      static ::MS::Internal::Xml::XPath::Function::FunctionType _get_FuncLang();
      // Set static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncLang
      static void _set_FuncLang(::MS::Internal::Xml::XPath::Function::FunctionType value);
      // static field const value: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncSum
      static constexpr const int FuncSum = 23;
      // Get static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncSum
      static ::MS::Internal::Xml::XPath::Function::FunctionType _get_FuncSum();
      // Set static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncSum
      static void _set_FuncSum(::MS::Internal::Xml::XPath::Function::FunctionType value);
      // static field const value: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncFloor
      static constexpr const int FuncFloor = 24;
      // Get static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncFloor
      static ::MS::Internal::Xml::XPath::Function::FunctionType _get_FuncFloor();
      // Set static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncFloor
      static void _set_FuncFloor(::MS::Internal::Xml::XPath::Function::FunctionType value);
      // static field const value: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncCeiling
      static constexpr const int FuncCeiling = 25;
      // Get static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncCeiling
      static ::MS::Internal::Xml::XPath::Function::FunctionType _get_FuncCeiling();
      // Set static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncCeiling
      static void _set_FuncCeiling(::MS::Internal::Xml::XPath::Function::FunctionType value);
      // static field const value: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncRound
      static constexpr const int FuncRound = 26;
      // Get static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncRound
      static ::MS::Internal::Xml::XPath::Function::FunctionType _get_FuncRound();
      // Set static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncRound
      static void _set_FuncRound(::MS::Internal::Xml::XPath::Function::FunctionType value);
      // static field const value: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncUserDefined
      static constexpr const int FuncUserDefined = 27;
      // Get static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncUserDefined
      static ::MS::Internal::Xml::XPath::Function::FunctionType _get_FuncUserDefined();
      // Set static field: static public MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType FuncUserDefined
      static void _set_FuncUserDefined(::MS::Internal::Xml::XPath::Function::FunctionType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType
    #pragma pack(pop)
    static check_size<sizeof(Function::FunctionType), 0 + sizeof(int)> __MS_Internal_Xml_XPath_Function_FunctionTypeSizeCheck;
    static_assert(sizeof(Function::FunctionType) == 0x4);
    public:
    // private MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType functionType
    // Size: 0x4
    // Offset: 0x10
    ::MS::Internal::Xml::XPath::Function::FunctionType functionType;
    // Field size check
    static_assert(sizeof(::MS::Internal::Xml::XPath::Function::FunctionType) == 0x4);
    // Padding between fields: functionType and: argumentList
    char __padding0[0x4] = {};
    // private System.Collections.ArrayList argumentList
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::ArrayList* argumentList;
    // Field size check
    static_assert(sizeof(::System::Collections::ArrayList*) == 0x8);
    // private System.String name
    // Size: 0x8
    // Offset: 0x20
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String prefix
    // Size: 0x8
    // Offset: 0x28
    ::StringW prefix;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get static field: static System.Xml.XPath.XPathResultType[] ReturnTypes
    static ::ArrayW<::System::Xml::XPath::XPathResultType> _get_ReturnTypes();
    // Set static field: static System.Xml.XPath.XPathResultType[] ReturnTypes
    static void _set_ReturnTypes(::ArrayW<::System::Xml::XPath::XPathResultType> value);
    // Get instance field reference: private MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType functionType
    [[deprecated("Use field access instead!")]] ::MS::Internal::Xml::XPath::Function::FunctionType& dyn_functionType();
    // Get instance field reference: private System.Collections.ArrayList argumentList
    [[deprecated("Use field access instead!")]] ::System::Collections::ArrayList*& dyn_argumentList();
    // Get instance field reference: private System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: private System.String prefix
    [[deprecated("Use field access instead!")]] ::StringW& dyn_prefix();
    // public System.Void .ctor(MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType ftype, System.Collections.ArrayList argumentList)
    // Offset: 0xAEE98C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Function* New_ctor(::MS::Internal::Xml::XPath::Function::FunctionType ftype, ::System::Collections::ArrayList* argumentList) {
      static auto ___internal__logger = ::Logger::get().WithContext("::MS::Internal::Xml::XPath::Function::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Function*, creationType>(ftype, argumentList)));
    }
    // public System.Void .ctor(System.String prefix, System.String name, System.Collections.ArrayList argumentList)
    // Offset: 0xAEEA0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Function* New_ctor(::StringW prefix, ::StringW name, ::System::Collections::ArrayList* argumentList) {
      static auto ___internal__logger = ::Logger::get().WithContext("::MS::Internal::Xml::XPath::Function::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Function*, creationType>(prefix, name, argumentList)));
    }
    // public System.Void .ctor(MS.Internal.Xml.XPath.Function/MS.Internal.Xml.XPath.FunctionType ftype, MS.Internal.Xml.XPath.AstNode arg)
    // Offset: 0xAEEAA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Function* New_ctor(::MS::Internal::Xml::XPath::Function::FunctionType ftype, ::MS::Internal::Xml::XPath::AstNode* arg) {
      static auto ___internal__logger = ::Logger::get().WithContext("::MS::Internal::Xml::XPath::Function::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Function*, creationType>(ftype, arg)));
    }
    // static private System.Void .cctor()
    // Offset: 0xAEEBD4
    static void _cctor();
    // public override MS.Internal.Xml.XPath.AstNode/MS.Internal.Xml.XPath.AstType get_Type()
    // Offset: 0xAEEB38
    // Implemented from: MS.Internal.Xml.XPath.AstNode
    // Base method: MS.Internal.Xml.XPath.AstNode/MS.Internal.Xml.XPath.AstType AstNode::get_Type()
    ::MS::Internal::Xml::XPath::AstNode::AstType get_Type();
    // public override System.Xml.XPath.XPathResultType get_ReturnType()
    // Offset: 0xAEEB40
    // Implemented from: MS.Internal.Xml.XPath.AstNode
    // Base method: System.Xml.XPath.XPathResultType AstNode::get_ReturnType()
    ::System::Xml::XPath::XPathResultType get_ReturnType();
  }; // MS.Internal.Xml.XPath.Function
  #pragma pack(pop)
  static check_size<sizeof(Function), 40 + sizeof(::StringW)> __MS_Internal_Xml_XPath_FunctionSizeCheck;
  static_assert(sizeof(Function) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::XPath::Function::FunctionType, "MS.Internal.Xml.XPath", "Function/FunctionType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::Function::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::Function::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::Function::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::Function::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&MS::Internal::Xml::XPath::Function::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::Function*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::Function::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MS::Internal::Xml::XPath::AstNode::AstType (MS::Internal::Xml::XPath::Function::*)()>(&MS::Internal::Xml::XPath::Function::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::Function*), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::Function::get_ReturnType
// Il2CppName: get_ReturnType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XPath::XPathResultType (MS::Internal::Xml::XPath::Function::*)()>(&MS::Internal::Xml::XPath::Function::get_ReturnType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::Function*), "get_ReturnType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
