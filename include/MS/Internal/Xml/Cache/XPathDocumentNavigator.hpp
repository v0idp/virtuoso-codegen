// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XPath.XPathNavigator
#include "System/Xml/XPath/XPathNavigator.hpp"
// Including type: System.Xml.IXmlLineInfo
#include "System/Xml/IXmlLineInfo.hpp"
// Including type: MS.Internal.Xml.Cache.XPathNode
#include "MS/Internal/Xml/Cache/XPathNode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::XPath
namespace System::Xml::XPath {
  // Forward declaring type: XPathNodeType
  struct XPathNodeType;
  // Forward declaring type: XPathNamespaceScope
  struct XPathNamespaceScope;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlNameTable
  class XmlNameTable;
}
// Completed forward declares
// Type namespace: MS.Internal.Xml.Cache
namespace MS::Internal::Xml::Cache {
  // Forward declaring type: XPathDocumentNavigator
  class XPathDocumentNavigator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MS::Internal::Xml::Cache::XPathDocumentNavigator);
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::Cache::XPathDocumentNavigator*, "MS.Internal.Xml.Cache", "XPathDocumentNavigator");
// Type namespace: MS.Internal.Xml.Cache
namespace MS::Internal::Xml::Cache {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MS.Internal.Xml.Cache.XPathDocumentNavigator
  // [TokenAttribute] Offset: FFFFFFFF
  class XPathDocumentNavigator : public ::System::Xml::XPath::XPathNavigator/*, public ::System::Xml::IXmlLineInfo*/ {
    public:
    public:
    // private MS.Internal.Xml.Cache.XPathNode[] pageCurrent
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::MS::Internal::Xml::Cache::XPathNode> pageCurrent;
    // Field size check
    static_assert(sizeof(::ArrayW<::MS::Internal::Xml::Cache::XPathNode>) == 0x8);
    // private MS.Internal.Xml.Cache.XPathNode[] pageParent
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::MS::Internal::Xml::Cache::XPathNode> pageParent;
    // Field size check
    static_assert(sizeof(::ArrayW<::MS::Internal::Xml::Cache::XPathNode>) == 0x8);
    // private System.Int32 idxCurrent
    // Size: 0x4
    // Offset: 0x20
    int idxCurrent;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 idxParent
    // Size: 0x4
    // Offset: 0x24
    int idxParent;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Xml::IXmlLineInfo
    operator ::System::Xml::IXmlLineInfo() noexcept {
      return *reinterpret_cast<::System::Xml::IXmlLineInfo*>(this);
    }
    // Get instance field reference: private MS.Internal.Xml.Cache.XPathNode[] pageCurrent
    [[deprecated]] ::ArrayW<::MS::Internal::Xml::Cache::XPathNode>& dyn_pageCurrent();
    // Get instance field reference: private MS.Internal.Xml.Cache.XPathNode[] pageParent
    [[deprecated]] ::ArrayW<::MS::Internal::Xml::Cache::XPathNode>& dyn_pageParent();
    // Get instance field reference: private System.Int32 idxCurrent
    [[deprecated]] int& dyn_idxCurrent();
    // Get instance field reference: private System.Int32 idxParent
    [[deprecated]] int& dyn_idxParent();
    // public System.Int32 get_LineNumber()
    // Offset: 0xF7A9CC
    int get_LineNumber();
    // public System.Int32 get_LinePosition()
    // Offset: 0xF7AA8C
    int get_LinePosition();
    // public System.Void .ctor(MS.Internal.Xml.Cache.XPathNode[] pageCurrent, System.Int32 idxCurrent, MS.Internal.Xml.Cache.XPathNode[] pageParent, System.Int32 idxParent)
    // Offset: 0xF79CF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XPathDocumentNavigator* New_ctor(::ArrayW<::MS::Internal::Xml::Cache::XPathNode> pageCurrent, int idxCurrent, ::ArrayW<::MS::Internal::Xml::Cache::XPathNode> pageParent, int idxParent) {
      static auto ___internal__logger = ::Logger::get().WithContext("::MS::Internal::Xml::Cache::XPathDocumentNavigator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XPathDocumentNavigator*, creationType>(pageCurrent, idxCurrent, pageParent, idxParent)));
    }
    // public System.Boolean HasLineInfo()
    // Offset: 0xF7A97C
    bool HasLineInfo();
    // public System.Int32 GetPositionHashCode()
    // Offset: 0xF7AB94
    int GetPositionHashCode();
    // public override System.String get_Value()
    // Offset: 0xF79D88
    // Implemented from: System.Xml.XPath.XPathItem
    // Base method: System.String XPathItem::get_Value()
    ::StringW get_Value();
    // public override System.Xml.XPath.XPathNodeType get_NodeType()
    // Offset: 0xF7A224
    // Implemented from: System.Xml.XPath.XPathNavigator
    // Base method: System.Xml.XPath.XPathNodeType XPathNavigator::get_NodeType()
    ::System::Xml::XPath::XPathNodeType get_NodeType();
    // public override System.String get_LocalName()
    // Offset: 0xF7A274
    // Implemented from: System.Xml.XPath.XPathNavigator
    // Base method: System.String XPathNavigator::get_LocalName()
    ::StringW get_LocalName();
    // public override System.String get_NamespaceURI()
    // Offset: 0xF7A2D8
    // Implemented from: System.Xml.XPath.XPathNavigator
    // Base method: System.String XPathNavigator::get_NamespaceURI()
    ::StringW get_NamespaceURI();
    // public override System.String get_Prefix()
    // Offset: 0xF7A33C
    // Implemented from: System.Xml.XPath.XPathNavigator
    // Base method: System.String XPathNavigator::get_Prefix()
    ::StringW get_Prefix();
    // public override System.Xml.XmlNameTable get_NameTable()
    // Offset: 0xF7A3A0
    // Implemented from: System.Xml.XPath.XPathNavigator
    // Base method: System.Xml.XmlNameTable XPathNavigator::get_NameTable()
    ::System::Xml::XmlNameTable* get_NameTable();
    // public override System.Object get_UnderlyingObject()
    // Offset: 0xF7A96C
    // Implemented from: System.Xml.XPath.XPathNavigator
    // Base method: System.Object XPathNavigator::get_UnderlyingObject()
    ::Il2CppObject* get_UnderlyingObject();
    // public override System.Xml.XPath.XPathNavigator Clone()
    // Offset: 0xF7A1A4
    // Implemented from: System.Xml.XPath.XPathNavigator
    // Base method: System.Xml.XPath.XPathNavigator XPathNavigator::Clone()
    ::System::Xml::XPath::XPathNavigator* Clone();
    // public override System.Boolean MoveToFirstNamespace(System.Xml.XPath.XPathNamespaceScope namespaceScope)
    // Offset: 0xF7A40C
    // Implemented from: System.Xml.XPath.XPathNavigator
    // Base method: System.Boolean XPathNavigator::MoveToFirstNamespace(System.Xml.XPath.XPathNamespaceScope namespaceScope)
    bool MoveToFirstNamespace(::System::Xml::XPath::XPathNamespaceScope namespaceScope);
    // public override System.Boolean MoveToNextNamespace(System.Xml.XPath.XPathNamespaceScope scope)
    // Offset: 0xF7A6EC
    // Implemented from: System.Xml.XPath.XPathNavigator
    // Base method: System.Boolean XPathNavigator::MoveToNextNamespace(System.Xml.XPath.XPathNamespaceScope scope)
    bool MoveToNextNamespace(::System::Xml::XPath::XPathNamespaceScope scope);
    // public override System.Boolean MoveToParent()
    // Offset: 0xF7A824
    // Implemented from: System.Xml.XPath.XPathNavigator
    // Base method: System.Boolean XPathNavigator::MoveToParent()
    bool MoveToParent();
    // public override System.Boolean IsSamePosition(System.Xml.XPath.XPathNavigator other)
    // Offset: 0xF7A8B4
    // Implemented from: System.Xml.XPath.XPathNavigator
    // Base method: System.Boolean XPathNavigator::IsSamePosition(System.Xml.XPath.XPathNavigator other)
    bool IsSamePosition(::System::Xml::XPath::XPathNavigator* other);
  }; // MS.Internal.Xml.Cache.XPathDocumentNavigator
  #pragma pack(pop)
  static check_size<sizeof(XPathDocumentNavigator), 36 + sizeof(int)> __MS_Internal_Xml_Cache_XPathDocumentNavigatorSizeCheck;
  static_assert(sizeof(XPathDocumentNavigator) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathDocumentNavigator::get_LineNumber
// Il2CppName: get_LineNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (MS::Internal::Xml::Cache::XPathDocumentNavigator::*)()>(&MS::Internal::Xml::Cache::XPathDocumentNavigator::get_LineNumber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathDocumentNavigator*), "get_LineNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathDocumentNavigator::get_LinePosition
// Il2CppName: get_LinePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (MS::Internal::Xml::Cache::XPathDocumentNavigator::*)()>(&MS::Internal::Xml::Cache::XPathDocumentNavigator::get_LinePosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathDocumentNavigator*), "get_LinePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathDocumentNavigator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathDocumentNavigator::HasLineInfo
// Il2CppName: HasLineInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (MS::Internal::Xml::Cache::XPathDocumentNavigator::*)()>(&MS::Internal::Xml::Cache::XPathDocumentNavigator::HasLineInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathDocumentNavigator*), "HasLineInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathDocumentNavigator::GetPositionHashCode
// Il2CppName: GetPositionHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (MS::Internal::Xml::Cache::XPathDocumentNavigator::*)()>(&MS::Internal::Xml::Cache::XPathDocumentNavigator::GetPositionHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathDocumentNavigator*), "GetPositionHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathDocumentNavigator::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (MS::Internal::Xml::Cache::XPathDocumentNavigator::*)()>(&MS::Internal::Xml::Cache::XPathDocumentNavigator::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathDocumentNavigator*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathDocumentNavigator::get_NodeType
// Il2CppName: get_NodeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XPath::XPathNodeType (MS::Internal::Xml::Cache::XPathDocumentNavigator::*)()>(&MS::Internal::Xml::Cache::XPathDocumentNavigator::get_NodeType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathDocumentNavigator*), "get_NodeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathDocumentNavigator::get_LocalName
// Il2CppName: get_LocalName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (MS::Internal::Xml::Cache::XPathDocumentNavigator::*)()>(&MS::Internal::Xml::Cache::XPathDocumentNavigator::get_LocalName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathDocumentNavigator*), "get_LocalName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathDocumentNavigator::get_NamespaceURI
// Il2CppName: get_NamespaceURI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (MS::Internal::Xml::Cache::XPathDocumentNavigator::*)()>(&MS::Internal::Xml::Cache::XPathDocumentNavigator::get_NamespaceURI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathDocumentNavigator*), "get_NamespaceURI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathDocumentNavigator::get_Prefix
// Il2CppName: get_Prefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (MS::Internal::Xml::Cache::XPathDocumentNavigator::*)()>(&MS::Internal::Xml::Cache::XPathDocumentNavigator::get_Prefix)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathDocumentNavigator*), "get_Prefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathDocumentNavigator::get_NameTable
// Il2CppName: get_NameTable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNameTable* (MS::Internal::Xml::Cache::XPathDocumentNavigator::*)()>(&MS::Internal::Xml::Cache::XPathDocumentNavigator::get_NameTable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathDocumentNavigator*), "get_NameTable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathDocumentNavigator::get_UnderlyingObject
// Il2CppName: get_UnderlyingObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (MS::Internal::Xml::Cache::XPathDocumentNavigator::*)()>(&MS::Internal::Xml::Cache::XPathDocumentNavigator::get_UnderlyingObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathDocumentNavigator*), "get_UnderlyingObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathDocumentNavigator::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XPath::XPathNavigator* (MS::Internal::Xml::Cache::XPathDocumentNavigator::*)()>(&MS::Internal::Xml::Cache::XPathDocumentNavigator::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathDocumentNavigator*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathDocumentNavigator::MoveToFirstNamespace
// Il2CppName: MoveToFirstNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (MS::Internal::Xml::Cache::XPathDocumentNavigator::*)(::System::Xml::XPath::XPathNamespaceScope)>(&MS::Internal::Xml::Cache::XPathDocumentNavigator::MoveToFirstNamespace)> {
  static const MethodInfo* get() {
    static auto* namespaceScope = &::il2cpp_utils::GetClassFromName("System.Xml.XPath", "XPathNamespaceScope")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathDocumentNavigator*), "MoveToFirstNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{namespaceScope});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathDocumentNavigator::MoveToNextNamespace
// Il2CppName: MoveToNextNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (MS::Internal::Xml::Cache::XPathDocumentNavigator::*)(::System::Xml::XPath::XPathNamespaceScope)>(&MS::Internal::Xml::Cache::XPathDocumentNavigator::MoveToNextNamespace)> {
  static const MethodInfo* get() {
    static auto* scope = &::il2cpp_utils::GetClassFromName("System.Xml.XPath", "XPathNamespaceScope")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathDocumentNavigator*), "MoveToNextNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scope});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathDocumentNavigator::MoveToParent
// Il2CppName: MoveToParent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (MS::Internal::Xml::Cache::XPathDocumentNavigator::*)()>(&MS::Internal::Xml::Cache::XPathDocumentNavigator::MoveToParent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathDocumentNavigator*), "MoveToParent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathDocumentNavigator::IsSamePosition
// Il2CppName: IsSamePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (MS::Internal::Xml::Cache::XPathDocumentNavigator::*)(::System::Xml::XPath::XPathNavigator*)>(&MS::Internal::Xml::Cache::XPathDocumentNavigator::IsSamePosition)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System.Xml.XPath", "XPathNavigator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathDocumentNavigator*), "IsSamePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
