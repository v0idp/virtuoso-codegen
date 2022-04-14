// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.IState
#include "VROSC/IState.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: Dashboard
  class Dashboard;
  // Forward declaring type: UISchemeController
  class UISchemeController;
  // Forward declaring type: SetupBeatCounterState
  class SetupBeatCounterState;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PunchKeyboard
  class PunchKeyboard;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: SetupUiState
  class SetupUiState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::SetupUiState);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SetupUiState*, "VROSC", "SetupUiState");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SetupUiState
  // [TokenAttribute] Offset: FFFFFFFF
  class SetupUiState : public ::Il2CppObject/*, public ::VROSC::IState*/ {
    public:
    public:
    // private VROSC.Dashboard _dashboardPrefab
    // Size: 0x8
    // Offset: 0x10
    ::VROSC::Dashboard* dashboardPrefab;
    // Field size check
    static_assert(sizeof(::VROSC::Dashboard*) == 0x8);
    // private PunchKeyboard _keyboardPrefab
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::PunchKeyboard* keyboardPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PunchKeyboard*) == 0x8);
    // private VROSC.UISchemeController _uiSchemeController
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::UISchemeController* uiSchemeController;
    // Field size check
    static_assert(sizeof(::VROSC::UISchemeController*) == 0x8);
    // private VROSC.SetupBeatCounterState _beatCounterState
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::SetupBeatCounterState* beatCounterState;
    // Field size check
    static_assert(sizeof(::VROSC::SetupBeatCounterState*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::VROSC::IState
    operator ::VROSC::IState() noexcept {
      return *reinterpret_cast<::VROSC::IState*>(this);
    }
    // Get instance field reference: private VROSC.Dashboard _dashboardPrefab
    [[deprecated]] ::VROSC::Dashboard*& dyn__dashboardPrefab();
    // Get instance field reference: private PunchKeyboard _keyboardPrefab
    [[deprecated]] ::GlobalNamespace::PunchKeyboard*& dyn__keyboardPrefab();
    // Get instance field reference: private VROSC.UISchemeController _uiSchemeController
    [[deprecated]] ::VROSC::UISchemeController*& dyn__uiSchemeController();
    // Get instance field reference: private VROSC.SetupBeatCounterState _beatCounterState
    [[deprecated]] ::VROSC::SetupBeatCounterState*& dyn__beatCounterState();
    // public System.Void .ctor(VROSC.Dashboard dashboardPrefab, PunchKeyboard keyboardPrefab, VROSC.UISchemeController uiSchemeController)
    // Offset: 0x1926A34
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SetupUiState* New_ctor(::VROSC::Dashboard* dashboardPrefab, ::GlobalNamespace::PunchKeyboard* keyboardPrefab, ::VROSC::UISchemeController* uiSchemeController) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SetupUiState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SetupUiState*, creationType>(dashboardPrefab, keyboardPrefab, uiSchemeController)));
    }
    // public System.Void OnEnter(params System.Object[] values)
    // Offset: 0x1926A74
    void OnEnter(::ArrayW<::Il2CppObject*> values);
    // public System.Void OnExit()
    // Offset: 0x1926B50
    void OnExit();
    // public System.Void Tick()
    // Offset: 0x1926C4C
    void Tick();
    // public System.Void UpdateData(params System.Object[] values)
    // Offset: 0x1926C50
    void UpdateData(::ArrayW<::Il2CppObject*> values);
  }; // VROSC.SetupUiState
  #pragma pack(pop)
  static check_size<sizeof(SetupUiState), 40 + sizeof(::VROSC::SetupBeatCounterState*)> __VROSC_SetupUiStateSizeCheck;
  static_assert(sizeof(SetupUiState) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SetupUiState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::SetupUiState::OnEnter
// Il2CppName: OnEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SetupUiState::*)(::ArrayW<::Il2CppObject*>)>(&VROSC::SetupUiState::OnEnter)> {
  static const MethodInfo* get() {
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SetupUiState*), "OnEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{values});
  }
};
// Writing MetadataGetter for method: VROSC::SetupUiState::OnExit
// Il2CppName: OnExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SetupUiState::*)()>(&VROSC::SetupUiState::OnExit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SetupUiState*), "OnExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SetupUiState::Tick
// Il2CppName: Tick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SetupUiState::*)()>(&VROSC::SetupUiState::Tick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SetupUiState*), "Tick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SetupUiState::UpdateData
// Il2CppName: UpdateData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SetupUiState::*)(::ArrayW<::Il2CppObject*>)>(&VROSC::SetupUiState::UpdateData)> {
  static const MethodInfo* get() {
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SetupUiState*), "UpdateData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{values});
  }
};
