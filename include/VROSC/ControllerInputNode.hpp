// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.Node
#include "VROSC/Node.hpp"
// Including type: VROSC.TriggerButton
#include "VROSC/TriggerButton.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: InputDevice
  class InputDevice;
  // Forward declaring type: SignalNode
  class SignalNode;
  // Forward declaring type: SignalControllerInfo
  class SignalControllerInfo;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider
  class Collider;
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: ControllerInputNode
  class ControllerInputNode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::ControllerInputNode);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ControllerInputNode*, "VROSC", "ControllerInputNode");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0xAB
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.ControllerInputNode
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: 77FC68
  class ControllerInputNode : public ::VROSC::Node {
    public:
    public:
    // public System.Action`1<VROSC.InputDevice> OnHoverBegin
    // Size: 0x8
    // Offset: 0x18
    ::System::Action_1<::VROSC::InputDevice*>* OnHoverBegin;
    // Field size check
    static_assert(sizeof(::System::Action_1<::VROSC::InputDevice*>*) == 0x8);
    // public System.Action`1<VROSC.InputDevice> OnHoverStay
    // Size: 0x8
    // Offset: 0x20
    ::System::Action_1<::VROSC::InputDevice*>* OnHoverStay;
    // Field size check
    static_assert(sizeof(::System::Action_1<::VROSC::InputDevice*>*) == 0x8);
    // public System.Action`1<VROSC.InputDevice> OnHoverEnd
    // Size: 0x8
    // Offset: 0x28
    ::System::Action_1<::VROSC::InputDevice*>* OnHoverEnd;
    // Field size check
    static_assert(sizeof(::System::Action_1<::VROSC::InputDevice*>*) == 0x8);
    // public System.Action`2<VROSC.InputDevice,VROSC.TriggerButton> OnPressBegin
    // Size: 0x8
    // Offset: 0x30
    ::System::Action_2<::VROSC::InputDevice*, ::VROSC::TriggerButton>* OnPressBegin;
    // Field size check
    static_assert(sizeof(::System::Action_2<::VROSC::InputDevice*, ::VROSC::TriggerButton>*) == 0x8);
    // public System.Action`2<VROSC.InputDevice,VROSC.TriggerButton> OnPressStay
    // Size: 0x8
    // Offset: 0x38
    ::System::Action_2<::VROSC::InputDevice*, ::VROSC::TriggerButton>* OnPressStay;
    // Field size check
    static_assert(sizeof(::System::Action_2<::VROSC::InputDevice*, ::VROSC::TriggerButton>*) == 0x8);
    // public System.Action`2<VROSC.InputDevice,VROSC.TriggerButton> OnPressEnd
    // Size: 0x8
    // Offset: 0x40
    ::System::Action_2<::VROSC::InputDevice*, ::VROSC::TriggerButton>* OnPressEnd;
    // Field size check
    static_assert(sizeof(::System::Action_2<::VROSC::InputDevice*, ::VROSC::TriggerButton>*) == 0x8);
    // private VROSC.SignalNode[] _leftHoverOutput
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<::VROSC::SignalNode*> leftHoverOutput;
    // Field size check
    static_assert(sizeof(::ArrayW<::VROSC::SignalNode*>) == 0x8);
    // private VROSC.SignalNode[] _rightHoverOutput
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::VROSC::SignalNode*> rightHoverOutput;
    // Field size check
    static_assert(sizeof(::ArrayW<::VROSC::SignalNode*>) == 0x8);
    // private VROSC.SignalNode[] _leftTriggerOutput
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<::VROSC::SignalNode*> leftTriggerOutput;
    // Field size check
    static_assert(sizeof(::ArrayW<::VROSC::SignalNode*>) == 0x8);
    // private VROSC.SignalNode[] _rightTriggerOutput
    // Size: 0x8
    // Offset: 0x60
    ::ArrayW<::VROSC::SignalNode*> rightTriggerOutput;
    // Field size check
    static_assert(sizeof(::ArrayW<::VROSC::SignalNode*>) == 0x8);
    // private VROSC.SignalNode[] _leftGripOutput
    // Size: 0x8
    // Offset: 0x68
    ::ArrayW<::VROSC::SignalNode*> leftGripOutput;
    // Field size check
    static_assert(sizeof(::ArrayW<::VROSC::SignalNode*>) == 0x8);
    // private VROSC.SignalNode[] _rightGripOutput
    // Size: 0x8
    // Offset: 0x70
    ::ArrayW<::VROSC::SignalNode*> rightGripOutput;
    // Field size check
    static_assert(sizeof(::ArrayW<::VROSC::SignalNode*>) == 0x8);
    // private VROSC.SignalNode[] _leftTouchpadXAOutput
    // Size: 0x8
    // Offset: 0x78
    ::ArrayW<::VROSC::SignalNode*> leftTouchpadXAOutput;
    // Field size check
    static_assert(sizeof(::ArrayW<::VROSC::SignalNode*>) == 0x8);
    // private VROSC.SignalNode[] _rightTouchpadXAOutput
    // Size: 0x8
    // Offset: 0x80
    ::ArrayW<::VROSC::SignalNode*> rightTouchpadXAOutput;
    // Field size check
    static_assert(sizeof(::ArrayW<::VROSC::SignalNode*>) == 0x8);
    // private VROSC.SignalNode[] _leftAppMenuYBOutput
    // Size: 0x8
    // Offset: 0x88
    ::ArrayW<::VROSC::SignalNode*> leftAppMenuYBOutput;
    // Field size check
    static_assert(sizeof(::ArrayW<::VROSC::SignalNode*>) == 0x8);
    // private VROSC.SignalNode[] _rightAppMenuYBOutput
    // Size: 0x8
    // Offset: 0x90
    ::ArrayW<::VROSC::SignalNode*> rightAppMenuYBOutput;
    // Field size check
    static_assert(sizeof(::ArrayW<::VROSC::SignalNode*>) == 0x8);
    // private System.Boolean _useColliderScale
    // Size: 0x1
    // Offset: 0x98
    bool useColliderScale;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useColliderScale and: collider
    char __padding16[0x7] = {};
    // private UnityEngine.Collider _collider
    // Size: 0x8
    // Offset: 0xA0
    ::UnityEngine::Collider* collider;
    // Field size check
    static_assert(sizeof(::UnityEngine::Collider*) == 0x8);
    // private System.Boolean _disablePointing
    // Size: 0x1
    // Offset: 0xA8
    bool disablePointing;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _pointGripOnly
    // Size: 0x1
    // Offset: 0xA9
    bool pointGripOnly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _disablesGrip
    // Size: 0x1
    // Offset: 0xAA
    bool disablesGrip;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Action`1<VROSC.InputDevice> OnHoverBegin
    [[deprecated]] ::System::Action_1<::VROSC::InputDevice*>*& dyn_OnHoverBegin();
    // Get instance field reference: public System.Action`1<VROSC.InputDevice> OnHoverStay
    [[deprecated]] ::System::Action_1<::VROSC::InputDevice*>*& dyn_OnHoverStay();
    // Get instance field reference: public System.Action`1<VROSC.InputDevice> OnHoverEnd
    [[deprecated]] ::System::Action_1<::VROSC::InputDevice*>*& dyn_OnHoverEnd();
    // Get instance field reference: public System.Action`2<VROSC.InputDevice,VROSC.TriggerButton> OnPressBegin
    [[deprecated]] ::System::Action_2<::VROSC::InputDevice*, ::VROSC::TriggerButton>*& dyn_OnPressBegin();
    // Get instance field reference: public System.Action`2<VROSC.InputDevice,VROSC.TriggerButton> OnPressStay
    [[deprecated]] ::System::Action_2<::VROSC::InputDevice*, ::VROSC::TriggerButton>*& dyn_OnPressStay();
    // Get instance field reference: public System.Action`2<VROSC.InputDevice,VROSC.TriggerButton> OnPressEnd
    [[deprecated]] ::System::Action_2<::VROSC::InputDevice*, ::VROSC::TriggerButton>*& dyn_OnPressEnd();
    // Get instance field reference: private VROSC.SignalNode[] _leftHoverOutput
    [[deprecated]] ::ArrayW<::VROSC::SignalNode*>& dyn__leftHoverOutput();
    // Get instance field reference: private VROSC.SignalNode[] _rightHoverOutput
    [[deprecated]] ::ArrayW<::VROSC::SignalNode*>& dyn__rightHoverOutput();
    // Get instance field reference: private VROSC.SignalNode[] _leftTriggerOutput
    [[deprecated]] ::ArrayW<::VROSC::SignalNode*>& dyn__leftTriggerOutput();
    // Get instance field reference: private VROSC.SignalNode[] _rightTriggerOutput
    [[deprecated]] ::ArrayW<::VROSC::SignalNode*>& dyn__rightTriggerOutput();
    // Get instance field reference: private VROSC.SignalNode[] _leftGripOutput
    [[deprecated]] ::ArrayW<::VROSC::SignalNode*>& dyn__leftGripOutput();
    // Get instance field reference: private VROSC.SignalNode[] _rightGripOutput
    [[deprecated]] ::ArrayW<::VROSC::SignalNode*>& dyn__rightGripOutput();
    // Get instance field reference: private VROSC.SignalNode[] _leftTouchpadXAOutput
    [[deprecated]] ::ArrayW<::VROSC::SignalNode*>& dyn__leftTouchpadXAOutput();
    // Get instance field reference: private VROSC.SignalNode[] _rightTouchpadXAOutput
    [[deprecated]] ::ArrayW<::VROSC::SignalNode*>& dyn__rightTouchpadXAOutput();
    // Get instance field reference: private VROSC.SignalNode[] _leftAppMenuYBOutput
    [[deprecated]] ::ArrayW<::VROSC::SignalNode*>& dyn__leftAppMenuYBOutput();
    // Get instance field reference: private VROSC.SignalNode[] _rightAppMenuYBOutput
    [[deprecated]] ::ArrayW<::VROSC::SignalNode*>& dyn__rightAppMenuYBOutput();
    // Get instance field reference: private System.Boolean _useColliderScale
    [[deprecated]] bool& dyn__useColliderScale();
    // Get instance field reference: private UnityEngine.Collider _collider
    [[deprecated]] ::UnityEngine::Collider*& dyn__collider();
    // Get instance field reference: private System.Boolean _disablePointing
    [[deprecated]] bool& dyn__disablePointing();
    // Get instance field reference: private System.Boolean _pointGripOnly
    [[deprecated]] bool& dyn__pointGripOnly();
    // Get instance field reference: private System.Boolean _disablesGrip
    [[deprecated]] bool& dyn__disablesGrip();
    // public System.Boolean get_DisablePointing()
    // Offset: 0x94E4EC
    bool get_DisablePointing();
    // public System.Boolean get_HasGripOutputs()
    // Offset: 0x94E4F4
    bool get_HasGripOutputs();
    // public System.Boolean get_DisablesGrip()
    // Offset: 0x94E534
    bool get_DisablesGrip();
    // protected System.Void Start()
    // Offset: 0x94E53C
    void Start();
    // public System.Void HoverBegin(VROSC.InputDevice device)
    // Offset: 0x94E5EC
    void HoverBegin(::VROSC::InputDevice* device);
    // public System.Void HoverStay(VROSC.InputDevice device)
    // Offset: 0x94E9E4
    void HoverStay(::VROSC::InputDevice* device);
    // public System.Void HoverEnd(VROSC.InputDevice device)
    // Offset: 0x94EBB4
    void HoverEnd(::VROSC::InputDevice* device);
    // public System.Void ButtonTriggerBegin(VROSC.InputDevice device, VROSC.TriggerButton triggerButton)
    // Offset: 0x94EC24
    void ButtonTriggerBegin(::VROSC::InputDevice* device, ::VROSC::TriggerButton triggerButton);
    // public System.Void ButtonTriggerStay(VROSC.InputDevice device, VROSC.TriggerButton triggerButton)
    // Offset: 0x94EE08
    void ButtonTriggerStay(::VROSC::InputDevice* device, ::VROSC::TriggerButton triggerButton);
    // public System.Void ButtonTriggerEnd(VROSC.InputDevice device, VROSC.TriggerButton triggerButton)
    // Offset: 0x94EFEC
    void ButtonTriggerEnd(::VROSC::InputDevice* device, ::VROSC::TriggerButton triggerButton);
    // private VROSC.SignalControllerInfo GetSignalControllerInfo(VROSC.InputDevice device)
    // Offset: 0x94E7BC
    ::VROSC::SignalControllerInfo* GetSignalControllerInfo(::VROSC::InputDevice* device);
    // private VROSC.SignalNode[] GetOutputNodes(VROSC.InputDevice device, VROSC.TriggerButton triggerButton)
    // Offset: 0x94E92C
    ::ArrayW<::VROSC::SignalNode*> GetOutputNodes(::VROSC::InputDevice* device, ::VROSC::TriggerButton triggerButton);
    // static public UnityEngine.Vector3 GetNormalizedPointInTransfrom(UnityEngine.Transform t, UnityEngine.Vector3 point, UnityEngine.Collider collider)
    // Offset: 0x94F064
    static ::UnityEngine::Vector3 GetNormalizedPointInTransfrom(::UnityEngine::Transform* t, ::UnityEngine::Vector3 point, ::UnityEngine::Collider* collider);
    // static public UnityEngine.Vector3 GetNormalizedRotation(UnityEngine.Vector3 eulerAngles)
    // Offset: 0x94F1C8
    static ::UnityEngine::Vector3 GetNormalizedRotation(::UnityEngine::Vector3 eulerAngles);
    // static private System.Single GetNormalizedRotation(System.Single eulerAngle)
    // Offset: 0x94F2F4
    static float GetNormalizedRotation(float eulerAngle);
    // static public UnityEngine.Vector3 GetRelativeVelocity(UnityEngine.Transform targetTransform, UnityEngine.Vector3 sourceVelocity)
    // Offset: 0x94F2DC
    static ::UnityEngine::Vector3 GetRelativeVelocity(::UnityEngine::Transform* targetTransform, ::UnityEngine::Vector3 sourceVelocity);
    // public System.Void .ctor()
    // Offset: 0x94F368
    // Implemented from: VROSC.Node
    // Base method: System.Void Node::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ControllerInputNode* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::ControllerInputNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ControllerInputNode*, creationType>()));
    }
  }; // VROSC.ControllerInputNode
  #pragma pack(pop)
  static check_size<sizeof(ControllerInputNode), 170 + sizeof(bool)> __VROSC_ControllerInputNodeSizeCheck;
  static_assert(sizeof(ControllerInputNode) == 0xAB);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::ControllerInputNode::get_DisablePointing
// Il2CppName: get_DisablePointing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::ControllerInputNode::*)()>(&VROSC::ControllerInputNode::get_DisablePointing)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ControllerInputNode*), "get_DisablePointing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ControllerInputNode::get_HasGripOutputs
// Il2CppName: get_HasGripOutputs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::ControllerInputNode::*)()>(&VROSC::ControllerInputNode::get_HasGripOutputs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ControllerInputNode*), "get_HasGripOutputs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ControllerInputNode::get_DisablesGrip
// Il2CppName: get_DisablesGrip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::ControllerInputNode::*)()>(&VROSC::ControllerInputNode::get_DisablesGrip)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ControllerInputNode*), "get_DisablesGrip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ControllerInputNode::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ControllerInputNode::*)()>(&VROSC::ControllerInputNode::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ControllerInputNode*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ControllerInputNode::HoverBegin
// Il2CppName: HoverBegin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ControllerInputNode::*)(::VROSC::InputDevice*)>(&VROSC::ControllerInputNode::HoverBegin)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ControllerInputNode*), "HoverBegin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device});
  }
};
// Writing MetadataGetter for method: VROSC::ControllerInputNode::HoverStay
// Il2CppName: HoverStay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ControllerInputNode::*)(::VROSC::InputDevice*)>(&VROSC::ControllerInputNode::HoverStay)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ControllerInputNode*), "HoverStay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device});
  }
};
// Writing MetadataGetter for method: VROSC::ControllerInputNode::HoverEnd
// Il2CppName: HoverEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ControllerInputNode::*)(::VROSC::InputDevice*)>(&VROSC::ControllerInputNode::HoverEnd)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ControllerInputNode*), "HoverEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device});
  }
};
// Writing MetadataGetter for method: VROSC::ControllerInputNode::ButtonTriggerBegin
// Il2CppName: ButtonTriggerBegin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ControllerInputNode::*)(::VROSC::InputDevice*, ::VROSC::TriggerButton)>(&VROSC::ControllerInputNode::ButtonTriggerBegin)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* triggerButton = &::il2cpp_utils::GetClassFromName("VROSC", "TriggerButton")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ControllerInputNode*), "ButtonTriggerBegin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device, triggerButton});
  }
};
// Writing MetadataGetter for method: VROSC::ControllerInputNode::ButtonTriggerStay
// Il2CppName: ButtonTriggerStay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ControllerInputNode::*)(::VROSC::InputDevice*, ::VROSC::TriggerButton)>(&VROSC::ControllerInputNode::ButtonTriggerStay)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* triggerButton = &::il2cpp_utils::GetClassFromName("VROSC", "TriggerButton")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ControllerInputNode*), "ButtonTriggerStay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device, triggerButton});
  }
};
// Writing MetadataGetter for method: VROSC::ControllerInputNode::ButtonTriggerEnd
// Il2CppName: ButtonTriggerEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ControllerInputNode::*)(::VROSC::InputDevice*, ::VROSC::TriggerButton)>(&VROSC::ControllerInputNode::ButtonTriggerEnd)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* triggerButton = &::il2cpp_utils::GetClassFromName("VROSC", "TriggerButton")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ControllerInputNode*), "ButtonTriggerEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device, triggerButton});
  }
};
// Writing MetadataGetter for method: VROSC::ControllerInputNode::GetSignalControllerInfo
// Il2CppName: GetSignalControllerInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::SignalControllerInfo* (VROSC::ControllerInputNode::*)(::VROSC::InputDevice*)>(&VROSC::ControllerInputNode::GetSignalControllerInfo)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ControllerInputNode*), "GetSignalControllerInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device});
  }
};
// Writing MetadataGetter for method: VROSC::ControllerInputNode::GetOutputNodes
// Il2CppName: GetOutputNodes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::VROSC::SignalNode*> (VROSC::ControllerInputNode::*)(::VROSC::InputDevice*, ::VROSC::TriggerButton)>(&VROSC::ControllerInputNode::GetOutputNodes)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* triggerButton = &::il2cpp_utils::GetClassFromName("VROSC", "TriggerButton")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ControllerInputNode*), "GetOutputNodes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device, triggerButton});
  }
};
// Writing MetadataGetter for method: VROSC::ControllerInputNode::GetNormalizedPointInTransfrom
// Il2CppName: GetNormalizedPointInTransfrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Collider*)>(&VROSC::ControllerInputNode::GetNormalizedPointInTransfrom)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* collider = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ControllerInputNode*), "GetNormalizedPointInTransfrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, point, collider});
  }
};
// Writing MetadataGetter for method: VROSC::ControllerInputNode::GetNormalizedRotation
// Il2CppName: GetNormalizedRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3)>(&VROSC::ControllerInputNode::GetNormalizedRotation)> {
  static const MethodInfo* get() {
    static auto* eulerAngles = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ControllerInputNode*), "GetNormalizedRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eulerAngles});
  }
};
// Writing MetadataGetter for method: VROSC::ControllerInputNode::GetNormalizedRotation
// Il2CppName: GetNormalizedRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&VROSC::ControllerInputNode::GetNormalizedRotation)> {
  static const MethodInfo* get() {
    static auto* eulerAngle = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ControllerInputNode*), "GetNormalizedRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eulerAngle});
  }
};
// Writing MetadataGetter for method: VROSC::ControllerInputNode::GetRelativeVelocity
// Il2CppName: GetRelativeVelocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&VROSC::ControllerInputNode::GetRelativeVelocity)> {
  static const MethodInfo* get() {
    static auto* targetTransform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* sourceVelocity = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ControllerInputNode*), "GetRelativeVelocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetTransform, sourceVelocity});
  }
};
// Writing MetadataGetter for method: VROSC::ControllerInputNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
