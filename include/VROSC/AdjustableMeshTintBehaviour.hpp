// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Playables.PlayableBehaviour
#include "UnityEngine/Playables/PlayableBehaviour.hpp"
// Including type: VROSC.AnimatedAppear/VROSC.Mode
#include "VROSC/AnimatedAppear_Mode.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: AdjustableMesh
  class AdjustableMesh;
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
  // Forward declaring type: AdjustableMeshTintBehaviour
  class AdjustableMeshTintBehaviour;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::AdjustableMeshTintBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AdjustableMeshTintBehaviour*, "VROSC", "AdjustableMeshTintBehaviour");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.AdjustableMeshTintBehaviour
  // [TokenAttribute] Offset: FFFFFFFF
  class AdjustableMeshTintBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
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
    // private VROSC.AdjustableMesh _target
    // Size: 0x8
    // Offset: 0x10
    ::VROSC::AdjustableMesh* target;
    // Field size check
    static_assert(sizeof(::VROSC::AdjustableMesh*) == 0x8);
    // public VROSC.AnimatedAppear/VROSC.Mode _mode
    // Size: 0x14
    // Offset: 0x18
    ::VROSC::AnimatedAppear::Mode mode;
    // Field size check
    static_assert(sizeof(::VROSC::AnimatedAppear::Mode) == 0x14);
    // private UnityEngine.Color _tintColor
    // Size: 0x10
    // Offset: 0x1C
    ::UnityEngine::Color tintColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // [RangeAttribute] Offset: 0x673B58
    // public System.Single Tint
    // Size: 0x4
    // Offset: 0x2C
    float Tint;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private VROSC.AdjustableMesh _target
    ::VROSC::AdjustableMesh*& dyn__target();
    // Get instance field reference: public VROSC.AnimatedAppear/VROSC.Mode _mode
    ::VROSC::AnimatedAppear::Mode& dyn__mode();
    // Get instance field reference: private UnityEngine.Color _tintColor
    ::UnityEngine::Color& dyn__tintColor();
    // Get instance field reference: public System.Single Tint
    float& dyn_Tint();
    // public System.Void Setup(VROSC.AdjustableMesh target, VROSC.AnimatedAppear/VROSC.Mode mode)
    // Offset: 0x136A054
    void Setup(::VROSC::AdjustableMesh* target, ::VROSC::AnimatedAppear::Mode mode);
    // public System.Void .ctor()
    // Offset: 0x136A140
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AdjustableMeshTintBehaviour* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::AdjustableMeshTintBehaviour::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AdjustableMeshTintBehaviour*, creationType>()));
    }
    // public override System.Void ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    // Offset: 0x136A088
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::Il2CppObject* playerData);
  }; // VROSC.AdjustableMeshTintBehaviour
  #pragma pack(pop)
  static check_size<sizeof(AdjustableMeshTintBehaviour), 44 + sizeof(float)> __VROSC_AdjustableMeshTintBehaviourSizeCheck;
  static_assert(sizeof(AdjustableMeshTintBehaviour) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::AdjustableMeshTintBehaviour::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AdjustableMeshTintBehaviour::*)(::VROSC::AdjustableMesh*, ::VROSC::AnimatedAppear::Mode)>(&VROSC::AdjustableMeshTintBehaviour::Setup)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("VROSC", "AdjustableMesh")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("VROSC", "AnimatedAppear/Mode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AdjustableMeshTintBehaviour*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, mode});
  }
};
// Writing MetadataGetter for method: VROSC::AdjustableMeshTintBehaviour::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::AdjustableMeshTintBehaviour::ProcessFrame
// Il2CppName: ProcessFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AdjustableMeshTintBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::Il2CppObject*)>(&VROSC::AdjustableMeshTintBehaviour::ProcessFrame)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    static auto* playerData = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AdjustableMeshTintBehaviour*), "ProcessFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info, playerData});
  }
};
