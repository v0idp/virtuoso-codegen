// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Playables.PlayableBehaviour
#include "UnityEngine/Playables/PlayableBehaviour.hpp"
// Including type: VROSC.NoteBoard/VROSC.PlayAxis
#include "VROSC/NoteBoard_PlayAxis.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: TouchableObject
  class TouchableObject;
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
  // Forward declaring type: IndividualHintNoteBehaviour
  class IndividualHintNoteBehaviour;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::IndividualHintNoteBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::IndividualHintNoteBehaviour*, "VROSC", "IndividualHintNoteBehaviour");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.IndividualHintNoteBehaviour
  // [TokenAttribute] Offset: FFFFFFFF
  class IndividualHintNoteBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
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
    // private VROSC.TouchableObject _touchable
    // Size: 0x8
    // Offset: 0x10
    ::VROSC::TouchableObject* touchable;
    // Field size check
    static_assert(sizeof(::VROSC::TouchableObject*) == 0x8);
    // public VROSC.NoteBoard/VROSC.PlayAxis Axis
    // Size: 0x14
    // Offset: 0x18
    ::VROSC::NoteBoard::PlayAxis Axis;
    // Field size check
    static_assert(sizeof(::VROSC::NoteBoard::PlayAxis) == 0x14);
    // [RangeAttribute] Offset: 0x673810
    // public System.Single Pressed
    // Size: 0x4
    // Offset: 0x1C
    float Pressed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private VROSC.TouchableObject _touchable
    ::VROSC::TouchableObject*& dyn__touchable();
    // Get instance field reference: public VROSC.NoteBoard/VROSC.PlayAxis Axis
    ::VROSC::NoteBoard::PlayAxis& dyn_Axis();
    // Get instance field reference: public System.Single Pressed
    float& dyn_Pressed();
    // public System.Void Setup(VROSC.TouchableObject touchable)
    // Offset: 0x8A0770
    void Setup(::VROSC::TouchableObject* touchable);
    // public System.Void .ctor()
    // Offset: 0x8A0820
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IndividualHintNoteBehaviour* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::IndividualHintNoteBehaviour::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IndividualHintNoteBehaviour*, creationType>()));
    }
    // public override System.Void ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    // Offset: 0x8A0778
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::Il2CppObject* playerData);
  }; // VROSC.IndividualHintNoteBehaviour
  #pragma pack(pop)
  static check_size<sizeof(IndividualHintNoteBehaviour), 28 + sizeof(float)> __VROSC_IndividualHintNoteBehaviourSizeCheck;
  static_assert(sizeof(IndividualHintNoteBehaviour) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::IndividualHintNoteBehaviour::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::IndividualHintNoteBehaviour::*)(::VROSC::TouchableObject*)>(&VROSC::IndividualHintNoteBehaviour::Setup)> {
  static const MethodInfo* get() {
    static auto* touchable = &::il2cpp_utils::GetClassFromName("VROSC", "TouchableObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::IndividualHintNoteBehaviour*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{touchable});
  }
};
// Writing MetadataGetter for method: VROSC::IndividualHintNoteBehaviour::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::IndividualHintNoteBehaviour::ProcessFrame
// Il2CppName: ProcessFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::IndividualHintNoteBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::Il2CppObject*)>(&VROSC::IndividualHintNoteBehaviour::ProcessFrame)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    static auto* playerData = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::IndividualHintNoteBehaviour*), "ProcessFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info, playerData});
  }
};
