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
  // Forward declaring type: FullScreenFxController
  class FullScreenFxController;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: StartState
  class StartState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::StartState);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::StartState*, "VROSC", "StartState");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.StartState
  // [TokenAttribute] Offset: FFFFFFFF
  class StartState : public ::Il2CppObject/*, public ::VROSC::IState*/ {
    public:
    public:
    // private VROSC.FullScreenFxController _fullScreenFxController
    // Size: 0x8
    // Offset: 0x10
    ::VROSC::FullScreenFxController* fullScreenFxController;
    // Field size check
    static_assert(sizeof(::VROSC::FullScreenFxController*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::VROSC::IState
    operator ::VROSC::IState() noexcept {
      return *reinterpret_cast<::VROSC::IState*>(this);
    }
    // Creating conversion operator: operator ::VROSC::FullScreenFxController*
    constexpr operator ::VROSC::FullScreenFxController*() const noexcept {
      return fullScreenFxController;
    }
    // Get instance field reference: private VROSC.FullScreenFxController _fullScreenFxController
    [[deprecated("Use field access instead!")]] ::VROSC::FullScreenFxController*& dyn__fullScreenFxController();
    // public System.Void .ctor(VROSC.FullScreenFxController fullScreenFxController)
    // Offset: 0x193005C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StartState* New_ctor(::VROSC::FullScreenFxController* fullScreenFxController) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::StartState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StartState*, creationType>(fullScreenFxController)));
    }
    // public System.Void OnEnter(params System.Object[] values)
    // Offset: 0x1930088
    void OnEnter(::ArrayW<::Il2CppObject*> values);
    // public System.Void OnExit()
    // Offset: 0x19300D0
    void OnExit();
    // public System.Void Tick()
    // Offset: 0x19300D4
    void Tick();
    // public System.Void UpdateData(params System.Object[] values)
    // Offset: 0x19300D8
    void UpdateData(::ArrayW<::Il2CppObject*> values);
  }; // VROSC.StartState
  #pragma pack(pop)
  static check_size<sizeof(StartState), 16 + sizeof(::VROSC::FullScreenFxController*)> __VROSC_StartStateSizeCheck;
  static_assert(sizeof(StartState) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::StartState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::StartState::OnEnter
// Il2CppName: OnEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::StartState::*)(::ArrayW<::Il2CppObject*>)>(&VROSC::StartState::OnEnter)> {
  static const MethodInfo* get() {
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::StartState*), "OnEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{values});
  }
};
// Writing MetadataGetter for method: VROSC::StartState::OnExit
// Il2CppName: OnExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::StartState::*)()>(&VROSC::StartState::OnExit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::StartState*), "OnExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::StartState::Tick
// Il2CppName: Tick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::StartState::*)()>(&VROSC::StartState::Tick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::StartState*), "Tick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::StartState::UpdateData
// Il2CppName: UpdateData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::StartState::*)(::ArrayW<::Il2CppObject*>)>(&VROSC::StartState::UpdateData)> {
  static const MethodInfo* get() {
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::StartState*), "UpdateData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{values});
  }
};
