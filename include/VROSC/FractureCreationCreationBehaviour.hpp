// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Playables.PlayableBehaviour
#include "UnityEngine/Playables/PlayableBehaviour.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
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
  // Forward declaring type: MinMaxFloat
  class MinMaxFloat;
  // Forward declaring type: FracturedObjectController
  class FracturedObjectController;
  // Skipping declaration: AnimationData because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
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
  // Forward declaring type: FractureCreationCreationBehaviour
  class FractureCreationCreationBehaviour;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::FractureCreationCreationBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FractureCreationCreationBehaviour*, "VROSC", "FractureCreationCreationBehaviour");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.FractureCreationCreationBehaviour
  // [TokenAttribute] Offset: FFFFFFFF
  class FractureCreationCreationBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
    public:
    // Nested type: ::VROSC::FractureCreationCreationBehaviour::AnimationData
    struct AnimationData;
    // Size: 0x28
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: VROSC.FractureCreationCreationBehaviour/VROSC.AnimationData
    // [TokenAttribute] Offset: FFFFFFFF
    struct AnimationData/*, public ::System::ValueType*/ {
      public:
      public:
      // private readonly UnityEngine.Vector3 <Position>k__BackingField
      // Size: 0xC
      // Offset: 0x0
      ::UnityEngine::Vector3 Position;
      // Field size check
      static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
      // private readonly UnityEngine.Quaternion <Rotation>k__BackingField
      // Size: 0x10
      // Offset: 0xC
      ::UnityEngine::Quaternion Rotation;
      // Field size check
      static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
      // private readonly UnityEngine.Vector3 <Scale>k__BackingField
      // Size: 0xC
      // Offset: 0x1C
      ::UnityEngine::Vector3 Scale;
      // Field size check
      static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
      public:
      // Creating value type constructor for type: AnimationData
      constexpr AnimationData(::UnityEngine::Vector3 Position_ = {}, ::UnityEngine::Quaternion Rotation_ = {}, ::UnityEngine::Vector3 Scale_ = {}) noexcept : Position{Position_}, Rotation{Rotation_}, Scale{Scale_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: private readonly UnityEngine.Vector3 <Position>k__BackingField
      [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_$Position$k__BackingField();
      // Get instance field reference: private readonly UnityEngine.Quaternion <Rotation>k__BackingField
      [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_$Rotation$k__BackingField();
      // Get instance field reference: private readonly UnityEngine.Vector3 <Scale>k__BackingField
      [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_$Scale$k__BackingField();
      // public UnityEngine.Vector3 get_Position()
      // Offset: 0x1956514
      ::UnityEngine::Vector3 get_Position();
      // public UnityEngine.Quaternion get_Rotation()
      // Offset: 0x1956520
      ::UnityEngine::Quaternion get_Rotation();
      // public UnityEngine.Vector3 get_Scale()
      // Offset: 0x195652C
      ::UnityEngine::Vector3 get_Scale();
      // public System.Void .ctor(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Vector3 scale)
      // Offset: 0x1956538
      // ABORTED: conflicts with another method.  AnimationData(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 scale);
    }; // VROSC.FractureCreationCreationBehaviour/VROSC.AnimationData
    #pragma pack(pop)
    static check_size<sizeof(FractureCreationCreationBehaviour::AnimationData), 28 + sizeof(::UnityEngine::Vector3)> __VROSC_FractureCreationCreationBehaviour_AnimationDataSizeCheck;
    static_assert(sizeof(FractureCreationCreationBehaviour::AnimationData) == 0x28);
    public:
    // private VROSC.FracturedObjectController _target
    // Size: 0x8
    // Offset: 0x10
    ::VROSC::FracturedObjectController* target;
    // Field size check
    static_assert(sizeof(::VROSC::FracturedObjectController*) == 0x8);
    // private VROSC.FractureCreationCreationBehaviour/VROSC.AnimationData[] _startData
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::VROSC::FractureCreationCreationBehaviour::AnimationData> startData;
    // Field size check
    static_assert(sizeof(::ArrayW<::VROSC::FractureCreationCreationBehaviour::AnimationData>) == 0x8);
    // private VROSC.FractureCreationCreationBehaviour/VROSC.AnimationData[] _endData
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::VROSC::FractureCreationCreationBehaviour::AnimationData> endData;
    // Field size check
    static_assert(sizeof(::ArrayW<::VROSC::FractureCreationCreationBehaviour::AnimationData>) == 0x8);
    // private System.Boolean _assembling
    // Size: 0x1
    // Offset: 0x28
    bool assembling;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: assembling and: FractureLength
    char __padding3[0x7] = {};
    // public VROSC.MinMaxFloat FractureLength
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::MinMaxFloat* FractureLength;
    // Field size check
    static_assert(sizeof(::VROSC::MinMaxFloat*) == 0x8);
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
    // Get instance field reference: private VROSC.FracturedObjectController _target
    [[deprecated("Use field access instead!")]] ::VROSC::FracturedObjectController*& dyn__target();
    // Get instance field reference: private VROSC.FractureCreationCreationBehaviour/VROSC.AnimationData[] _startData
    [[deprecated("Use field access instead!")]] ::ArrayW<::VROSC::FractureCreationCreationBehaviour::AnimationData>& dyn__startData();
    // Get instance field reference: private VROSC.FractureCreationCreationBehaviour/VROSC.AnimationData[] _endData
    [[deprecated("Use field access instead!")]] ::ArrayW<::VROSC::FractureCreationCreationBehaviour::AnimationData>& dyn__endData();
    // Get instance field reference: private System.Boolean _assembling
    [[deprecated("Use field access instead!")]] bool& dyn__assembling();
    // Get instance field reference: public VROSC.MinMaxFloat FractureLength
    [[deprecated("Use field access instead!")]] ::VROSC::MinMaxFloat*& dyn_FractureLength();
    // Get instance field reference: public System.Single StartPoint
    [[deprecated("Use field access instead!")]] float& dyn_StartPoint();
    // Get instance field reference: public System.Single EndPoint
    [[deprecated("Use field access instead!")]] float& dyn_EndPoint();
    // public System.Void .ctor()
    // Offset: 0x19A0900
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FractureCreationCreationBehaviour* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::FractureCreationCreationBehaviour::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FractureCreationCreationBehaviour*, creationType>()));
    }
    // System.Void Setup(VROSC.FracturedObjectController target, UnityEngine.Transform _fracturePosition, System.Boolean assembling)
    // Offset: 0x199FB2C
    void Setup(::VROSC::FracturedObjectController* target, ::UnityEngine::Transform* _fracturePosition, bool assembling);
    // private System.Single GetAmount(System.Int32 i)
    // Offset: 0x19A027C
    float GetAmount(int i);
    // private System.Void SetObjectValues(System.Int32 i, System.Single amount)
    // Offset: 0x19A02CC
    void SetObjectValues(int i, float amount);
    // private System.Void OnPlayableDestroy()
    // Offset: 0x19A0564
    void OnPlayableDestroy();
    // private VROSC.FractureCreationCreationBehaviour/VROSC.AnimationData GetStart(System.Boolean assembling, UnityEngine.Vector3 fracturePos, System.Int32 i)
    // Offset: 0x199FDBC
    ::VROSC::FractureCreationCreationBehaviour::AnimationData GetStart(bool assembling, ::UnityEngine::Vector3 fracturePos, int i);
    // private VROSC.FractureCreationCreationBehaviour/VROSC.AnimationData GetEnd(System.Boolean assembling, UnityEngine.Vector3 fracturePos, System.Int32 i)
    // Offset: 0x199FFFC
    ::VROSC::FractureCreationCreationBehaviour::AnimationData GetEnd(bool assembling, ::UnityEngine::Vector3 fracturePos, int i);
    // private UnityEngine.Quaternion GetFracutreRotation(System.Int32 i)
    // Offset: 0x19A07F4
    ::UnityEngine::Quaternion GetFracutreRotation(int i);
    // private UnityEngine.Vector3 GetFracturePos(UnityEngine.Vector3 fracturePos)
    // Offset: 0x19A0724
    ::UnityEngine::Vector3 GetFracturePos(::UnityEngine::Vector3 fracturePos);
    // public override System.Void ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    // Offset: 0x19A0134
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::Il2CppObject* playerData);
  }; // VROSC.FractureCreationCreationBehaviour
  #pragma pack(pop)
  static check_size<sizeof(FractureCreationCreationBehaviour), 60 + sizeof(float)> __VROSC_FractureCreationCreationBehaviourSizeCheck;
  static_assert(sizeof(FractureCreationCreationBehaviour) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FractureCreationCreationBehaviour::AnimationData, "VROSC", "FractureCreationCreationBehaviour/AnimationData");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::FractureCreationCreationBehaviour::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::FractureCreationCreationBehaviour::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::FractureCreationCreationBehaviour::*)(::VROSC::FracturedObjectController*, ::UnityEngine::Transform*, bool)>(&VROSC::FractureCreationCreationBehaviour::Setup)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("VROSC", "FracturedObjectController")->byval_arg;
    static auto* _fracturePosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* assembling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::FractureCreationCreationBehaviour*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, _fracturePosition, assembling});
  }
};
// Writing MetadataGetter for method: VROSC::FractureCreationCreationBehaviour::GetAmount
// Il2CppName: GetAmount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::FractureCreationCreationBehaviour::*)(int)>(&VROSC::FractureCreationCreationBehaviour::GetAmount)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::FractureCreationCreationBehaviour*), "GetAmount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: VROSC::FractureCreationCreationBehaviour::SetObjectValues
// Il2CppName: SetObjectValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::FractureCreationCreationBehaviour::*)(int, float)>(&VROSC::FractureCreationCreationBehaviour::SetObjectValues)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* amount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::FractureCreationCreationBehaviour*), "SetObjectValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i, amount});
  }
};
// Writing MetadataGetter for method: VROSC::FractureCreationCreationBehaviour::OnPlayableDestroy
// Il2CppName: OnPlayableDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::FractureCreationCreationBehaviour::*)()>(&VROSC::FractureCreationCreationBehaviour::OnPlayableDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::FractureCreationCreationBehaviour*), "OnPlayableDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::FractureCreationCreationBehaviour::GetStart
// Il2CppName: GetStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::FractureCreationCreationBehaviour::AnimationData (VROSC::FractureCreationCreationBehaviour::*)(bool, ::UnityEngine::Vector3, int)>(&VROSC::FractureCreationCreationBehaviour::GetStart)> {
  static const MethodInfo* get() {
    static auto* assembling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* fracturePos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::FractureCreationCreationBehaviour*), "GetStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assembling, fracturePos, i});
  }
};
// Writing MetadataGetter for method: VROSC::FractureCreationCreationBehaviour::GetEnd
// Il2CppName: GetEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::FractureCreationCreationBehaviour::AnimationData (VROSC::FractureCreationCreationBehaviour::*)(bool, ::UnityEngine::Vector3, int)>(&VROSC::FractureCreationCreationBehaviour::GetEnd)> {
  static const MethodInfo* get() {
    static auto* assembling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* fracturePos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::FractureCreationCreationBehaviour*), "GetEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assembling, fracturePos, i});
  }
};
// Writing MetadataGetter for method: VROSC::FractureCreationCreationBehaviour::GetFracutreRotation
// Il2CppName: GetFracutreRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (VROSC::FractureCreationCreationBehaviour::*)(int)>(&VROSC::FractureCreationCreationBehaviour::GetFracutreRotation)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::FractureCreationCreationBehaviour*), "GetFracutreRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: VROSC::FractureCreationCreationBehaviour::GetFracturePos
// Il2CppName: GetFracturePos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (VROSC::FractureCreationCreationBehaviour::*)(::UnityEngine::Vector3)>(&VROSC::FractureCreationCreationBehaviour::GetFracturePos)> {
  static const MethodInfo* get() {
    static auto* fracturePos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::FractureCreationCreationBehaviour*), "GetFracturePos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fracturePos});
  }
};
// Writing MetadataGetter for method: VROSC::FractureCreationCreationBehaviour::ProcessFrame
// Il2CppName: ProcessFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::FractureCreationCreationBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::Il2CppObject*)>(&VROSC::FractureCreationCreationBehaviour::ProcessFrame)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    static auto* playerData = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::FractureCreationCreationBehaviour*), "ProcessFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info, playerData});
  }
};
