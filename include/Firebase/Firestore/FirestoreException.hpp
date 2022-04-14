// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
// Including type: Firebase.Firestore.FirestoreError
#include "Firebase/Firestore/FirestoreError.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Forward declaring type: FirestoreException
  class FirestoreException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Firestore::FirestoreException);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::FirestoreException*, "Firebase.Firestore", "FirestoreException");
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Size: 0x8C
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Firestore.FirestoreException
  // [TokenAttribute] Offset: FFFFFFFF
  class FirestoreException : public ::System::Exception {
    public:
    public:
    // [DebuggerBrowsableAttribute] Offset: 0x6D859C
    // private Firebase.Firestore.FirestoreError <ErrorCode>k__BackingField
    // Size: 0x4
    // Offset: 0x88
    ::Firebase::Firestore::FirestoreError ErrorCode;
    // Field size check
    static_assert(sizeof(::Firebase::Firestore::FirestoreError) == 0x4);
    public:
    // Creating conversion operator: operator ::Firebase::Firestore::FirestoreError
    constexpr operator ::Firebase::Firestore::FirestoreError() const noexcept {
      return ErrorCode;
    }
    // Get instance field reference: private Firebase.Firestore.FirestoreError <ErrorCode>k__BackingField
    [[deprecated]] ::Firebase::Firestore::FirestoreError& dyn_$ErrorCode$k__BackingField();
    // private System.Void set_ErrorCode(Firebase.Firestore.FirestoreError value)
    // Offset: 0xD5EC18
    void set_ErrorCode(::Firebase::Firestore::FirestoreError value);
    // public System.Void .ctor(Firebase.Firestore.FirestoreError errorCode, System.String message)
    // Offset: 0xD5EB94
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FirestoreException* New_ctor(::Firebase::Firestore::FirestoreError errorCode, ::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::FirestoreException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FirestoreException*, creationType>(errorCode, message)));
    }
    // System.Void .ctor(System.Int32 errorCode, System.String message)
    // Offset: 0xD5EC14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FirestoreException* New_ctor(int errorCode, ::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::FirestoreException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FirestoreException*, creationType>(errorCode, message)));
    }
  }; // Firebase.Firestore.FirestoreException
  #pragma pack(pop)
  static check_size<sizeof(FirestoreException), 136 + sizeof(::Firebase::Firestore::FirestoreError)> __Firebase_Firestore_FirestoreExceptionSizeCheck;
  static_assert(sizeof(FirestoreException) == 0x8C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Firestore::FirestoreException::set_ErrorCode
// Il2CppName: set_ErrorCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Firestore::FirestoreException::*)(::Firebase::Firestore::FirestoreError)>(&Firebase::Firestore::FirestoreException::set_ErrorCode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Firebase.Firestore", "FirestoreError")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::FirestoreException*), "set_ErrorCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::FirestoreException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::Firestore::FirestoreException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
