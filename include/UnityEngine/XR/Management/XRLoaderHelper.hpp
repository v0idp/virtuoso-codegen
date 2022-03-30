// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Management.XRLoader
#include "UnityEngine/XR/Management/XRLoader.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ISubsystem
  class ISubsystem;
  // Forward declaring type: ISubsystemDescriptor
  class ISubsystemDescriptor;
  // Forward declaring type: IntegratedSubsystemDescriptor
  class IntegratedSubsystemDescriptor;
  // Forward declaring type: IntegratedSubsystem
  class IntegratedSubsystem;
  // Forward declaring type: SubsystemDescriptor
  class SubsystemDescriptor;
  // Forward declaring type: Subsystem
  class Subsystem;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Management
namespace UnityEngine::XR::Management {
  // Forward declaring type: XRLoaderHelper
  class XRLoaderHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Management::XRLoaderHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Management::XRLoaderHelper*, "UnityEngine.XR.Management", "XRLoaderHelper");
// Type namespace: UnityEngine.XR.Management
namespace UnityEngine::XR::Management {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Management.XRLoaderHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class XRLoaderHelper : public ::UnityEngine::XR::Management::XRLoader {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // protected System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem> m_SubsystemInstanceMap
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ISubsystem*>* m_SubsystemInstanceMap;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ISubsystem*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: protected System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem> m_SubsystemInstanceMap
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ISubsystem*>*& dyn_m_SubsystemInstanceMap();
    // protected System.Void StartSubsystem()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    void StartSubsystem() {
      static_assert(std::is_convertible_v<std::remove_pointer_t<T>, ::UnityEngine::ISubsystem>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Management::XRLoaderHelper::StartSubsystem");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "StartSubsystem", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method);
    }
    // protected System.Void StopSubsystem()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    void StopSubsystem() {
      static_assert(std::is_convertible_v<std::remove_pointer_t<T>, ::UnityEngine::ISubsystem>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Management::XRLoaderHelper::StopSubsystem");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "StopSubsystem", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method);
    }
    // protected System.Void DestroySubsystem()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    void DestroySubsystem() {
      static_assert(std::is_convertible_v<std::remove_pointer_t<T>, ::UnityEngine::ISubsystem>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Management::XRLoaderHelper::DestroySubsystem");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "DestroySubsystem", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method);
    }
    // protected System.Void CreateSubsystem(System.Collections.Generic.List`1<TDescriptor> descriptors, System.String id)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TDescriptor, class TSubsystem>
    void CreateSubsystem(::System::Collections::Generic::List_1<TDescriptor>* descriptors, ::StringW id) {
      static_assert(std::is_convertible_v<std::remove_pointer_t<TDescriptor>, ::UnityEngine::ISubsystemDescriptor>);
      static_assert(std::is_convertible_v<std::remove_pointer_t<TSubsystem>, ::UnityEngine::ISubsystem>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Management::XRLoaderHelper::CreateSubsystem");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreateSubsystem", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDescriptor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubsystem>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(descriptors), ::il2cpp_utils::ExtractType(id)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDescriptor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubsystem>::get()})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, descriptors, id);
    }
    // protected System.Void CreateIntegratedSubsystem(System.Collections.Generic.List`1<TDescriptor> descriptors, System.String id)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TDescriptor, class TSubsystem>
    void CreateIntegratedSubsystem(::System::Collections::Generic::List_1<TDescriptor>* descriptors, ::StringW id) {
      static_assert(std::is_convertible_v<TDescriptor, ::UnityEngine::IntegratedSubsystemDescriptor*>);
      static_assert(std::is_convertible_v<TSubsystem, ::UnityEngine::IntegratedSubsystem*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Management::XRLoaderHelper::CreateIntegratedSubsystem");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreateIntegratedSubsystem", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDescriptor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubsystem>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(descriptors), ::il2cpp_utils::ExtractType(id)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDescriptor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubsystem>::get()})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, descriptors, id);
    }
    // protected System.Void CreateStandaloneSubsystem(System.Collections.Generic.List`1<TDescriptor> descriptors, System.String id)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TDescriptor, class TSubsystem>
    void CreateStandaloneSubsystem(::System::Collections::Generic::List_1<TDescriptor>* descriptors, ::StringW id) {
      static_assert(std::is_convertible_v<TDescriptor, ::UnityEngine::SubsystemDescriptor*>);
      static_assert(std::is_convertible_v<TSubsystem, ::UnityEngine::Subsystem*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Management::XRLoaderHelper::CreateStandaloneSubsystem");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreateStandaloneSubsystem", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDescriptor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubsystem>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(descriptors), ::il2cpp_utils::ExtractType(id)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDescriptor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubsystem>::get()})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, descriptors, id);
    }
    // protected System.Void .ctor()
    // Offset: 0x12F3BD0
    // Implemented from: UnityEngine.XR.Management.XRLoader
    // Base method: System.Void XRLoader::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XRLoaderHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Management::XRLoaderHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XRLoaderHelper*, creationType>()));
    }
    // public override T GetLoadedSubsystem()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.XR.Management.XRLoader
    // Base method: T XRLoader::GetLoadedSubsystem()
    template<class T>
    T GetLoadedSubsystem() {
      static_assert(std::is_convertible_v<std::remove_pointer_t<T>, ::UnityEngine::ISubsystem>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Management::XRLoaderHelper::GetLoadedSubsystem");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetLoadedSubsystem", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___generic__method);
    }
    // public override System.Boolean Deinitialize()
    // Offset: 0x12F3B74
    // Implemented from: UnityEngine.XR.Management.XRLoader
    // Base method: System.Boolean XRLoader::Deinitialize()
    bool Deinitialize();
  }; // UnityEngine.XR.Management.XRLoaderHelper
  #pragma pack(pop)
  static check_size<sizeof(XRLoaderHelper), 24 + sizeof(::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ISubsystem*>*)> __UnityEngine_XR_Management_XRLoaderHelperSizeCheck;
  static_assert(sizeof(XRLoaderHelper) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Management::XRLoaderHelper::StartSubsystem
// Il2CppName: StartSubsystem
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::XR::Management::XRLoaderHelper::StopSubsystem
// Il2CppName: StopSubsystem
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::XR::Management::XRLoaderHelper::DestroySubsystem
// Il2CppName: DestroySubsystem
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::XR::Management::XRLoaderHelper::CreateSubsystem
// Il2CppName: CreateSubsystem
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::XR::Management::XRLoaderHelper::CreateIntegratedSubsystem
// Il2CppName: CreateIntegratedSubsystem
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::XR::Management::XRLoaderHelper::CreateStandaloneSubsystem
// Il2CppName: CreateStandaloneSubsystem
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::XR::Management::XRLoaderHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::XR::Management::XRLoaderHelper::GetLoadedSubsystem
// Il2CppName: GetLoadedSubsystem
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::XR::Management::XRLoaderHelper::Deinitialize
// Il2CppName: Deinitialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Management::XRLoaderHelper::*)()>(&UnityEngine::XR::Management::XRLoaderHelper::Deinitialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Management::XRLoaderHelper*), "Deinitialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
