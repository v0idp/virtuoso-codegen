// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Runtime.InteropServices.HandleRef
#include "System/Runtime/InteropServices/HandleRef.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Firebase
namespace Firebase {
  // Forward declaring type: StringList
  class StringList;
}
// Completed forward declares
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Forward declaring type: FieldPathProxy
  class FieldPathProxy;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Firestore::FieldPathProxy);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::FieldPathProxy*, "Firebase.Firestore", "FieldPathProxy");
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Firestore.FieldPathProxy
  // [TokenAttribute] Offset: FFFFFFFF
  class FieldPathProxy : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // private System.Runtime.InteropServices.HandleRef swigCPtr
    // Size: 0x10
    // Offset: 0x10
    ::System::Runtime::InteropServices::HandleRef swigCPtr;
    // Field size check
    static_assert(sizeof(::System::Runtime::InteropServices::HandleRef) == 0x10);
    // protected System.Boolean swigCMemOwn
    // Size: 0x1
    // Offset: 0x20
    bool swigCMemOwn;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private System.Runtime.InteropServices.HandleRef swigCPtr
    [[deprecated("Use field access instead!")]] ::System::Runtime::InteropServices::HandleRef& dyn_swigCPtr();
    // Get instance field reference: protected System.Boolean swigCMemOwn
    [[deprecated("Use field access instead!")]] bool& dyn_swigCMemOwn();
    // System.Void .ctor(System.IntPtr cPtr, System.Boolean cMemoryOwn)
    // Offset: 0xD566B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FieldPathProxy* New_ctor(::System::IntPtr cPtr, bool cMemoryOwn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::FieldPathProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FieldPathProxy*, creationType>(cPtr, cMemoryOwn)));
    }
    // public System.Void .ctor(Firebase.StringList fieldNames)
    // Offset: 0xD56470
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FieldPathProxy* New_ctor(::Firebase::StringList* fieldNames) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::FieldPathProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FieldPathProxy*, creationType>(fieldNames)));
    }
    // static System.Runtime.InteropServices.HandleRef getCPtr(Firebase.Firestore.FieldPathProxy obj)
    // Offset: 0xD543BC
    static ::System::Runtime::InteropServices::HandleRef getCPtr(::Firebase::Firestore::FieldPathProxy* obj);
    // public System.Void Dispose()
    // Offset: 0xD5680C
    void Dispose();
    // protected override System.Void Finalize()
    // Offset: 0xD5679C
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Firebase.Firestore.FieldPathProxy
  #pragma pack(pop)
  static check_size<sizeof(FieldPathProxy), 32 + sizeof(bool)> __Firebase_Firestore_FieldPathProxySizeCheck;
  static_assert(sizeof(FieldPathProxy) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Firestore::FieldPathProxy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::Firestore::FieldPathProxy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::Firestore::FieldPathProxy::getCPtr
// Il2CppName: getCPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::Firebase::Firestore::FieldPathProxy*)>(&Firebase::Firestore::FieldPathProxy::getCPtr)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("Firebase.Firestore", "FieldPathProxy")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::FieldPathProxy*), "getCPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::FieldPathProxy::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Firestore::FieldPathProxy::*)()>(&Firebase::Firestore::FieldPathProxy::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::FieldPathProxy*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::FieldPathProxy::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Firestore::FieldPathProxy::*)()>(&Firebase::Firestore::FieldPathProxy::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::FieldPathProxy*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
