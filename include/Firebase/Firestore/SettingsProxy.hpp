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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Forward declaring type: SettingsProxy
  class SettingsProxy;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Firestore::SettingsProxy);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::SettingsProxy*, "Firebase.Firestore", "SettingsProxy");
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Firestore.SettingsProxy
  // [TokenAttribute] Offset: FFFFFFFF
  class SettingsProxy : public ::Il2CppObject/*, public ::System::IDisposable*/ {
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
    // Get static field: static public readonly System.Int64 kCacheSizeUnlimited
    static int64_t _get_kCacheSizeUnlimited();
    // Set static field: static public readonly System.Int64 kCacheSizeUnlimited
    static void _set_kCacheSizeUnlimited(int64_t value);
    // Get instance field reference: private System.Runtime.InteropServices.HandleRef swigCPtr
    [[deprecated]] ::System::Runtime::InteropServices::HandleRef& dyn_swigCPtr();
    // Get instance field reference: protected System.Boolean swigCMemOwn
    [[deprecated]] bool& dyn_swigCMemOwn();
    // System.Void .ctor(System.IntPtr cPtr, System.Boolean cMemoryOwn)
    // Offset: 0xD5F0A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SettingsProxy* New_ctor(::System::IntPtr cPtr, bool cMemoryOwn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::SettingsProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SettingsProxy*, creationType>(cPtr, cMemoryOwn)));
    }
    // static private System.Void .cctor()
    // Offset: 0xD645E4
    static void _cctor();
    // static System.Runtime.InteropServices.HandleRef getCPtr(Firebase.Firestore.SettingsProxy obj)
    // Offset: 0xD5F1F0
    static ::System::Runtime::InteropServices::HandleRef getCPtr(::Firebase::Firestore::SettingsProxy* obj);
    // public System.Void Dispose()
    // Offset: 0xD64454
    void Dispose();
    // public System.String host()
    // Offset: 0xD5AD34
    ::StringW host();
    // public System.Boolean is_ssl_enabled()
    // Offset: 0xD5ADD0
    bool is_ssl_enabled();
    // public System.Boolean is_persistence_enabled()
    // Offset: 0xD5AE6C
    bool is_persistence_enabled();
    // public System.Int64 cache_size_bytes()
    // Offset: 0xD5AF08
    int64_t cache_size_bytes();
    // public System.Void set_host(System.String host)
    // Offset: 0xD5B450
    void set_host(::StringW host);
    // public System.Void set_ssl_enabled(System.Boolean enabled)
    // Offset: 0xD5B4F4
    void set_ssl_enabled(bool enabled);
    // public System.Void set_persistence_enabled(System.Boolean enabled)
    // Offset: 0xD5B598
    void set_persistence_enabled(bool enabled);
    // public System.Void set_cache_size_bytes(System.Int64 value)
    // Offset: 0xD5B63C
    void set_cache_size_bytes(int64_t value);
    // public System.Void .ctor()
    // Offset: 0xD5B3B8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SettingsProxy* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::SettingsProxy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SettingsProxy*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0xD643E4
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Firebase.Firestore.SettingsProxy
  #pragma pack(pop)
  static check_size<sizeof(SettingsProxy), 32 + sizeof(bool)> __Firebase_Firestore_SettingsProxySizeCheck;
  static_assert(sizeof(SettingsProxy) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Firestore::SettingsProxy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::Firestore::SettingsProxy::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Firebase::Firestore::SettingsProxy::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::SettingsProxy*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::SettingsProxy::getCPtr
// Il2CppName: getCPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::Firebase::Firestore::SettingsProxy*)>(&Firebase::Firestore::SettingsProxy::getCPtr)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("Firebase.Firestore", "SettingsProxy")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::SettingsProxy*), "getCPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::SettingsProxy::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Firestore::SettingsProxy::*)()>(&Firebase::Firestore::SettingsProxy::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::SettingsProxy*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::SettingsProxy::host
// Il2CppName: host
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Firebase::Firestore::SettingsProxy::*)()>(&Firebase::Firestore::SettingsProxy::host)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::SettingsProxy*), "host", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::SettingsProxy::is_ssl_enabled
// Il2CppName: is_ssl_enabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Firebase::Firestore::SettingsProxy::*)()>(&Firebase::Firestore::SettingsProxy::is_ssl_enabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::SettingsProxy*), "is_ssl_enabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::SettingsProxy::is_persistence_enabled
// Il2CppName: is_persistence_enabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Firebase::Firestore::SettingsProxy::*)()>(&Firebase::Firestore::SettingsProxy::is_persistence_enabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::SettingsProxy*), "is_persistence_enabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::SettingsProxy::cache_size_bytes
// Il2CppName: cache_size_bytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Firebase::Firestore::SettingsProxy::*)()>(&Firebase::Firestore::SettingsProxy::cache_size_bytes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::SettingsProxy*), "cache_size_bytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::SettingsProxy::set_host
// Il2CppName: set_host
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Firestore::SettingsProxy::*)(::StringW)>(&Firebase::Firestore::SettingsProxy::set_host)> {
  static const MethodInfo* get() {
    static auto* host = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::SettingsProxy*), "set_host", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{host});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::SettingsProxy::set_ssl_enabled
// Il2CppName: set_ssl_enabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Firestore::SettingsProxy::*)(bool)>(&Firebase::Firestore::SettingsProxy::set_ssl_enabled)> {
  static const MethodInfo* get() {
    static auto* enabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::SettingsProxy*), "set_ssl_enabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enabled});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::SettingsProxy::set_persistence_enabled
// Il2CppName: set_persistence_enabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Firestore::SettingsProxy::*)(bool)>(&Firebase::Firestore::SettingsProxy::set_persistence_enabled)> {
  static const MethodInfo* get() {
    static auto* enabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::SettingsProxy*), "set_persistence_enabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enabled});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::SettingsProxy::set_cache_size_bytes
// Il2CppName: set_cache_size_bytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Firestore::SettingsProxy::*)(int64_t)>(&Firebase::Firestore::SettingsProxy::set_cache_size_bytes)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::SettingsProxy*), "set_cache_size_bytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::SettingsProxy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::Firestore::SettingsProxy::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Firestore::SettingsProxy::*)()>(&Firebase::Firestore::SettingsProxy::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::SettingsProxy*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
