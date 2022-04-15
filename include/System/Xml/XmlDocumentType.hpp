// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XmlLinkedNode
#include "System/Xml/XmlLinkedNode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlNamedNodeMap
  class XmlNamedNodeMap;
  // Forward declaring type: XmlDocument
  class XmlDocument;
  // Forward declaring type: XmlNodeType
  struct XmlNodeType;
  // Forward declaring type: XmlWriter
  class XmlWriter;
}
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: SchemaInfo
  class SchemaInfo;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: XmlDocumentType
  class XmlDocumentType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XmlDocumentType);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlDocumentType*, "System.Xml", "XmlDocumentType");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlDocumentType
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlDocumentType : public ::System::Xml::XmlLinkedNode {
    public:
    public:
    // private System.String name
    // Size: 0x8
    // Offset: 0x20
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String publicId
    // Size: 0x8
    // Offset: 0x28
    ::StringW publicId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String systemId
    // Size: 0x8
    // Offset: 0x30
    ::StringW systemId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String internalSubset
    // Size: 0x8
    // Offset: 0x38
    ::StringW internalSubset;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean namespaces
    // Size: 0x1
    // Offset: 0x40
    bool namespaces;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: namespaces and: entities
    char __padding4[0x7] = {};
    // private System.Xml.XmlNamedNodeMap entities
    // Size: 0x8
    // Offset: 0x48
    ::System::Xml::XmlNamedNodeMap* entities;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlNamedNodeMap*) == 0x8);
    // private System.Xml.XmlNamedNodeMap notations
    // Size: 0x8
    // Offset: 0x50
    ::System::Xml::XmlNamedNodeMap* notations;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlNamedNodeMap*) == 0x8);
    // private System.Xml.Schema.SchemaInfo schemaInfo
    // Size: 0x8
    // Offset: 0x58
    ::System::Xml::Schema::SchemaInfo* schemaInfo;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::SchemaInfo*) == 0x8);
    public:
    // Get instance field reference: private System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: private System.String publicId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_publicId();
    // Get instance field reference: private System.String systemId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_systemId();
    // Get instance field reference: private System.String internalSubset
    [[deprecated("Use field access instead!")]] ::StringW& dyn_internalSubset();
    // Get instance field reference: private System.Boolean namespaces
    [[deprecated("Use field access instead!")]] bool& dyn_namespaces();
    // Get instance field reference: private System.Xml.XmlNamedNodeMap entities
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlNamedNodeMap*& dyn_entities();
    // Get instance field reference: private System.Xml.XmlNamedNodeMap notations
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlNamedNodeMap*& dyn_notations();
    // Get instance field reference: private System.Xml.Schema.SchemaInfo schemaInfo
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::SchemaInfo*& dyn_schemaInfo();
    // public System.Xml.XmlNamedNodeMap get_Entities()
    // Offset: 0x127AF2C
    ::System::Xml::XmlNamedNodeMap* get_Entities();
    // public System.Xml.XmlNamedNodeMap get_Notations()
    // Offset: 0x127AF98
    ::System::Xml::XmlNamedNodeMap* get_Notations();
    // public System.String get_PublicId()
    // Offset: 0x127B004
    ::StringW get_PublicId();
    // public System.String get_SystemId()
    // Offset: 0x127B00C
    ::StringW get_SystemId();
    // public System.String get_InternalSubset()
    // Offset: 0x127B014
    ::StringW get_InternalSubset();
    // System.Boolean get_ParseWithNamespaces()
    // Offset: 0x127B01C
    bool get_ParseWithNamespaces();
    // System.Xml.Schema.SchemaInfo get_DtdSchemaInfo()
    // Offset: 0x127B054
    ::System::Xml::Schema::SchemaInfo* get_DtdSchemaInfo();
    // System.Void set_DtdSchemaInfo(System.Xml.Schema.SchemaInfo value)
    // Offset: 0x127B05C
    void set_DtdSchemaInfo(::System::Xml::Schema::SchemaInfo* value);
    // protected internal System.Void .ctor(System.String name, System.String publicId, System.String systemId, System.String internalSubset, System.Xml.XmlDocument doc)
    // Offset: 0x127AD54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlDocumentType* New_ctor(::StringW name, ::StringW publicId, ::StringW systemId, ::StringW internalSubset, ::System::Xml::XmlDocument* doc) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlDocumentType::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlDocumentType*, creationType>(name, publicId, systemId, internalSubset, doc)));
    }
    // public override System.String get_Name()
    // Offset: 0x127AEC4
    // Implemented from: System.Xml.XmlNode
    // Base method: System.String XmlNode::get_Name()
    ::StringW get_Name();
    // public override System.String get_LocalName()
    // Offset: 0x127AECC
    // Implemented from: System.Xml.XmlNode
    // Base method: System.String XmlNode::get_LocalName()
    ::StringW get_LocalName();
    // public override System.Xml.XmlNodeType get_NodeType()
    // Offset: 0x127AED4
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlNodeType XmlNode::get_NodeType()
    ::System::Xml::XmlNodeType get_NodeType();
    // public override System.Boolean get_IsReadOnly()
    // Offset: 0x127AF24
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Boolean XmlNode::get_IsReadOnly()
    bool get_IsReadOnly();
    // public override System.Xml.XmlNode CloneNode(System.Boolean deep)
    // Offset: 0x127AEDC
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlNode XmlNode::CloneNode(System.Boolean deep)
    ::System::Xml::XmlNode* CloneNode(bool deep);
    // public override System.Void WriteTo(System.Xml.XmlWriter w)
    // Offset: 0x127B024
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Void XmlNode::WriteTo(System.Xml.XmlWriter w)
    void WriteTo(::System::Xml::XmlWriter* w);
    // public override System.Void WriteContentTo(System.Xml.XmlWriter w)
    // Offset: 0x127B050
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Void XmlNode::WriteContentTo(System.Xml.XmlWriter w)
    void WriteContentTo(::System::Xml::XmlWriter* w);
  }; // System.Xml.XmlDocumentType
  #pragma pack(pop)
  static check_size<sizeof(XmlDocumentType), 88 + sizeof(::System::Xml::Schema::SchemaInfo*)> __System_Xml_XmlDocumentTypeSizeCheck;
  static_assert(sizeof(XmlDocumentType) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlDocumentType::get_Entities
// Il2CppName: get_Entities
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNamedNodeMap* (System::Xml::XmlDocumentType::*)()>(&System::Xml::XmlDocumentType::get_Entities)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlDocumentType*), "get_Entities", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlDocumentType::get_Notations
// Il2CppName: get_Notations
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNamedNodeMap* (System::Xml::XmlDocumentType::*)()>(&System::Xml::XmlDocumentType::get_Notations)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlDocumentType*), "get_Notations", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlDocumentType::get_PublicId
// Il2CppName: get_PublicId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlDocumentType::*)()>(&System::Xml::XmlDocumentType::get_PublicId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlDocumentType*), "get_PublicId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlDocumentType::get_SystemId
// Il2CppName: get_SystemId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlDocumentType::*)()>(&System::Xml::XmlDocumentType::get_SystemId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlDocumentType*), "get_SystemId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlDocumentType::get_InternalSubset
// Il2CppName: get_InternalSubset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlDocumentType::*)()>(&System::Xml::XmlDocumentType::get_InternalSubset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlDocumentType*), "get_InternalSubset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlDocumentType::get_ParseWithNamespaces
// Il2CppName: get_ParseWithNamespaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlDocumentType::*)()>(&System::Xml::XmlDocumentType::get_ParseWithNamespaces)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlDocumentType*), "get_ParseWithNamespaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlDocumentType::get_DtdSchemaInfo
// Il2CppName: get_DtdSchemaInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::SchemaInfo* (System::Xml::XmlDocumentType::*)()>(&System::Xml::XmlDocumentType::get_DtdSchemaInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlDocumentType*), "get_DtdSchemaInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlDocumentType::set_DtdSchemaInfo
// Il2CppName: set_DtdSchemaInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlDocumentType::*)(::System::Xml::Schema::SchemaInfo*)>(&System::Xml::XmlDocumentType::set_DtdSchemaInfo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "SchemaInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlDocumentType*), "set_DtdSchemaInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlDocumentType::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlDocumentType::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlDocumentType::*)()>(&System::Xml::XmlDocumentType::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlDocumentType*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlDocumentType::get_LocalName
// Il2CppName: get_LocalName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlDocumentType::*)()>(&System::Xml::XmlDocumentType::get_LocalName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlDocumentType*), "get_LocalName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlDocumentType::get_NodeType
// Il2CppName: get_NodeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (System::Xml::XmlDocumentType::*)()>(&System::Xml::XmlDocumentType::get_NodeType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlDocumentType*), "get_NodeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlDocumentType::get_IsReadOnly
// Il2CppName: get_IsReadOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlDocumentType::*)()>(&System::Xml::XmlDocumentType::get_IsReadOnly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlDocumentType*), "get_IsReadOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlDocumentType::CloneNode
// Il2CppName: CloneNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (System::Xml::XmlDocumentType::*)(bool)>(&System::Xml::XmlDocumentType::CloneNode)> {
  static const MethodInfo* get() {
    static auto* deep = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlDocumentType*), "CloneNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deep});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlDocumentType::WriteTo
// Il2CppName: WriteTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlDocumentType::*)(::System::Xml::XmlWriter*)>(&System::Xml::XmlDocumentType::WriteTo)> {
  static const MethodInfo* get() {
    static auto* w = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlDocumentType*), "WriteTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{w});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlDocumentType::WriteContentTo
// Il2CppName: WriteContentTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlDocumentType::*)(::System::Xml::XmlWriter*)>(&System::Xml::XmlDocumentType::WriteContentTo)> {
  static const MethodInfo* get() {
    static auto* w = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlDocumentType*), "WriteContentTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{w});
  }
};
