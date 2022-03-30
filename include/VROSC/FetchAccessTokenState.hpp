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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: AuthenticationManager
  class AuthenticationManager;
  // Forward declaring type: Error
  struct Error;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: FetchAccessTokenState
  class FetchAccessTokenState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::FetchAccessTokenState);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FetchAccessTokenState*, "VROSC", "FetchAccessTokenState");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x23
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.FetchAccessTokenState
  // [TokenAttribute] Offset: FFFFFFFF
  class FetchAccessTokenState : public ::Il2CppObject/*, public ::VROSC::IState*/ {
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
    // private VROSC.AuthenticationManager _authManager
    // Size: 0x8
    // Offset: 0x10
    ::VROSC::AuthenticationManager* authManager;
    // Field size check
    static_assert(sizeof(::VROSC::AuthenticationManager*) == 0x8);
    // private System.Single _lastAttemptTimer
    // Size: 0x4
    // Offset: 0x18
    float lastAttemptTimer;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _attemptsCount
    // Size: 0x4
    // Offset: 0x1C
    int attemptsCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _waitingForResponse
    // Size: 0x1
    // Offset: 0x20
    bool waitingForResponse;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <HasAttempted>k__BackingField
    // Size: 0x1
    // Offset: 0x21
    bool HasAttempted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <HasFetchedAccessToken>k__BackingField
    // Size: 0x1
    // Offset: 0x22
    bool HasFetchedAccessToken;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::VROSC::IState
    operator ::VROSC::IState() noexcept {
      return *reinterpret_cast<::VROSC::IState*>(this);
    }
    // Get instance field reference: private VROSC.AuthenticationManager _authManager
    ::VROSC::AuthenticationManager*& dyn__authManager();
    // Get instance field reference: private System.Single _lastAttemptTimer
    float& dyn__lastAttemptTimer();
    // Get instance field reference: private System.Int32 _attemptsCount
    int& dyn__attemptsCount();
    // Get instance field reference: private System.Boolean _waitingForResponse
    bool& dyn__waitingForResponse();
    // Get instance field reference: private System.Boolean <HasAttempted>k__BackingField
    bool& dyn_$HasAttempted$k__BackingField();
    // Get instance field reference: private System.Boolean <HasFetchedAccessToken>k__BackingField
    bool& dyn_$HasFetchedAccessToken$k__BackingField();
    // public System.Boolean get_HasAttempted()
    // Offset: 0x1318000
    bool get_HasAttempted();
    // private System.Void set_HasAttempted(System.Boolean value)
    // Offset: 0x1318008
    void set_HasAttempted(bool value);
    // public System.Boolean get_HasFetchedAccessToken()
    // Offset: 0x1318014
    bool get_HasFetchedAccessToken();
    // private System.Void set_HasFetchedAccessToken(System.Boolean value)
    // Offset: 0x131801C
    void set_HasFetchedAccessToken(bool value);
    // public System.Void .ctor(VROSC.AuthenticationManager authManager)
    // Offset: 0x1318028
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FetchAccessTokenState* New_ctor(::VROSC::AuthenticationManager* authManager) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::FetchAccessTokenState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FetchAccessTokenState*, creationType>(authManager)));
    }
    // public System.Void OnEnter(params System.Object[] values)
    // Offset: 0x1318054
    void OnEnter(::ArrayW<::Il2CppObject*> values);
    // public System.Void OnExit()
    // Offset: 0x1318064
    void OnExit();
    // public System.Void Tick()
    // Offset: 0x1318068
    void Tick();
    // public System.Void UpdateData(params System.Object[] values)
    // Offset: 0x1318208
    void UpdateData(::ArrayW<::Il2CppObject*> values);
    // private System.Void FetchAccessToken()
    // Offset: 0x13180EC
    void FetchAccessToken();
    // private System.Void FirebaseGetAccessTokenSuccess(System.String accessToken)
    // Offset: 0x131835C
    void FirebaseGetAccessTokenSuccess(::StringW accessToken);
    // private System.Void FirebaseGetAccessTokenFailure(VROSC.Error error)
    // Offset: 0x1318394
    void FirebaseGetAccessTokenFailure(::VROSC::Error error);
  }; // VROSC.FetchAccessTokenState
  #pragma pack(pop)
  static check_size<sizeof(FetchAccessTokenState), 34 + sizeof(bool)> __VROSC_FetchAccessTokenStateSizeCheck;
  static_assert(sizeof(FetchAccessTokenState) == 0x23);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::FetchAccessTokenState::get_HasAttempted
// Il2CppName: get_HasAttempted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::FetchAccessTokenState::*)()>(&VROSC::FetchAccessTokenState::get_HasAttempted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::FetchAccessTokenState*), "get_HasAttempted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::FetchAccessTokenState::set_HasAttempted
// Il2CppName: set_HasAttempted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::FetchAccessTokenState::*)(bool)>(&VROSC::FetchAccessTokenState::set_HasAttempted)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::FetchAccessTokenState*), "set_HasAttempted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::FetchAccessTokenState::get_HasFetchedAccessToken
// Il2CppName: get_HasFetchedAccessToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::FetchAccessTokenState::*)()>(&VROSC::FetchAccessTokenState::get_HasFetchedAccessToken)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::FetchAccessTokenState*), "get_HasFetchedAccessToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::FetchAccessTokenState::set_HasFetchedAccessToken
// Il2CppName: set_HasFetchedAccessToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::FetchAccessTokenState::*)(bool)>(&VROSC::FetchAccessTokenState::set_HasFetchedAccessToken)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::FetchAccessTokenState*), "set_HasFetchedAccessToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::FetchAccessTokenState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::FetchAccessTokenState::OnEnter
// Il2CppName: OnEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::FetchAccessTokenState::*)(::ArrayW<::Il2CppObject*>)>(&VROSC::FetchAccessTokenState::OnEnter)> {
  static const MethodInfo* get() {
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::FetchAccessTokenState*), "OnEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{values});
  }
};
// Writing MetadataGetter for method: VROSC::FetchAccessTokenState::OnExit
// Il2CppName: OnExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::FetchAccessTokenState::*)()>(&VROSC::FetchAccessTokenState::OnExit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::FetchAccessTokenState*), "OnExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::FetchAccessTokenState::Tick
// Il2CppName: Tick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::FetchAccessTokenState::*)()>(&VROSC::FetchAccessTokenState::Tick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::FetchAccessTokenState*), "Tick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::FetchAccessTokenState::UpdateData
// Il2CppName: UpdateData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::FetchAccessTokenState::*)(::ArrayW<::Il2CppObject*>)>(&VROSC::FetchAccessTokenState::UpdateData)> {
  static const MethodInfo* get() {
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::FetchAccessTokenState*), "UpdateData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{values});
  }
};
// Writing MetadataGetter for method: VROSC::FetchAccessTokenState::FetchAccessToken
// Il2CppName: FetchAccessToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::FetchAccessTokenState::*)()>(&VROSC::FetchAccessTokenState::FetchAccessToken)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::FetchAccessTokenState*), "FetchAccessToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::FetchAccessTokenState::FirebaseGetAccessTokenSuccess
// Il2CppName: FirebaseGetAccessTokenSuccess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::FetchAccessTokenState::*)(::StringW)>(&VROSC::FetchAccessTokenState::FirebaseGetAccessTokenSuccess)> {
  static const MethodInfo* get() {
    static auto* accessToken = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::FetchAccessTokenState*), "FirebaseGetAccessTokenSuccess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{accessToken});
  }
};
// Writing MetadataGetter for method: VROSC::FetchAccessTokenState::FirebaseGetAccessTokenFailure
// Il2CppName: FirebaseGetAccessTokenFailure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::FetchAccessTokenState::*)(::VROSC::Error)>(&VROSC::FetchAccessTokenState::FirebaseGetAccessTokenFailure)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::FetchAccessTokenState*), "FirebaseGetAccessTokenFailure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
