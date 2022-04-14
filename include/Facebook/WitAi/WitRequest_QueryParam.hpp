// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Facebook.WitAi.WitRequest
#include "Facebook/WitAi/WitRequest.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Facebook::WitAi::WitRequest::QueryParam);
DEFINE_IL2CPP_ARG_TYPE(::Facebook::WitAi::WitRequest::QueryParam*, "Facebook.WitAi", "WitRequest/QueryParam");
// Type namespace: Facebook.WitAi
namespace Facebook::WitAi {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Facebook.WitAi.WitRequest/Facebook.WitAi.QueryParam
  // [TokenAttribute] Offset: FFFFFFFF
  class WitRequest::QueryParam : public ::Il2CppObject {
    public:
    public:
    // public System.String key
    // Size: 0x8
    // Offset: 0x10
    ::StringW key;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String value
    // Size: 0x8
    // Offset: 0x18
    ::StringW value;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.String key
    [[deprecated]] ::StringW& dyn_key();
    // Get instance field reference: public System.String value
    [[deprecated]] ::StringW& dyn_value();
    // public System.Void .ctor()
    // Offset: 0x1676E70
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitRequest::QueryParam* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Facebook::WitAi::WitRequest::QueryParam::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitRequest::QueryParam*, creationType>()));
    }
  }; // Facebook.WitAi.WitRequest/Facebook.WitAi.QueryParam
  #pragma pack(pop)
  static check_size<sizeof(WitRequest::QueryParam), 24 + sizeof(::StringW)> __Facebook_WitAi_WitRequest_QueryParamSizeCheck;
  static_assert(sizeof(WitRequest::QueryParam) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Facebook::WitAi::WitRequest::QueryParam::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
