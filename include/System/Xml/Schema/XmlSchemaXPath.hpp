// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.XmlSchemaAnnotated
#include "System/Xml/Schema/XmlSchemaAnnotated.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaXPath
  class XmlSchemaXPath;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaXPath);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaXPath*, "System.Xml.Schema", "XmlSchemaXPath");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlSchemaXPath
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlSchemaXPath : public ::System::Xml::Schema::XmlSchemaAnnotated {
    public:
    public:
    // private System.String xpath
    // Size: 0x8
    // Offset: 0x50
    ::StringW xpath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return xpath;
    }
    // Get instance field reference: private System.String xpath
    [[deprecated]] ::StringW& dyn_xpath();
    // public System.String get_XPath()
    // Offset: 0xF43654
    ::StringW get_XPath();
    // public System.Void set_XPath(System.String value)
    // Offset: 0xF4365C
    void set_XPath(::StringW value);
    // public System.Void .ctor()
    // Offset: 0xF43664
    // Implemented from: System.Xml.Schema.XmlSchemaAnnotated
    // Base method: System.Void XmlSchemaAnnotated::.ctor()
    // Base method: System.Void XmlSchemaObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaXPath* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlSchemaXPath::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaXPath*, creationType>()));
    }
  }; // System.Xml.Schema.XmlSchemaXPath
  #pragma pack(pop)
  static check_size<sizeof(XmlSchemaXPath), 80 + sizeof(::StringW)> __System_Xml_Schema_XmlSchemaXPathSizeCheck;
  static_assert(sizeof(XmlSchemaXPath) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaXPath::get_XPath
// Il2CppName: get_XPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::XmlSchemaXPath::*)()>(&System::Xml::Schema::XmlSchemaXPath::get_XPath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaXPath*), "get_XPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaXPath::set_XPath
// Il2CppName: set_XPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaXPath::*)(::StringW)>(&System::Xml::Schema::XmlSchemaXPath::set_XPath)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaXPath*), "set_XPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaXPath::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
