// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.TypeDescriptor
#include "System/ComponentModel/TypeDescriptor.hpp"
// Including type: System.ComponentModel.TypeDescriptionProvider
#include "System/ComponentModel/TypeDescriptionProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ICustomTypeDescriptor
  class ICustomTypeDescriptor;
  // Forward declaring type: IExtenderProvider
  class IExtenderProvider;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IServiceProvider
  class IServiceProvider;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::TypeDescriptor::TypeDescriptionNode);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::TypeDescriptor::TypeDescriptionNode*, "System.ComponentModel", "TypeDescriptor/TypeDescriptionNode");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.TypeDescriptor/System.ComponentModel.TypeDescriptionNode
  // [TokenAttribute] Offset: FFFFFFFF
  class TypeDescriptor::TypeDescriptionNode : public ::System::ComponentModel::TypeDescriptionProvider {
    public:
    // Nested type: ::System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultExtendedTypeDescriptor
    struct DefaultExtendedTypeDescriptor;
    // Nested type: ::System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor
    struct DefaultTypeDescriptor;
    public:
    // System.ComponentModel.TypeDescriptor/System.ComponentModel.TypeDescriptionNode Next
    // Size: 0x8
    // Offset: 0x20
    ::System::ComponentModel::TypeDescriptor::TypeDescriptionNode* Next;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::TypeDescriptor::TypeDescriptionNode*) == 0x8);
    // System.ComponentModel.TypeDescriptionProvider Provider
    // Size: 0x8
    // Offset: 0x28
    ::System::ComponentModel::TypeDescriptionProvider* Provider;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::TypeDescriptionProvider*) == 0x8);
    public:
    // Get instance field reference: System.ComponentModel.TypeDescriptor/System.ComponentModel.TypeDescriptionNode Next
    [[deprecated]] ::System::ComponentModel::TypeDescriptor::TypeDescriptionNode*& dyn_Next();
    // Get instance field reference: System.ComponentModel.TypeDescriptionProvider Provider
    [[deprecated]] ::System::ComponentModel::TypeDescriptionProvider*& dyn_Provider();
    // System.Void .ctor(System.ComponentModel.TypeDescriptionProvider provider)
    // Offset: 0xA02FB0
    // Implemented from: System.ComponentModel.TypeDescriptionProvider
    // Base method: System.Void TypeDescriptionProvider::.ctor(System.ComponentModel.TypeDescriptionProvider provider)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeDescriptor::TypeDescriptionNode* New_ctor(::System::ComponentModel::TypeDescriptionProvider* provider) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::TypeDescriptor::TypeDescriptionNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeDescriptor::TypeDescriptionNode*, creationType>(provider)));
    }
    // public override System.Object CreateInstance(System.IServiceProvider provider, System.Type objectType, System.Type[] argTypes, System.Object[] args)
    // Offset: 0xA02FDC
    // Implemented from: System.ComponentModel.TypeDescriptionProvider
    // Base method: System.Object TypeDescriptionProvider::CreateInstance(System.IServiceProvider provider, System.Type objectType, System.Type[] argTypes, System.Object[] args)
    ::Il2CppObject* CreateInstance(::System::IServiceProvider* provider, ::System::Type* objectType, ::ArrayW<::System::Type*> argTypes, ::ArrayW<::Il2CppObject*> args);
    // public override System.Collections.IDictionary GetCache(System.Object instance)
    // Offset: 0xA03160
    // Implemented from: System.ComponentModel.TypeDescriptionProvider
    // Base method: System.Collections.IDictionary TypeDescriptionProvider::GetCache(System.Object instance)
    ::System::Collections::IDictionary* GetCache(::Il2CppObject* instance);
    // public override System.ComponentModel.ICustomTypeDescriptor GetExtendedTypeDescriptor(System.Object instance)
    // Offset: 0xA031D8
    // Implemented from: System.ComponentModel.TypeDescriptionProvider
    // Base method: System.ComponentModel.ICustomTypeDescriptor TypeDescriptionProvider::GetExtendedTypeDescriptor(System.Object instance)
    ::System::ComponentModel::ICustomTypeDescriptor* GetExtendedTypeDescriptor(::Il2CppObject* instance);
    // protected internal override System.ComponentModel.IExtenderProvider[] GetExtenderProviders(System.Object instance)
    // Offset: 0xA032A8
    // Implemented from: System.ComponentModel.TypeDescriptionProvider
    // Base method: System.ComponentModel.IExtenderProvider[] TypeDescriptionProvider::GetExtenderProviders(System.Object instance)
    ::ArrayW<::System::ComponentModel::IExtenderProvider*> GetExtenderProviders(::Il2CppObject* instance);
    // public override System.Type GetReflectionType(System.Type objectType, System.Object instance)
    // Offset: 0xA03320
    // Implemented from: System.ComponentModel.TypeDescriptionProvider
    // Base method: System.Type TypeDescriptionProvider::GetReflectionType(System.Type objectType, System.Object instance)
    ::System::Type* GetReflectionType(::System::Type* objectType, ::Il2CppObject* instance);
    // public override System.ComponentModel.ICustomTypeDescriptor GetTypeDescriptor(System.Type objectType, System.Object instance)
    // Offset: 0xA03404
    // Implemented from: System.ComponentModel.TypeDescriptionProvider
    // Base method: System.ComponentModel.ICustomTypeDescriptor TypeDescriptionProvider::GetTypeDescriptor(System.Type objectType, System.Object instance)
    ::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type* objectType, ::Il2CppObject* instance);
  }; // System.ComponentModel.TypeDescriptor/System.ComponentModel.TypeDescriptionNode
  #pragma pack(pop)
  static check_size<sizeof(TypeDescriptor::TypeDescriptionNode), 40 + sizeof(::System::ComponentModel::TypeDescriptionProvider*)> __System_ComponentModel_TypeDescriptor_TypeDescriptionNodeSizeCheck;
  static_assert(sizeof(TypeDescriptor::TypeDescriptionNode) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::TypeDescriptionNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::TypeDescriptionNode::CreateInstance
// Il2CppName: CreateInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::TypeDescriptor::TypeDescriptionNode::*)(::System::IServiceProvider*, ::System::Type*, ::ArrayW<::System::Type*>, ::ArrayW<::Il2CppObject*>)>(&System::ComponentModel::TypeDescriptor::TypeDescriptionNode::CreateInstance)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IServiceProvider")->byval_arg;
    static auto* objectType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* argTypes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor::TypeDescriptionNode*), "CreateInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider, objectType, argTypes, args});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::TypeDescriptionNode::GetCache
// Il2CppName: GetCache
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionary* (System::ComponentModel::TypeDescriptor::TypeDescriptionNode::*)(::Il2CppObject*)>(&System::ComponentModel::TypeDescriptor::TypeDescriptionNode::GetCache)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor::TypeDescriptionNode*), "GetCache", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::TypeDescriptionNode::GetExtendedTypeDescriptor
// Il2CppName: GetExtendedTypeDescriptor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (System::ComponentModel::TypeDescriptor::TypeDescriptionNode::*)(::Il2CppObject*)>(&System::ComponentModel::TypeDescriptor::TypeDescriptionNode::GetExtendedTypeDescriptor)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor::TypeDescriptionNode*), "GetExtendedTypeDescriptor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::TypeDescriptionNode::GetExtenderProviders
// Il2CppName: GetExtenderProviders
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::ComponentModel::IExtenderProvider*> (System::ComponentModel::TypeDescriptor::TypeDescriptionNode::*)(::Il2CppObject*)>(&System::ComponentModel::TypeDescriptor::TypeDescriptionNode::GetExtenderProviders)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor::TypeDescriptionNode*), "GetExtenderProviders", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::TypeDescriptionNode::GetReflectionType
// Il2CppName: GetReflectionType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::ComponentModel::TypeDescriptor::TypeDescriptionNode::*)(::System::Type*, ::Il2CppObject*)>(&System::ComponentModel::TypeDescriptor::TypeDescriptionNode::GetReflectionType)> {
  static const MethodInfo* get() {
    static auto* objectType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor::TypeDescriptionNode*), "GetReflectionType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectType, instance});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::TypeDescriptionNode::GetTypeDescriptor
// Il2CppName: GetTypeDescriptor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (System::ComponentModel::TypeDescriptor::TypeDescriptionNode::*)(::System::Type*, ::Il2CppObject*)>(&System::ComponentModel::TypeDescriptor::TypeDescriptionNode::GetTypeDescriptor)> {
  static const MethodInfo* get() {
    static auto* objectType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor::TypeDescriptionNode*), "GetTypeDescriptor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectType, instance});
  }
};
