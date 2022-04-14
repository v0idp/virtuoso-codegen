// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: BaseRaycaster
  class BaseRaycaster;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: RaycasterManager
  class RaycasterManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::EventSystems::RaycasterManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::RaycasterManager*, "UnityEngine.EventSystems", "RaycasterManager");
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.RaycasterManager
  // [TokenAttribute] Offset: FFFFFFFF
  class RaycasterManager : public ::Il2CppObject {
    public:
    // Get static field: static private readonly System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster> s_Raycasters
    static ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::BaseRaycaster*>* _get_s_Raycasters();
    // Set static field: static private readonly System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster> s_Raycasters
    static void _set_s_Raycasters(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::BaseRaycaster*>* value);
    // static private System.Void .cctor()
    // Offset: 0x142B194
    static void _cctor();
    // static public System.Void AddRaycaster(UnityEngine.EventSystems.BaseRaycaster baseRaycaster)
    // Offset: 0x142AF68
    static void AddRaycaster(::UnityEngine::EventSystems::BaseRaycaster* baseRaycaster);
    // static public System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster> GetRaycasters()
    // Offset: 0x142B04C
    static ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::BaseRaycaster*>* GetRaycasters();
    // static public System.Void RemoveRaycasters(UnityEngine.EventSystems.BaseRaycaster baseRaycaster)
    // Offset: 0x142B0B0
    static void RemoveRaycasters(::UnityEngine::EventSystems::BaseRaycaster* baseRaycaster);
  }; // UnityEngine.EventSystems.RaycasterManager
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::EventSystems::RaycasterManager::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::EventSystems::RaycasterManager::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::RaycasterManager*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::RaycasterManager::AddRaycaster
// Il2CppName: AddRaycaster
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::EventSystems::BaseRaycaster*)>(&UnityEngine::EventSystems::RaycasterManager::AddRaycaster)> {
  static const MethodInfo* get() {
    static auto* baseRaycaster = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "BaseRaycaster")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::RaycasterManager*), "AddRaycaster", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{baseRaycaster});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::RaycasterManager::GetRaycasters
// Il2CppName: GetRaycasters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::BaseRaycaster*>* (*)()>(&UnityEngine::EventSystems::RaycasterManager::GetRaycasters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::RaycasterManager*), "GetRaycasters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::RaycasterManager::RemoveRaycasters
// Il2CppName: RemoveRaycasters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::EventSystems::BaseRaycaster*)>(&UnityEngine::EventSystems::RaycasterManager::RemoveRaycasters)> {
  static const MethodInfo* get() {
    static auto* baseRaycaster = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "BaseRaycaster")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::RaycasterManager*), "RemoveRaycasters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{baseRaycaster});
  }
};
