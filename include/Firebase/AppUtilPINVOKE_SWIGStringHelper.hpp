// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Firebase.AppUtilPINVOKE
#include "Firebase/AppUtilPINVOKE.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Firebase
namespace Firebase {
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::AppUtilPINVOKE::SWIGStringHelper);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::AppUtilPINVOKE::SWIGStringHelper*, "Firebase", "AppUtilPINVOKE/SWIGStringHelper");
// Type namespace: Firebase
namespace Firebase {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.AppUtilPINVOKE/Firebase.SWIGStringHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class AppUtilPINVOKE::SWIGStringHelper : public ::Il2CppObject {
    public:
    // Nested type: ::Firebase::AppUtilPINVOKE::SWIGStringHelper::SWIGStringDelegate
    class SWIGStringDelegate;
    // Get static field: static private Firebase.AppUtilPINVOKE/Firebase.SWIGStringHelper/Firebase.SWIGStringDelegate stringDelegate
    static ::Firebase::AppUtilPINVOKE::SWIGStringHelper::SWIGStringDelegate* _get_stringDelegate();
    // Set static field: static private Firebase.AppUtilPINVOKE/Firebase.SWIGStringHelper/Firebase.SWIGStringDelegate stringDelegate
    static void _set_stringDelegate(::Firebase::AppUtilPINVOKE::SWIGStringHelper::SWIGStringDelegate* value);
    // static private System.Void .cctor()
    // Offset: 0x129DB30
    static void _cctor();
    // static public System.Void SWIGRegisterStringCallback_AppUtil(Firebase.AppUtilPINVOKE/Firebase.SWIGStringHelper/Firebase.SWIGStringDelegate stringDelegate)
    // Offset: 0x129DBD8
    static void SWIGRegisterStringCallback_AppUtil(::Firebase::AppUtilPINVOKE::SWIGStringHelper::SWIGStringDelegate* stringDelegate);
    // static private System.String CreateString(System.String cString)
    // Offset: 0x129DB2C
    static ::StringW CreateString(::StringW cString);
    // public System.Void .ctor()
    // Offset: 0x1294C34
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AppUtilPINVOKE::SWIGStringHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::AppUtilPINVOKE::SWIGStringHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AppUtilPINVOKE::SWIGStringHelper*, creationType>()));
    }
  }; // Firebase.AppUtilPINVOKE/Firebase.SWIGStringHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::AppUtilPINVOKE::SWIGStringHelper::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Firebase::AppUtilPINVOKE::SWIGStringHelper::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::AppUtilPINVOKE::SWIGStringHelper*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::AppUtilPINVOKE::SWIGStringHelper::SWIGRegisterStringCallback_AppUtil
// Il2CppName: SWIGRegisterStringCallback_AppUtil
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Firebase::AppUtilPINVOKE::SWIGStringHelper::SWIGStringDelegate*)>(&Firebase::AppUtilPINVOKE::SWIGStringHelper::SWIGRegisterStringCallback_AppUtil)> {
  static const MethodInfo* get() {
    static auto* stringDelegate = &::il2cpp_utils::GetClassFromName("Firebase", "AppUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::AppUtilPINVOKE::SWIGStringHelper*), "SWIGRegisterStringCallback_AppUtil", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stringDelegate});
  }
};
// Writing MetadataGetter for method: Firebase::AppUtilPINVOKE::SWIGStringHelper::CreateString
// Il2CppName: CreateString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&Firebase::AppUtilPINVOKE::SWIGStringHelper::CreateString)> {
  static const MethodInfo* get() {
    static auto* cString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::AppUtilPINVOKE::SWIGStringHelper*), "CreateString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cString});
  }
};
// Writing MetadataGetter for method: Firebase::AppUtilPINVOKE::SWIGStringHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
