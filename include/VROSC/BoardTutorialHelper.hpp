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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: TutorialBlinkingUIElement
  class TutorialBlinkingUIElement;
  // Forward declaring type: Interactable
  class Interactable;
  // Forward declaring type: NoteBoardNoteController
  class NoteBoardNoteController;
  // Forward declaring type: SynthController
  class SynthController;
  // Forward declaring type: Grabable
  class Grabable;
  // Forward declaring type: TutorialEvent
  struct TutorialEvent;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: BoardTutorialHelper
  class BoardTutorialHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::BoardTutorialHelper);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::BoardTutorialHelper*, "VROSC", "BoardTutorialHelper");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.BoardTutorialHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class BoardTutorialHelper : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.GameObject _interactablesParent
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::GameObject* interactablesParent;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private VROSC.TutorialBlinkingUIElement[] _soundButtonBlinkers
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::VROSC::TutorialBlinkingUIElement*> soundButtonBlinkers;
    // Field size check
    static_assert(sizeof(::ArrayW<::VROSC::TutorialBlinkingUIElement*>) == 0x8);
    // private VROSC.TutorialBlinkingUIElement _closeButtonBlink
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::TutorialBlinkingUIElement* closeButtonBlink;
    // Field size check
    static_assert(sizeof(::VROSC::TutorialBlinkingUIElement*) == 0x8);
    // private VROSC.Interactable[] _soundButtonInteractables
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::VROSC::Interactable*> soundButtonInteractables;
    // Field size check
    static_assert(sizeof(::ArrayW<::VROSC::Interactable*>) == 0x8);
    // private VROSC.Interactable[] _tempoSyncInteractables
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::VROSC::Interactable*> tempoSyncInteractables;
    // Field size check
    static_assert(sizeof(::ArrayW<::VROSC::Interactable*>) == 0x8);
    // private VROSC.Interactable _closeButtonInteractable
    // Size: 0x8
    // Offset: 0x40
    ::VROSC::Interactable* closeButtonInteractable;
    // Field size check
    static_assert(sizeof(::VROSC::Interactable*) == 0x8);
    // private VROSC.NoteBoardNoteController _noteController
    // Size: 0x8
    // Offset: 0x48
    ::VROSC::NoteBoardNoteController* noteController;
    // Field size check
    static_assert(sizeof(::VROSC::NoteBoardNoteController*) == 0x8);
    // private VROSC.SynthController _boardController
    // Size: 0x8
    // Offset: 0x50
    ::VROSC::SynthController* boardController;
    // Field size check
    static_assert(sizeof(::VROSC::SynthController*) == 0x8);
    // private VROSC.Grabable _boardGrabable
    // Size: 0x8
    // Offset: 0x58
    ::VROSC::Grabable* boardGrabable;
    // Field size check
    static_assert(sizeof(::VROSC::Grabable*) == 0x8);
    // private System.Collections.Generic.List`1<VROSC.Interactable> _disabledInteractables
    // Size: 0x8
    // Offset: 0x60
    ::System::Collections::Generic::List_1<::VROSC::Interactable*>* disabledInteractables;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::VROSC::Interactable*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.GameObject _interactablesParent
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__interactablesParent();
    // Get instance field reference: private VROSC.TutorialBlinkingUIElement[] _soundButtonBlinkers
    [[deprecated("Use field access instead!")]] ::ArrayW<::VROSC::TutorialBlinkingUIElement*>& dyn__soundButtonBlinkers();
    // Get instance field reference: private VROSC.TutorialBlinkingUIElement _closeButtonBlink
    [[deprecated("Use field access instead!")]] ::VROSC::TutorialBlinkingUIElement*& dyn__closeButtonBlink();
    // Get instance field reference: private VROSC.Interactable[] _soundButtonInteractables
    [[deprecated("Use field access instead!")]] ::ArrayW<::VROSC::Interactable*>& dyn__soundButtonInteractables();
    // Get instance field reference: private VROSC.Interactable[] _tempoSyncInteractables
    [[deprecated("Use field access instead!")]] ::ArrayW<::VROSC::Interactable*>& dyn__tempoSyncInteractables();
    // Get instance field reference: private VROSC.Interactable _closeButtonInteractable
    [[deprecated("Use field access instead!")]] ::VROSC::Interactable*& dyn__closeButtonInteractable();
    // Get instance field reference: private VROSC.NoteBoardNoteController _noteController
    [[deprecated("Use field access instead!")]] ::VROSC::NoteBoardNoteController*& dyn__noteController();
    // Get instance field reference: private VROSC.SynthController _boardController
    [[deprecated("Use field access instead!")]] ::VROSC::SynthController*& dyn__boardController();
    // Get instance field reference: private VROSC.Grabable _boardGrabable
    [[deprecated("Use field access instead!")]] ::VROSC::Grabable*& dyn__boardGrabable();
    // Get instance field reference: private System.Collections.Generic.List`1<VROSC.Interactable> _disabledInteractables
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::VROSC::Interactable*>*& dyn__disabledInteractables();
    // public System.Void .ctor()
    // Offset: 0x939890
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BoardTutorialHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::BoardTutorialHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BoardTutorialHelper*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x938B58
    void Start();
    // private System.Void TutorialEventTriggered(VROSC.TutorialEvent tutorialEvent)
    // Offset: 0x938C48
    void TutorialEventTriggered(::VROSC::TutorialEvent tutorialEvent);
    // private System.Void SoundButtonsUsed(System.Boolean used)
    // Offset: 0x93946C
    void SoundButtonsUsed(bool used);
    // private System.Void DisableAllInteractables()
    // Offset: 0x93931C
    void DisableAllInteractables();
    // private System.Void ResetAll()
    // Offset: 0x939120
    void ResetAll();
    // private System.Void BoardToggledAfterCloseEnabled(System.Boolean active)
    // Offset: 0x9395F0
    void BoardToggledAfterCloseEnabled(bool active);
    // private System.Void BoardGrabbed(System.Boolean grabbed)
    // Offset: 0x939748
    void BoardGrabbed(bool grabbed);
  }; // VROSC.BoardTutorialHelper
  #pragma pack(pop)
  static check_size<sizeof(BoardTutorialHelper), 96 + sizeof(::System::Collections::Generic::List_1<::VROSC::Interactable*>*)> __VROSC_BoardTutorialHelperSizeCheck;
  static_assert(sizeof(BoardTutorialHelper) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::BoardTutorialHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::BoardTutorialHelper::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BoardTutorialHelper::*)()>(&VROSC::BoardTutorialHelper::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::BoardTutorialHelper*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::BoardTutorialHelper::TutorialEventTriggered
// Il2CppName: TutorialEventTriggered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BoardTutorialHelper::*)(::VROSC::TutorialEvent)>(&VROSC::BoardTutorialHelper::TutorialEventTriggered)> {
  static const MethodInfo* get() {
    static auto* tutorialEvent = &::il2cpp_utils::GetClassFromName("VROSC", "TutorialEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::BoardTutorialHelper*), "TutorialEventTriggered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tutorialEvent});
  }
};
// Writing MetadataGetter for method: VROSC::BoardTutorialHelper::SoundButtonsUsed
// Il2CppName: SoundButtonsUsed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BoardTutorialHelper::*)(bool)>(&VROSC::BoardTutorialHelper::SoundButtonsUsed)> {
  static const MethodInfo* get() {
    static auto* used = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::BoardTutorialHelper*), "SoundButtonsUsed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{used});
  }
};
// Writing MetadataGetter for method: VROSC::BoardTutorialHelper::DisableAllInteractables
// Il2CppName: DisableAllInteractables
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BoardTutorialHelper::*)()>(&VROSC::BoardTutorialHelper::DisableAllInteractables)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::BoardTutorialHelper*), "DisableAllInteractables", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::BoardTutorialHelper::ResetAll
// Il2CppName: ResetAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BoardTutorialHelper::*)()>(&VROSC::BoardTutorialHelper::ResetAll)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::BoardTutorialHelper*), "ResetAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::BoardTutorialHelper::BoardToggledAfterCloseEnabled
// Il2CppName: BoardToggledAfterCloseEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BoardTutorialHelper::*)(bool)>(&VROSC::BoardTutorialHelper::BoardToggledAfterCloseEnabled)> {
  static const MethodInfo* get() {
    static auto* active = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::BoardTutorialHelper*), "BoardToggledAfterCloseEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{active});
  }
};
// Writing MetadataGetter for method: VROSC::BoardTutorialHelper::BoardGrabbed
// Il2CppName: BoardGrabbed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BoardTutorialHelper::*)(bool)>(&VROSC::BoardTutorialHelper::BoardGrabbed)> {
  static const MethodInfo* get() {
    static auto* grabbed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::BoardTutorialHelper*), "BoardGrabbed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{grabbed});
  }
};
