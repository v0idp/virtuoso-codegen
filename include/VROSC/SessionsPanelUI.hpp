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
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: SessionsItemsContainer
  class SessionsItemsContainer;
  // Forward declaring type: SessionsLibraryPreviewPlayer
  class SessionsLibraryPreviewPlayer;
  // Forward declaring type: SessionItemData
  class SessionItemData;
  // Forward declaring type: SessionUIData
  class SessionUIData;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
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
  // Forward declaring type: SessionsPanelUI
  class SessionsPanelUI;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::SessionsPanelUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SessionsPanelUI*, "VROSC", "SessionsPanelUI");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x61
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SessionsPanelUI
  // [TokenAttribute] Offset: FFFFFFFF
  class SessionsPanelUI : public ::UnityEngine::MonoBehaviour {
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
    // protected VROSC.SessionsItemsContainer _sessionsItemsContainer
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::SessionsItemsContainer* sessionsItemsContainer;
    // Field size check
    static_assert(sizeof(::VROSC::SessionsItemsContainer*) == 0x8);
    // protected TMPro.TextMeshPro _messageText
    // Size: 0x8
    // Offset: 0x20
    ::TMPro::TextMeshPro* messageText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshPro*) == 0x8);
    // private TMPro.TextMeshPro _errorText
    // Size: 0x8
    // Offset: 0x28
    ::TMPro::TextMeshPro* errorText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshPro*) == 0x8);
    // private VROSC.SessionsLibraryPreviewPlayer _previewPlayer
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::SessionsLibraryPreviewPlayer* previewPlayer;
    // Field size check
    static_assert(sizeof(::VROSC::SessionsLibraryPreviewPlayer*) == 0x8);
    // private UnityEngine.GameObject _listView
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::GameObject* listView;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // protected System.String _noSessionsMessage
    // Size: 0x8
    // Offset: 0x40
    ::StringW noSessionsMessage;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // protected System.String _disabledMessage
    // Size: 0x8
    // Offset: 0x48
    ::StringW disabledMessage;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // protected System.String _loadingMessage
    // Size: 0x8
    // Offset: 0x50
    ::StringW loadingMessage;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Action`1<VROSC.SessionItemData> OnSessionSelected
    // Size: 0x8
    // Offset: 0x58
    ::System::Action_1<::VROSC::SessionItemData*>* OnSessionSelected;
    // Field size check
    static_assert(sizeof(::System::Action_1<::VROSC::SessionItemData*>*) == 0x8);
    // protected System.Boolean _isEnabled
    // Size: 0x1
    // Offset: 0x60
    bool isEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: protected VROSC.SessionsItemsContainer _sessionsItemsContainer
    ::VROSC::SessionsItemsContainer*& dyn__sessionsItemsContainer();
    // Get instance field reference: protected TMPro.TextMeshPro _messageText
    ::TMPro::TextMeshPro*& dyn__messageText();
    // Get instance field reference: private TMPro.TextMeshPro _errorText
    ::TMPro::TextMeshPro*& dyn__errorText();
    // Get instance field reference: private VROSC.SessionsLibraryPreviewPlayer _previewPlayer
    ::VROSC::SessionsLibraryPreviewPlayer*& dyn__previewPlayer();
    // Get instance field reference: private UnityEngine.GameObject _listView
    ::UnityEngine::GameObject*& dyn__listView();
    // Get instance field reference: protected System.String _noSessionsMessage
    ::StringW& dyn__noSessionsMessage();
    // Get instance field reference: protected System.String _disabledMessage
    ::StringW& dyn__disabledMessage();
    // Get instance field reference: protected System.String _loadingMessage
    ::StringW& dyn__loadingMessage();
    // Get instance field reference: public System.Action`1<VROSC.SessionItemData> OnSessionSelected
    ::System::Action_1<::VROSC::SessionItemData*>*& dyn_OnSessionSelected();
    // Get instance field reference: protected System.Boolean _isEnabled
    bool& dyn__isEnabled();
    // protected System.Void Awake()
    // Offset: 0x13B015C
    void Awake();
    // protected System.Void OnEnable()
    // Offset: 0x13B0430
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x13B050C
    void OnDisable();
    // protected System.Void OnDestroy()
    // Offset: 0x13B05EC
    void OnDestroy();
    // public System.Void Setup()
    // Offset: 0x13B0414
    void Setup();
    // public System.Void Refresh()
    // Offset: 0x13B0744
    void Refresh();
    // public System.Void AddSessionList(System.Collections.Generic.List`1<VROSC.SessionUIData> sessionsUIDatas, System.Boolean clear)
    // Offset: 0x13B0748
    void AddSessionList(::System::Collections::Generic::List_1<::VROSC::SessionUIData*>* sessionsUIDatas, bool clear);
    // public System.Void AddSession(System.String sessionId, VROSC.SessionUIData sessionUIData, System.Boolean isNewSave)
    // Offset: 0x13B091C
    void AddSession(::StringW sessionId, ::VROSC::SessionUIData* sessionUIData, bool isNewSave);
    // public System.Boolean HasSession(System.String sessionId)
    // Offset: 0x13B093C
    bool HasSession(::StringW sessionId);
    // public System.Void RemoveSession(System.String sessionId)
    // Offset: 0x13B0958
    void RemoveSession(::StringW sessionId);
    // public System.Void FilterBy(System.String text)
    // Offset: 0x13B09FC
    void FilterBy(::StringW text);
    // public System.Void OrderBy(VROSC.SessionsLibraryUI/VROSC.OrderingType orderingType, VROSC.SessionsLibraryUI/VROSC.OrderingDirection orderingDirection)
    // Offset: 0x13B0A18
    void OrderBy(::VROSC::SessionsLibraryUI::OrderingType orderingType, ::VROSC::SessionsLibraryUI::OrderingDirection orderingDirection);
    // public System.Void SelectSession(VROSC.SessionItemData sessionItemData)
    // Offset: 0x13B0A34
    void SelectSession(::VROSC::SessionItemData* sessionItemData);
    // public System.Void SetEnabled(System.Boolean enabled)
    // Offset: 0x13B0A50
    void SetEnabled(bool enabled);
    // public System.Void Clear()
    // Offset: 0x13B0AC4
    void Clear();
    // protected System.Void UpdateMessage(System.String message)
    // Offset: 0x13B026C
    void UpdateMessage(::StringW message);
    // protected System.Void UpdateErrorMessage(System.String errorMessage)
    // Offset: 0x13B0340
    void UpdateErrorMessage(::StringW errorMessage);
    // private System.Void SessionSelected(VROSC.SessionItemData item)
    // Offset: 0x13B0B48
    void SessionSelected(::VROSC::SessionItemData* item);
    // protected System.Void UserLoggedOut()
    // Offset: 0x13B0BC0
    void UserLoggedOut();
    // public System.Void .ctor()
    // Offset: 0x13B0C38
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SessionsPanelUI* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SessionsPanelUI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SessionsPanelUI*, creationType>()));
    }
  }; // VROSC.SessionsPanelUI
  #pragma pack(pop)
  static check_size<sizeof(SessionsPanelUI), 96 + sizeof(bool)> __VROSC_SessionsPanelUISizeCheck;
  static_assert(sizeof(SessionsPanelUI) == 0x61);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SessionsPanelUI::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsPanelUI::*)()>(&VROSC::SessionsPanelUI::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsPanelUI*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsPanelUI::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsPanelUI::*)()>(&VROSC::SessionsPanelUI::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsPanelUI*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsPanelUI::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsPanelUI::*)()>(&VROSC::SessionsPanelUI::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsPanelUI*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsPanelUI::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsPanelUI::*)()>(&VROSC::SessionsPanelUI::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsPanelUI*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsPanelUI::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsPanelUI::*)()>(&VROSC::SessionsPanelUI::Setup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsPanelUI*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsPanelUI::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsPanelUI::*)()>(&VROSC::SessionsPanelUI::Refresh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsPanelUI*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsPanelUI::AddSessionList
// Il2CppName: AddSessionList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsPanelUI::*)(::System::Collections::Generic::List_1<::VROSC::SessionUIData*>*, bool)>(&VROSC::SessionsPanelUI::AddSessionList)> {
  static const MethodInfo* get() {
    static auto* sessionsUIDatas = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("VROSC", "SessionUIData")})->byval_arg;
    static auto* clear = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsPanelUI*), "AddSessionList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionsUIDatas, clear});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsPanelUI::AddSession
// Il2CppName: AddSession
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsPanelUI::*)(::StringW, ::VROSC::SessionUIData*, bool)>(&VROSC::SessionsPanelUI::AddSession)> {
  static const MethodInfo* get() {
    static auto* sessionId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* sessionUIData = &::il2cpp_utils::GetClassFromName("VROSC", "SessionUIData")->byval_arg;
    static auto* isNewSave = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsPanelUI*), "AddSession", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionId, sessionUIData, isNewSave});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsPanelUI::HasSession
// Il2CppName: HasSession
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::SessionsPanelUI::*)(::StringW)>(&VROSC::SessionsPanelUI::HasSession)> {
  static const MethodInfo* get() {
    static auto* sessionId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsPanelUI*), "HasSession", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionId});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsPanelUI::RemoveSession
// Il2CppName: RemoveSession
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsPanelUI::*)(::StringW)>(&VROSC::SessionsPanelUI::RemoveSession)> {
  static const MethodInfo* get() {
    static auto* sessionId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsPanelUI*), "RemoveSession", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionId});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsPanelUI::FilterBy
// Il2CppName: FilterBy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsPanelUI::*)(::StringW)>(&VROSC::SessionsPanelUI::FilterBy)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsPanelUI*), "FilterBy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsPanelUI::OrderBy
// Il2CppName: OrderBy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsPanelUI::*)(::VROSC::SessionsLibraryUI::OrderingType, ::VROSC::SessionsLibraryUI::OrderingDirection)>(&VROSC::SessionsPanelUI::OrderBy)> {
  static const MethodInfo* get() {
    static auto* orderingType = &::il2cpp_utils::GetClassFromName("VROSC", "SessionsLibraryUI/OrderingType")->byval_arg;
    static auto* orderingDirection = &::il2cpp_utils::GetClassFromName("VROSC", "SessionsLibraryUI/OrderingDirection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsPanelUI*), "OrderBy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{orderingType, orderingDirection});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsPanelUI::SelectSession
// Il2CppName: SelectSession
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsPanelUI::*)(::VROSC::SessionItemData*)>(&VROSC::SessionsPanelUI::SelectSession)> {
  static const MethodInfo* get() {
    static auto* sessionItemData = &::il2cpp_utils::GetClassFromName("VROSC", "SessionItemData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsPanelUI*), "SelectSession", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionItemData});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsPanelUI::SetEnabled
// Il2CppName: SetEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsPanelUI::*)(bool)>(&VROSC::SessionsPanelUI::SetEnabled)> {
  static const MethodInfo* get() {
    static auto* enabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsPanelUI*), "SetEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enabled});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsPanelUI::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsPanelUI::*)()>(&VROSC::SessionsPanelUI::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsPanelUI*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsPanelUI::UpdateMessage
// Il2CppName: UpdateMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsPanelUI::*)(::StringW)>(&VROSC::SessionsPanelUI::UpdateMessage)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsPanelUI*), "UpdateMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsPanelUI::UpdateErrorMessage
// Il2CppName: UpdateErrorMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsPanelUI::*)(::StringW)>(&VROSC::SessionsPanelUI::UpdateErrorMessage)> {
  static const MethodInfo* get() {
    static auto* errorMessage = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsPanelUI*), "UpdateErrorMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{errorMessage});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsPanelUI::SessionSelected
// Il2CppName: SessionSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsPanelUI::*)(::VROSC::SessionItemData*)>(&VROSC::SessionsPanelUI::SessionSelected)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("VROSC", "SessionItemData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsPanelUI*), "SessionSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsPanelUI::UserLoggedOut
// Il2CppName: UserLoggedOut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SessionsPanelUI::*)()>(&VROSC::SessionsPanelUI::UserLoggedOut)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SessionsPanelUI*), "UserLoggedOut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SessionsPanelUI::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
