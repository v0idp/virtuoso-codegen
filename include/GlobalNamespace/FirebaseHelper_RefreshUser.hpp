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
NEED_NO_BOX(::GlobalNamespace::FirebaseHelper::RefreshUser);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FirebaseHelper::RefreshUser*, "", "FirebaseHelper/RefreshUser");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: FirebaseHelper/RefreshUser
  // [TokenAttribute] Offset: FFFFFFFF
  class FirebaseHelper::RefreshUser : public ::Il2CppObject {
    public:
    public:
    // public System.String refresh_token
    // Size: 0x8
    // Offset: 0x10
    ::StringW refresh_token;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String grant_type
    // Size: 0x8
    // Offset: 0x18
    ::StringW grant_type;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.String refresh_token
    [[deprecated("Use field access instead!")]] ::StringW& dyn_refresh_token();
    // Get instance field reference: public System.String grant_type
    [[deprecated("Use field access instead!")]] ::StringW& dyn_grant_type();
    // public System.Void .ctor()
    // Offset: 0x1952878
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FirebaseHelper::RefreshUser* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FirebaseHelper::RefreshUser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FirebaseHelper::RefreshUser*, creationType>()));
    }
  }; // FirebaseHelper/RefreshUser
  #pragma pack(pop)
  static check_size<sizeof(FirebaseHelper::RefreshUser), 24 + sizeof(::StringW)> __GlobalNamespace_FirebaseHelper_RefreshUserSizeCheck;
  static_assert(sizeof(FirebaseHelper::RefreshUser) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FirebaseHelper::RefreshUser::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
