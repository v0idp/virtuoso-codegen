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
// Forward declaring namespace: Firebase::Firestore
namespace Firebase::Firestore {
  // Forward declaring type: FieldValueProxy
  class FieldValueProxy;
}
// Completed forward declares
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Forward declaring type: FieldValueVector
  class FieldValueVector;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Firestore::FieldValueVector);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::FieldValueVector*, "Firebase.Firestore", "FieldValueVector");
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Firestore.FieldValueVector
  // [TokenAttribute] Offset: FFFFFFFF
  class FieldValueVector : public ::Il2CppObject/*, public ::System::IDisposable*/ {
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
    [[deprecated]] ::System::Runtime::InteropServices::HandleRef& dyn_swigCPtr();
    // Get instance field reference: protected System.Boolean swigCMemOwn
    [[deprecated]] bool& dyn_swigCMemOwn();
    // System.Void .ctor(System.IntPtr cPtr, System.Boolean cMemoryOwn)
    // Offset: 0xD58C10
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FieldValueVector* New_ctor(::System::IntPtr cPtr, bool cMemoryOwn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::FieldValueVector::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FieldValueVector*, creationType>(cPtr, cMemoryOwn)));
    }
    // static System.Runtime.InteropServices.HandleRef getCPtr(Firebase.Firestore.FieldValueVector obj)
    // Offset: 0xD58CE8
    static ::System::Runtime::InteropServices::HandleRef getCPtr(::Firebase::Firestore::FieldValueVector* obj);
    // public System.Void Dispose()
    // Offset: 0xD58DC4
    void Dispose();
    // public System.UInt32 Size()
    // Offset: 0xD47924
    uint Size();
    // public Firebase.Firestore.FieldValueProxy GetUnsafeView(System.UInt32 i)
    // Offset: 0xD479C0
    ::Firebase::Firestore::FieldValueProxy* GetUnsafeView(uint i);
    // public System.Void PushBack(Firebase.Firestore.FieldValueProxy value)
    // Offset: 0xD4DD50
    void PushBack(::Firebase::Firestore::FieldValueProxy* value);
    // public System.Void .ctor()
    // Offset: 0xD4DCB8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FieldValueVector* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::FieldValueVector::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FieldValueVector*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0xD58D54
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Firebase.Firestore.FieldValueVector
  #pragma pack(pop)
  static check_size<sizeof(FieldValueVector), 32 + sizeof(bool)> __Firebase_Firestore_FieldValueVectorSizeCheck;
  static_assert(sizeof(FieldValueVector) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Firestore::FieldValueVector::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::Firestore::FieldValueVector::getCPtr
// Il2CppName: getCPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::Firebase::Firestore::FieldValueVector*)>(&Firebase::Firestore::FieldValueVector::getCPtr)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("Firebase.Firestore", "FieldValueVector")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::FieldValueVector*), "getCPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::FieldValueVector::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Firestore::FieldValueVector::*)()>(&Firebase::Firestore::FieldValueVector::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::FieldValueVector*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::FieldValueVector::Size
// Il2CppName: Size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Firebase::Firestore::FieldValueVector::*)()>(&Firebase::Firestore::FieldValueVector::Size)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::FieldValueVector*), "Size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::FieldValueVector::GetUnsafeView
// Il2CppName: GetUnsafeView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::FieldValueProxy* (Firebase::Firestore::FieldValueVector::*)(uint)>(&Firebase::Firestore::FieldValueVector::GetUnsafeView)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::FieldValueVector*), "GetUnsafeView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::FieldValueVector::PushBack
// Il2CppName: PushBack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Firestore::FieldValueVector::*)(::Firebase::Firestore::FieldValueProxy*)>(&Firebase::Firestore::FieldValueVector::PushBack)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Firebase.Firestore", "FieldValueProxy")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::FieldValueVector*), "PushBack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::FieldValueVector::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::Firestore::FieldValueVector::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Firestore::FieldValueVector::*)()>(&Firebase::Firestore::FieldValueVector::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::FieldValueVector*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
