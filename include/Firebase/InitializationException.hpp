// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
// Including type: Firebase.InitResult
#include "Firebase/InitResult.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Firebase
namespace Firebase {
  // Forward declaring type: InitializationException
  class InitializationException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::InitializationException);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::InitializationException*, "Firebase", "InitializationException");
// Type namespace: Firebase
namespace Firebase {
  // Size: 0x8C
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.InitializationException
  // [TokenAttribute] Offset: FFFFFFFF
  class InitializationException : public ::System::Exception {
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
    // [DebuggerBrowsableAttribute] Offset: 0x5D8BF8
    // private Firebase.InitResult <InitResult>k__BackingField
    // Size: 0x4
    // Offset: 0x88
    ::Firebase::InitResult InitResult;
    // Field size check
    static_assert(sizeof(::Firebase::InitResult) == 0x4);
    public:
    // Creating conversion operator: operator ::Firebase::InitResult
    constexpr operator ::Firebase::InitResult() const noexcept {
      return InitResult;
    }
    // Get instance field reference: private Firebase.InitResult <InitResult>k__BackingField
    ::Firebase::InitResult& dyn_$InitResult$k__BackingField();
    // private System.Void set_InitResult(Firebase.InitResult value)
    // Offset: 0x129BA58
    void set_InitResult(::Firebase::InitResult value);
    // public System.Void .ctor(Firebase.InitResult result)
    // Offset: 0x129B9E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InitializationException* New_ctor(::Firebase::InitResult result) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::InitializationException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InitializationException*, creationType>(result)));
    }
    // public System.Void .ctor(Firebase.InitResult result, System.String message)
    // Offset: 0x1296B54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InitializationException* New_ctor(::Firebase::InitResult result, ::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::InitializationException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InitializationException*, creationType>(result, message)));
    }
    // public System.Void .ctor(Firebase.InitResult result, System.String message, System.Exception inner)
    // Offset: 0x129909C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InitializationException* New_ctor(::Firebase::InitResult result, ::StringW message, ::System::Exception* inner) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::InitializationException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InitializationException*, creationType>(result, message, inner)));
    }
  }; // Firebase.InitializationException
  #pragma pack(pop)
  static check_size<sizeof(InitializationException), 136 + sizeof(::Firebase::InitResult)> __Firebase_InitializationExceptionSizeCheck;
  static_assert(sizeof(InitializationException) == 0x8C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::InitializationException::set_InitResult
// Il2CppName: set_InitResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::InitializationException::*)(::Firebase::InitResult)>(&Firebase::InitializationException::set_InitResult)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Firebase", "InitResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::InitializationException*), "set_InitResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Firebase::InitializationException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::InitializationException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::InitializationException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
