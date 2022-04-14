// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Serialization.ObjectMap
#include "System/Xml/Serialization/ObjectMap.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: XmlTypeMapElementInfoList
  class XmlTypeMapElementInfoList;
  // Forward declaring type: XmlTypeMapElementInfo
  class XmlTypeMapElementInfo;
}
// Completed forward declares
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: ListMap
  class ListMap;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Serialization::ListMap);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::ListMap*, "System.Xml.Serialization", "ListMap");
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Serialization.ListMap
  // [TokenAttribute] Offset: FFFFFFFF
  class ListMap : public ::System::Xml::Serialization::ObjectMap {
    public:
    public:
    // private System.Xml.Serialization.XmlTypeMapElementInfoList _itemInfo
    // Size: 0x8
    // Offset: 0x10
    ::System::Xml::Serialization::XmlTypeMapElementInfoList* itemInfo;
    // Field size check
    static_assert(sizeof(::System::Xml::Serialization::XmlTypeMapElementInfoList*) == 0x8);
    // private System.String _choiceMember
    // Size: 0x8
    // Offset: 0x18
    ::StringW choiceMember;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.Xml.Serialization.XmlTypeMapElementInfoList _itemInfo
    [[deprecated]] ::System::Xml::Serialization::XmlTypeMapElementInfoList*& dyn__itemInfo();
    // Get instance field reference: private System.String _choiceMember
    [[deprecated]] ::StringW& dyn__choiceMember();
    // public System.Void set_ChoiceMember(System.String value)
    // Offset: 0xAF37F0
    void set_ChoiceMember(::StringW value);
    // public System.Xml.Serialization.XmlTypeMapElementInfoList get_ItemInfo()
    // Offset: 0xAF37F8
    ::System::Xml::Serialization::XmlTypeMapElementInfoList* get_ItemInfo();
    // public System.Void set_ItemInfo(System.Xml.Serialization.XmlTypeMapElementInfoList value)
    // Offset: 0xAF3800
    void set_ItemInfo(::System::Xml::Serialization::XmlTypeMapElementInfoList* value);
    // public System.Xml.Serialization.XmlTypeMapElementInfo FindElement(System.Object ob, System.Int32 index, System.Object memberValue)
    // Offset: 0xAF3808
    ::System::Xml::Serialization::XmlTypeMapElementInfo* FindElement(::Il2CppObject* ob, int index, ::Il2CppObject* memberValue);
    // public System.Xml.Serialization.XmlTypeMapElementInfo FindElement(System.String elementName, System.String ns)
    // Offset: 0xAF4018
    ::System::Xml::Serialization::XmlTypeMapElementInfo* FindElement(::StringW elementName, ::StringW ns);
    // public System.Xml.Serialization.XmlTypeMapElementInfo FindTextElement()
    // Offset: 0xAF4318
    ::System::Xml::Serialization::XmlTypeMapElementInfo* FindTextElement();
    // public System.Void GetArrayType(System.Int32 itemCount, out System.String localName, out System.String ns)
    // Offset: 0xAF45F4
    void GetArrayType(int itemCount, ByRef<::StringW> localName, ByRef<::StringW> ns);
    // public System.Void .ctor()
    // Offset: 0xAF4988
    // Implemented from: System.Xml.Serialization.ObjectMap
    // Base method: System.Void ObjectMap::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ListMap* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Serialization::ListMap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ListMap*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xAF4820
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public override System.Int32 GetHashCode()
    // Offset: 0xAF4980
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Xml.Serialization.ListMap
  #pragma pack(pop)
  static check_size<sizeof(ListMap), 24 + sizeof(::StringW)> __System_Xml_Serialization_ListMapSizeCheck;
  static_assert(sizeof(ListMap) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Serialization::ListMap::set_ChoiceMember
// Il2CppName: set_ChoiceMember
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::ListMap::*)(::StringW)>(&System::Xml::Serialization::ListMap::set_ChoiceMember)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::ListMap*), "set_ChoiceMember", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::ListMap::get_ItemInfo
// Il2CppName: get_ItemInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlTypeMapElementInfoList* (System::Xml::Serialization::ListMap::*)()>(&System::Xml::Serialization::ListMap::get_ItemInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::ListMap*), "get_ItemInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::ListMap::set_ItemInfo
// Il2CppName: set_ItemInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::ListMap::*)(::System::Xml::Serialization::XmlTypeMapElementInfoList*)>(&System::Xml::Serialization::ListMap::set_ItemInfo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Serialization", "XmlTypeMapElementInfoList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::ListMap*), "set_ItemInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::ListMap::FindElement
// Il2CppName: FindElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlTypeMapElementInfo* (System::Xml::Serialization::ListMap::*)(::Il2CppObject*, int, ::Il2CppObject*)>(&System::Xml::Serialization::ListMap::FindElement)> {
  static const MethodInfo* get() {
    static auto* ob = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* memberValue = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::ListMap*), "FindElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ob, index, memberValue});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::ListMap::FindElement
// Il2CppName: FindElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlTypeMapElementInfo* (System::Xml::Serialization::ListMap::*)(::StringW, ::StringW)>(&System::Xml::Serialization::ListMap::FindElement)> {
  static const MethodInfo* get() {
    static auto* elementName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::ListMap*), "FindElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{elementName, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::ListMap::FindTextElement
// Il2CppName: FindTextElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlTypeMapElementInfo* (System::Xml::Serialization::ListMap::*)()>(&System::Xml::Serialization::ListMap::FindTextElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::ListMap*), "FindTextElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::ListMap::GetArrayType
// Il2CppName: GetArrayType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::ListMap::*)(int, ByRef<::StringW>, ByRef<::StringW>)>(&System::Xml::Serialization::ListMap::GetArrayType)> {
  static const MethodInfo* get() {
    static auto* itemCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::ListMap*), "GetArrayType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{itemCount, localName, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::ListMap::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Serialization::ListMap::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Serialization::ListMap::*)(::Il2CppObject*)>(&System::Xml::Serialization::ListMap::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::ListMap*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::ListMap::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Serialization::ListMap::*)()>(&System::Xml::Serialization::ListMap::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::ListMap*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};