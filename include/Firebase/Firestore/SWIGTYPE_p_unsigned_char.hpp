// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.InteropServices.HandleRef
#include "System/Runtime/InteropServices/HandleRef.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Forward declaring type: SWIGTYPE_p_unsigned_char
  class SWIGTYPE_p_unsigned_char;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Firestore::SWIGTYPE_p_unsigned_char);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::SWIGTYPE_p_unsigned_char*, "Firebase.Firestore", "SWIGTYPE_p_unsigned_char");
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Firestore.SWIGTYPE_p_unsigned_char
  // [TokenAttribute] Offset: FFFFFFFF
  class SWIGTYPE_p_unsigned_char : public ::Il2CppObject {
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
    // private System.Runtime.InteropServices.HandleRef swigCPtr
    // Size: 0x10
    // Offset: 0x10
    ::System::Runtime::InteropServices::HandleRef swigCPtr;
    // Field size check
    static_assert(sizeof(::System::Runtime::InteropServices::HandleRef) == 0x10);
    public:
    // Creating conversion operator: operator ::System::Runtime::InteropServices::HandleRef
    constexpr operator ::System::Runtime::InteropServices::HandleRef() const noexcept {
      return swigCPtr;
    }
    // Get instance field reference: private System.Runtime.InteropServices.HandleRef swigCPtr
    ::System::Runtime::InteropServices::HandleRef& dyn_swigCPtr();
    // System.Void .ctor(System.IntPtr cPtr, System.Boolean futureUse)
    // Offset: 0xC2C2E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SWIGTYPE_p_unsigned_char* New_ctor(::System::IntPtr cPtr, bool futureUse) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::SWIGTYPE_p_unsigned_char::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SWIGTYPE_p_unsigned_char*, creationType>(cPtr, futureUse)));
    }
    // static System.Runtime.InteropServices.HandleRef getCPtr(Firebase.Firestore.SWIGTYPE_p_unsigned_char obj)
    // Offset: 0xC2C1D4
    static ::System::Runtime::InteropServices::HandleRef getCPtr(::Firebase::Firestore::SWIGTYPE_p_unsigned_char* obj);
  }; // Firebase.Firestore.SWIGTYPE_p_unsigned_char
  #pragma pack(pop)
  static check_size<sizeof(SWIGTYPE_p_unsigned_char), 16 + sizeof(::System::Runtime::InteropServices::HandleRef)> __Firebase_Firestore_SWIGTYPE_p_unsigned_charSizeCheck;
  static_assert(sizeof(SWIGTYPE_p_unsigned_char) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Firestore::SWIGTYPE_p_unsigned_char::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::Firestore::SWIGTYPE_p_unsigned_char::getCPtr
// Il2CppName: getCPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::Firebase::Firestore::SWIGTYPE_p_unsigned_char*)>(&Firebase::Firestore::SWIGTYPE_p_unsigned_char::getCPtr)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("Firebase.Firestore", "SWIGTYPE_p_unsigned_char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::SWIGTYPE_p_unsigned_char*), "getCPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
