// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Firebase.Storage.StorageInternalPINVOKE
#include "Firebase/Storage/StorageInternalPINVOKE.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Firebase::Storage
namespace Firebase::Storage {
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Storage::StorageInternalPINVOKE::SWIGStringHelper);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Storage::StorageInternalPINVOKE::SWIGStringHelper*, "Firebase.Storage", "StorageInternalPINVOKE/SWIGStringHelper");
// Type namespace: Firebase.Storage
namespace Firebase::Storage {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Storage.StorageInternalPINVOKE/Firebase.Storage.SWIGStringHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class StorageInternalPINVOKE::SWIGStringHelper : public ::Il2CppObject {
    public:
    // Nested type: ::Firebase::Storage::StorageInternalPINVOKE::SWIGStringHelper::SWIGStringDelegate
    class SWIGStringDelegate;
    // Get static field: static private Firebase.Storage.StorageInternalPINVOKE/Firebase.Storage.SWIGStringHelper/Firebase.Storage.SWIGStringDelegate stringDelegate
    static ::Firebase::Storage::StorageInternalPINVOKE::SWIGStringHelper::SWIGStringDelegate* _get_stringDelegate();
    // Set static field: static private Firebase.Storage.StorageInternalPINVOKE/Firebase.Storage.SWIGStringHelper/Firebase.Storage.SWIGStringDelegate stringDelegate
    static void _set_stringDelegate(::Firebase::Storage::StorageInternalPINVOKE::SWIGStringHelper::SWIGStringDelegate* value);
    // static private System.Void .cctor()
    // Offset: 0x183B678
    static void _cctor();
    // static System.Void SWIGRegisterStringCallback_StorageInternal(Firebase.Storage.StorageInternalPINVOKE/Firebase.Storage.SWIGStringHelper/Firebase.Storage.SWIGStringDelegate stringDelegate)
    // Offset: 0x183B720
    static void SWIGRegisterStringCallback_StorageInternal(::Firebase::Storage::StorageInternalPINVOKE::SWIGStringHelper::SWIGStringDelegate* stringDelegate);
    // static private System.String CreateString(System.String cString)
    // Offset: 0x183B674
    static ::StringW CreateString(::StringW cString);
    // public System.Void .ctor()
    // Offset: 0x18378AC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StorageInternalPINVOKE::SWIGStringHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Storage::StorageInternalPINVOKE::SWIGStringHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StorageInternalPINVOKE::SWIGStringHelper*, creationType>()));
    }
  }; // Firebase.Storage.StorageInternalPINVOKE/Firebase.Storage.SWIGStringHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Storage::StorageInternalPINVOKE::SWIGStringHelper::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Firebase::Storage::StorageInternalPINVOKE::SWIGStringHelper::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Storage::StorageInternalPINVOKE::SWIGStringHelper*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Storage::StorageInternalPINVOKE::SWIGStringHelper::SWIGRegisterStringCallback_StorageInternal
// Il2CppName: SWIGRegisterStringCallback_StorageInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Firebase::Storage::StorageInternalPINVOKE::SWIGStringHelper::SWIGStringDelegate*)>(&Firebase::Storage::StorageInternalPINVOKE::SWIGStringHelper::SWIGRegisterStringCallback_StorageInternal)> {
  static const MethodInfo* get() {
    static auto* stringDelegate = &::il2cpp_utils::GetClassFromName("Firebase.Storage", "StorageInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Storage::StorageInternalPINVOKE::SWIGStringHelper*), "SWIGRegisterStringCallback_StorageInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stringDelegate});
  }
};
// Writing MetadataGetter for method: Firebase::Storage::StorageInternalPINVOKE::SWIGStringHelper::CreateString
// Il2CppName: CreateString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&Firebase::Storage::StorageInternalPINVOKE::SWIGStringHelper::CreateString)> {
  static const MethodInfo* get() {
    static auto* cString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Storage::StorageInternalPINVOKE::SWIGStringHelper*), "CreateString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cString});
  }
};
// Writing MetadataGetter for method: Firebase::Storage::StorageInternalPINVOKE::SWIGStringHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
