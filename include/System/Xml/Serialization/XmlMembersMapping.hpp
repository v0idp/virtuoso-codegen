// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Serialization.XmlMapping
#include "System/Xml/Serialization/XmlMapping.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: XmlMemberMapping
  class XmlMemberMapping;
}
// Completed forward declares
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: XmlMembersMapping
  class XmlMembersMapping;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Serialization::XmlMembersMapping);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlMembersMapping*, "System.Xml.Serialization", "XmlMembersMapping");
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Serialization.XmlMembersMapping
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 6A4634
  class XmlMembersMapping : public ::System::Xml::Serialization::XmlMapping {
    public:
    public:
    // private System.Boolean _hasWrapperElement
    // Size: 0x1
    // Offset: 0x48
    bool hasWrapperElement;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasWrapperElement and: mapping
    char __padding0[0x7] = {};
    // private System.Xml.Serialization.XmlMemberMapping[] _mapping
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::System::Xml::Serialization::XmlMemberMapping*> mapping;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Xml::Serialization::XmlMemberMapping*>) == 0x8);
    public:
    // Get instance field reference: private System.Boolean _hasWrapperElement
    [[deprecated("Use field access instead!")]] bool& dyn__hasWrapperElement();
    // Get instance field reference: private System.Xml.Serialization.XmlMemberMapping[] _mapping
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Xml::Serialization::XmlMemberMapping*>& dyn__mapping();
    // public System.Int32 get_Count()
    // Offset: 0x128C000
    int get_Count();
    // System.Boolean get_HasWrapperElement()
    // Offset: 0x128C01C
    bool get_HasWrapperElement();
  }; // System.Xml.Serialization.XmlMembersMapping
  #pragma pack(pop)
  static check_size<sizeof(XmlMembersMapping), 80 + sizeof(::ArrayW<::System::Xml::Serialization::XmlMemberMapping*>)> __System_Xml_Serialization_XmlMembersMappingSizeCheck;
  static_assert(sizeof(XmlMembersMapping) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Serialization::XmlMembersMapping::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Serialization::XmlMembersMapping::*)()>(&System::Xml::Serialization::XmlMembersMapping::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlMembersMapping*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlMembersMapping::get_HasWrapperElement
// Il2CppName: get_HasWrapperElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Serialization::XmlMembersMapping::*)()>(&System::Xml::Serialization::XmlMembersMapping::get_HasWrapperElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlMembersMapping*), "get_HasWrapperElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
