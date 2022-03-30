// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Playables.PlayableBehaviour
#include "UnityEngine/Playables/PlayableBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: ObjectActivation
  class ObjectActivation;
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
  // Forward declaring type: ObjectActivationBehaviour
  class ObjectActivationBehaviour;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::ObjectActivationBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ObjectActivationBehaviour*, "VROSC", "ObjectActivationBehaviour");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.ObjectActivationBehaviour
  // [TokenAttribute] Offset: FFFFFFFF
  class ObjectActivationBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
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
    // private VROSC.ObjectActivation _objectActivation
    // Size: 0x8
    // Offset: 0x10
    ::VROSC::ObjectActivation* objectActivation;
    // Field size check
    static_assert(sizeof(::VROSC::ObjectActivation*) == 0x8);
    // [RangeAttribute] Offset: 0x673888
    // public System.Single Activation
    // Size: 0x4
    // Offset: 0x18
    float Activation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private VROSC.ObjectActivation _objectActivation
    ::VROSC::ObjectActivation*& dyn__objectActivation();
    // Get instance field reference: public System.Single Activation
    float& dyn_Activation();
    // public System.Void Setup(VROSC.ObjectActivation objectActivation)
    // Offset: 0x9184DC
    void Setup(::VROSC::ObjectActivation* objectActivation);
    // public System.Void .ctor()
    // Offset: 0x918504
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectActivationBehaviour* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::ObjectActivationBehaviour::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectActivationBehaviour*, creationType>()));
    }
    // public override System.Void ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    // Offset: 0x9184E4
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::Il2CppObject* playerData);
  }; // VROSC.ObjectActivationBehaviour
  #pragma pack(pop)
  static check_size<sizeof(ObjectActivationBehaviour), 24 + sizeof(float)> __VROSC_ObjectActivationBehaviourSizeCheck;
  static_assert(sizeof(ObjectActivationBehaviour) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::ObjectActivationBehaviour::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ObjectActivationBehaviour::*)(::VROSC::ObjectActivation*)>(&VROSC::ObjectActivationBehaviour::Setup)> {
  static const MethodInfo* get() {
    static auto* objectActivation = &::il2cpp_utils::GetClassFromName("VROSC", "ObjectActivation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ObjectActivationBehaviour*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectActivation});
  }
};
// Writing MetadataGetter for method: VROSC::ObjectActivationBehaviour::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::ObjectActivationBehaviour::ProcessFrame
// Il2CppName: ProcessFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ObjectActivationBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::Il2CppObject*)>(&VROSC::ObjectActivationBehaviour::ProcessFrame)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    static auto* playerData = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ObjectActivationBehaviour*), "ProcessFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info, playerData});
  }
};
