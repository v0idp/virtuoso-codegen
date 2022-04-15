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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: Interactable
  class Interactable;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: InteractionDisabler
  class InteractionDisabler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::InteractionDisabler);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InteractionDisabler*, "VROSC", "InteractionDisabler");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.InteractionDisabler
  // [TokenAttribute] Offset: FFFFFFFF
  class InteractionDisabler : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private VROSC.Interactable[] _interactables
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::VROSC::Interactable*> interactables;
    // Field size check
    static_assert(sizeof(::ArrayW<::VROSC::Interactable*>) == 0x8);
    // private System.Boolean _getInteractablesOnAwake
    // Size: 0x1
    // Offset: 0x20
    bool getInteractablesOnAwake;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.Interactable[] _interactables
    [[deprecated("Use field access instead!")]] ::ArrayW<::VROSC::Interactable*>& dyn__interactables();
    // Get instance field reference: private System.Boolean _getInteractablesOnAwake
    [[deprecated("Use field access instead!")]] bool& dyn__getInteractablesOnAwake();
    // public System.Void .ctor()
    // Offset: 0x1949624
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InteractionDisabler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::InteractionDisabler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InteractionDisabler*, creationType>()));
    }
    // private System.Void Awake()
    // Offset: 0x1949498
    void Awake();
    // private System.Void GetInChildren()
    // Offset: 0x19494A8
    void GetInChildren();
    // public System.Void SetDisabled(System.Boolean disabled, System.Boolean disableVisually)
    // Offset: 0x1949500
    void SetDisabled(bool disabled, bool disableVisually);
  }; // VROSC.InteractionDisabler
  #pragma pack(pop)
  static check_size<sizeof(InteractionDisabler), 32 + sizeof(bool)> __VROSC_InteractionDisablerSizeCheck;
  static_assert(sizeof(InteractionDisabler) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::InteractionDisabler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::InteractionDisabler::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::InteractionDisabler::*)()>(&VROSC::InteractionDisabler::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InteractionDisabler*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InteractionDisabler::GetInChildren
// Il2CppName: GetInChildren
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::InteractionDisabler::*)()>(&VROSC::InteractionDisabler::GetInChildren)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::InteractionDisabler*), "GetInChildren", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::InteractionDisabler::SetDisabled
// Il2CppName: SetDisabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::InteractionDisabler::*)(bool, bool)>(&VROSC::InteractionDisabler::SetDisabled)> {
  static const MethodInfo* get() {
    static auto* disabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* disableVisually = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::InteractionDisabler*), "SetDisabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disabled, disableVisually});
  }
};
