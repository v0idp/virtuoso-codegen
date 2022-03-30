// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.Session
#include "VROSC/Session.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::Session::Contributor);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Session::Contributor*, "VROSC", "Session/Contributor");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.Session/VROSC.Contributor
  // [TokenAttribute] Offset: FFFFFFFF
  class Session::Contributor : public ::Il2CppObject {
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
    // public System.String UserId
    // Size: 0x8
    // Offset: 0x10
    ::StringW UserId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String UserName
    // Size: 0x8
    // Offset: 0x18
    ::StringW UserName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String SessionId
    // Size: 0x8
    // Offset: 0x20
    ::StringW SessionId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String Date
    // Size: 0x8
    // Offset: 0x28
    ::StringW Date;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.String UserId
    ::StringW& dyn_UserId();
    // Get instance field reference: public System.String UserName
    ::StringW& dyn_UserName();
    // Get instance field reference: public System.String SessionId
    ::StringW& dyn_SessionId();
    // Get instance field reference: public System.String Date
    ::StringW& dyn_Date();
    // public System.Void .ctor()
    // Offset: 0x134A0A4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Session::Contributor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::Session::Contributor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Session::Contributor*, creationType>()));
    }
  }; // VROSC.Session/VROSC.Contributor
  #pragma pack(pop)
  static check_size<sizeof(Session::Contributor), 40 + sizeof(::StringW)> __VROSC_Session_ContributorSizeCheck;
  static_assert(sizeof(Session::Contributor) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::Session::Contributor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!