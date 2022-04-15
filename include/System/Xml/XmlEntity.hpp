// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XmlNode
#include "System/Xml/XmlNode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlLinkedNode
  class XmlLinkedNode;
  // Forward declaring type: XmlDocument
  class XmlDocument;
  // Forward declaring type: XmlNodeType
  struct XmlNodeType;
  // Forward declaring type: XmlWriter
  class XmlWriter;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: XmlEntity
  class XmlEntity;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XmlEntity);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlEntity*, "System.Xml", "XmlEntity");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x51
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlEntity
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlEntity : public ::System::Xml::XmlNode {
    public:
    public:
    // private System.String publicId
    // Size: 0x8
    // Offset: 0x18
    ::StringW publicId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String systemId
    // Size: 0x8
    // Offset: 0x20
    ::StringW systemId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String notationName
    // Size: 0x8
    // Offset: 0x28
    ::StringW notationName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String name
    // Size: 0x8
    // Offset: 0x30
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String unparsedReplacementStr
    // Size: 0x8
    // Offset: 0x38
    ::StringW unparsedReplacementStr;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String baseURI
    // Size: 0x8
    // Offset: 0x40
    ::StringW baseURI;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Xml.XmlLinkedNode lastChild
    // Size: 0x8
    // Offset: 0x48
    ::System::Xml::XmlLinkedNode* lastChild;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlLinkedNode*) == 0x8);
    // private System.Boolean childrenFoliating
    // Size: 0x1
    // Offset: 0x50
    bool childrenFoliating;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::Xml::XmlNode*
    constexpr operator ::System::Xml::XmlNode*() const noexcept = delete;
    // Get instance field reference: private System.String publicId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_publicId();
    // Get instance field reference: private System.String systemId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_systemId();
    // Get instance field reference: private System.String notationName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_notationName();
    // Get instance field reference: private System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: private System.String unparsedReplacementStr
    [[deprecated("Use field access instead!")]] ::StringW& dyn_unparsedReplacementStr();
    // Get instance field reference: private System.String baseURI
    [[deprecated("Use field access instead!")]] ::StringW& dyn_baseURI();
    // Get instance field reference: private System.Xml.XmlLinkedNode lastChild
    [[deprecated("Use field access instead!")]] ::System::Xml::XmlLinkedNode*& dyn_lastChild();
    // Get instance field reference: private System.Boolean childrenFoliating
    [[deprecated("Use field access instead!")]] bool& dyn_childrenFoliating();
    // public System.String get_SystemId()
    // Offset: 0x12827CC
    ::StringW get_SystemId();
    // System.Void .ctor(System.String name, System.String strdata, System.String publicId, System.String systemId, System.String notationName, System.Xml.XmlDocument doc)
    // Offset: 0x1282530
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlEntity* New_ctor(::StringW name, ::StringW strdata, ::StringW publicId, ::StringW systemId, ::StringW notationName, ::System::Xml::XmlDocument* doc) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::XmlEntity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlEntity*, creationType>(name, strdata, publicId, systemId, notationName, doc)));
    }
    // System.Void SetBaseURI(System.String inBaseURI)
    // Offset: 0x1282840
    void SetBaseURI(::StringW inBaseURI);
    // public override System.Boolean get_IsReadOnly()
    // Offset: 0x128261C
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Boolean XmlNode::get_IsReadOnly()
    bool get_IsReadOnly();
    // public override System.String get_Name()
    // Offset: 0x1282624
    // Implemented from: System.Xml.XmlNode
    // Base method: System.String XmlNode::get_Name()
    ::StringW get_Name();
    // public override System.String get_LocalName()
    // Offset: 0x128262C
    // Implemented from: System.Xml.XmlNode
    // Base method: System.String XmlNode::get_LocalName()
    ::StringW get_LocalName();
    // public override System.String get_InnerText()
    // Offset: 0x1282634
    // Implemented from: System.Xml.XmlNode
    // Base method: System.String XmlNode::get_InnerText()
    ::StringW get_InnerText();
    // public override System.Void set_InnerText(System.String value)
    // Offset: 0x128263C
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Void XmlNode::set_InnerText(System.String value)
    void set_InnerText(::StringW value);
    // override System.Boolean get_IsContainer()
    // Offset: 0x1282698
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Boolean XmlNode::get_IsContainer()
    bool get_IsContainer();
    // override System.Xml.XmlLinkedNode get_LastNode()
    // Offset: 0x12826A0
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlLinkedNode XmlNode::get_LastNode()
    ::System::Xml::XmlLinkedNode* get_LastNode();
    // override System.Void set_LastNode(System.Xml.XmlLinkedNode value)
    // Offset: 0x1282780
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Void XmlNode::set_LastNode(System.Xml.XmlLinkedNode value)
    void set_LastNode(::System::Xml::XmlLinkedNode* value);
    // public override System.Xml.XmlNodeType get_NodeType()
    // Offset: 0x12827C4
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlNodeType XmlNode::get_NodeType()
    ::System::Xml::XmlNodeType get_NodeType();
    // public override System.Void set_InnerXml(System.String value)
    // Offset: 0x12827D4
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Void XmlNode::set_InnerXml(System.String value)
    void set_InnerXml(::StringW value);
    // public override System.String get_BaseURI()
    // Offset: 0x1282838
    // Implemented from: System.Xml.XmlNode
    // Base method: System.String XmlNode::get_BaseURI()
    ::StringW get_BaseURI();
    // public override System.Xml.XmlNode CloneNode(System.Boolean deep)
    // Offset: 0x12825C0
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Xml.XmlNode XmlNode::CloneNode(System.Boolean deep)
    ::System::Xml::XmlNode* CloneNode(bool deep);
    // override System.Boolean IsValidChildType(System.Xml.XmlNodeType type)
    // Offset: 0x1282788
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Boolean XmlNode::IsValidChildType(System.Xml.XmlNodeType type)
    bool IsValidChildType(::System::Xml::XmlNodeType type);
    // public override System.Void WriteTo(System.Xml.XmlWriter w)
    // Offset: 0x1282830
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Void XmlNode::WriteTo(System.Xml.XmlWriter w)
    void WriteTo(::System::Xml::XmlWriter* w);
    // public override System.Void WriteContentTo(System.Xml.XmlWriter w)
    // Offset: 0x1282834
    // Implemented from: System.Xml.XmlNode
    // Base method: System.Void XmlNode::WriteContentTo(System.Xml.XmlWriter w)
    void WriteContentTo(::System::Xml::XmlWriter* w);
  }; // System.Xml.XmlEntity
  #pragma pack(pop)
  static check_size<sizeof(XmlEntity), 80 + sizeof(bool)> __System_Xml_XmlEntitySizeCheck;
  static_assert(sizeof(XmlEntity) == 0x51);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlEntity::get_SystemId
// Il2CppName: get_SystemId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlEntity::*)()>(&System::Xml::XmlEntity::get_SystemId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlEntity*), "get_SystemId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlEntity::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlEntity::SetBaseURI
// Il2CppName: SetBaseURI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEntity::*)(::StringW)>(&System::Xml::XmlEntity::SetBaseURI)> {
  static const MethodInfo* get() {
    static auto* inBaseURI = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlEntity*), "SetBaseURI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inBaseURI});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlEntity::get_IsReadOnly
// Il2CppName: get_IsReadOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlEntity::*)()>(&System::Xml::XmlEntity::get_IsReadOnly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlEntity*), "get_IsReadOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlEntity::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlEntity::*)()>(&System::Xml::XmlEntity::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlEntity*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlEntity::get_LocalName
// Il2CppName: get_LocalName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlEntity::*)()>(&System::Xml::XmlEntity::get_LocalName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlEntity*), "get_LocalName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlEntity::get_InnerText
// Il2CppName: get_InnerText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlEntity::*)()>(&System::Xml::XmlEntity::get_InnerText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlEntity*), "get_InnerText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlEntity::set_InnerText
// Il2CppName: set_InnerText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEntity::*)(::StringW)>(&System::Xml::XmlEntity::set_InnerText)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlEntity*), "set_InnerText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlEntity::get_IsContainer
// Il2CppName: get_IsContainer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlEntity::*)()>(&System::Xml::XmlEntity::get_IsContainer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlEntity*), "get_IsContainer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlEntity::get_LastNode
// Il2CppName: get_LastNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlLinkedNode* (System::Xml::XmlEntity::*)()>(&System::Xml::XmlEntity::get_LastNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlEntity*), "get_LastNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlEntity::set_LastNode
// Il2CppName: set_LastNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEntity::*)(::System::Xml::XmlLinkedNode*)>(&System::Xml::XmlEntity::set_LastNode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlLinkedNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlEntity*), "set_LastNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlEntity::get_NodeType
// Il2CppName: get_NodeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (System::Xml::XmlEntity::*)()>(&System::Xml::XmlEntity::get_NodeType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlEntity*), "get_NodeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlEntity::set_InnerXml
// Il2CppName: set_InnerXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEntity::*)(::StringW)>(&System::Xml::XmlEntity::set_InnerXml)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlEntity*), "set_InnerXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlEntity::get_BaseURI
// Il2CppName: get_BaseURI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlEntity::*)()>(&System::Xml::XmlEntity::get_BaseURI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlEntity*), "get_BaseURI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlEntity::CloneNode
// Il2CppName: CloneNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNode* (System::Xml::XmlEntity::*)(bool)>(&System::Xml::XmlEntity::CloneNode)> {
  static const MethodInfo* get() {
    static auto* deep = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlEntity*), "CloneNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deep});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlEntity::IsValidChildType
// Il2CppName: IsValidChildType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlEntity::*)(::System::Xml::XmlNodeType)>(&System::Xml::XmlEntity::IsValidChildType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlNodeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlEntity*), "IsValidChildType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlEntity::WriteTo
// Il2CppName: WriteTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEntity::*)(::System::Xml::XmlWriter*)>(&System::Xml::XmlEntity::WriteTo)> {
  static const MethodInfo* get() {
    static auto* w = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlEntity*), "WriteTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{w});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlEntity::WriteContentTo
// Il2CppName: WriteContentTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlEntity::*)(::System::Xml::XmlWriter*)>(&System::Xml::XmlEntity::WriteContentTo)> {
  static const MethodInfo* get() {
    static auto* w = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlEntity*), "WriteContentTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{w});
  }
};
