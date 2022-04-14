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
// Including type: VROSC.WidgetSettings
#include "VROSC/WidgetSettings.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: TutorialEvent
  struct TutorialEvent;
  // Forward declaring type: PatchSettings
  class PatchSettings;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: PlayWithOneSixteenthTutorialStep
  class PlayWithOneSixteenthTutorialStep;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::PlayWithOneSixteenthTutorialStep);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PlayWithOneSixteenthTutorialStep*, "VROSC", "PlayWithOneSixteenthTutorialStep");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x5C
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.PlayWithOneSixteenthTutorialStep
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayWithOneSixteenthTutorialStep : public ::VROSC::TutorialStep {
    public:
    public:
    // private System.Int32 _notesPlayed
    // Size: 0x4
    // Offset: 0x58
    int notesPlayed;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Int32 _notesPlayed
    [[deprecated]] int& dyn__notesPlayed();
    // public System.Void TutorialEventTriggered(VROSC.TutorialEvent tutorialEvent)
    // Offset: 0xAE1A00
    void TutorialEventTriggered(::VROSC::TutorialEvent tutorialEvent);
    // private System.Void NotePlayed(VROSC.WidgetSettings/VROSC.Identifier id, VROSC.PatchSettings patch)
    // Offset: 0xAE1BE8
    void NotePlayed(::VROSC::WidgetSettings::Identifier id, ::VROSC::PatchSettings* patch);
    // public System.Void .ctor()
    // Offset: 0xAE1D44
    // Implemented from: VROSC.TutorialStep
    // Base method: System.Void TutorialStep::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayWithOneSixteenthTutorialStep* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::PlayWithOneSixteenthTutorialStep::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayWithOneSixteenthTutorialStep*, creationType>()));
    }
    // public override System.Void OnEnter(params System.Object[] values)
    // Offset: 0xAE18FC
    // Implemented from: VROSC.TutorialStep
    // Base method: System.Void TutorialStep::OnEnter(params System.Object[] values)
    void OnEnter(::ArrayW<::Il2CppObject*> values);
  }; // VROSC.PlayWithOneSixteenthTutorialStep
  #pragma pack(pop)
  static check_size<sizeof(PlayWithOneSixteenthTutorialStep), 88 + sizeof(int)> __VROSC_PlayWithOneSixteenthTutorialStepSizeCheck;
  static_assert(sizeof(PlayWithOneSixteenthTutorialStep) == 0x5C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::PlayWithOneSixteenthTutorialStep::TutorialEventTriggered
// Il2CppName: TutorialEventTriggered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PlayWithOneSixteenthTutorialStep::*)(::VROSC::TutorialEvent)>(&VROSC::PlayWithOneSixteenthTutorialStep::TutorialEventTriggered)> {
  static const MethodInfo* get() {
    static auto* tutorialEvent = &::il2cpp_utils::GetClassFromName("VROSC", "TutorialEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::PlayWithOneSixteenthTutorialStep*), "TutorialEventTriggered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tutorialEvent});
  }
};
// Writing MetadataGetter for method: VROSC::PlayWithOneSixteenthTutorialStep::NotePlayed
// Il2CppName: NotePlayed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PlayWithOneSixteenthTutorialStep::*)(::VROSC::WidgetSettings::Identifier, ::VROSC::PatchSettings*)>(&VROSC::PlayWithOneSixteenthTutorialStep::NotePlayed)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("VROSC", "WidgetSettings/Identifier")->byval_arg;
    static auto* patch = &::il2cpp_utils::GetClassFromName("VROSC", "PatchSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::PlayWithOneSixteenthTutorialStep*), "NotePlayed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id, patch});
  }
};
// Writing MetadataGetter for method: VROSC::PlayWithOneSixteenthTutorialStep::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::PlayWithOneSixteenthTutorialStep::OnEnter
// Il2CppName: OnEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PlayWithOneSixteenthTutorialStep::*)(::ArrayW<::Il2CppObject*>)>(&VROSC::PlayWithOneSixteenthTutorialStep::OnEnter)> {
  static const MethodInfo* get() {
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::PlayWithOneSixteenthTutorialStep*), "OnEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{values});
  }
};
