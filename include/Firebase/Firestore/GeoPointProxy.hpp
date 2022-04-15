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
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Forward declaring type: GeoPointProxy
  class GeoPointProxy;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Firestore::GeoPointProxy);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::GeoPointProxy*, "Firebase.Firestore", "GeoPointProxy");
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Firestore.GeoPointProxy
  // [TokenAttribute] Offset: FFFFFFFF
  class GeoPointProxy : public ::Il2CppObject/*, public ::System::IDisposable*/ {
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
    // Offset: 0xD58770
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GeoPointProxy* New_ctor(::System::IntPtr cPtr, bool cMemoryOwn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::GeoPointProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GeoPointProxy*, creationType>(cPtr, cMemoryOwn)));
    }
    // public System.Void .ctor(System.Double latitude, System.Double longitude)
    // Offset: 0xD61C94
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GeoPointProxy* New_ctor(double latitude, double longitude) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::GeoPointProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GeoPointProxy*, creationType>(latitude, longitude)));
    }
    // static System.Runtime.InteropServices.HandleRef getCPtr(Firebase.Firestore.GeoPointProxy obj)
    // Offset: 0xD57F54
    static ::System::Runtime::InteropServices::HandleRef getCPtr(::Firebase::Firestore::GeoPointProxy* obj);
    // public System.Void Dispose()
    // Offset: 0xD61FF4
    void Dispose();
    // public System.Double latitude()
    // Offset: 0xD61D44
    double latitude();
    // public System.Double longitude()
    // Offset: 0xD61DE8
    double longitude();
    // protected override System.Void Finalize()
    // Offset: 0xD61F84
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Firebase.Firestore.GeoPointProxy
  #pragma pack(pop)
  static check_size<sizeof(GeoPointProxy), 32 + sizeof(bool)> __Firebase_Firestore_GeoPointProxySizeCheck;
  static_assert(sizeof(GeoPointProxy) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Firestore::GeoPointProxy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::Firestore::GeoPointProxy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::Firestore::GeoPointProxy::getCPtr
// Il2CppName: getCPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::Firebase::Firestore::GeoPointProxy*)>(&Firebase::Firestore::GeoPointProxy::getCPtr)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("Firebase.Firestore", "GeoPointProxy")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::GeoPointProxy*), "getCPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::GeoPointProxy::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Firestore::GeoPointProxy::*)()>(&Firebase::Firestore::GeoPointProxy::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::GeoPointProxy*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::GeoPointProxy::latitude
// Il2CppName: latitude
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (Firebase::Firestore::GeoPointProxy::*)()>(&Firebase::Firestore::GeoPointProxy::latitude)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::GeoPointProxy*), "latitude", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::GeoPointProxy::longitude
// Il2CppName: longitude
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (Firebase::Firestore::GeoPointProxy::*)()>(&Firebase::Firestore::GeoPointProxy::longitude)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::GeoPointProxy*), "longitude", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::GeoPointProxy::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Firestore::GeoPointProxy::*)()>(&Firebase::Firestore::GeoPointProxy::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::GeoPointProxy*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
