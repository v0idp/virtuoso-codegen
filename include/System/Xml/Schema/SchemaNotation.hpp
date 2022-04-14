// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlQualifiedName
  class XmlQualifiedName;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: SchemaNotation
  class SchemaNotation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::SchemaNotation);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::SchemaNotation*, "System.Xml.Schema", "SchemaNotation");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.SchemaNotation
  // [TokenAttribute] Offset: FFFFFFFF
  class SchemaNotation : public ::Il2CppObject {
    public:
    public:
    // private System.Xml.XmlQualifiedName name
    // Size: 0x8
    // Offset: 0x10
    ::System::Xml::XmlQualifiedName* name;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlQualifiedName*) == 0x8);
    // private System.String systemLiteral
    // Size: 0x8
    // Offset: 0x18
    ::StringW systemLiteral;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String pubid
    // Size: 0x8
    // Offset: 0x20
    ::StringW pubid;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.Xml.XmlQualifiedName name
    [[deprecated]] ::System::Xml::XmlQualifiedName*& dyn_name();
    // Get instance field reference: private System.String systemLiteral
    [[deprecated]] ::StringW& dyn_systemLiteral();
    // Get instance field reference: private System.String pubid
    [[deprecated]] ::StringW& dyn_pubid();
    // System.Xml.XmlQualifiedName get_Name()
    // Offset: 0xF6CBF0
    ::System::Xml::XmlQualifiedName* get_Name();
    // System.String get_SystemLiteral()
    // Offset: 0xF6CBF8
    ::StringW get_SystemLiteral();
    // System.Void set_SystemLiteral(System.String value)
    // Offset: 0xF6CC00
    void set_SystemLiteral(::StringW value);
    // System.String get_Pubid()
    // Offset: 0xF6CC08
    ::StringW get_Pubid();
    // System.Void set_Pubid(System.String value)
    // Offset: 0xF6CC10
    void set_Pubid(::StringW value);
    // System.Void .ctor(System.Xml.XmlQualifiedName name)
    // Offset: 0xF6CBC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SchemaNotation* New_ctor(::System::Xml::XmlQualifiedName* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::SchemaNotation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SchemaNotation*, creationType>(name)));
    }
  }; // System.Xml.Schema.SchemaNotation
  #pragma pack(pop)
  static check_size<sizeof(SchemaNotation), 32 + sizeof(::StringW)> __System_Xml_Schema_SchemaNotationSizeCheck;
  static_assert(sizeof(SchemaNotation) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::SchemaNotation::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlQualifiedName* (System::Xml::Schema::SchemaNotation::*)()>(&System::Xml::Schema::SchemaNotation::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaNotation*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaNotation::get_SystemLiteral
// Il2CppName: get_SystemLiteral
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::SchemaNotation::*)()>(&System::Xml::Schema::SchemaNotation::get_SystemLiteral)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaNotation*), "get_SystemLiteral", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaNotation::set_SystemLiteral
// Il2CppName: set_SystemLiteral
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaNotation::*)(::StringW)>(&System::Xml::Schema::SchemaNotation::set_SystemLiteral)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaNotation*), "set_SystemLiteral", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaNotation::get_Pubid
// Il2CppName: get_Pubid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::SchemaNotation::*)()>(&System::Xml::Schema::SchemaNotation::get_Pubid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaNotation*), "get_Pubid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaNotation::set_Pubid
// Il2CppName: set_Pubid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SchemaNotation::*)(::StringW)>(&System::Xml::Schema::SchemaNotation::set_Pubid)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SchemaNotation*), "set_Pubid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SchemaNotation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
