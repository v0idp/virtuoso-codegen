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
  // Forward declaring type: MalletManager
  class MalletManager;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: SetupMalletManagerState
  class SetupMalletManagerState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::SetupMalletManagerState);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SetupMalletManagerState*, "VROSC", "SetupMalletManagerState");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SetupMalletManagerState
  // [TokenAttribute] Offset: FFFFFFFF
  class SetupMalletManagerState : public ::Il2CppObject/*, public ::VROSC::IState*/ {
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
    // private VROSC.MalletManager _malletManager
    // Size: 0x8
    // Offset: 0x10
    ::VROSC::MalletManager* malletManager;
    // Field size check
    static_assert(sizeof(::VROSC::MalletManager*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::VROSC::IState
    operator ::VROSC::IState() noexcept {
      return *reinterpret_cast<::VROSC::IState*>(this);
    }
    // Creating conversion operator: operator ::VROSC::MalletManager*
    constexpr operator ::VROSC::MalletManager*() const noexcept {
      return malletManager;
    }
    // Get instance field reference: private VROSC.MalletManager _malletManager
    ::VROSC::MalletManager*& dyn__malletManager();
    // public System.Void .ctor(VROSC.MalletManager malletManager)
    // Offset: 0x13B3A18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SetupMalletManagerState* New_ctor(::VROSC::MalletManager* malletManager) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SetupMalletManagerState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SetupMalletManagerState*, creationType>(malletManager)));
    }
    // public System.Void OnEnter(params System.Object[] values)
    // Offset: 0x13B3A44
    void OnEnter(::ArrayW<::Il2CppObject*> values);
    // public System.Void OnExit()
    // Offset: 0x13B3A60
    void OnExit();
    // public System.Void Tick()
    // Offset: 0x13B3A64
    void Tick();
    // public System.Void UpdateData(params System.Object[] values)
    // Offset: 0x13B3A68
    void UpdateData(::ArrayW<::Il2CppObject*> values);
  }; // VROSC.SetupMalletManagerState
  #pragma pack(pop)
  static check_size<sizeof(SetupMalletManagerState), 16 + sizeof(::VROSC::MalletManager*)> __VROSC_SetupMalletManagerStateSizeCheck;
  static_assert(sizeof(SetupMalletManagerState) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SetupMalletManagerState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::SetupMalletManagerState::OnEnter
// Il2CppName: OnEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SetupMalletManagerState::*)(::ArrayW<::Il2CppObject*>)>(&VROSC::SetupMalletManagerState::OnEnter)> {
  static const MethodInfo* get() {
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SetupMalletManagerState*), "OnEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{values});
  }
};
// Writing MetadataGetter for method: VROSC::SetupMalletManagerState::OnExit
// Il2CppName: OnExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SetupMalletManagerState::*)()>(&VROSC::SetupMalletManagerState::OnExit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SetupMalletManagerState*), "OnExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SetupMalletManagerState::Tick
// Il2CppName: Tick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SetupMalletManagerState::*)()>(&VROSC::SetupMalletManagerState::Tick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SetupMalletManagerState*), "Tick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SetupMalletManagerState::UpdateData
// Il2CppName: UpdateData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SetupMalletManagerState::*)(::ArrayW<::Il2CppObject*>)>(&VROSC::SetupMalletManagerState::UpdateData)> {
  static const MethodInfo* get() {
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SetupMalletManagerState*), "UpdateData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{values});
  }
};
