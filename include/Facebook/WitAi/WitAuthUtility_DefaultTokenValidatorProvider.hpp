// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Facebook.WitAi.WitAuthUtility
#include "Facebook/WitAi/WitAuthUtility.hpp"
// Including type: Facebook.WitAi.WitAuthUtility/Facebook.WitAi.ITokenValidationProvider
#include "Facebook/WitAi/WitAuthUtility_ITokenValidationProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Facebook::WitAi::WitAuthUtility::DefaultTokenValidatorProvider);
DEFINE_IL2CPP_ARG_TYPE(::Facebook::WitAi::WitAuthUtility::DefaultTokenValidatorProvider*, "Facebook.WitAi", "WitAuthUtility/DefaultTokenValidatorProvider");
// Type namespace: Facebook.WitAi
namespace Facebook::WitAi {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Facebook.WitAi.WitAuthUtility/Facebook.WitAi.DefaultTokenValidatorProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class WitAuthUtility::DefaultTokenValidatorProvider : public ::Il2CppObject/*, public ::Facebook::WitAi::WitAuthUtility::ITokenValidationProvider*/ {
    public:
    // Creating interface conversion operator: operator ::Facebook::WitAi::WitAuthUtility::ITokenValidationProvider
    operator ::Facebook::WitAi::WitAuthUtility::ITokenValidationProvider() noexcept {
      return *reinterpret_cast<::Facebook::WitAi::WitAuthUtility::ITokenValidationProvider*>(this);
    }
    // public System.Void .ctor()
    // Offset: 0x16745A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitAuthUtility::DefaultTokenValidatorProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Facebook::WitAi::WitAuthUtility::DefaultTokenValidatorProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitAuthUtility::DefaultTokenValidatorProvider*, creationType>()));
    }
    // public System.Boolean IsTokenValid(System.String appId, System.String token)
    // Offset: 0x167DBC4
    bool IsTokenValid(::StringW appId, ::StringW token);
    // public System.Boolean IsServerTokenValid(System.String serverToken)
    // Offset: 0x167DBE0
    bool IsServerTokenValid(::StringW serverToken);
  }; // Facebook.WitAi.WitAuthUtility/Facebook.WitAi.DefaultTokenValidatorProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Facebook::WitAi::WitAuthUtility::DefaultTokenValidatorProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Facebook::WitAi::WitAuthUtility::DefaultTokenValidatorProvider::IsTokenValid
// Il2CppName: IsTokenValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Facebook::WitAi::WitAuthUtility::DefaultTokenValidatorProvider::*)(::StringW, ::StringW)>(&Facebook::WitAi::WitAuthUtility::DefaultTokenValidatorProvider::IsTokenValid)> {
  static const MethodInfo* get() {
    static auto* appId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* token = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::WitAuthUtility::DefaultTokenValidatorProvider*), "IsTokenValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{appId, token});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::WitAuthUtility::DefaultTokenValidatorProvider::IsServerTokenValid
// Il2CppName: IsServerTokenValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Facebook::WitAi::WitAuthUtility::DefaultTokenValidatorProvider::*)(::StringW)>(&Facebook::WitAi::WitAuthUtility::DefaultTokenValidatorProvider::IsServerTokenValid)> {
  static const MethodInfo* get() {
    static auto* serverToken = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::WitAuthUtility::DefaultTokenValidatorProvider*), "IsServerTokenValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serverToken});
  }
};
