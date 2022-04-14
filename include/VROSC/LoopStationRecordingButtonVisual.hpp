// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: VROSC.LoopStationRecorder
#include "VROSC/LoopStationRecorder.hpp"
// Including type: VROSC.LoopStationLoopHandler
#include "VROSC/LoopStationLoopHandler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: LoopStationRecordingButtonVisual
  class LoopStationRecordingButtonVisual;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::LoopStationRecordingButtonVisual);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationRecordingButtonVisual*, "VROSC", "LoopStationRecordingButtonVisual");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.LoopStationRecordingButtonVisual
  // [TokenAttribute] Offset: FFFFFFFF
  class LoopStationRecordingButtonVisual : public ::Il2CppObject {
    public:
    public:
    // private UnityEngine.Color _notActiveColor
    // Size: 0x10
    // Offset: 0x10
    ::UnityEngine::Color notActiveColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _offColor
    // Size: 0x10
    // Offset: 0x20
    ::UnityEngine::Color offColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _waitingColor
    // Size: 0x10
    // Offset: 0x30
    ::UnityEngine::Color waitingColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _finishingColor
    // Size: 0x10
    // Offset: 0x40
    ::UnityEngine::Color finishingColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _recordingColor
    // Size: 0x10
    // Offset: 0x50
    ::UnityEngine::Color recordingColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _playingColor
    // Size: 0x10
    // Offset: 0x60
    ::UnityEngine::Color playingColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Get instance field reference: private UnityEngine.Color _notActiveColor
    [[deprecated]] ::UnityEngine::Color& dyn__notActiveColor();
    // Get instance field reference: private UnityEngine.Color _offColor
    [[deprecated]] ::UnityEngine::Color& dyn__offColor();
    // Get instance field reference: private UnityEngine.Color _waitingColor
    [[deprecated]] ::UnityEngine::Color& dyn__waitingColor();
    // Get instance field reference: private UnityEngine.Color _finishingColor
    [[deprecated]] ::UnityEngine::Color& dyn__finishingColor();
    // Get instance field reference: private UnityEngine.Color _recordingColor
    [[deprecated]] ::UnityEngine::Color& dyn__recordingColor();
    // Get instance field reference: private UnityEngine.Color _playingColor
    [[deprecated]] ::UnityEngine::Color& dyn__playingColor();
    // public UnityEngine.Color get_NotActiveColor()
    // Offset: 0x1977820
    ::UnityEngine::Color get_NotActiveColor();
    // public System.String GetButtonTextByState(VROSC.LoopStationRecorder/VROSC.RecordingState recordingState, VROSC.LoopStationLoopHandler/VROSC.LooperState looperstate)
    // Offset: 0x1977084
    ::StringW GetButtonTextByState(::VROSC::LoopStationRecorder::RecordingState recordingState, ::VROSC::LoopStationLoopHandler::LooperState looperstate);
    // public UnityEngine.Color GetColorByRecordingState(VROSC.LoopStationRecorder/VROSC.RecordingState recordingState)
    // Offset: 0x197645C
    ::UnityEngine::Color GetColorByRecordingState(::VROSC::LoopStationRecorder::RecordingState recordingState);
    // public System.Boolean ShouldLengthSelectionBeDisabled(VROSC.LoopStationRecorder/VROSC.RecordingState recordingState, VROSC.LoopStationLoopHandler/VROSC.LooperState looperstate)
    // Offset: 0x19771F0
    bool ShouldLengthSelectionBeDisabled(::VROSC::LoopStationRecorder::RecordingState recordingState, ::VROSC::LoopStationLoopHandler::LooperState looperstate);
    // public System.Void .ctor()
    // Offset: 0x197782C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoopStationRecordingButtonVisual* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::LoopStationRecordingButtonVisual::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoopStationRecordingButtonVisual*, creationType>()));
    }
  }; // VROSC.LoopStationRecordingButtonVisual
  #pragma pack(pop)
  static check_size<sizeof(LoopStationRecordingButtonVisual), 96 + sizeof(::UnityEngine::Color)> __VROSC_LoopStationRecordingButtonVisualSizeCheck;
  static_assert(sizeof(LoopStationRecordingButtonVisual) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::LoopStationRecordingButtonVisual::get_NotActiveColor
// Il2CppName: get_NotActiveColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (VROSC::LoopStationRecordingButtonVisual::*)()>(&VROSC::LoopStationRecordingButtonVisual::get_NotActiveColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationRecordingButtonVisual*), "get_NotActiveColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationRecordingButtonVisual::GetButtonTextByState
// Il2CppName: GetButtonTextByState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VROSC::LoopStationRecordingButtonVisual::*)(::VROSC::LoopStationRecorder::RecordingState, ::VROSC::LoopStationLoopHandler::LooperState)>(&VROSC::LoopStationRecordingButtonVisual::GetButtonTextByState)> {
  static const MethodInfo* get() {
    static auto* recordingState = &::il2cpp_utils::GetClassFromName("VROSC", "LoopStationRecorder/RecordingState")->byval_arg;
    static auto* looperstate = &::il2cpp_utils::GetClassFromName("VROSC", "LoopStationLoopHandler/LooperState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationRecordingButtonVisual*), "GetButtonTextByState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{recordingState, looperstate});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationRecordingButtonVisual::GetColorByRecordingState
// Il2CppName: GetColorByRecordingState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (VROSC::LoopStationRecordingButtonVisual::*)(::VROSC::LoopStationRecorder::RecordingState)>(&VROSC::LoopStationRecordingButtonVisual::GetColorByRecordingState)> {
  static const MethodInfo* get() {
    static auto* recordingState = &::il2cpp_utils::GetClassFromName("VROSC", "LoopStationRecorder/RecordingState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationRecordingButtonVisual*), "GetColorByRecordingState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{recordingState});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationRecordingButtonVisual::ShouldLengthSelectionBeDisabled
// Il2CppName: ShouldLengthSelectionBeDisabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::LoopStationRecordingButtonVisual::*)(::VROSC::LoopStationRecorder::RecordingState, ::VROSC::LoopStationLoopHandler::LooperState)>(&VROSC::LoopStationRecordingButtonVisual::ShouldLengthSelectionBeDisabled)> {
  static const MethodInfo* get() {
    static auto* recordingState = &::il2cpp_utils::GetClassFromName("VROSC", "LoopStationRecorder/RecordingState")->byval_arg;
    static auto* looperstate = &::il2cpp_utils::GetClassFromName("VROSC", "LoopStationLoopHandler/LooperState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationRecordingButtonVisual*), "ShouldLengthSelectionBeDisabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{recordingState, looperstate});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationRecordingButtonVisual::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
