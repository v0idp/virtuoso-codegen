// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC::UI
namespace VROSC::UI {
  // Forward declaring type: UIColorGetter
  class UIColorGetter;
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: AdjustableMesh
  class AdjustableMesh;
  // Forward declaring type: MinMaxFloat
  class MinMaxFloat;
  // Forward declaring type: UIButton
  class UIButton;
  // Forward declaring type: LoopStation
  class LoopStation;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: LoopPlayerRecordingState
  class LoopPlayerRecordingState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::LoopPlayerRecordingState);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlayerRecordingState*, "VROSC", "LoopPlayerRecordingState");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.LoopPlayerRecordingState
  // [TokenAttribute] Offset: FFFFFFFF
  class LoopPlayerRecordingState : public ::UnityEngine::MonoBehaviour {
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
    // protected VROSC.UI.UIColorGetter _sliderColor
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::UI::UIColorGetter* sliderColor;
    // Field size check
    static_assert(sizeof(::VROSC::UI::UIColorGetter*) == 0x8);
    // protected VROSC.AdjustableMesh _adjustableMesh
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::AdjustableMesh* adjustableMesh;
    // Field size check
    static_assert(sizeof(::VROSC::AdjustableMesh*) == 0x8);
    // protected VROSC.MinMaxFloat _uvRange
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::MinMaxFloat* uvRange;
    // Field size check
    static_assert(sizeof(::VROSC::MinMaxFloat*) == 0x8);
    // private TMPro.TextMeshPro _recordingLabel
    // Size: 0x8
    // Offset: 0x30
    ::TMPro::TextMeshPro* recordingLabel;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshPro*) == 0x8);
    // private VROSC.UIButton _cancelButton
    // Size: 0x8
    // Offset: 0x38
    ::VROSC::UIButton* cancelButton;
    // Field size check
    static_assert(sizeof(::VROSC::UIButton*) == 0x8);
    // private VROSC.UIButton _restartButton
    // Size: 0x8
    // Offset: 0x40
    ::VROSC::UIButton* restartButton;
    // Field size check
    static_assert(sizeof(::VROSC::UIButton*) == 0x8);
    // private VROSC.LoopStation _loopStation
    // Size: 0x8
    // Offset: 0x48
    ::VROSC::LoopStation* loopStation;
    // Field size check
    static_assert(sizeof(::VROSC::LoopStation*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: protected VROSC.UI.UIColorGetter _sliderColor
    ::VROSC::UI::UIColorGetter*& dyn__sliderColor();
    // Get instance field reference: protected VROSC.AdjustableMesh _adjustableMesh
    ::VROSC::AdjustableMesh*& dyn__adjustableMesh();
    // Get instance field reference: protected VROSC.MinMaxFloat _uvRange
    ::VROSC::MinMaxFloat*& dyn__uvRange();
    // Get instance field reference: private TMPro.TextMeshPro _recordingLabel
    ::TMPro::TextMeshPro*& dyn__recordingLabel();
    // Get instance field reference: private VROSC.UIButton _cancelButton
    ::VROSC::UIButton*& dyn__cancelButton();
    // Get instance field reference: private VROSC.UIButton _restartButton
    ::VROSC::UIButton*& dyn__restartButton();
    // Get instance field reference: private VROSC.LoopStation _loopStation
    ::VROSC::LoopStation*& dyn__loopStation();
    // protected System.Void Awake()
    // Offset: 0x908630
    void Awake();
    // private System.Void RestartRecordingButtonPressed()
    // Offset: 0x908944
    void RestartRecordingButtonPressed();
    // private System.Void CancelRecordingButtonPressed()
    // Offset: 0x90899C
    void CancelRecordingButtonPressed();
    // public System.Void Setup(VROSC.LoopStation loopStation, System.Boolean firstLoop)
    // Offset: 0x9089B8
    void Setup(::VROSC::LoopStation* loopStation, bool firstLoop);
    // public System.Void SetActive(System.Boolean active)
    // Offset: 0x908A18
    void SetActive(bool active);
    // private System.Void SetColor()
    // Offset: 0x908768
    void SetColor();
    // private System.Void SetRecordProgressValue(System.Single value)
    // Offset: 0x908868
    void SetRecordProgressValue(float value);
    // private System.Void Update()
    // Offset: 0x908A4C
    void Update();
    // public System.Void SetRecordingText(System.String recordingtext)
    // Offset: 0x908A74
    void SetRecordingText(::StringW recordingtext);
    // public System.Void .ctor()
    // Offset: 0x908A98
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoopPlayerRecordingState* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::LoopPlayerRecordingState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoopPlayerRecordingState*, creationType>()));
    }
  }; // VROSC.LoopPlayerRecordingState
  #pragma pack(pop)
  static check_size<sizeof(LoopPlayerRecordingState), 72 + sizeof(::VROSC::LoopStation*)> __VROSC_LoopPlayerRecordingStateSizeCheck;
  static_assert(sizeof(LoopPlayerRecordingState) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::LoopPlayerRecordingState::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerRecordingState::*)()>(&VROSC::LoopPlayerRecordingState::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerRecordingState*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerRecordingState::RestartRecordingButtonPressed
// Il2CppName: RestartRecordingButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerRecordingState::*)()>(&VROSC::LoopPlayerRecordingState::RestartRecordingButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerRecordingState*), "RestartRecordingButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerRecordingState::CancelRecordingButtonPressed
// Il2CppName: CancelRecordingButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerRecordingState::*)()>(&VROSC::LoopPlayerRecordingState::CancelRecordingButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerRecordingState*), "CancelRecordingButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerRecordingState::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerRecordingState::*)(::VROSC::LoopStation*, bool)>(&VROSC::LoopPlayerRecordingState::Setup)> {
  static const MethodInfo* get() {
    static auto* loopStation = &::il2cpp_utils::GetClassFromName("VROSC", "LoopStation")->byval_arg;
    static auto* firstLoop = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerRecordingState*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{loopStation, firstLoop});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerRecordingState::SetActive
// Il2CppName: SetActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerRecordingState::*)(bool)>(&VROSC::LoopPlayerRecordingState::SetActive)> {
  static const MethodInfo* get() {
    static auto* active = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerRecordingState*), "SetActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{active});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerRecordingState::SetColor
// Il2CppName: SetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerRecordingState::*)()>(&VROSC::LoopPlayerRecordingState::SetColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerRecordingState*), "SetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerRecordingState::SetRecordProgressValue
// Il2CppName: SetRecordProgressValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerRecordingState::*)(float)>(&VROSC::LoopPlayerRecordingState::SetRecordProgressValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerRecordingState*), "SetRecordProgressValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerRecordingState::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerRecordingState::*)()>(&VROSC::LoopPlayerRecordingState::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerRecordingState*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerRecordingState::SetRecordingText
// Il2CppName: SetRecordingText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerRecordingState::*)(::StringW)>(&VROSC::LoopPlayerRecordingState::SetRecordingText)> {
  static const MethodInfo* get() {
    static auto* recordingtext = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerRecordingState*), "SetRecordingText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{recordingtext});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerRecordingState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!