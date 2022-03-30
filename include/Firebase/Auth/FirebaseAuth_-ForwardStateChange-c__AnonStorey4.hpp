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
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Auth::FirebaseAuth::$ForwardStateChange$c__AnonStorey4);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Auth::FirebaseAuth::$ForwardStateChange$c__AnonStorey4*, "Firebase.Auth", "FirebaseAuth/<ForwardStateChange>c__AnonStorey4");
// Type namespace: Firebase.Auth
namespace Firebase::Auth {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Auth.FirebaseAuth/Firebase.Auth.<ForwardStateChange>c__AnonStorey4
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class FirebaseAuth::$ForwardStateChange$c__AnonStorey4 : public ::Il2CppObject {
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
    // Firebase.Auth.FirebaseAuth auth
    // Size: 0x8
    // Offset: 0x10
    ::Firebase::Auth::FirebaseAuth* auth;
    // Field size check
    static_assert(sizeof(::Firebase::Auth::FirebaseAuth*) == 0x8);
    // Firebase.Auth.FirebaseAuth/Firebase.Auth.<ForwardStateChange>c__AnonStorey3 <>f__ref$3
    // Size: 0x8
    // Offset: 0x18
    ::Firebase::Auth::FirebaseAuth::$ForwardStateChange$c__AnonStorey3* $$f__ref$3;
    // Field size check
    static_assert(sizeof(::Firebase::Auth::FirebaseAuth::$ForwardStateChange$c__AnonStorey3*) == 0x8);
    public:
    // Get instance field reference: Firebase.Auth.FirebaseAuth auth
    ::Firebase::Auth::FirebaseAuth*& dyn_auth();
    // Get instance field reference: Firebase.Auth.FirebaseAuth/Firebase.Auth.<ForwardStateChange>c__AnonStorey3 <>f__ref$3
    ::Firebase::Auth::FirebaseAuth::$ForwardStateChange$c__AnonStorey3*& dyn_$$f__ref$3();
    // System.Void <>m__0()
    // Offset: 0x12B433C
    void $$m__0();
    // public System.Void .ctor()
    // Offset: 0x12B0C90
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FirebaseAuth::$ForwardStateChange$c__AnonStorey4* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Auth::FirebaseAuth::$ForwardStateChange$c__AnonStorey4::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FirebaseAuth::$ForwardStateChange$c__AnonStorey4*, creationType>()));
    }
  }; // Firebase.Auth.FirebaseAuth/Firebase.Auth.<ForwardStateChange>c__AnonStorey4
  #pragma pack(pop)
  static check_size<sizeof(FirebaseAuth::$ForwardStateChange$c__AnonStorey4), 24 + sizeof(::Firebase::Auth::FirebaseAuth::$ForwardStateChange$c__AnonStorey3*)> __Firebase_Auth_FirebaseAuth_$ForwardStateChange$c__AnonStorey4SizeCheck;
  static_assert(sizeof(FirebaseAuth::$ForwardStateChange$c__AnonStorey4) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Auth::FirebaseAuth::$ForwardStateChange$c__AnonStorey4::$$m__0
// Il2CppName: <>m__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Auth::FirebaseAuth::$ForwardStateChange$c__AnonStorey4::*)()>(&Firebase::Auth::FirebaseAuth::$ForwardStateChange$c__AnonStorey4::$$m__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::FirebaseAuth::$ForwardStateChange$c__AnonStorey4*), "<>m__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::FirebaseAuth::$ForwardStateChange$c__AnonStorey4::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
