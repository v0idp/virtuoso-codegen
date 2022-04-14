// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: FirebaseHelper
#include "GlobalNamespace/FirebaseHelper.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::FirebaseHelper::LinkUserEmail);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FirebaseHelper::LinkUserEmail*, "", "FirebaseHelper/LinkUserEmail");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: FirebaseHelper/LinkUserEmail
  // [TokenAttribute] Offset: FFFFFFFF
  class FirebaseHelper::LinkUserEmail : public ::Il2CppObject {
    public:
    public:
    // public System.String idToken
    // Size: 0x8
    // Offset: 0x10
    ::StringW idToken;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String email
    // Size: 0x8
    // Offset: 0x18
    ::StringW email;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String password
    // Size: 0x8
    // Offset: 0x20
    ::StringW password;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean returnSecureToken
    // Size: 0x1
    // Offset: 0x28
    bool returnSecureToken;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.String idToken
    [[deprecated]] ::StringW& dyn_idToken();
    // Get instance field reference: public System.String email
    [[deprecated]] ::StringW& dyn_email();
    // Get instance field reference: public System.String password
    [[deprecated]] ::StringW& dyn_password();
    // Get instance field reference: public System.Boolean returnSecureToken
    [[deprecated]] bool& dyn_returnSecureToken();
    // public System.Void .ctor()
    // Offset: 0x1952860
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FirebaseHelper::LinkUserEmail* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FirebaseHelper::LinkUserEmail::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FirebaseHelper::LinkUserEmail*, creationType>()));
    }
  }; // FirebaseHelper/LinkUserEmail
  #pragma pack(pop)
  static check_size<sizeof(FirebaseHelper::LinkUserEmail), 40 + sizeof(bool)> __GlobalNamespace_FirebaseHelper_LinkUserEmailSizeCheck;
  static_assert(sizeof(FirebaseHelper::LinkUserEmail) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FirebaseHelper::LinkUserEmail::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
