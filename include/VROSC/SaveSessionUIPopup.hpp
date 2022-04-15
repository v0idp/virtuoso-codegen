// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: VROSC.SessionsLibraryUI
#include "VROSC/SessionsLibraryUI.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: UIInputField
  class UIInputField;
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: UIButton
  class UIButton;
  // Forward declaring type: SessionItemUI
  class SessionItemUI;
  // Forward declaring type: UISlideToggle
  class UISlideToggle;
  // Forward declaring type: Error
  struct Error;
  // Forward declaring type: InputDevice
  class InputDevice;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: SaveSessionUIPopup
  class SaveSessionUIPopup;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::SaveSessionUIPopup);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SaveSessionUIPopup*, "VROSC", "SaveSessionUIPopup");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x91
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SaveSessionUIPopup
  // [TokenAttribute] Offset: FFFFFFFF
  class SaveSessionUIPopup : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private TMPro.TextMeshPro _headerText
    // Size: 0x8
    // Offset: 0x18
    ::TMPro::TextMeshPro* headerText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshPro*) == 0x8);
    // private UIInputField _nameInputField
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::UIInputField* nameInputField;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::UIInputField*) == 0x8);
    // private UIInputField _descriptionInputField
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::UIInputField* descriptionInputField;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::UIInputField*) == 0x8);
    // private UIInputField _tagsInputField
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::UIInputField* tagsInputField;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::UIInputField*) == 0x8);
    // private VROSC.UIButton _saveButton
    // Size: 0x8
    // Offset: 0x38
    ::VROSC::UIButton* saveButton;
    // Field size check
    static_assert(sizeof(::VROSC::UIButton*) == 0x8);
    // private VROSC.UIButton _cancelButton
    // Size: 0x8
    // Offset: 0x40
    ::VROSC::UIButton* cancelButton;
    // Field size check
    static_assert(sizeof(::VROSC::UIButton*) == 0x8);
    // private VROSC.SessionItemUI _previewUI
    // Size: 0x8
    // Offset: 0x48
    ::VROSC::SessionItemUI* previewUI;
    // Field size check
    static_assert(sizeof(::VROSC::SessionItemUI*) == 0x8);
    // private TMPro.TextMeshPro _savingStateText
    // Size: 0x8
    // Offset: 0x50
    ::TMPro::TextMeshPro* savingStateText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshPro*) == 0x8);
    // private VROSC.UISlideToggle _cloudSaveToggle
    // Size: 0x8
    // Offset: 0x58
    ::VROSC::UISlideToggle* cloudSaveToggle;
    // Field size check
    static_assert(sizeof(::VROSC::UISlideToggle*) == 0x8);
    // private VROSC.UISlideToggle _shareToggle
    // Size: 0x8
    // Offset: 0x60
    ::VROSC::UISlideToggle* shareToggle;
    // Field size check
    static_assert(sizeof(::VROSC::UISlideToggle*) == 0x8);
    // public System.Action`2<VROSC.SessionsLibraryUI/VROSC.SessionSaveData,System.Boolean> OnSaveConfirmed
    // Size: 0x8
    // Offset: 0x68
    ::System::Action_2<::VROSC::SessionsLibraryUI::SessionSaveData*, bool>* OnSaveConfirmed;
    // Field size check
    static_assert(sizeof(::System::Action_2<::VROSC::SessionsLibraryUI::SessionSaveData*, bool>*) == 0x8);
    // public System.Action OnSaveCanceled
    // Size: 0x8
    // Offset: 0x70
    ::System::Action* OnSaveCanceled;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private UIInputField _selectedInputField
    // Size: 0x8
    // Offset: 0x78
    ::GlobalNamespace::UIInputField* selectedInputField;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::UIInputField*) == 0x8);
    // private System.String _sessionId
    // Size: 0x8
    // Offset: 0x80
    ::StringW sessionId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _sessionDisplayName
    // Size: 0x8
    // Offset: 0x88
    ::StringW sessionDisplayName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean <IsNewSave>k__BackingField
    // Size: 0x1
    // Offset: 0x90
    bool IsNewSave;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private TMPro.TextMeshPro _headerText
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshPro*& dyn__headerText();
    // Get instance field reference: private UIInputField _nameInputField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::UIInputField*& dyn__nameInputField();
    // Get instance field reference: private UIInputField _descriptionInputField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::UIInputField*& dyn__descriptionInputField();
    // Get instance field reference: private UIInputField _tagsInputField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::UIInputField*& dyn__tagsInputField();
    // Get instance field reference: private VROSC.UIButton _saveButton
    [[deprecated("Use field access instead!")]] ::VROSC::UIButton*& dyn__saveButton();
    // Get instance field reference: private VROSC.UIButton _cancelButton
    [[deprecated("Use field access instead!")]] ::VROSC::UIButton*& dyn__cancelButton();
    // Get instance field reference: private VROSC.SessionItemUI _previewUI
    [[deprecated("Use field access instead!")]] ::VROSC::SessionItemUI*& dyn__previewUI();
    // Get instance field reference: private TMPro.TextMeshPro _savingStateText
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshPro*& dyn__savingStateText();
    // Get instance field reference: private VROSC.UISlideToggle _cloudSaveToggle
    [[deprecated("Use field access instead!")]] ::VROSC::UISlideToggle*& dyn__cloudSaveToggle();
    // Get instance field reference: private VROSC.UISlideToggle _shareToggle
    [[deprecated("Use field access instead!")]] ::VROSC::UISlideToggle*& dyn__shareToggle();
    // Get instance field reference: public System.Action`2<VROSC.SessionsLibraryUI/VROSC.SessionSaveData,System.Boolean> OnSaveConfirmed
    [[deprecated("Use field access instead!")]] ::System::Action_2<::VROSC::SessionsLibraryUI::SessionSaveData*, bool>*& dyn_OnSaveConfirmed();
    // Get instance field reference: public System.Action OnSaveCanceled
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_OnSaveCanceled();
    // Get instance field reference: private UIInputField _selectedInputField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::UIInputField*& dyn__selectedInputField();
    // Get instance field reference: private System.String _sessionId
    [[deprecated("Use field access instead!")]] ::StringW& dyn__sessionId();
    // Get instance field reference: private System.String _sessionDisplayName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__sessionDisplayName();
    // Get instance field reference: private System.Boolean <IsNewSave>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsNewSave$k__BackingField();
    // public System.Boolean get_IsNewSave()
    // Offset: 0xDE0650
    bool get_IsNewSave();
    // private System.Void set_IsNewSave(System.Boolean value)
    // Offset: 0xDE0658
    void set_IsNewSave(bool value);
    // public System.Void .ctor()
    // Offset: 0xDE1E08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SaveSessionUIPopup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SaveSessionUIPopup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SaveSessionUIPopup*, creationType>()));
    }
    // private System.Void Awake()
    // Offset: 0xDE0664
    void Awake();
    // private System.Void OnDestroy()
    // Offset: 0xDE0A38
    void OnDestroy();
    // public System.Void SetActive(System.Boolean isActive, System.Boolean isNewSave, System.Boolean allowOnline, System.Boolean keepData)
    // Offset: 0xDE0E0C
    void SetActive(bool isActive, bool isNewSave, bool allowOnline, bool keepData);
    // private System.Void PopulateData(System.Boolean isNewSave, System.Boolean allowOnline, System.Boolean keepData)
    // Offset: 0xDE1080
    void PopulateData(bool isNewSave, bool allowOnline, bool keepData);
    // public System.Void UpdateSavingState(VROSC.Error error)
    // Offset: 0xDE1734
    void UpdateSavingState(::VROSC::Error error);
    // public System.Void UpdateSavingState(System.Single progress)
    // Offset: 0xDE1854
    void UpdateSavingState(float progress);
    // public System.Void UpdateUploadingState(System.Single progress)
    // Offset: 0xDE1988
    void UpdateUploadingState(float progress);
    // public System.Void UpdatePreviewUploadingState(System.Single progress)
    // Offset: 0xDE1A70
    void UpdatePreviewUploadingState(float progress);
    // private System.Int32 GetProgressPercent(System.Single progress)
    // Offset: 0xDE193C
    int GetProgressPercent(float progress);
    // private System.Void EnableInput(System.Boolean enable)
    // Offset: 0xDE0ED4
    void EnableInput(bool enable);
    // private System.Void SaveButtonPressed()
    // Offset: 0xDE1B58
    void SaveButtonPressed();
    // private System.Void CancelButtonPressed()
    // Offset: 0xDE1D08
    void CancelButtonPressed();
    // private System.Void SaveNameChanged(System.String saveName)
    // Offset: 0xDE1D48
    void SaveNameChanged(::StringW saveName);
    // private System.Void CloudSaveToggled(VROSC.InputDevice inputDevice, System.Boolean isToggled)
    // Offset: 0xDE1D50
    void CloudSaveToggled(::VROSC::InputDevice* inputDevice, bool isToggled);
    // private System.Void ShareToggled(VROSC.InputDevice inputDevice, System.Boolean isToggled)
    // Offset: 0xDE1D90
    void ShareToggled(::VROSC::InputDevice* inputDevice, bool isToggled);
    // private System.Void InputFieldSelected(UIInputField inputField)
    // Offset: 0xDE1DD0
    void InputFieldSelected(::GlobalNamespace::UIInputField* inputField);
    // private System.Void UpdatePreview()
    // Offset: 0xDE1610
    void UpdatePreview();
  }; // VROSC.SaveSessionUIPopup
  #pragma pack(pop)
  static check_size<sizeof(SaveSessionUIPopup), 144 + sizeof(bool)> __VROSC_SaveSessionUIPopupSizeCheck;
  static_assert(sizeof(SaveSessionUIPopup) == 0x91);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SaveSessionUIPopup::get_IsNewSave
// Il2CppName: get_IsNewSave
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::SaveSessionUIPopup::*)()>(&VROSC::SaveSessionUIPopup::get_IsNewSave)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveSessionUIPopup*), "get_IsNewSave", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SaveSessionUIPopup::set_IsNewSave
// Il2CppName: set_IsNewSave
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveSessionUIPopup::*)(bool)>(&VROSC::SaveSessionUIPopup::set_IsNewSave)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveSessionUIPopup*), "set_IsNewSave", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::SaveSessionUIPopup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::SaveSessionUIPopup::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveSessionUIPopup::*)()>(&VROSC::SaveSessionUIPopup::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveSessionUIPopup*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SaveSessionUIPopup::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveSessionUIPopup::*)()>(&VROSC::SaveSessionUIPopup::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveSessionUIPopup*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SaveSessionUIPopup::SetActive
// Il2CppName: SetActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveSessionUIPopup::*)(bool, bool, bool, bool)>(&VROSC::SaveSessionUIPopup::SetActive)> {
  static const MethodInfo* get() {
    static auto* isActive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isNewSave = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* allowOnline = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* keepData = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveSessionUIPopup*), "SetActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isActive, isNewSave, allowOnline, keepData});
  }
};
// Writing MetadataGetter for method: VROSC::SaveSessionUIPopup::PopulateData
// Il2CppName: PopulateData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveSessionUIPopup::*)(bool, bool, bool)>(&VROSC::SaveSessionUIPopup::PopulateData)> {
  static const MethodInfo* get() {
    static auto* isNewSave = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* allowOnline = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* keepData = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveSessionUIPopup*), "PopulateData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isNewSave, allowOnline, keepData});
  }
};
// Writing MetadataGetter for method: VROSC::SaveSessionUIPopup::UpdateSavingState
// Il2CppName: UpdateSavingState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveSessionUIPopup::*)(::VROSC::Error)>(&VROSC::SaveSessionUIPopup::UpdateSavingState)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveSessionUIPopup*), "UpdateSavingState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: VROSC::SaveSessionUIPopup::UpdateSavingState
// Il2CppName: UpdateSavingState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveSessionUIPopup::*)(float)>(&VROSC::SaveSessionUIPopup::UpdateSavingState)> {
  static const MethodInfo* get() {
    static auto* progress = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveSessionUIPopup*), "UpdateSavingState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{progress});
  }
};
// Writing MetadataGetter for method: VROSC::SaveSessionUIPopup::UpdateUploadingState
// Il2CppName: UpdateUploadingState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveSessionUIPopup::*)(float)>(&VROSC::SaveSessionUIPopup::UpdateUploadingState)> {
  static const MethodInfo* get() {
    static auto* progress = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveSessionUIPopup*), "UpdateUploadingState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{progress});
  }
};
// Writing MetadataGetter for method: VROSC::SaveSessionUIPopup::UpdatePreviewUploadingState
// Il2CppName: UpdatePreviewUploadingState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveSessionUIPopup::*)(float)>(&VROSC::SaveSessionUIPopup::UpdatePreviewUploadingState)> {
  static const MethodInfo* get() {
    static auto* progress = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveSessionUIPopup*), "UpdatePreviewUploadingState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{progress});
  }
};
// Writing MetadataGetter for method: VROSC::SaveSessionUIPopup::GetProgressPercent
// Il2CppName: GetProgressPercent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::SaveSessionUIPopup::*)(float)>(&VROSC::SaveSessionUIPopup::GetProgressPercent)> {
  static const MethodInfo* get() {
    static auto* progress = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveSessionUIPopup*), "GetProgressPercent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{progress});
  }
};
// Writing MetadataGetter for method: VROSC::SaveSessionUIPopup::EnableInput
// Il2CppName: EnableInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveSessionUIPopup::*)(bool)>(&VROSC::SaveSessionUIPopup::EnableInput)> {
  static const MethodInfo* get() {
    static auto* enable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveSessionUIPopup*), "EnableInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enable});
  }
};
// Writing MetadataGetter for method: VROSC::SaveSessionUIPopup::SaveButtonPressed
// Il2CppName: SaveButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveSessionUIPopup::*)()>(&VROSC::SaveSessionUIPopup::SaveButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveSessionUIPopup*), "SaveButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SaveSessionUIPopup::CancelButtonPressed
// Il2CppName: CancelButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveSessionUIPopup::*)()>(&VROSC::SaveSessionUIPopup::CancelButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveSessionUIPopup*), "CancelButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SaveSessionUIPopup::SaveNameChanged
// Il2CppName: SaveNameChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveSessionUIPopup::*)(::StringW)>(&VROSC::SaveSessionUIPopup::SaveNameChanged)> {
  static const MethodInfo* get() {
    static auto* saveName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveSessionUIPopup*), "SaveNameChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{saveName});
  }
};
// Writing MetadataGetter for method: VROSC::SaveSessionUIPopup::CloudSaveToggled
// Il2CppName: CloudSaveToggled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveSessionUIPopup::*)(::VROSC::InputDevice*, bool)>(&VROSC::SaveSessionUIPopup::CloudSaveToggled)> {
  static const MethodInfo* get() {
    static auto* inputDevice = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* isToggled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveSessionUIPopup*), "CloudSaveToggled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputDevice, isToggled});
  }
};
// Writing MetadataGetter for method: VROSC::SaveSessionUIPopup::ShareToggled
// Il2CppName: ShareToggled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveSessionUIPopup::*)(::VROSC::InputDevice*, bool)>(&VROSC::SaveSessionUIPopup::ShareToggled)> {
  static const MethodInfo* get() {
    static auto* inputDevice = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* isToggled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveSessionUIPopup*), "ShareToggled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputDevice, isToggled});
  }
};
// Writing MetadataGetter for method: VROSC::SaveSessionUIPopup::InputFieldSelected
// Il2CppName: InputFieldSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveSessionUIPopup::*)(::GlobalNamespace::UIInputField*)>(&VROSC::SaveSessionUIPopup::InputFieldSelected)> {
  static const MethodInfo* get() {
    static auto* inputField = &::il2cpp_utils::GetClassFromName("", "UIInputField")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveSessionUIPopup*), "InputFieldSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputField});
  }
};
// Writing MetadataGetter for method: VROSC::SaveSessionUIPopup::UpdatePreview
// Il2CppName: UpdatePreview
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveSessionUIPopup::*)()>(&VROSC::SaveSessionUIPopup::UpdatePreview)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveSessionUIPopup*), "UpdatePreview", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
