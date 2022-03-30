// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: FirebaseHelper
  class FirebaseHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::FirebaseHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FirebaseHelper*, "", "FirebaseHelper");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: FirebaseHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class FirebaseHelper : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::FirebaseHelper::NewUser
    class NewUser;
    // Nested type: ::GlobalNamespace::FirebaseHelper::RefreshedUser
    class RefreshedUser;
    // Nested type: ::GlobalNamespace::FirebaseHelper::RefreshUser
    class RefreshUser;
    // Nested type: ::GlobalNamespace::FirebaseHelper::LinkUserEmail
    class LinkUserEmail;
    // Nested type: ::GlobalNamespace::FirebaseHelper::LinkedUser
    class LinkedUser;
    // Nested type: ::GlobalNamespace::FirebaseHelper::ErrorLog
    class ErrorLog;
    // public System.Void .ctor()
    // Offset: 0x131A258
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FirebaseHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FirebaseHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FirebaseHelper*, creationType>()));
    }
  }; // FirebaseHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FirebaseHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
