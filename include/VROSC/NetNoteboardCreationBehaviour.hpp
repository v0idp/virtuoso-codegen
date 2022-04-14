// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Playables.PlayableBehaviour
#include "UnityEngine/Playables/PlayableBehaviour.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: NetNoteboard
  class NetNoteboard;
  // Forward declaring type: NoteBoardNote
  class NoteBoardNote;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: FrameData
  struct FrameData;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: NetNoteboardCreationBehaviour
  class NetNoteboardCreationBehaviour;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::NetNoteboardCreationBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NetNoteboardCreationBehaviour*, "VROSC", "NetNoteboardCreationBehaviour");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.NetNoteboardCreationBehaviour
  // [TokenAttribute] Offset: FFFFFFFF
  class NetNoteboardCreationBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
    public:
    public:
    // private VROSC.NetNoteboard _netNoteboard
    // Size: 0x8
    // Offset: 0x10
    ::VROSC::NetNoteboard* netNoteboard;
    // Field size check
    static_assert(sizeof(::VROSC::NetNoteboard*) == 0x8);
    // private UnityEngine.Transform _fromPoint
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Transform* fromPoint;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.AnimationCurve _curve
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::AnimationCurve* curve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.Vector3[] _positionOffset
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::UnityEngine::Vector3> positionOffset;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // private UnityEngine.Quaternion[] _rotationOffset
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::UnityEngine::Quaternion> rotationOffset;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Quaternion>) == 0x8);
    // public System.Single StartPoint
    // Size: 0x4
    // Offset: 0x38
    float StartPoint;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single EndPoint
    // Size: 0x4
    // Offset: 0x3C
    float EndPoint;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private VROSC.NetNoteboard _netNoteboard
    [[deprecated]] ::VROSC::NetNoteboard*& dyn__netNoteboard();
    // Get instance field reference: private UnityEngine.Transform _fromPoint
    [[deprecated]] ::UnityEngine::Transform*& dyn__fromPoint();
    // Get instance field reference: private UnityEngine.AnimationCurve _curve
    [[deprecated]] ::UnityEngine::AnimationCurve*& dyn__curve();
    // Get instance field reference: private UnityEngine.Vector3[] _positionOffset
    [[deprecated]] ::ArrayW<::UnityEngine::Vector3>& dyn__positionOffset();
    // Get instance field reference: private UnityEngine.Quaternion[] _rotationOffset
    [[deprecated]] ::ArrayW<::UnityEngine::Quaternion>& dyn__rotationOffset();
    // Get instance field reference: public System.Single StartPoint
    [[deprecated]] float& dyn_StartPoint();
    // Get instance field reference: public System.Single EndPoint
    [[deprecated]] float& dyn_EndPoint();
    // public System.Void Setup(VROSC.NetNoteboard netNoteboard, UnityEngine.Transform fromPoint, UnityEngine.AnimationCurve curve)
    // Offset: 0xAD3C9C
    void Setup(::VROSC::NetNoteboard* netNoteboard, ::UnityEngine::Transform* fromPoint, ::UnityEngine::AnimationCurve* curve);
    // private System.Void SetNoteValues(VROSC.NoteBoardNote note, System.Single activationTime, System.Int32 index, System.Single x)
    // Offset: 0xAD4050
    void SetNoteValues(::VROSC::NoteBoardNote* note, float activationTime, int index, float x);
    // private System.Void OnPlayableDestroy()
    // Offset: 0xAD448C
    void OnPlayableDestroy();
    // public System.Void .ctor()
    // Offset: 0xAD4534
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetNoteboardCreationBehaviour* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::NetNoteboardCreationBehaviour::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetNoteboardCreationBehaviour*, creationType>()));
    }
    // public override System.Void ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    // Offset: 0xAD3EF0
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::Il2CppObject* playerData);
  }; // VROSC.NetNoteboardCreationBehaviour
  #pragma pack(pop)
  static check_size<sizeof(NetNoteboardCreationBehaviour), 60 + sizeof(float)> __VROSC_NetNoteboardCreationBehaviourSizeCheck;
  static_assert(sizeof(NetNoteboardCreationBehaviour) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::NetNoteboardCreationBehaviour::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NetNoteboardCreationBehaviour::*)(::VROSC::NetNoteboard*, ::UnityEngine::Transform*, ::UnityEngine::AnimationCurve*)>(&VROSC::NetNoteboardCreationBehaviour::Setup)> {
  static const MethodInfo* get() {
    static auto* netNoteboard = &::il2cpp_utils::GetClassFromName("VROSC", "NetNoteboard")->byval_arg;
    static auto* fromPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* curve = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NetNoteboardCreationBehaviour*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{netNoteboard, fromPoint, curve});
  }
};
// Writing MetadataGetter for method: VROSC::NetNoteboardCreationBehaviour::SetNoteValues
// Il2CppName: SetNoteValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NetNoteboardCreationBehaviour::*)(::VROSC::NoteBoardNote*, float, int, float)>(&VROSC::NetNoteboardCreationBehaviour::SetNoteValues)> {
  static const MethodInfo* get() {
    static auto* note = &::il2cpp_utils::GetClassFromName("VROSC", "NoteBoardNote")->byval_arg;
    static auto* activationTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NetNoteboardCreationBehaviour*), "SetNoteValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{note, activationTime, index, x});
  }
};
// Writing MetadataGetter for method: VROSC::NetNoteboardCreationBehaviour::OnPlayableDestroy
// Il2CppName: OnPlayableDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NetNoteboardCreationBehaviour::*)()>(&VROSC::NetNoteboardCreationBehaviour::OnPlayableDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NetNoteboardCreationBehaviour*), "OnPlayableDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NetNoteboardCreationBehaviour::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::NetNoteboardCreationBehaviour::ProcessFrame
// Il2CppName: ProcessFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NetNoteboardCreationBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::Il2CppObject*)>(&VROSC::NetNoteboardCreationBehaviour::ProcessFrame)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    static auto* playerData = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NetNoteboardCreationBehaviour*), "ProcessFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info, playerData});
  }
};
