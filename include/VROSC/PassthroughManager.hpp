// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRManager
  class OVRManager;
  // Forward declaring type: OVRPassthroughLayer
  class OVRPassthroughLayer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: PassthroughManager
  class PassthroughManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::PassthroughManager);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PassthroughManager*, "VROSC", "PassthroughManager");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.PassthroughManager
  // [TokenAttribute] Offset: FFFFFFFF
  class PassthroughManager : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private OVRManager _ovrManager
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::OVRManager* ovrManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRManager*) == 0x8);
    // private OVRPassthroughLayer _passthroughLayer
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::OVRPassthroughLayer* passthroughLayer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPassthroughLayer*) == 0x8);
    // private UnityEngine.Camera _camera
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Camera* camera;
    // Field size check
    static_assert(sizeof(::UnityEngine::Camera*) == 0x8);
    // private System.Boolean <IsToggled>k__BackingField
    // Size: 0x1
    // Offset: 0x30
    bool IsToggled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private OVRManager _ovrManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRManager*& dyn__ovrManager();
    // Get instance field reference: private OVRPassthroughLayer _passthroughLayer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRPassthroughLayer*& dyn__passthroughLayer();
    // Get instance field reference: private UnityEngine.Camera _camera
    [[deprecated("Use field access instead!")]] ::UnityEngine::Camera*& dyn__camera();
    // Get instance field reference: private System.Boolean <IsToggled>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsToggled$k__BackingField();
    // public System.Boolean get_IsToggled()
    // Offset: 0xADD21C
    bool get_IsToggled();
    // private System.Void set_IsToggled(System.Boolean value)
    // Offset: 0xADD224
    void set_IsToggled(bool value);
    // public System.Void .ctor()
    // Offset: 0xADD250
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PassthroughManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::PassthroughManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PassthroughManager*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0xADD230
    void Awake();
    // public System.Void TogglePassthrough(System.Boolean active)
    // Offset: 0xADD0CC
    void TogglePassthrough(bool active);
  }; // VROSC.PassthroughManager
  #pragma pack(pop)
  static check_size<sizeof(PassthroughManager), 48 + sizeof(bool)> __VROSC_PassthroughManagerSizeCheck;
  static_assert(sizeof(PassthroughManager) == 0x31);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::PassthroughManager::get_IsToggled
// Il2CppName: get_IsToggled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::PassthroughManager::*)()>(&VROSC::PassthroughManager::get_IsToggled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::PassthroughManager*), "get_IsToggled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::PassthroughManager::set_IsToggled
// Il2CppName: set_IsToggled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PassthroughManager::*)(bool)>(&VROSC::PassthroughManager::set_IsToggled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::PassthroughManager*), "set_IsToggled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::PassthroughManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::PassthroughManager::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PassthroughManager::*)()>(&VROSC::PassthroughManager::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::PassthroughManager*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::PassthroughManager::TogglePassthrough
// Il2CppName: TogglePassthrough
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PassthroughManager::*)(bool)>(&VROSC::PassthroughManager::TogglePassthrough)> {
  static const MethodInfo* get() {
    static auto* active = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::PassthroughManager*), "TogglePassthrough", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{active});
  }
};
