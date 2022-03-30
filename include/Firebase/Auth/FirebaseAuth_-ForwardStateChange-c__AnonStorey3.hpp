// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Firebase.Auth.FirebaseAuth
#include "Firebase/Auth/FirebaseAuth.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Auth::FirebaseAuth::$ForwardStateChange$c__AnonStorey3);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Auth::FirebaseAuth::$ForwardStateChange$c__AnonStorey3*, "Firebase.Auth", "FirebaseAuth/<ForwardStateChange>c__AnonStorey3");
// Type namespace: Firebase.Auth
namespace Firebase::Auth {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Auth.FirebaseAuth/Firebase.Auth.<ForwardStateChange>c__AnonStorey3
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class FirebaseAuth::$ForwardStateChange$c__AnonStorey3 : public ::Il2CppObject {
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
    // System.Action`1<Firebase.Auth.FirebaseAuth> stateChangeClosure
    // Size: 0x8
    // Offset: 0x10
    ::System::Action_1<::Firebase::Auth::FirebaseAuth*>* stateChangeClosure;
    // Field size check
    static_assert(sizeof(::System::Action_1<::Firebase::Auth::FirebaseAuth*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Action_1<::Firebase::Auth::FirebaseAuth*>*
    constexpr operator ::System::Action_1<::Firebase::Auth::FirebaseAuth*>*() const noexcept {
      return stateChangeClosure;
    }
    // Get instance field reference: System.Action`1<Firebase.Auth.FirebaseAuth> stateChangeClosure
    ::System::Action_1<::Firebase::Auth::FirebaseAuth*>*& dyn_stateChangeClosure();
    // public System.Void .ctor()
    // Offset: 0x12B0C88
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FirebaseAuth::$ForwardStateChange$c__AnonStorey3* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Auth::FirebaseAuth::$ForwardStateChange$c__AnonStorey3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FirebaseAuth::$ForwardStateChange$c__AnonStorey3*, creationType>()));
    }
  }; // Firebase.Auth.FirebaseAuth/Firebase.Auth.<ForwardStateChange>c__AnonStorey3
  #pragma pack(pop)
  static check_size<sizeof(FirebaseAuth::$ForwardStateChange$c__AnonStorey3), 16 + sizeof(::System::Action_1<::Firebase::Auth::FirebaseAuth*>*)> __Firebase_Auth_FirebaseAuth_$ForwardStateChange$c__AnonStorey3SizeCheck;
  static_assert(sizeof(FirebaseAuth::$ForwardStateChange$c__AnonStorey3) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Auth::FirebaseAuth::$ForwardStateChange$c__AnonStorey3::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!