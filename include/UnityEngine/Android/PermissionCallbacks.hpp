// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.AndroidJavaProxy
#include "UnityEngine/AndroidJavaProxy.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: UnityEngine.Android
namespace UnityEngine::Android {
  // Forward declaring type: PermissionCallbacks
  class PermissionCallbacks;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Android::PermissionCallbacks);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::PermissionCallbacks*, "UnityEngine.Android", "PermissionCallbacks");
// Type namespace: UnityEngine.Android
namespace UnityEngine::Android {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Android.PermissionCallbacks
  // [TokenAttribute] Offset: FFFFFFFF
  class PermissionCallbacks : public ::UnityEngine::AndroidJavaProxy {
    public:
    public:
    // [DebuggerBrowsableAttribute] Offset: 0x6B3FB0
    // private System.Action`1<System.String> PermissionGranted
    // Size: 0x8
    // Offset: 0x20
    ::System::Action_1<::StringW>* PermissionGranted;
    // Field size check
    static_assert(sizeof(::System::Action_1<::StringW>*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0x6B3FEC
    // private System.Action`1<System.String> PermissionDenied
    // Size: 0x8
    // Offset: 0x28
    ::System::Action_1<::StringW>* PermissionDenied;
    // Field size check
    static_assert(sizeof(::System::Action_1<::StringW>*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0x6B4028
    // private System.Action`1<System.String> PermissionDeniedAndDontAskAgain
    // Size: 0x8
    // Offset: 0x30
    ::System::Action_1<::StringW>* PermissionDeniedAndDontAskAgain;
    // Field size check
    static_assert(sizeof(::System::Action_1<::StringW>*) == 0x8);
    public:
    // Get instance field reference: private System.Action`1<System.String> PermissionGranted
    [[deprecated]] ::System::Action_1<::StringW>*& dyn_PermissionGranted();
    // Get instance field reference: private System.Action`1<System.String> PermissionDenied
    [[deprecated]] ::System::Action_1<::StringW>*& dyn_PermissionDenied();
    // Get instance field reference: private System.Action`1<System.String> PermissionDeniedAndDontAskAgain
    [[deprecated]] ::System::Action_1<::StringW>*& dyn_PermissionDeniedAndDontAskAgain();
    // public System.Void add_PermissionGranted(System.Action`1<System.String> value)
    // Offset: 0x18744E0
    void add_PermissionGranted(::System::Action_1<::StringW>* value);
    // public System.Void remove_PermissionGranted(System.Action`1<System.String> value)
    // Offset: 0x1874580
    void remove_PermissionGranted(::System::Action_1<::StringW>* value);
    // public System.Void add_PermissionDenied(System.Action`1<System.String> value)
    // Offset: 0x1874620
    void add_PermissionDenied(::System::Action_1<::StringW>* value);
    // public System.Void remove_PermissionDenied(System.Action`1<System.String> value)
    // Offset: 0x18746C0
    void remove_PermissionDenied(::System::Action_1<::StringW>* value);
    // public System.Void add_PermissionDeniedAndDontAskAgain(System.Action`1<System.String> value)
    // Offset: 0x1874760
    void add_PermissionDeniedAndDontAskAgain(::System::Action_1<::StringW>* value);
    // public System.Void remove_PermissionDeniedAndDontAskAgain(System.Action`1<System.String> value)
    // Offset: 0x1874800
    void remove_PermissionDeniedAndDontAskAgain(::System::Action_1<::StringW>* value);
    // private System.Void onPermissionGranted(System.String permissionName)
    // Offset: 0x1874918
    void onPermissionGranted(::StringW permissionName);
    // private System.Void onPermissionDenied(System.String permissionName)
    // Offset: 0x1874988
    void onPermissionDenied(::StringW permissionName);
    // private System.Void onPermissionDeniedAndDontAskAgain(System.String permissionName)
    // Offset: 0x18749F8
    void onPermissionDeniedAndDontAskAgain(::StringW permissionName);
    // public System.Void .ctor()
    // Offset: 0x18748A0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PermissionCallbacks* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Android::PermissionCallbacks::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PermissionCallbacks*, creationType>()));
    }
  }; // UnityEngine.Android.PermissionCallbacks
  #pragma pack(pop)
  static check_size<sizeof(PermissionCallbacks), 48 + sizeof(::System::Action_1<::StringW>*)> __UnityEngine_Android_PermissionCallbacksSizeCheck;
  static_assert(sizeof(PermissionCallbacks) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Android::PermissionCallbacks::add_PermissionGranted
// Il2CppName: add_PermissionGranted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Android::PermissionCallbacks::*)(::System::Action_1<::StringW>*)>(&UnityEngine::Android::PermissionCallbacks::add_PermissionGranted)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Android::PermissionCallbacks*), "add_PermissionGranted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Android::PermissionCallbacks::remove_PermissionGranted
// Il2CppName: remove_PermissionGranted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Android::PermissionCallbacks::*)(::System::Action_1<::StringW>*)>(&UnityEngine::Android::PermissionCallbacks::remove_PermissionGranted)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Android::PermissionCallbacks*), "remove_PermissionGranted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Android::PermissionCallbacks::add_PermissionDenied
// Il2CppName: add_PermissionDenied
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Android::PermissionCallbacks::*)(::System::Action_1<::StringW>*)>(&UnityEngine::Android::PermissionCallbacks::add_PermissionDenied)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Android::PermissionCallbacks*), "add_PermissionDenied", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Android::PermissionCallbacks::remove_PermissionDenied
// Il2CppName: remove_PermissionDenied
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Android::PermissionCallbacks::*)(::System::Action_1<::StringW>*)>(&UnityEngine::Android::PermissionCallbacks::remove_PermissionDenied)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Android::PermissionCallbacks*), "remove_PermissionDenied", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Android::PermissionCallbacks::add_PermissionDeniedAndDontAskAgain
// Il2CppName: add_PermissionDeniedAndDontAskAgain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Android::PermissionCallbacks::*)(::System::Action_1<::StringW>*)>(&UnityEngine::Android::PermissionCallbacks::add_PermissionDeniedAndDontAskAgain)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Android::PermissionCallbacks*), "add_PermissionDeniedAndDontAskAgain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Android::PermissionCallbacks::remove_PermissionDeniedAndDontAskAgain
// Il2CppName: remove_PermissionDeniedAndDontAskAgain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Android::PermissionCallbacks::*)(::System::Action_1<::StringW>*)>(&UnityEngine::Android::PermissionCallbacks::remove_PermissionDeniedAndDontAskAgain)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Android::PermissionCallbacks*), "remove_PermissionDeniedAndDontAskAgain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Android::PermissionCallbacks::onPermissionGranted
// Il2CppName: onPermissionGranted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Android::PermissionCallbacks::*)(::StringW)>(&UnityEngine::Android::PermissionCallbacks::onPermissionGranted)> {
  static const MethodInfo* get() {
    static auto* permissionName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Android::PermissionCallbacks*), "onPermissionGranted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{permissionName});
  }
};
// Writing MetadataGetter for method: UnityEngine::Android::PermissionCallbacks::onPermissionDenied
// Il2CppName: onPermissionDenied
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Android::PermissionCallbacks::*)(::StringW)>(&UnityEngine::Android::PermissionCallbacks::onPermissionDenied)> {
  static const MethodInfo* get() {
    static auto* permissionName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Android::PermissionCallbacks*), "onPermissionDenied", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{permissionName});
  }
};
// Writing MetadataGetter for method: UnityEngine::Android::PermissionCallbacks::onPermissionDeniedAndDontAskAgain
// Il2CppName: onPermissionDeniedAndDontAskAgain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Android::PermissionCallbacks::*)(::StringW)>(&UnityEngine::Android::PermissionCallbacks::onPermissionDeniedAndDontAskAgain)> {
  static const MethodInfo* get() {
    static auto* permissionName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Android::PermissionCallbacks*), "onPermissionDeniedAndDontAskAgain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{permissionName});
  }
};
// Writing MetadataGetter for method: UnityEngine::Android::PermissionCallbacks::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
