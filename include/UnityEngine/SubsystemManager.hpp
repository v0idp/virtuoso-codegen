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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: IntegratedSubsystem
  class IntegratedSubsystem;
  // Forward declaring type: Subsystem
  class Subsystem;
  // Forward declaring type: ISubsystemDescriptor
  class ISubsystemDescriptor;
  // Forward declaring type: ISubsystem
  class ISubsystem;
}
// Forward declaring namespace: UnityEngine::SubsystemsImplementation
namespace UnityEngine::SubsystemsImplementation {
  // Forward declaring type: SubsystemWithProvider
  class SubsystemWithProvider;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SubsystemManager
  class SubsystemManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::SubsystemManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SubsystemManager*, "UnityEngine", "SubsystemManager");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.SubsystemManager
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 6E0380
  class SubsystemManager : public ::Il2CppObject {
    public:
    // [DebuggerBrowsableAttribute] Offset: 0x6E042C
    // Get static field: static private System.Action beforeReloadSubsystems
    static ::System::Action* _get_beforeReloadSubsystems();
    // Set static field: static private System.Action beforeReloadSubsystems
    static void _set_beforeReloadSubsystems(::System::Action* value);
    // [DebuggerBrowsableAttribute] Offset: 0x6E0468
    // Get static field: static private System.Action afterReloadSubsystems
    static ::System::Action* _get_afterReloadSubsystems();
    // Set static field: static private System.Action afterReloadSubsystems
    static void _set_afterReloadSubsystems(::System::Action* value);
    // Get static field: static private System.Collections.Generic.List`1<UnityEngine.IntegratedSubsystem> s_IntegratedSubsystems
    static ::System::Collections::Generic::List_1<::UnityEngine::IntegratedSubsystem*>* _get_s_IntegratedSubsystems();
    // Set static field: static private System.Collections.Generic.List`1<UnityEngine.IntegratedSubsystem> s_IntegratedSubsystems
    static void _set_s_IntegratedSubsystems(::System::Collections::Generic::List_1<::UnityEngine::IntegratedSubsystem*>* value);
    // Get static field: static private System.Collections.Generic.List`1<UnityEngine.SubsystemsImplementation.SubsystemWithProvider> s_StandaloneSubsystems
    static ::System::Collections::Generic::List_1<::UnityEngine::SubsystemsImplementation::SubsystemWithProvider*>* _get_s_StandaloneSubsystems();
    // Set static field: static private System.Collections.Generic.List`1<UnityEngine.SubsystemsImplementation.SubsystemWithProvider> s_StandaloneSubsystems
    static void _set_s_StandaloneSubsystems(::System::Collections::Generic::List_1<::UnityEngine::SubsystemsImplementation::SubsystemWithProvider*>* value);
    // Get static field: static private System.Collections.Generic.List`1<UnityEngine.Subsystem> s_DeprecatedSubsystems
    static ::System::Collections::Generic::List_1<::UnityEngine::Subsystem*>* _get_s_DeprecatedSubsystems();
    // Set static field: static private System.Collections.Generic.List`1<UnityEngine.Subsystem> s_DeprecatedSubsystems
    static void _set_s_DeprecatedSubsystems(::System::Collections::Generic::List_1<::UnityEngine::Subsystem*>* value);
    // [DebuggerBrowsableAttribute] Offset: 0x6E04A4
    // Get static field: static private System.Action reloadSubsytemsStarted
    static ::System::Action* _get_reloadSubsytemsStarted();
    // Set static field: static private System.Action reloadSubsytemsStarted
    static void _set_reloadSubsytemsStarted(::System::Action* value);
    // [DebuggerBrowsableAttribute] Offset: 0x6E04E0
    // Get static field: static private System.Action reloadSubsytemsCompleted
    static ::System::Action* _get_reloadSubsytemsCompleted();
    // Set static field: static private System.Action reloadSubsytemsCompleted
    static void _set_reloadSubsytemsCompleted(::System::Action* value);
    // static private System.Void .cctor()
    // Offset: 0x1904524
    static void _cctor();
    // static private System.Void ReloadSubsystemsStarted()
    // Offset: 0x1904044
    static void ReloadSubsystemsStarted();
    // static private System.Void ReloadSubsystemsCompleted()
    // Offset: 0x1904140
    static void ReloadSubsystemsCompleted();
    // static private System.Void InitializeIntegratedSubsystem(System.IntPtr ptr, UnityEngine.IntegratedSubsystem subsystem)
    // Offset: 0x190423C
    static void InitializeIntegratedSubsystem(::System::IntPtr ptr, ::UnityEngine::IntegratedSubsystem* subsystem);
    // static private System.Void ClearSubsystems()
    // Offset: 0x1904308
    static void ClearSubsystems();
    // static private System.Void StaticConstructScriptingClassMap()
    // Offset: 0x19044F0
    static void StaticConstructScriptingClassMap();
    // static public System.Void GetSubsystemDescriptors(System.Collections.Generic.List`1<T> descriptors)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void GetSubsystemDescriptors(::System::Collections::Generic::List_1<T>* descriptors) {
      static_assert(std::is_convertible_v<std::remove_pointer_t<T>, ::UnityEngine::ISubsystemDescriptor>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::SubsystemManager::GetSubsystemDescriptors");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine", "SubsystemManager", "GetSubsystemDescriptors", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(descriptors)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, descriptors);
    }
    // static public System.Void GetSubsystems(System.Collections.Generic.List`1<T> subsystems)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void GetSubsystems(::System::Collections::Generic::List_1<T>* subsystems) {
      static_assert(std::is_convertible_v<std::remove_pointer_t<T>, ::UnityEngine::ISubsystem>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::SubsystemManager::GetSubsystems");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine", "SubsystemManager", "GetSubsystems", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(subsystems)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, subsystems);
    }
    // static private System.Void AddSubsystemSubset(System.Collections.Generic.List`1<TBaseTypeInList> copyFrom, System.Collections.Generic.List`1<TQueryType> copyTo)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TBaseTypeInList, class TQueryType>
    static void AddSubsystemSubset(::System::Collections::Generic::List_1<TBaseTypeInList>* copyFrom, ::System::Collections::Generic::List_1<TQueryType>* copyTo) {
      static_assert(std::is_convertible_v<std::remove_pointer_t<TBaseTypeInList>, ::UnityEngine::ISubsystem>);
      static_assert(std::is_convertible_v<std::remove_pointer_t<TQueryType>, ::UnityEngine::ISubsystem>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::SubsystemManager::AddSubsystemSubset");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine", "SubsystemManager", "AddSubsystemSubset", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TBaseTypeInList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TQueryType>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(copyFrom), ::il2cpp_utils::ExtractType(copyTo)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TBaseTypeInList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TQueryType>::get()})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, copyFrom, copyTo);
    }
    // static UnityEngine.IntegratedSubsystem GetIntegratedSubsystemByPtr(System.IntPtr ptr)
    // Offset: 0x1904658
    static ::UnityEngine::IntegratedSubsystem* GetIntegratedSubsystemByPtr(::System::IntPtr ptr);
    // static System.Void RemoveIntegratedSubsystemByPtr(System.IntPtr ptr)
    // Offset: 0x19036F0
    static void RemoveIntegratedSubsystemByPtr(::System::IntPtr ptr);
    // static System.Boolean RemoveStandaloneSubsystem(UnityEngine.SubsystemsImplementation.SubsystemWithProvider subsystem)
    // Offset: 0x19047D4
    static bool RemoveStandaloneSubsystem(::UnityEngine::SubsystemsImplementation::SubsystemWithProvider* subsystem);
    // static public System.Void GetInstances(System.Collections.Generic.List`1<T> subsystems)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void GetInstances(::System::Collections::Generic::List_1<T>* subsystems) {
      static_assert(std::is_convertible_v<std::remove_pointer_t<T>, ::UnityEngine::ISubsystem>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::SubsystemManager::GetInstances");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine", "SubsystemManager", "GetInstances", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(subsystems)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, subsystems);
    }
    // static System.Boolean RemoveDeprecatedSubsystem(UnityEngine.Subsystem subsystem)
    // Offset: 0x1903BB0
    static bool RemoveDeprecatedSubsystem(::UnityEngine::Subsystem* subsystem);
  }; // UnityEngine.SubsystemManager
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::SubsystemManager::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::SubsystemManager::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SubsystemManager*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SubsystemManager::ReloadSubsystemsStarted
// Il2CppName: ReloadSubsystemsStarted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::SubsystemManager::ReloadSubsystemsStarted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SubsystemManager*), "ReloadSubsystemsStarted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SubsystemManager::ReloadSubsystemsCompleted
// Il2CppName: ReloadSubsystemsCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::SubsystemManager::ReloadSubsystemsCompleted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SubsystemManager*), "ReloadSubsystemsCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SubsystemManager::InitializeIntegratedSubsystem
// Il2CppName: InitializeIntegratedSubsystem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::IntegratedSubsystem*)>(&UnityEngine::SubsystemManager::InitializeIntegratedSubsystem)> {
  static const MethodInfo* get() {
    static auto* ptr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* subsystem = &::il2cpp_utils::GetClassFromName("UnityEngine", "IntegratedSubsystem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SubsystemManager*), "InitializeIntegratedSubsystem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ptr, subsystem});
  }
};
// Writing MetadataGetter for method: UnityEngine::SubsystemManager::ClearSubsystems
// Il2CppName: ClearSubsystems
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::SubsystemManager::ClearSubsystems)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SubsystemManager*), "ClearSubsystems", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SubsystemManager::StaticConstructScriptingClassMap
// Il2CppName: StaticConstructScriptingClassMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::SubsystemManager::StaticConstructScriptingClassMap)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SubsystemManager*), "StaticConstructScriptingClassMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SubsystemManager::GetSubsystemDescriptors
// Il2CppName: GetSubsystemDescriptors
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::SubsystemManager::GetSubsystems
// Il2CppName: GetSubsystems
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::SubsystemManager::AddSubsystemSubset
// Il2CppName: AddSubsystemSubset
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::SubsystemManager::GetIntegratedSubsystemByPtr
// Il2CppName: GetIntegratedSubsystemByPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::IntegratedSubsystem* (*)(::System::IntPtr)>(&UnityEngine::SubsystemManager::GetIntegratedSubsystemByPtr)> {
  static const MethodInfo* get() {
    static auto* ptr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SubsystemManager*), "GetIntegratedSubsystemByPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ptr});
  }
};
// Writing MetadataGetter for method: UnityEngine::SubsystemManager::RemoveIntegratedSubsystemByPtr
// Il2CppName: RemoveIntegratedSubsystemByPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&UnityEngine::SubsystemManager::RemoveIntegratedSubsystemByPtr)> {
  static const MethodInfo* get() {
    static auto* ptr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SubsystemManager*), "RemoveIntegratedSubsystemByPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ptr});
  }
};
// Writing MetadataGetter for method: UnityEngine::SubsystemManager::RemoveStandaloneSubsystem
// Il2CppName: RemoveStandaloneSubsystem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::SubsystemsImplementation::SubsystemWithProvider*)>(&UnityEngine::SubsystemManager::RemoveStandaloneSubsystem)> {
  static const MethodInfo* get() {
    static auto* subsystem = &::il2cpp_utils::GetClassFromName("UnityEngine.SubsystemsImplementation", "SubsystemWithProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SubsystemManager*), "RemoveStandaloneSubsystem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{subsystem});
  }
};
// Writing MetadataGetter for method: UnityEngine::SubsystemManager::GetInstances
// Il2CppName: GetInstances
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::SubsystemManager::RemoveDeprecatedSubsystem
// Il2CppName: RemoveDeprecatedSubsystem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Subsystem*)>(&UnityEngine::SubsystemManager::RemoveDeprecatedSubsystem)> {
  static const MethodInfo* get() {
    static auto* subsystem = &::il2cpp_utils::GetClassFromName("UnityEngine", "Subsystem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SubsystemManager*), "RemoveDeprecatedSubsystem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{subsystem});
  }
};
