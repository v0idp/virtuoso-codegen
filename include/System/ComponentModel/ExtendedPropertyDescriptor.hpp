// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.PropertyDescriptor
#include "System/ComponentModel/PropertyDescriptor.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ReflectPropertyDescriptor
  class ReflectPropertyDescriptor;
  // Forward declaring type: IExtenderProvider
  class IExtenderProvider;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Attribute
  class Attribute;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ExtendedPropertyDescriptor
  class ExtendedPropertyDescriptor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::ExtendedPropertyDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ExtendedPropertyDescriptor*, "System.ComponentModel", "ExtendedPropertyDescriptor");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.ExtendedPropertyDescriptor
  // [TokenAttribute] Offset: FFFFFFFF
  class ExtendedPropertyDescriptor : public ::System::ComponentModel::PropertyDescriptor {
    public:
    // Writing base type padding for base size: 0x84 to desired offset: 0x88
    char ___base_padding[0x4] = {};
    public:
    // private readonly System.ComponentModel.ReflectPropertyDescriptor extenderInfo
    // Size: 0x8
    // Offset: 0x88
    ::System::ComponentModel::ReflectPropertyDescriptor* extenderInfo;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::ReflectPropertyDescriptor*) == 0x8);
    // private readonly System.ComponentModel.IExtenderProvider provider
    // Size: 0x8
    // Offset: 0x90
    ::System::ComponentModel::IExtenderProvider* provider;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::IExtenderProvider*) == 0x8);
    public:
    // Get instance field reference: private readonly System.ComponentModel.ReflectPropertyDescriptor extenderInfo
    [[deprecated]] ::System::ComponentModel::ReflectPropertyDescriptor*& dyn_extenderInfo();
    // Get instance field reference: private readonly System.ComponentModel.IExtenderProvider provider
    [[deprecated]] ::System::ComponentModel::IExtenderProvider*& dyn_provider();
    // public System.Void .ctor(System.ComponentModel.ReflectPropertyDescriptor extenderInfo, System.Type receiverType, System.ComponentModel.IExtenderProvider provider, System.Attribute[] attributes)
    // Offset: 0xEFFF84
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExtendedPropertyDescriptor* New_ctor(::System::ComponentModel::ReflectPropertyDescriptor* extenderInfo, ::System::Type* receiverType, ::System::ComponentModel::IExtenderProvider* provider, ::ArrayW<::System::Attribute*> attributes) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::ExtendedPropertyDescriptor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExtendedPropertyDescriptor*, creationType>(extenderInfo, receiverType, provider, attributes)));
    }
    // public override System.Type get_ComponentType()
    // Offset: 0xF001B0
    // Implemented from: System.ComponentModel.PropertyDescriptor
    // Base method: System.Type PropertyDescriptor::get_ComponentType()
    ::System::Type* get_ComponentType();
    // public override System.Boolean get_IsReadOnly()
    // Offset: 0xF001D4
    // Implemented from: System.ComponentModel.PropertyDescriptor
    // Base method: System.Boolean PropertyDescriptor::get_IsReadOnly()
    bool get_IsReadOnly();
    // public override System.Type get_PropertyType()
    // Offset: 0xF002D8
    // Implemented from: System.ComponentModel.PropertyDescriptor
    // Base method: System.Type PropertyDescriptor::get_PropertyType()
    ::System::Type* get_PropertyType();
    // public override System.String get_DisplayName()
    // Offset: 0xF002FC
    // Implemented from: System.ComponentModel.MemberDescriptor
    // Base method: System.String MemberDescriptor::get_DisplayName()
    ::StringW get_DisplayName();
    // public override System.Object GetValue(System.Object comp)
    // Offset: 0xF00574
    // Implemented from: System.ComponentModel.PropertyDescriptor
    // Base method: System.Object PropertyDescriptor::GetValue(System.Object comp)
    ::Il2CppObject* GetValue(::Il2CppObject* comp);
    // public override System.Void SetValue(System.Object component, System.Object value)
    // Offset: 0xF0059C
    // Implemented from: System.ComponentModel.PropertyDescriptor
    // Base method: System.Void PropertyDescriptor::SetValue(System.Object component, System.Object value)
    void SetValue(::Il2CppObject* component, ::Il2CppObject* value);
    // public override System.Boolean ShouldSerializeValue(System.Object comp)
    // Offset: 0xF005C8
    // Implemented from: System.ComponentModel.PropertyDescriptor
    // Base method: System.Boolean PropertyDescriptor::ShouldSerializeValue(System.Object comp)
    bool ShouldSerializeValue(::Il2CppObject* comp);
  }; // System.ComponentModel.ExtendedPropertyDescriptor
  #pragma pack(pop)
  static check_size<sizeof(ExtendedPropertyDescriptor), 144 + sizeof(::System::ComponentModel::IExtenderProvider*)> __System_ComponentModel_ExtendedPropertyDescriptorSizeCheck;
  static_assert(sizeof(ExtendedPropertyDescriptor) == 0x98);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::ExtendedPropertyDescriptor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::ExtendedPropertyDescriptor::get_ComponentType
// Il2CppName: get_ComponentType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::ComponentModel::ExtendedPropertyDescriptor::*)()>(&System::ComponentModel::ExtendedPropertyDescriptor::get_ComponentType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ExtendedPropertyDescriptor*), "get_ComponentType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ExtendedPropertyDescriptor::get_IsReadOnly
// Il2CppName: get_IsReadOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::ExtendedPropertyDescriptor::*)()>(&System::ComponentModel::ExtendedPropertyDescriptor::get_IsReadOnly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ExtendedPropertyDescriptor*), "get_IsReadOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ExtendedPropertyDescriptor::get_PropertyType
// Il2CppName: get_PropertyType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::ComponentModel::ExtendedPropertyDescriptor::*)()>(&System::ComponentModel::ExtendedPropertyDescriptor::get_PropertyType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ExtendedPropertyDescriptor*), "get_PropertyType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ExtendedPropertyDescriptor::get_DisplayName
// Il2CppName: get_DisplayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::ExtendedPropertyDescriptor::*)()>(&System::ComponentModel::ExtendedPropertyDescriptor::get_DisplayName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ExtendedPropertyDescriptor*), "get_DisplayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ExtendedPropertyDescriptor::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::ExtendedPropertyDescriptor::*)(::Il2CppObject*)>(&System::ComponentModel::ExtendedPropertyDescriptor::GetValue)> {
  static const MethodInfo* get() {
    static auto* comp = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ExtendedPropertyDescriptor*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{comp});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ExtendedPropertyDescriptor::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::ExtendedPropertyDescriptor::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::ComponentModel::ExtendedPropertyDescriptor::SetValue)> {
  static const MethodInfo* get() {
    static auto* component = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ExtendedPropertyDescriptor*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{component, value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ExtendedPropertyDescriptor::ShouldSerializeValue
// Il2CppName: ShouldSerializeValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::ExtendedPropertyDescriptor::*)(::Il2CppObject*)>(&System::ComponentModel::ExtendedPropertyDescriptor::ShouldSerializeValue)> {
  static const MethodInfo* get() {
    static auto* comp = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ExtendedPropertyDescriptor*), "ShouldSerializeValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{comp});
  }
};
