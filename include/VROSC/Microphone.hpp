// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.SignalNode
#include "VROSC/SignalNode.hpp"
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
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: ResetableMover
  class ResetableMover;
  // Forward declaring type: MicrophoneController
  class MicrophoneController;
  // Forward declaring type: TransformMover
  class TransformMover;
  // Forward declaring type: Signal
  class Signal;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: Microphone
  class Microphone;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::Microphone);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Microphone*, "VROSC", "Microphone");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x6C
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.Microphone
  // [TokenAttribute] Offset: FFFFFFFF
  class Microphone : public ::VROSC::SignalNode {
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
    // private UnityEngine.Transform _microphoneHead
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Transform* microphoneHead;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.GameObject _peakLight
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::GameObject* peakLight;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.AnimationCurve _falloffCurve
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::AnimationCurve* falloffCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // private VROSC.ResetableMover _resetableMover
    // Size: 0x8
    // Offset: 0x58
    ::VROSC::ResetableMover* resetableMover;
    // Field size check
    static_assert(sizeof(::VROSC::ResetableMover*) == 0x8);
    // private VROSC.MicrophoneController _microphoneController
    // Size: 0x8
    // Offset: 0x60
    ::VROSC::MicrophoneController* microphoneController;
    // Field size check
    static_assert(sizeof(::VROSC::MicrophoneController*) == 0x8);
    // private System.Single _maxMicrophoneDistance
    // Size: 0x4
    // Offset: 0x68
    float maxMicrophoneDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private UnityEngine.Transform _microphoneHead
    ::UnityEngine::Transform*& dyn__microphoneHead();
    // Get instance field reference: private UnityEngine.GameObject _peakLight
    ::UnityEngine::GameObject*& dyn__peakLight();
    // Get instance field reference: private UnityEngine.AnimationCurve _falloffCurve
    ::UnityEngine::AnimationCurve*& dyn__falloffCurve();
    // Get instance field reference: private VROSC.ResetableMover _resetableMover
    ::VROSC::ResetableMover*& dyn__resetableMover();
    // Get instance field reference: private VROSC.MicrophoneController _microphoneController
    ::VROSC::MicrophoneController*& dyn__microphoneController();
    // Get instance field reference: private System.Single _maxMicrophoneDistance
    float& dyn__maxMicrophoneDistance();
    // private System.Void Awake()
    // Offset: 0x8AF598
    void Awake();
    // private System.Void OnDestroy()
    // Offset: 0x8AF6D0
    void OnDestroy();
    // public System.Void Setup(VROSC.MicrophoneController microphoneController)
    // Offset: 0x8AF8E0
    void Setup(::VROSC::MicrophoneController* microphoneController);
    // protected System.Void Update()
    // Offset: 0x8AFB74
    void Update();
    // private System.Void CalculateProximity()
    // Offset: 0x8AFB78
    void CalculateProximity();
    // public System.Void SetPeakLightActive(System.Boolean state)
    // Offset: 0x8AFB54
    void SetPeakLightActive(bool state);
    // public System.Void SetToPosition(System.Boolean isAttached, UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Vector3 scale)
    // Offset: 0x8AFD94
    void SetToPosition(bool isAttached, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 scale);
    // private System.Void MicrophoneReset(VROSC.ResetableMover mover)
    // Offset: 0x8AFDD4
    void MicrophoneReset(::VROSC::ResetableMover* mover);
    // private System.Void MicrophoneMoved(VROSC.ResetableMover mover)
    // Offset: 0x8AFE70
    void MicrophoneMoved(::VROSC::ResetableMover* mover);
    // private System.Void MicrophoneStationMoved(VROSC.TransformMover mover)
    // Offset: 0x8B0134
    void MicrophoneStationMoved(::VROSC::TransformMover* mover);
    // public System.Void .ctor()
    // Offset: 0x8B01B4
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::.ctor()
    // Base method: System.Void Node::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Microphone* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::Microphone::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Microphone*, creationType>()));
    }
    // protected override System.Void OnEnable()
    // Offset: 0x8AF9F4
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x8AFB08
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::OnDisable()
    void OnDisable();
    // protected override System.Void NodeBegin(VROSC.Signal signal)
    // Offset: 0x8AFCC8
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::NodeBegin(VROSC.Signal signal)
    void NodeBegin(::VROSC::Signal* signal);
    // protected override System.Void NodeStay(VROSC.Signal signal)
    // Offset: 0x8AFD2C
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::NodeStay(VROSC.Signal signal)
    void NodeStay(::VROSC::Signal* signal);
    // protected override System.Void NodeEnd(VROSC.Signal signal)
    // Offset: 0x8AFD34
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::NodeEnd(VROSC.Signal signal)
    void NodeEnd(::VROSC::Signal* signal);
  }; // VROSC.Microphone
  #pragma pack(pop)
  static check_size<sizeof(Microphone), 104 + sizeof(float)> __VROSC_MicrophoneSizeCheck;
  static_assert(sizeof(Microphone) == 0x6C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::Microphone::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Microphone::*)()>(&VROSC::Microphone::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Microphone*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Microphone::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Microphone::*)()>(&VROSC::Microphone::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Microphone*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Microphone::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Microphone::*)(::VROSC::MicrophoneController*)>(&VROSC::Microphone::Setup)> {
  static const MethodInfo* get() {
    static auto* microphoneController = &::il2cpp_utils::GetClassFromName("VROSC", "MicrophoneController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Microphone*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{microphoneController});
  }
};
// Writing MetadataGetter for method: VROSC::Microphone::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Microphone::*)()>(&VROSC::Microphone::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Microphone*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Microphone::CalculateProximity
// Il2CppName: CalculateProximity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Microphone::*)()>(&VROSC::Microphone::CalculateProximity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Microphone*), "CalculateProximity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Microphone::SetPeakLightActive
// Il2CppName: SetPeakLightActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Microphone::*)(bool)>(&VROSC::Microphone::SetPeakLightActive)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Microphone*), "SetPeakLightActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: VROSC::Microphone::SetToPosition
// Il2CppName: SetToPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Microphone::*)(bool, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&VROSC::Microphone::SetToPosition)> {
  static const MethodInfo* get() {
    static auto* isAttached = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* scale = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Microphone*), "SetToPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isAttached, position, rotation, scale});
  }
};
// Writing MetadataGetter for method: VROSC::Microphone::MicrophoneReset
// Il2CppName: MicrophoneReset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Microphone::*)(::VROSC::ResetableMover*)>(&VROSC::Microphone::MicrophoneReset)> {
  static const MethodInfo* get() {
    static auto* mover = &::il2cpp_utils::GetClassFromName("VROSC", "ResetableMover")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Microphone*), "MicrophoneReset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mover});
  }
};
// Writing MetadataGetter for method: VROSC::Microphone::MicrophoneMoved
// Il2CppName: MicrophoneMoved
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Microphone::*)(::VROSC::ResetableMover*)>(&VROSC::Microphone::MicrophoneMoved)> {
  static const MethodInfo* get() {
    static auto* mover = &::il2cpp_utils::GetClassFromName("VROSC", "ResetableMover")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Microphone*), "MicrophoneMoved", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mover});
  }
};
// Writing MetadataGetter for method: VROSC::Microphone::MicrophoneStationMoved
// Il2CppName: MicrophoneStationMoved
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Microphone::*)(::VROSC::TransformMover*)>(&VROSC::Microphone::MicrophoneStationMoved)> {
  static const MethodInfo* get() {
    static auto* mover = &::il2cpp_utils::GetClassFromName("VROSC", "TransformMover")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Microphone*), "MicrophoneStationMoved", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mover});
  }
};
// Writing MetadataGetter for method: VROSC::Microphone::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::Microphone::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Microphone::*)()>(&VROSC::Microphone::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Microphone*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Microphone::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Microphone::*)()>(&VROSC::Microphone::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Microphone*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Microphone::NodeBegin
// Il2CppName: NodeBegin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Microphone::*)(::VROSC::Signal*)>(&VROSC::Microphone::NodeBegin)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Microphone*), "NodeBegin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
// Writing MetadataGetter for method: VROSC::Microphone::NodeStay
// Il2CppName: NodeStay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Microphone::*)(::VROSC::Signal*)>(&VROSC::Microphone::NodeStay)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Microphone*), "NodeStay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
// Writing MetadataGetter for method: VROSC::Microphone::NodeEnd
// Il2CppName: NodeEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Microphone::*)(::VROSC::Signal*)>(&VROSC::Microphone::NodeEnd)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Microphone*), "NodeEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};