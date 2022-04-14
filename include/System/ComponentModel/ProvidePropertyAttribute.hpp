// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ProvidePropertyAttribute
  class ProvidePropertyAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::ProvidePropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ProvidePropertyAttribute*, "System.ComponentModel", "ProvidePropertyAttribute");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.ProvidePropertyAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 69CF38
  class ProvidePropertyAttribute : public ::System::Attribute {
    public:
    public:
    // private readonly System.String propertyName
    // Size: 0x8
    // Offset: 0x10
    ::StringW propertyName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.String receiverTypeName
    // Size: 0x8
    // Offset: 0x18
    ::StringW receiverTypeName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private readonly System.String propertyName
    [[deprecated]] ::StringW& dyn_propertyName();
    // Get instance field reference: private readonly System.String receiverTypeName
    [[deprecated]] ::StringW& dyn_receiverTypeName();
    // public System.String get_PropertyName()
    // Offset: 0x140CB58
    ::StringW get_PropertyName();
    // public System.String get_ReceiverTypeName()
    // Offset: 0x140CB60
    ::StringW get_ReceiverTypeName();
  }; // System.ComponentModel.ProvidePropertyAttribute
  #pragma pack(pop)
  static check_size<sizeof(ProvidePropertyAttribute), 24 + sizeof(::StringW)> __System_ComponentModel_ProvidePropertyAttributeSizeCheck;
  static_assert(sizeof(ProvidePropertyAttribute) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::ProvidePropertyAttribute::get_PropertyName
// Il2CppName: get_PropertyName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::ProvidePropertyAttribute::*)()>(&System::ComponentModel::ProvidePropertyAttribute::get_PropertyName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ProvidePropertyAttribute*), "get_PropertyName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ProvidePropertyAttribute::get_ReceiverTypeName
// Il2CppName: get_ReceiverTypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::ProvidePropertyAttribute::*)()>(&System::ComponentModel::ProvidePropertyAttribute::get_ReceiverTypeName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ProvidePropertyAttribute*), "get_ReceiverTypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
