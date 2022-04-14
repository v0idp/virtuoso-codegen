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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Xml::Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: XmlAttributes
  class XmlAttributes;
}
// Completed forward declares
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: XmlReflectionMember
  class XmlReflectionMember;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Serialization::XmlReflectionMember);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlReflectionMember*, "System.Xml.Serialization", "XmlReflectionMember");
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Serialization.XmlReflectionMember
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlReflectionMember : public ::Il2CppObject {
    public:
    public:
    // private System.Boolean isReturnValue
    // Size: 0x1
    // Offset: 0x10
    bool isReturnValue;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isReturnValue and: memberName
    char __padding0[0x7] = {};
    // private System.String memberName
    // Size: 0x8
    // Offset: 0x18
    ::StringW memberName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Type memberType
    // Size: 0x8
    // Offset: 0x20
    ::System::Type* memberType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private System.Xml.Serialization.XmlAttributes xmlAttributes
    // Size: 0x8
    // Offset: 0x28
    ::System::Xml::Serialization::XmlAttributes* xmlAttributes;
    // Field size check
    static_assert(sizeof(::System::Xml::Serialization::XmlAttributes*) == 0x8);
    // private System.Type declaringType
    // Size: 0x8
    // Offset: 0x30
    ::System::Type* declaringType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Get instance field reference: private System.Boolean isReturnValue
    [[deprecated]] bool& dyn_isReturnValue();
    // Get instance field reference: private System.String memberName
    [[deprecated]] ::StringW& dyn_memberName();
    // Get instance field reference: private System.Type memberType
    [[deprecated]] ::System::Type*& dyn_memberType();
    // Get instance field reference: private System.Xml.Serialization.XmlAttributes xmlAttributes
    [[deprecated]] ::System::Xml::Serialization::XmlAttributes*& dyn_xmlAttributes();
    // Get instance field reference: private System.Type declaringType
    [[deprecated]] ::System::Type*& dyn_declaringType();
    // public System.Boolean get_IsReturnValue()
    // Offset: 0x1106288
    bool get_IsReturnValue();
    // public System.String get_MemberName()
    // Offset: 0x1106290
    ::StringW get_MemberName();
    // public System.Type get_MemberType()
    // Offset: 0x1106298
    ::System::Type* get_MemberType();
    // public System.Xml.Serialization.XmlAttributes get_XmlAttributes()
    // Offset: 0x11062A0
    ::System::Xml::Serialization::XmlAttributes* get_XmlAttributes();
    // System.Type get_DeclaringType()
    // Offset: 0x1106308
    ::System::Type* get_DeclaringType();
    // System.Void set_DeclaringType(System.Type value)
    // Offset: 0x1106310
    void set_DeclaringType(::System::Type* value);
    // System.Void .ctor(System.String name, System.Type type, System.Xml.Serialization.XmlAttributes attributes)
    // Offset: 0x1106248
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlReflectionMember* New_ctor(::StringW name, ::System::Type* type, ::System::Xml::Serialization::XmlAttributes* attributes) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Serialization::XmlReflectionMember::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlReflectionMember*, creationType>(name, type, attributes)));
    }
  }; // System.Xml.Serialization.XmlReflectionMember
  #pragma pack(pop)
  static check_size<sizeof(XmlReflectionMember), 48 + sizeof(::System::Type*)> __System_Xml_Serialization_XmlReflectionMemberSizeCheck;
  static_assert(sizeof(XmlReflectionMember) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Serialization::XmlReflectionMember::get_IsReturnValue
// Il2CppName: get_IsReturnValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Serialization::XmlReflectionMember::*)()>(&System::Xml::Serialization::XmlReflectionMember::get_IsReturnValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlReflectionMember*), "get_IsReturnValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlReflectionMember::get_MemberName
// Il2CppName: get_MemberName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Serialization::XmlReflectionMember::*)()>(&System::Xml::Serialization::XmlReflectionMember::get_MemberName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlReflectionMember*), "get_MemberName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlReflectionMember::get_MemberType
// Il2CppName: get_MemberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Xml::Serialization::XmlReflectionMember::*)()>(&System::Xml::Serialization::XmlReflectionMember::get_MemberType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlReflectionMember*), "get_MemberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlReflectionMember::get_XmlAttributes
// Il2CppName: get_XmlAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlAttributes* (System::Xml::Serialization::XmlReflectionMember::*)()>(&System::Xml::Serialization::XmlReflectionMember::get_XmlAttributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlReflectionMember*), "get_XmlAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlReflectionMember::get_DeclaringType
// Il2CppName: get_DeclaringType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Xml::Serialization::XmlReflectionMember::*)()>(&System::Xml::Serialization::XmlReflectionMember::get_DeclaringType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlReflectionMember*), "get_DeclaringType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlReflectionMember::set_DeclaringType
// Il2CppName: set_DeclaringType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlReflectionMember::*)(::System::Type*)>(&System::Xml::Serialization::XmlReflectionMember::set_DeclaringType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlReflectionMember*), "set_DeclaringType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlReflectionMember::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!