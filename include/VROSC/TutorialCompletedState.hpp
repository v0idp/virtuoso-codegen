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
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: TutorialCompletedState
  class TutorialCompletedState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::TutorialCompletedState);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TutorialCompletedState*, "VROSC", "TutorialCompletedState");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.TutorialCompletedState
  // [TokenAttribute] Offset: FFFFFFFF
  class TutorialCompletedState : public ::Il2CppObject/*, public ::VROSC::IState*/ {
    public:
    // Creating interface conversion operator: operator ::VROSC::IState
    operator ::VROSC::IState() noexcept {
      return *reinterpret_cast<::VROSC::IState*>(this);
    }
    // public System.Void OnEnter(params System.Object[] values)
    // Offset: 0x1406E74
    void OnEnter(::ArrayW<::Il2CppObject*> values);
    // public System.Void OnExit()
    // Offset: 0x1406E78
    void OnExit();
    // public System.Void Tick()
    // Offset: 0x1406E7C
    void Tick();
    // public System.Void UpdateData(params System.Object[] values)
    // Offset: 0x1406E80
    void UpdateData(::ArrayW<::Il2CppObject*> values);
    // public System.Void .ctor()
    // Offset: 0x1406E84
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TutorialCompletedState* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::TutorialCompletedState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TutorialCompletedState*, creationType>()));
    }
  }; // VROSC.TutorialCompletedState
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::TutorialCompletedState::OnEnter
// Il2CppName: OnEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialCompletedState::*)(::ArrayW<::Il2CppObject*>)>(&VROSC::TutorialCompletedState::OnEnter)> {
  static const MethodInfo* get() {
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialCompletedState*), "OnEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{values});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialCompletedState::OnExit
// Il2CppName: OnExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialCompletedState::*)()>(&VROSC::TutorialCompletedState::OnExit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialCompletedState*), "OnExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialCompletedState::Tick
// Il2CppName: Tick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialCompletedState::*)()>(&VROSC::TutorialCompletedState::Tick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialCompletedState*), "Tick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialCompletedState::UpdateData
// Il2CppName: UpdateData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialCompletedState::*)(::ArrayW<::Il2CppObject*>)>(&VROSC::TutorialCompletedState::UpdateData)> {
  static const MethodInfo* get() {
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialCompletedState*), "UpdateData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{values});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialCompletedState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
