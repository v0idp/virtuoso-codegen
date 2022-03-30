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
  // Forward declaring type: AuthenticationManager
  class AuthenticationManager;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: SetupAuthenticationManagerState
  class SetupAuthenticationManagerState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::SetupAuthenticationManagerState);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SetupAuthenticationManagerState*, "VROSC", "SetupAuthenticationManagerState");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SetupAuthenticationManagerState
  // [TokenAttribute] Offset: FFFFFFFF
  class SetupAuthenticationManagerState : public ::Il2CppObject/*, public ::VROSC::IState*/ {
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
    // private VROSC.AuthenticationManager _authenticationManager
    // Size: 0x8
    // Offset: 0x10
    ::VROSC::AuthenticationManager* authenticationManager;
    // Field size check
    static_assert(sizeof(::VROSC::AuthenticationManager*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::VROSC::IState
    operator ::VROSC::IState() noexcept {
      return *reinterpret_cast<::VROSC::IState*>(this);
    }
    // Creating conversion operator: operator ::VROSC::AuthenticationManager*
    constexpr operator ::VROSC::AuthenticationManager*() const noexcept {
      return authenticationManager;
    }
    // Get instance field reference: private VROSC.AuthenticationManager _authenticationManager
    ::VROSC::AuthenticationManager*& dyn__authenticationManager();
    // public System.Void .ctor(VROSC.AuthenticationManager authenticationManager)
    // Offset: 0x13B381C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SetupAuthenticationManagerState* New_ctor(::VROSC::AuthenticationManager* authenticationManager) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SetupAuthenticationManagerState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SetupAuthenticationManagerState*, creationType>(authenticationManager)));
    }
    // public System.Void OnEnter(params System.Object[] values)
    // Offset: 0x13B3848
    void OnEnter(::ArrayW<::Il2CppObject*> values);
    // public System.Void OnExit()
    // Offset: 0x13B3864
    void OnExit();
    // public System.Void Tick()
    // Offset: 0x13B3868
    void Tick();
    // public System.Void UpdateData(params System.Object[] values)
    // Offset: 0x13B386C
    void UpdateData(::ArrayW<::Il2CppObject*> values);
  }; // VROSC.SetupAuthenticationManagerState
  #pragma pack(pop)
  static check_size<sizeof(SetupAuthenticationManagerState), 16 + sizeof(::VROSC::AuthenticationManager*)> __VROSC_SetupAuthenticationManagerStateSizeCheck;
  static_assert(sizeof(SetupAuthenticationManagerState) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SetupAuthenticationManagerState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::SetupAuthenticationManagerState::OnEnter
// Il2CppName: OnEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SetupAuthenticationManagerState::*)(::ArrayW<::Il2CppObject*>)>(&VROSC::SetupAuthenticationManagerState::OnEnter)> {
  static const MethodInfo* get() {
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SetupAuthenticationManagerState*), "OnEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{values});
  }
};
// Writing MetadataGetter for method: VROSC::SetupAuthenticationManagerState::OnExit
// Il2CppName: OnExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SetupAuthenticationManagerState::*)()>(&VROSC::SetupAuthenticationManagerState::OnExit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SetupAuthenticationManagerState*), "OnExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SetupAuthenticationManagerState::Tick
// Il2CppName: Tick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SetupAuthenticationManagerState::*)()>(&VROSC::SetupAuthenticationManagerState::Tick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SetupAuthenticationManagerState*), "Tick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SetupAuthenticationManagerState::UpdateData
// Il2CppName: UpdateData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SetupAuthenticationManagerState::*)(::ArrayW<::Il2CppObject*>)>(&VROSC::SetupAuthenticationManagerState::UpdateData)> {
  static const MethodInfo* get() {
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SetupAuthenticationManagerState*), "UpdateData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{values});
  }
};
