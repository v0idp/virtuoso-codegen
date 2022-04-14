// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.XdrBuilder
#include "System/Xml/Schema/XdrBuilder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: SchemaElementDecl
  class SchemaElementDecl;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XdrBuilder::ElementContent);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XdrBuilder::ElementContent*, "System.Xml.Schema", "XdrBuilder/ElementContent");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XdrBuilder/System.Xml.Schema.ElementContent
  // [TokenAttribute] Offset: FFFFFFFF
  class XdrBuilder::ElementContent : public ::Il2CppObject {
    public:
    public:
    // System.Xml.Schema.SchemaElementDecl _ElementDecl
    // Size: 0x8
    // Offset: 0x10
    ::System::Xml::Schema::SchemaElementDecl* ElementDecl;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::SchemaElementDecl*) == 0x8);
    // System.Int32 _ContentAttr
    // Size: 0x4
    // Offset: 0x18
    int ContentAttr;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 _OrderAttr
    // Size: 0x4
    // Offset: 0x1C
    int OrderAttr;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Boolean _MasterGroupRequired
    // Size: 0x1
    // Offset: 0x20
    bool MasterGroupRequired;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean _ExistTerminal
    // Size: 0x1
    // Offset: 0x21
    bool ExistTerminal;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean _AllowDataType
    // Size: 0x1
    // Offset: 0x22
    bool AllowDataType;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean _HasDataType
    // Size: 0x1
    // Offset: 0x23
    bool HasDataType;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean _HasType
    // Size: 0x1
    // Offset: 0x24
    bool HasType;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean _EnumerationRequired
    // Size: 0x1
    // Offset: 0x25
    bool EnumerationRequired;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: EnumerationRequired and: MinVal
    char __padding8[0x2] = {};
    // System.UInt32 _MinVal
    // Size: 0x4
    // Offset: 0x28
    uint MinVal;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.UInt32 _MaxVal
    // Size: 0x4
    // Offset: 0x2C
    uint MaxVal;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.UInt32 _MaxLength
    // Size: 0x4
    // Offset: 0x30
    uint MaxLength;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.UInt32 _MinLength
    // Size: 0x4
    // Offset: 0x34
    uint MinLength;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.Collections.Hashtable _AttDefList
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Hashtable* AttDefList;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    public:
    // Get instance field reference: System.Xml.Schema.SchemaElementDecl _ElementDecl
    [[deprecated]] ::System::Xml::Schema::SchemaElementDecl*& dyn__ElementDecl();
    // Get instance field reference: System.Int32 _ContentAttr
    [[deprecated]] int& dyn__ContentAttr();
    // Get instance field reference: System.Int32 _OrderAttr
    [[deprecated]] int& dyn__OrderAttr();
    // Get instance field reference: System.Boolean _MasterGroupRequired
    [[deprecated]] bool& dyn__MasterGroupRequired();
    // Get instance field reference: System.Boolean _ExistTerminal
    [[deprecated]] bool& dyn__ExistTerminal();
    // Get instance field reference: System.Boolean _AllowDataType
    [[deprecated]] bool& dyn__AllowDataType();
    // Get instance field reference: System.Boolean _HasDataType
    [[deprecated]] bool& dyn__HasDataType();
    // Get instance field reference: System.Boolean _HasType
    [[deprecated]] bool& dyn__HasType();
    // Get instance field reference: System.Boolean _EnumerationRequired
    [[deprecated]] bool& dyn__EnumerationRequired();
    // Get instance field reference: System.UInt32 _MinVal
    [[deprecated]] uint& dyn__MinVal();
    // Get instance field reference: System.UInt32 _MaxVal
    [[deprecated]] uint& dyn__MaxVal();
    // Get instance field reference: System.UInt32 _MaxLength
    [[deprecated]] uint& dyn__MaxLength();
    // Get instance field reference: System.UInt32 _MinLength
    [[deprecated]] uint& dyn__MinLength();
    // Get instance field reference: System.Collections.Hashtable _AttDefList
    [[deprecated]] ::System::Collections::Hashtable*& dyn__AttDefList();
    // public System.Void .ctor()
    // Offset: 0xC1EECC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XdrBuilder::ElementContent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XdrBuilder::ElementContent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XdrBuilder::ElementContent*, creationType>()));
    }
  }; // System.Xml.Schema.XdrBuilder/System.Xml.Schema.ElementContent
  #pragma pack(pop)
  static check_size<sizeof(XdrBuilder::ElementContent), 56 + sizeof(::System::Collections::Hashtable*)> __System_Xml_Schema_XdrBuilder_ElementContentSizeCheck;
  static_assert(sizeof(XdrBuilder::ElementContent) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XdrBuilder::ElementContent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
