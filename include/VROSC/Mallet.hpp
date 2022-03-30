// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: VROSC.TriggerButton
#include "VROSC/TriggerButton.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: MalletVisual
  class MalletVisual;
  // Forward declaring type: PredictiveHitter
  class PredictiveHitter;
  // Forward declaring type: MalletGrabbing
  class MalletGrabbing;
  // Forward declaring type: MalletAnimator
  class MalletAnimator;
  // Forward declaring type: InputDevice
  class InputDevice;
  // Forward declaring type: ClickData
  class ClickData;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: Mallet
  class Mallet;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::Mallet);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Mallet*, "VROSC", "Mallet");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x51
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.Mallet
  // [TokenAttribute] Offset: FFFFFFFF
  class Mallet : public ::UnityEngine::MonoBehaviour {
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
    // private UnityEngine.Transform _stick
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Transform* stick;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private VROSC.MalletVisual _malletVisual
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::MalletVisual* malletVisual;
    // Field size check
    static_assert(sizeof(::VROSC::MalletVisual*) == 0x8);
    // private VROSC.PredictiveHitter _predictiveHitter
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::PredictiveHitter* predictiveHitter;
    // Field size check
    static_assert(sizeof(::VROSC::PredictiveHitter*) == 0x8);
    // private VROSC.MalletGrabbing _grabbing
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::MalletGrabbing* grabbing;
    // Field size check
    static_assert(sizeof(::VROSC::MalletGrabbing*) == 0x8);
    // private VROSC.MalletAnimator _animator
    // Size: 0x8
    // Offset: 0x38
    ::VROSC::MalletAnimator* animator;
    // Field size check
    static_assert(sizeof(::VROSC::MalletAnimator*) == 0x8);
    // private VROSC.TriggerButton _holdingButton
    // Size: 0x14
    // Offset: 0x40
    ::VROSC::TriggerButton holdingButton;
    // Field size check
    static_assert(sizeof(::VROSC::TriggerButton) == 0x14);
    // private VROSC.InputDevice <InputDevice>k__BackingField
    // Size: 0x8
    // Offset: 0x48
    ::VROSC::InputDevice* InputDevice;
    // Field size check
    static_assert(sizeof(::VROSC::InputDevice*) == 0x8);
    // private System.Boolean <Active>k__BackingField
    // Size: 0x1
    // Offset: 0x50
    bool Active;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Transform _stick
    ::UnityEngine::Transform*& dyn__stick();
    // Get instance field reference: private VROSC.MalletVisual _malletVisual
    ::VROSC::MalletVisual*& dyn__malletVisual();
    // Get instance field reference: private VROSC.PredictiveHitter _predictiveHitter
    ::VROSC::PredictiveHitter*& dyn__predictiveHitter();
    // Get instance field reference: private VROSC.MalletGrabbing _grabbing
    ::VROSC::MalletGrabbing*& dyn__grabbing();
    // Get instance field reference: private VROSC.MalletAnimator _animator
    ::VROSC::MalletAnimator*& dyn__animator();
    // Get instance field reference: private VROSC.TriggerButton _holdingButton
    ::VROSC::TriggerButton& dyn__holdingButton();
    // Get instance field reference: private VROSC.InputDevice <InputDevice>k__BackingField
    ::VROSC::InputDevice*& dyn_$InputDevice$k__BackingField();
    // Get instance field reference: private System.Boolean <Active>k__BackingField
    bool& dyn_$Active$k__BackingField();
    // public VROSC.InputDevice get_InputDevice()
    // Offset: 0x8AAD04
    ::VROSC::InputDevice* get_InputDevice();
    // private System.Void set_InputDevice(VROSC.InputDevice value)
    // Offset: 0x8AAD0C
    void set_InputDevice(::VROSC::InputDevice* value);
    // public UnityEngine.Transform get_InteractionPoint()
    // Offset: 0x8AAD14
    ::UnityEngine::Transform* get_InteractionPoint();
    // public VROSC.PredictiveHitter get_PredictiveHitter()
    // Offset: 0x8AAD30
    ::VROSC::PredictiveHitter* get_PredictiveHitter();
    // public System.Boolean get_Active()
    // Offset: 0x8AAD38
    bool get_Active();
    // private System.Void set_Active(System.Boolean value)
    // Offset: 0x8AAD40
    void set_Active(bool value);
    // private System.Void Awake()
    // Offset: 0x8AAD4C
    void Awake();
    // private System.Void OnDestroy()
    // Offset: 0x8AAE20
    void OnDestroy();
    // public System.Void Setup(VROSC.InputDevice inputDevice)
    // Offset: 0x8AAEF4
    void Setup(::VROSC::InputDevice* inputDevice);
    // public System.Void SetLength(System.Single length)
    // Offset: 0x8AAFFC
    void SetLength(float length);
    // public System.Void SetAngle(System.Single angle)
    // Offset: 0x8AB0C0
    void SetAngle(float angle);
    // System.Void Grab(VROSC.ClickData clickData)
    // Offset: 0x8AB148
    void Grab(::VROSC::ClickData* clickData);
    // public System.Void Drop(VROSC.ClickData clickData)
    // Offset: 0x8AB2F4
    void Drop(::VROSC::ClickData* clickData);
    // System.Void SetActive(System.Boolean shouldUseMallets)
    // Offset: 0x8AAF34
    void SetActive(bool shouldUseMallets);
    // private System.Void AnimationFinished(System.Boolean malletsActive)
    // Offset: 0x8AB434
    void AnimationFinished(bool malletsActive);
    // public System.Void .ctor()
    // Offset: 0x8AB498
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Mallet* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::Mallet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Mallet*, creationType>()));
    }
  }; // VROSC.Mallet
  #pragma pack(pop)
  static check_size<sizeof(Mallet), 80 + sizeof(bool)> __VROSC_MalletSizeCheck;
  static_assert(sizeof(Mallet) == 0x51);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::Mallet::get_InputDevice
// Il2CppName: get_InputDevice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::InputDevice* (VROSC::Mallet::*)()>(&VROSC::Mallet::get_InputDevice)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Mallet*), "get_InputDevice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Mallet::set_InputDevice
// Il2CppName: set_InputDevice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Mallet::*)(::VROSC::InputDevice*)>(&VROSC::Mallet::set_InputDevice)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Mallet*), "set_InputDevice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::Mallet::get_InteractionPoint
// Il2CppName: get_InteractionPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (VROSC::Mallet::*)()>(&VROSC::Mallet::get_InteractionPoint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Mallet*), "get_InteractionPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Mallet::get_PredictiveHitter
// Il2CppName: get_PredictiveHitter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::PredictiveHitter* (VROSC::Mallet::*)()>(&VROSC::Mallet::get_PredictiveHitter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Mallet*), "get_PredictiveHitter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Mallet::get_Active
// Il2CppName: get_Active
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::Mallet::*)()>(&VROSC::Mallet::get_Active)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Mallet*), "get_Active", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Mallet::set_Active
// Il2CppName: set_Active
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Mallet::*)(bool)>(&VROSC::Mallet::set_Active)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Mallet*), "set_Active", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::Mallet::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Mallet::*)()>(&VROSC::Mallet::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Mallet*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Mallet::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Mallet::*)()>(&VROSC::Mallet::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Mallet*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Mallet::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Mallet::*)(::VROSC::InputDevice*)>(&VROSC::Mallet::Setup)> {
  static const MethodInfo* get() {
    static auto* inputDevice = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Mallet*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputDevice});
  }
};
// Writing MetadataGetter for method: VROSC::Mallet::SetLength
// Il2CppName: SetLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Mallet::*)(float)>(&VROSC::Mallet::SetLength)> {
  static const MethodInfo* get() {
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Mallet*), "SetLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{length});
  }
};
// Writing MetadataGetter for method: VROSC::Mallet::SetAngle
// Il2CppName: SetAngle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Mallet::*)(float)>(&VROSC::Mallet::SetAngle)> {
  static const MethodInfo* get() {
    static auto* angle = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Mallet*), "SetAngle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{angle});
  }
};
// Writing MetadataGetter for method: VROSC::Mallet::Grab
// Il2CppName: Grab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Mallet::*)(::VROSC::ClickData*)>(&VROSC::Mallet::Grab)> {
  static const MethodInfo* get() {
    static auto* clickData = &::il2cpp_utils::GetClassFromName("VROSC", "ClickData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Mallet*), "Grab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clickData});
  }
};
// Writing MetadataGetter for method: VROSC::Mallet::Drop
// Il2CppName: Drop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Mallet::*)(::VROSC::ClickData*)>(&VROSC::Mallet::Drop)> {
  static const MethodInfo* get() {
    static auto* clickData = &::il2cpp_utils::GetClassFromName("VROSC", "ClickData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Mallet*), "Drop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clickData});
  }
};
// Writing MetadataGetter for method: VROSC::Mallet::SetActive
// Il2CppName: SetActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Mallet::*)(bool)>(&VROSC::Mallet::SetActive)> {
  static const MethodInfo* get() {
    static auto* shouldUseMallets = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Mallet*), "SetActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{shouldUseMallets});
  }
};
// Writing MetadataGetter for method: VROSC::Mallet::AnimationFinished
// Il2CppName: AnimationFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Mallet::*)(bool)>(&VROSC::Mallet::AnimationFinished)> {
  static const MethodInfo* get() {
    static auto* malletsActive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Mallet*), "AnimationFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{malletsActive});
  }
};
// Writing MetadataGetter for method: VROSC::Mallet::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!