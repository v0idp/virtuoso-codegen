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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: VROSC::UI
namespace VROSC::UI {
  // Forward declaring type: TabButton
  class TabButton;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: InputDevice
  class InputDevice;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: VROSC.UI
namespace VROSC::UI {
  // Forward declaring type: TabController
  class TabController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::UI::TabController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::TabController*, "VROSC.UI", "TabController");
// Type namespace: VROSC.UI
namespace VROSC::UI {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.UI.TabController
  // [TokenAttribute] Offset: FFFFFFFF
  class TabController : public ::UnityEngine::MonoBehaviour {
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
    // private System.Collections.Generic.List`1<VROSC.UI.TabButton> _pcTabs
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::VROSC::UI::TabButton*>* pcTabs;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::VROSC::UI::TabButton*>*) == 0x8);
    // private System.Collections.Generic.List`1<VROSC.UI.TabButton> _mobileTabs
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::VROSC::UI::TabButton*>* mobileTabs;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::VROSC::UI::TabButton*>*) == 0x8);
    // private System.Collections.Generic.List`1<VROSC.UI.TabButton> _tabs
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::VROSC::UI::TabButton*>* tabs;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::VROSC::UI::TabButton*>*) == 0x8);
    // private System.Int32 _currentTab
    // Size: 0x4
    // Offset: 0x30
    int currentTab;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _areTabsEnabled
    // Size: 0x1
    // Offset: 0x34
    bool areTabsEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: areTabsEnabled and: changeTabWithThumbstickCooldown
    char __padding4[0x3] = {};
    // private System.Single _changeTabWithThumbstickCooldown
    // Size: 0x4
    // Offset: 0x38
    float changeTabWithThumbstickCooldown;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0x6770A8
    // private System.Single _thumbstickThreshold
    // Size: 0x4
    // Offset: 0x3C
    float thumbstickThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _lastThumbstickChange
    // Size: 0x4
    // Offset: 0x40
    float lastThumbstickChange;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: lastThumbstickChange and: OnTabChanged
    char __padding7[0x4] = {};
    // public System.Action`1<VROSC.UI.TabButton> OnTabChanged
    // Size: 0x8
    // Offset: 0x48
    ::System::Action_1<::VROSC::UI::TabButton*>* OnTabChanged;
    // Field size check
    static_assert(sizeof(::System::Action_1<::VROSC::UI::TabButton*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Collections.Generic.List`1<VROSC.UI.TabButton> _pcTabs
    ::System::Collections::Generic::List_1<::VROSC::UI::TabButton*>*& dyn__pcTabs();
    // Get instance field reference: private System.Collections.Generic.List`1<VROSC.UI.TabButton> _mobileTabs
    ::System::Collections::Generic::List_1<::VROSC::UI::TabButton*>*& dyn__mobileTabs();
    // Get instance field reference: private System.Collections.Generic.List`1<VROSC.UI.TabButton> _tabs
    ::System::Collections::Generic::List_1<::VROSC::UI::TabButton*>*& dyn__tabs();
    // Get instance field reference: private System.Int32 _currentTab
    int& dyn__currentTab();
    // Get instance field reference: private System.Boolean _areTabsEnabled
    bool& dyn__areTabsEnabled();
    // Get instance field reference: private System.Single _changeTabWithThumbstickCooldown
    float& dyn__changeTabWithThumbstickCooldown();
    // Get instance field reference: private System.Single _thumbstickThreshold
    float& dyn__thumbstickThreshold();
    // Get instance field reference: private System.Single _lastThumbstickChange
    float& dyn__lastThumbstickChange();
    // Get instance field reference: public System.Action`1<VROSC.UI.TabButton> OnTabChanged
    ::System::Action_1<::VROSC::UI::TabButton*>*& dyn_OnTabChanged();
    // public VROSC.UI.TabButton get_SelectedTab()
    // Offset: 0x13F81EC
    ::VROSC::UI::TabButton* get_SelectedTab();
    // private System.Void Awake()
    // Offset: 0x13F8274
    void Awake();
    // private System.Void OnEnable()
    // Offset: 0x13F85C0
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x13F8720
    void OnDisable();
    // public System.Void EnableTabs(System.Boolean enable)
    // Offset: 0x13F880C
    void EnableTabs(bool enable);
    // private System.Void OnThumbStick(VROSC.InputDevice inputDevice, UnityEngine.Vector2 vector)
    // Offset: 0x13F8930
    void OnThumbStick(::VROSC::InputDevice* inputDevice, ::UnityEngine::Vector2 vector);
    // private System.Void TabActivated(VROSC.UI.TabButton sender)
    // Offset: 0x13F8A4C
    void TabActivated(::VROSC::UI::TabButton* sender);
    // public System.Void .ctor()
    // Offset: 0x13F8C40
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TabController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::UI::TabController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TabController*, creationType>()));
    }
  }; // VROSC.UI.TabController
  #pragma pack(pop)
  static check_size<sizeof(TabController), 72 + sizeof(::System::Action_1<::VROSC::UI::TabButton*>*)> __VROSC_UI_TabControllerSizeCheck;
  static_assert(sizeof(TabController) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::UI::TabController::get_SelectedTab
// Il2CppName: get_SelectedTab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::UI::TabButton* (VROSC::UI::TabController::*)()>(&VROSC::UI::TabController::get_SelectedTab)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::TabController*), "get_SelectedTab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::TabController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::TabController::*)()>(&VROSC::UI::TabController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::TabController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::TabController::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::TabController::*)()>(&VROSC::UI::TabController::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::TabController*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::TabController::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::TabController::*)()>(&VROSC::UI::TabController::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::TabController*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UI::TabController::EnableTabs
// Il2CppName: EnableTabs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::TabController::*)(bool)>(&VROSC::UI::TabController::EnableTabs)> {
  static const MethodInfo* get() {
    static auto* enable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::TabController*), "EnableTabs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enable});
  }
};
// Writing MetadataGetter for method: VROSC::UI::TabController::OnThumbStick
// Il2CppName: OnThumbStick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::TabController::*)(::VROSC::InputDevice*, ::UnityEngine::Vector2)>(&VROSC::UI::TabController::OnThumbStick)> {
  static const MethodInfo* get() {
    static auto* inputDevice = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* vector = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::TabController*), "OnThumbStick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputDevice, vector});
  }
};
// Writing MetadataGetter for method: VROSC::UI::TabController::TabActivated
// Il2CppName: TabActivated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UI::TabController::*)(::VROSC::UI::TabButton*)>(&VROSC::UI::TabController::TabActivated)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("VROSC.UI", "TabButton")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::TabController*), "TabActivated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender});
  }
};
// Writing MetadataGetter for method: VROSC::UI::TabController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
