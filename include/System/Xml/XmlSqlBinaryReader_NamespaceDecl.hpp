// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XmlSqlBinaryReader
#include "System/Xml/XmlSqlBinaryReader.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XmlSqlBinaryReader::NamespaceDecl);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlSqlBinaryReader::NamespaceDecl*, "System.Xml", "XmlSqlBinaryReader/NamespaceDecl");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x35
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlSqlBinaryReader/System.Xml.NamespaceDecl
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlSqlBinaryReader::NamespaceDecl : public ::Il2CppObject {
    public:
    public:
    // public System.String prefix
    // Size: 0x8
    // Offset: 0x10
    ::StringW prefix;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String uri
    // Size: 0x8
    // Offset: 0x18
    ::StringW uri;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Xml.XmlSqlBinaryReader/System.Xml.NamespaceDecl scopeLink
    // Size: 0x8
    // Offset: 0x20
    ::System::Xml::XmlSqlBinaryReader::NamespaceDecl* scopeLink;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlSqlBinaryReader::NamespaceDecl*) == 0x8);
    // public System.Xml.XmlSqlBinaryReader/System.Xml.NamespaceDecl prevLink
    // Size: 0x8
    // Offset: 0x28
    ::System::Xml::XmlSqlBinaryReader::NamespaceDecl* prevLink;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlSqlBinaryReader::NamespaceDecl*) == 0x8);
    // public System.Int32 scope
    // Size: 0x4
    // Offset: 0x30
    int scope;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean implied
    // Size: 0x1
    // Offset: 0x34
    bool implied;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.String prefix
    [[deprecated]] ::StringW& dyn_prefix();
    // Get instance field reference: public System.String uri
    [[deprecated]] ::StringW& dyn_uri();
    // Get instance field reference: public System.Xml.XmlSqlBinaryReader/System.Xml.NamespaceDecl scopeLink
    [[deprecated]] ::System::Xml::XmlSqlBinaryReader::NamespaceDecl*& dyn_scopeLink();
    // Get instance field reference: public System.Xml.XmlSqlBinaryReader/System.Xml.NamespaceDecl prevLink
    [[deprecated]] ::System::Xml::XmlSqlBinaryReader::NamespaceDecl*& dyn_prevLink();
    // Get instance field reference: public System.Int32 scope
    [[deprecated]] int& dyn_scope();
    // Get instance field reference: public System.Boolean implied
    [[deprecated]] bool& dyn_implied();
    // public System.Void .ctor(System.String prefix, System.String nsuri, System.Xml.XmlSqlBinaryReader/System.Xml.NamespaceDecl nextInScope, System.Xml.XmlSqlBinaryReader/System.Xml.NamespaceDecl prevDecl, System.Int32 scope, System.Boolean implied)
    // Offset: 0xC225F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSqlBinaryReader::NamespaceDecl* New_ctor(::StringW prefix, ::StringW nsuri, ::System::Xml::XmlSqlBinaryReader::NamespaceDecl* nextInScope, ::System::Xml::XmlSqlBinaryReader::NamespaceDecl* prevDecl, int scope, bool implied) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlSqlBinaryReader::NamespaceDecl::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSqlBinaryReader::NamespaceDecl*, creationType>(prefix, nsuri, nextInScope, prevDecl, scope, implied)));
    }
  }; // System.Xml.XmlSqlBinaryReader/System.Xml.NamespaceDecl
  #pragma pack(pop)
  static check_size<sizeof(XmlSqlBinaryReader::NamespaceDecl), 52 + sizeof(bool)> __System_Xml_XmlSqlBinaryReader_NamespaceDeclSizeCheck;
  static_assert(sizeof(XmlSqlBinaryReader::NamespaceDecl) == 0x35);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlSqlBinaryReader::NamespaceDecl::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
