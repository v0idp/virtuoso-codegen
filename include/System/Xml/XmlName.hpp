// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.IXmlSchemaInfo
#include "System/Xml/Schema/IXmlSchemaInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlDocument
  class XmlDocument;
}
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaValidity
  struct XmlSchemaValidity;
  // Forward declaring type: XmlSchemaSimpleType
  class XmlSchemaSimpleType;
  // Forward declaring type: XmlSchemaType
  class XmlSchemaType;
  // Forward declaring type: XmlSchemaElement
  class XmlSchemaElement;
  // Forward declaring type: XmlSchemaAttribute
  class XmlSchemaAttribute;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: XmlName
  class XmlName;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XmlName);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlName*, "System.Xml", "XmlName");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlName
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlName : public ::Il2CppObject/*, public ::System::Xml::Schema::IXmlSchemaInfo*/ {
    public:
    public:
    // private System.String prefix
    // Size: 0x8
    // Offset: 0x10
    ::StringW prefix;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String localName
    // Size: 0x8
    // Offset: 0x18
    ::StringW localName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String ns
    // Size: 0x8
    // Offset: 0x20
    ::StringW ns;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String name
    // Size: 0x8
    // Offset: 0x28
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 hashCode
    // Size: 0x4
    // Offset: 0x30
    int hashCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: hashCode and: ownerDoc
    char __padding4[0x4] = {};
    // System.Xml.XmlDocument ownerDoc
    // Size: 0x8
    // Offset: 0x38
    ::System::Xml::XmlDocument* ownerDoc;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlDocument*) == 0x8);
    // System.Xml.XmlName next
    // Size: 0x8
    // Offset: 0x40
    ::System::Xml::XmlName* next;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlName*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Xml::Schema::IXmlSchemaInfo
    operator ::System::Xml::Schema::IXmlSchemaInfo() noexcept {
      return *reinterpret_cast<::System::Xml::Schema::IXmlSchemaInfo*>(this);
    }
    // Get instance field reference: private System.String prefix
    [[deprecated]] ::StringW& dyn_prefix();
    // Get instance field reference: private System.String localName
    [[deprecated]] ::StringW& dyn_localName();
    // Get instance field reference: private System.String ns
    [[deprecated]] ::StringW& dyn_ns();
    // Get instance field reference: private System.String name
    [[deprecated]] ::StringW& dyn_name();
    // Get instance field reference: private System.Int32 hashCode
    [[deprecated]] int& dyn_hashCode();
    // Get instance field reference: System.Xml.XmlDocument ownerDoc
    [[deprecated]] ::System::Xml::XmlDocument*& dyn_ownerDoc();
    // Get instance field reference: System.Xml.XmlName next
    [[deprecated]] ::System::Xml::XmlName*& dyn_next();
    // public System.String get_LocalName()
    // Offset: 0x128E338
    ::StringW get_LocalName();
    // public System.String get_NamespaceURI()
    // Offset: 0x128E340
    ::StringW get_NamespaceURI();
    // public System.String get_Prefix()
    // Offset: 0x128E348
    ::StringW get_Prefix();
    // public System.Int32 get_HashCode()
    // Offset: 0x128E350
    int get_HashCode();
    // public System.Xml.XmlDocument get_OwnerDocument()
    // Offset: 0x128E358
    ::System::Xml::XmlDocument* get_OwnerDocument();
    // public System.String get_Name()
    // Offset: 0x127C16C
    ::StringW get_Name();
    // public System.Xml.Schema.XmlSchemaValidity get_Validity()
    // Offset: 0x128E360
    ::System::Xml::Schema::XmlSchemaValidity get_Validity();
    // public System.Boolean get_IsDefault()
    // Offset: 0x128E368
    bool get_IsDefault();
    // public System.Boolean get_IsNil()
    // Offset: 0x128E370
    bool get_IsNil();
    // public System.Xml.Schema.XmlSchemaSimpleType get_MemberType()
    // Offset: 0x128E378
    ::System::Xml::Schema::XmlSchemaSimpleType* get_MemberType();
    // public System.Xml.Schema.XmlSchemaType get_SchemaType()
    // Offset: 0x128E380
    ::System::Xml::Schema::XmlSchemaType* get_SchemaType();
    // public System.Xml.Schema.XmlSchemaElement get_SchemaElement()
    // Offset: 0x128E388
    ::System::Xml::Schema::XmlSchemaElement* get_SchemaElement();
    // public System.Xml.Schema.XmlSchemaAttribute get_SchemaAttribute()
    // Offset: 0x128E390
    ::System::Xml::Schema::XmlSchemaAttribute* get_SchemaAttribute();
    // System.Void .ctor(System.String prefix, System.String localName, System.String ns, System.Int32 hashCode, System.Xml.XmlDocument ownerDoc, System.Xml.XmlName next)
    // Offset: 0x128DEBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlName* New_ctor(::StringW prefix, ::StringW localName, ::StringW ns, int hashCode, ::System::Xml::XmlDocument* ownerDoc, ::System::Xml::XmlName* next) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlName::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlName*, creationType>(prefix, localName, ns, hashCode, ownerDoc, next)));
    }
    // static public System.Xml.XmlName Create(System.String prefix, System.String localName, System.String ns, System.Int32 hashCode, System.Xml.XmlDocument ownerDoc, System.Xml.XmlName next, System.Xml.Schema.IXmlSchemaInfo schemaInfo)
    // Offset: 0x128DDD0
    static ::System::Xml::XmlName* Create(::StringW prefix, ::StringW localName, ::StringW ns, int hashCode, ::System::Xml::XmlDocument* ownerDoc, ::System::Xml::XmlName* next, ::System::Xml::Schema::IXmlSchemaInfo* schemaInfo);
    // public System.Boolean Equals(System.Xml.Schema.IXmlSchemaInfo schemaInfo)
    // Offset: 0x128E398
    bool Equals(::System::Xml::Schema::IXmlSchemaInfo* schemaInfo);
    // static public System.Int32 GetHashCode(System.String name)
    // Offset: 0x128E3A4
    static int GetHashCode(::StringW name);
  }; // System.Xml.XmlName
  #pragma pack(pop)
  static check_size<sizeof(XmlName), 64 + sizeof(::System::Xml::XmlName*)> __System_Xml_XmlNameSizeCheck;
  static_assert(sizeof(XmlName) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlName::get_LocalName
// Il2CppName: get_LocalName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlName::*)()>(&System::Xml::XmlName::get_LocalName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlName*), "get_LocalName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlName::get_NamespaceURI
// Il2CppName: get_NamespaceURI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlName::*)()>(&System::Xml::XmlName::get_NamespaceURI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlName*), "get_NamespaceURI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlName::get_Prefix
// Il2CppName: get_Prefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlName::*)()>(&System::Xml::XmlName::get_Prefix)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlName*), "get_Prefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlName::get_HashCode
// Il2CppName: get_HashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::XmlName::*)()>(&System::Xml::XmlName::get_HashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlName*), "get_HashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlName::get_OwnerDocument
// Il2CppName: get_OwnerDocument
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlDocument* (System::Xml::XmlName::*)()>(&System::Xml::XmlName::get_OwnerDocument)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlName*), "get_OwnerDocument", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlName::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlName::*)()>(&System::Xml::XmlName::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlName*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlName::get_Validity
// Il2CppName: get_Validity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaValidity (System::Xml::XmlName::*)()>(&System::Xml::XmlName::get_Validity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlName*), "get_Validity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlName::get_IsDefault
// Il2CppName: get_IsDefault
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlName::*)()>(&System::Xml::XmlName::get_IsDefault)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlName*), "get_IsDefault", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlName::get_IsNil
// Il2CppName: get_IsNil
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlName::*)()>(&System::Xml::XmlName::get_IsNil)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlName*), "get_IsNil", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlName::get_MemberType
// Il2CppName: get_MemberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaSimpleType* (System::Xml::XmlName::*)()>(&System::Xml::XmlName::get_MemberType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlName*), "get_MemberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlName::get_SchemaType
// Il2CppName: get_SchemaType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaType* (System::Xml::XmlName::*)()>(&System::Xml::XmlName::get_SchemaType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlName*), "get_SchemaType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlName::get_SchemaElement
// Il2CppName: get_SchemaElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaElement* (System::Xml::XmlName::*)()>(&System::Xml::XmlName::get_SchemaElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlName*), "get_SchemaElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlName::get_SchemaAttribute
// Il2CppName: get_SchemaAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaAttribute* (System::Xml::XmlName::*)()>(&System::Xml::XmlName::get_SchemaAttribute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlName*), "get_SchemaAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlName::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlName::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlName* (*)(::StringW, ::StringW, ::StringW, int, ::System::Xml::XmlDocument*, ::System::Xml::XmlName*, ::System::Xml::Schema::IXmlSchemaInfo*)>(&System::Xml::XmlName::Create)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* hashCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ownerDoc = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlDocument")->byval_arg;
    static auto* next = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlName")->byval_arg;
    static auto* schemaInfo = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "IXmlSchemaInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlName*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, localName, ns, hashCode, ownerDoc, next, schemaInfo});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlName::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlName::*)(::System::Xml::Schema::IXmlSchemaInfo*)>(&System::Xml::XmlName::Equals)> {
  static const MethodInfo* get() {
    static auto* schemaInfo = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "IXmlSchemaInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlName*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{schemaInfo});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlName::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW)>(&System::Xml::XmlName::GetHashCode)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlName*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};