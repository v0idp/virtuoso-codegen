// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.TypeDescriptionProvider
#include "System/ComponentModel/TypeDescriptionProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: IServiceProvider
  class IServiceProvider;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ICustomTypeDescriptor
  class ICustomTypeDescriptor;
  // Forward declaring type: IExtenderProvider
  class IExtenderProvider;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: DelegatingTypeDescriptionProvider
  class DelegatingTypeDescriptionProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::DelegatingTypeDescriptionProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DelegatingTypeDescriptionProvider*, "System.ComponentModel", "DelegatingTypeDescriptionProvider");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.DelegatingTypeDescriptionProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class DelegatingTypeDescriptionProvider : public ::System::ComponentModel::TypeDescriptionProvider {
    public:
    public:
    // private System.Type _type
    // Size: 0x8
    // Offset: 0x20
    ::System::Type* type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Type*
    constexpr operator ::System::Type*() const noexcept {
      return type;
    }
    // Get instance field reference: private System.Type _type
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn__type();
    // System.ComponentModel.TypeDescriptionProvider get_Provider()
    // Offset: 0x10EE46C
    ::System::ComponentModel::TypeDescriptionProvider* get_Provider();
    // System.Void .ctor(System.Type type)
    // Offset: 0x10EE440
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DelegatingTypeDescriptionProvider* New_ctor(::System::Type* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::DelegatingTypeDescriptionProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DelegatingTypeDescriptionProvider*, creationType>(type)));
    }
    // public override System.Object CreateInstance(System.IServiceProvider provider, System.Type objectType, System.Type[] argTypes, System.Object[] args)
    // Offset: 0x10EE4D4
    // Implemented from: System.ComponentModel.TypeDescriptionProvider
    // Base method: System.Object TypeDescriptionProvider::CreateInstance(System.IServiceProvider provider, System.Type objectType, System.Type[] argTypes, System.Object[] args)
    ::Il2CppObject* CreateInstance(::System::IServiceProvider* provider, ::System::Type* objectType, ::ArrayW<::System::Type*> argTypes, ::ArrayW<::Il2CppObject*> args);
    // public override System.Collections.IDictionary GetCache(System.Object instance)
    // Offset: 0x10EE528
    // Implemented from: System.ComponentModel.TypeDescriptionProvider
    // Base method: System.Collections.IDictionary TypeDescriptionProvider::GetCache(System.Object instance)
    ::System::Collections::IDictionary* GetCache(::Il2CppObject* instance);
    // public override System.ComponentModel.ICustomTypeDescriptor GetExtendedTypeDescriptor(System.Object instance)
    // Offset: 0x10EE55C
    // Implemented from: System.ComponentModel.TypeDescriptionProvider
    // Base method: System.ComponentModel.ICustomTypeDescriptor TypeDescriptionProvider::GetExtendedTypeDescriptor(System.Object instance)
    ::System::ComponentModel::ICustomTypeDescriptor* GetExtendedTypeDescriptor(::Il2CppObject* instance);
    // protected internal override System.ComponentModel.IExtenderProvider[] GetExtenderProviders(System.Object instance)
    // Offset: 0x10EE590
    // Implemented from: System.ComponentModel.TypeDescriptionProvider
    // Base method: System.ComponentModel.IExtenderProvider[] TypeDescriptionProvider::GetExtenderProviders(System.Object instance)
    ::ArrayW<::System::ComponentModel::IExtenderProvider*> GetExtenderProviders(::Il2CppObject* instance);
    // public override System.Type GetReflectionType(System.Type objectType, System.Object instance)
    // Offset: 0x10EE5C4
    // Implemented from: System.ComponentModel.TypeDescriptionProvider
    // Base method: System.Type TypeDescriptionProvider::GetReflectionType(System.Type objectType, System.Object instance)
    ::System::Type* GetReflectionType(::System::Type* objectType, ::Il2CppObject* instance);
    // public override System.ComponentModel.ICustomTypeDescriptor GetTypeDescriptor(System.Type objectType, System.Object instance)
    // Offset: 0x10EE600
    // Implemented from: System.ComponentModel.TypeDescriptionProvider
    // Base method: System.ComponentModel.ICustomTypeDescriptor TypeDescriptionProvider::GetTypeDescriptor(System.Type objectType, System.Object instance)
    ::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type* objectType, ::Il2CppObject* instance);
  }; // System.ComponentModel.DelegatingTypeDescriptionProvider
  #pragma pack(pop)
  static check_size<sizeof(DelegatingTypeDescriptionProvider), 32 + sizeof(::System::Type*)> __System_ComponentModel_DelegatingTypeDescriptionProviderSizeCheck;
  static_assert(sizeof(DelegatingTypeDescriptionProvider) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::DelegatingTypeDescriptionProvider::get_Provider
// Il2CppName: get_Provider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeDescriptionProvider* (System::ComponentModel::DelegatingTypeDescriptionProvider::*)()>(&System::ComponentModel::DelegatingTypeDescriptionProvider::get_Provider)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DelegatingTypeDescriptionProvider*), "get_Provider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DelegatingTypeDescriptionProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::DelegatingTypeDescriptionProvider::CreateInstance
// Il2CppName: CreateInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::DelegatingTypeDescriptionProvider::*)(::System::IServiceProvider*, ::System::Type*, ::ArrayW<::System::Type*>, ::ArrayW<::Il2CppObject*>)>(&System::ComponentModel::DelegatingTypeDescriptionProvider::CreateInstance)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IServiceProvider")->byval_arg;
    static auto* objectType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* argTypes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DelegatingTypeDescriptionProvider*), "CreateInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider, objectType, argTypes, args});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DelegatingTypeDescriptionProvider::GetCache
// Il2CppName: GetCache
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionary* (System::ComponentModel::DelegatingTypeDescriptionProvider::*)(::Il2CppObject*)>(&System::ComponentModel::DelegatingTypeDescriptionProvider::GetCache)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DelegatingTypeDescriptionProvider*), "GetCache", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DelegatingTypeDescriptionProvider::GetExtendedTypeDescriptor
// Il2CppName: GetExtendedTypeDescriptor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (System::ComponentModel::DelegatingTypeDescriptionProvider::*)(::Il2CppObject*)>(&System::ComponentModel::DelegatingTypeDescriptionProvider::GetExtendedTypeDescriptor)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DelegatingTypeDescriptionProvider*), "GetExtendedTypeDescriptor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DelegatingTypeDescriptionProvider::GetExtenderProviders
// Il2CppName: GetExtenderProviders
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::ComponentModel::IExtenderProvider*> (System::ComponentModel::DelegatingTypeDescriptionProvider::*)(::Il2CppObject*)>(&System::ComponentModel::DelegatingTypeDescriptionProvider::GetExtenderProviders)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DelegatingTypeDescriptionProvider*), "GetExtenderProviders", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DelegatingTypeDescriptionProvider::GetReflectionType
// Il2CppName: GetReflectionType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::ComponentModel::DelegatingTypeDescriptionProvider::*)(::System::Type*, ::Il2CppObject*)>(&System::ComponentModel::DelegatingTypeDescriptionProvider::GetReflectionType)> {
  static const MethodInfo* get() {
    static auto* objectType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DelegatingTypeDescriptionProvider*), "GetReflectionType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectType, instance});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DelegatingTypeDescriptionProvider::GetTypeDescriptor
// Il2CppName: GetTypeDescriptor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (System::ComponentModel::DelegatingTypeDescriptionProvider::*)(::System::Type*, ::Il2CppObject*)>(&System::ComponentModel::DelegatingTypeDescriptionProvider::GetTypeDescriptor)> {
  static const MethodInfo* get() {
    static auto* objectType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DelegatingTypeDescriptionProvider*), "GetTypeDescriptor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectType, instance});
  }
};
