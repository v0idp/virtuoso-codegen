// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MS.Internal.Xml.Cache.XPathNode
#include "MS/Internal/Xml/Cache/XPathNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::XPath
namespace System::Xml::XPath {
  // Forward declaring type: XPathDocument
  class XPathDocument;
}
// Forward declaring namespace: MS::Internal::Xml::Cache
namespace MS::Internal::Xml::Cache {
  // Forward declaring type: XPathNodePageInfo
  class XPathNodePageInfo;
}
// Completed forward declares
// Type namespace: MS.Internal.Xml.Cache
namespace MS::Internal::Xml::Cache {
  // Forward declaring type: XPathNodeInfoAtom
  class XPathNodeInfoAtom;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MS::Internal::Xml::Cache::XPathNodeInfoAtom);
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::Cache::XPathNodeInfoAtom*, "MS.Internal.Xml.Cache", "XPathNodeInfoAtom");
// Type namespace: MS.Internal.Xml.Cache
namespace MS::Internal::Xml::Cache {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: MS.Internal.Xml.Cache.XPathNodeInfoAtom
  // [TokenAttribute] Offset: FFFFFFFF
  class XPathNodeInfoAtom : public ::Il2CppObject {
    public:
    public:
    // private System.String localName
    // Size: 0x8
    // Offset: 0x10
    ::StringW localName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String namespaceUri
    // Size: 0x8
    // Offset: 0x18
    ::StringW namespaceUri;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String prefix
    // Size: 0x8
    // Offset: 0x20
    ::StringW prefix;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private MS.Internal.Xml.Cache.XPathNode[] pageParent
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::MS::Internal::Xml::Cache::XPathNode> pageParent;
    // Field size check
    static_assert(sizeof(::ArrayW<::MS::Internal::Xml::Cache::XPathNode>) == 0x8);
    // private MS.Internal.Xml.Cache.XPathNode[] pageSibling
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::MS::Internal::Xml::Cache::XPathNode> pageSibling;
    // Field size check
    static_assert(sizeof(::ArrayW<::MS::Internal::Xml::Cache::XPathNode>) == 0x8);
    // private System.Xml.XPath.XPathDocument doc
    // Size: 0x8
    // Offset: 0x38
    ::System::Xml::XPath::XPathDocument* doc;
    // Field size check
    static_assert(sizeof(::System::Xml::XPath::XPathDocument*) == 0x8);
    // private System.Int32 lineNumBase
    // Size: 0x4
    // Offset: 0x40
    int lineNumBase;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 linePosBase
    // Size: 0x4
    // Offset: 0x44
    int linePosBase;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private MS.Internal.Xml.Cache.XPathNodePageInfo pageInfo
    // Size: 0x8
    // Offset: 0x48
    ::MS::Internal::Xml::Cache::XPathNodePageInfo* pageInfo;
    // Field size check
    static_assert(sizeof(::MS::Internal::Xml::Cache::XPathNodePageInfo*) == 0x8);
    public:
    // Get instance field reference: private System.String localName
    [[deprecated]] ::StringW& dyn_localName();
    // Get instance field reference: private System.String namespaceUri
    [[deprecated]] ::StringW& dyn_namespaceUri();
    // Get instance field reference: private System.String prefix
    [[deprecated]] ::StringW& dyn_prefix();
    // Get instance field reference: private MS.Internal.Xml.Cache.XPathNode[] pageParent
    [[deprecated]] ::ArrayW<::MS::Internal::Xml::Cache::XPathNode>& dyn_pageParent();
    // Get instance field reference: private MS.Internal.Xml.Cache.XPathNode[] pageSibling
    [[deprecated]] ::ArrayW<::MS::Internal::Xml::Cache::XPathNode>& dyn_pageSibling();
    // Get instance field reference: private System.Xml.XPath.XPathDocument doc
    [[deprecated]] ::System::Xml::XPath::XPathDocument*& dyn_doc();
    // Get instance field reference: private System.Int32 lineNumBase
    [[deprecated]] int& dyn_lineNumBase();
    // Get instance field reference: private System.Int32 linePosBase
    [[deprecated]] int& dyn_linePosBase();
    // Get instance field reference: private MS.Internal.Xml.Cache.XPathNodePageInfo pageInfo
    [[deprecated]] ::MS::Internal::Xml::Cache::XPathNodePageInfo*& dyn_pageInfo();
    // public MS.Internal.Xml.Cache.XPathNodePageInfo get_PageInfo()
    // Offset: 0xF7D9B4
    ::MS::Internal::Xml::Cache::XPathNodePageInfo* get_PageInfo();
    // public System.String get_LocalName()
    // Offset: 0xF7D9BC
    ::StringW get_LocalName();
    // public System.String get_NamespaceUri()
    // Offset: 0xF7D9C4
    ::StringW get_NamespaceUri();
    // public System.String get_Prefix()
    // Offset: 0xF7D9CC
    ::StringW get_Prefix();
    // public MS.Internal.Xml.Cache.XPathNode[] get_SiblingPage()
    // Offset: 0xF7D9D4
    ::ArrayW<::MS::Internal::Xml::Cache::XPathNode> get_SiblingPage();
    // public MS.Internal.Xml.Cache.XPathNode[] get_ParentPage()
    // Offset: 0xF7D9DC
    ::ArrayW<::MS::Internal::Xml::Cache::XPathNode> get_ParentPage();
    // public System.Xml.XPath.XPathDocument get_Document()
    // Offset: 0xF7D9E4
    ::System::Xml::XPath::XPathDocument* get_Document();
    // public System.Int32 get_LineNumberBase()
    // Offset: 0xF7D9EC
    int get_LineNumberBase();
    // public System.Int32 get_LinePositionBase()
    // Offset: 0xF7D9F4
    int get_LinePositionBase();
  }; // MS.Internal.Xml.Cache.XPathNodeInfoAtom
  #pragma pack(pop)
  static check_size<sizeof(XPathNodeInfoAtom), 72 + sizeof(::MS::Internal::Xml::Cache::XPathNodePageInfo*)> __MS_Internal_Xml_Cache_XPathNodeInfoAtomSizeCheck;
  static_assert(sizeof(XPathNodeInfoAtom) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathNodeInfoAtom::get_PageInfo
// Il2CppName: get_PageInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MS::Internal::Xml::Cache::XPathNodePageInfo* (MS::Internal::Xml::Cache::XPathNodeInfoAtom::*)()>(&MS::Internal::Xml::Cache::XPathNodeInfoAtom::get_PageInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathNodeInfoAtom*), "get_PageInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathNodeInfoAtom::get_LocalName
// Il2CppName: get_LocalName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (MS::Internal::Xml::Cache::XPathNodeInfoAtom::*)()>(&MS::Internal::Xml::Cache::XPathNodeInfoAtom::get_LocalName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathNodeInfoAtom*), "get_LocalName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathNodeInfoAtom::get_NamespaceUri
// Il2CppName: get_NamespaceUri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (MS::Internal::Xml::Cache::XPathNodeInfoAtom::*)()>(&MS::Internal::Xml::Cache::XPathNodeInfoAtom::get_NamespaceUri)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathNodeInfoAtom*), "get_NamespaceUri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathNodeInfoAtom::get_Prefix
// Il2CppName: get_Prefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (MS::Internal::Xml::Cache::XPathNodeInfoAtom::*)()>(&MS::Internal::Xml::Cache::XPathNodeInfoAtom::get_Prefix)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathNodeInfoAtom*), "get_Prefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathNodeInfoAtom::get_SiblingPage
// Il2CppName: get_SiblingPage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::MS::Internal::Xml::Cache::XPathNode> (MS::Internal::Xml::Cache::XPathNodeInfoAtom::*)()>(&MS::Internal::Xml::Cache::XPathNodeInfoAtom::get_SiblingPage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathNodeInfoAtom*), "get_SiblingPage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathNodeInfoAtom::get_ParentPage
// Il2CppName: get_ParentPage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::MS::Internal::Xml::Cache::XPathNode> (MS::Internal::Xml::Cache::XPathNodeInfoAtom::*)()>(&MS::Internal::Xml::Cache::XPathNodeInfoAtom::get_ParentPage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathNodeInfoAtom*), "get_ParentPage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathNodeInfoAtom::get_Document
// Il2CppName: get_Document
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XPath::XPathDocument* (MS::Internal::Xml::Cache::XPathNodeInfoAtom::*)()>(&MS::Internal::Xml::Cache::XPathNodeInfoAtom::get_Document)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathNodeInfoAtom*), "get_Document", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathNodeInfoAtom::get_LineNumberBase
// Il2CppName: get_LineNumberBase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (MS::Internal::Xml::Cache::XPathNodeInfoAtom::*)()>(&MS::Internal::Xml::Cache::XPathNodeInfoAtom::get_LineNumberBase)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathNodeInfoAtom*), "get_LineNumberBase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::Cache::XPathNodeInfoAtom::get_LinePositionBase
// Il2CppName: get_LinePositionBase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (MS::Internal::Xml::Cache::XPathNodeInfoAtom::*)()>(&MS::Internal::Xml::Cache::XPathNodeInfoAtom::get_LinePositionBase)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::Cache::XPathNodeInfoAtom*), "get_LinePositionBase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
