// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.TutorialStep
#include "VROSC/TutorialStep.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableAsset
  class PlayableAsset;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: RerecordTutorialStep
  class RerecordTutorialStep;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::RerecordTutorialStep);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::RerecordTutorialStep*, "VROSC", "RerecordTutorialStep");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.RerecordTutorialStep
  // [TokenAttribute] Offset: FFFFFFFF
  class RerecordTutorialStep : public ::VROSC::TutorialStep {
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
    // private UnityEngine.Playables.PlayableAsset _defaultPlayable
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::Playables::PlayableAsset* defaultPlayable;
    // Field size check
    static_assert(sizeof(::UnityEngine::Playables::PlayableAsset*) == 0x8);
    // private UnityEngine.Playables.PlayableAsset _alternativePlayable
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::Playables::PlayableAsset* alternativePlayable;
    // Field size check
    static_assert(sizeof(::UnityEngine::Playables::PlayableAsset*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.Playables.PlayableAsset _defaultPlayable
    ::UnityEngine::Playables::PlayableAsset*& dyn__defaultPlayable();
    // Get instance field reference: private UnityEngine.Playables.PlayableAsset _alternativePlayable
    ::UnityEngine::Playables::PlayableAsset*& dyn__alternativePlayable();
    // public System.Void .ctor()
    // Offset: 0x99A6A4
    // Implemented from: VROSC.TutorialStep
    // Base method: System.Void TutorialStep::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RerecordTutorialStep* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::RerecordTutorialStep::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RerecordTutorialStep*, creationType>()));
    }
    // public override System.Void OnEnter(params System.Object[] values)
    // Offset: 0x99A1EC
    // Implemented from: VROSC.TutorialStep
    // Base method: System.Void TutorialStep::OnEnter(params System.Object[] values)
    void OnEnter(::ArrayW<::Il2CppObject*> values);
    // public override System.Void OnExit()
    // Offset: 0x99A61C
    // Implemented from: VROSC.TutorialStep
    // Base method: System.Void TutorialStep::OnExit()
    void OnExit();
  }; // VROSC.RerecordTutorialStep
  #pragma pack(pop)
  static check_size<sizeof(RerecordTutorialStep), 88 + sizeof(::UnityEngine::Playables::PlayableAsset*)> __VROSC_RerecordTutorialStepSizeCheck;
  static_assert(sizeof(RerecordTutorialStep) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::RerecordTutorialStep::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::RerecordTutorialStep::OnEnter
// Il2CppName: OnEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::RerecordTutorialStep::*)(::ArrayW<::Il2CppObject*>)>(&VROSC::RerecordTutorialStep::OnEnter)> {
  static const MethodInfo* get() {
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::RerecordTutorialStep*), "OnEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{values});
  }
};
// Writing MetadataGetter for method: VROSC::RerecordTutorialStep::OnExit
// Il2CppName: OnExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::RerecordTutorialStep::*)()>(&VROSC::RerecordTutorialStep::OnExit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::RerecordTutorialStep*), "OnExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
