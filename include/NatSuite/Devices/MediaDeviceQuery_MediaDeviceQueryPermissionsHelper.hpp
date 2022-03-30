// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NatSuite.Devices.MediaDeviceQuery
#include "NatSuite/Devices/MediaDeviceQuery.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NatSuite::Devices
namespace NatSuite::Devices {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine::Android
namespace UnityEngine::Android {
  // Forward declaring type: PermissionCallbacks
  class PermissionCallbacks;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper*, "NatSuite.Devices", "MediaDeviceQuery/MediaDeviceQueryPermissionsHelper");
// Type namespace: NatSuite.Devices
namespace NatSuite::Devices {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: NatSuite.Devices.MediaDeviceQuery/NatSuite.Devices.MediaDeviceQueryPermissionsHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class MediaDeviceQuery::MediaDeviceQueryPermissionsHelper : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::$RequestiOS$d__7
    class $RequestiOS$d__7;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Action`1<System.Boolean> _androidCompletionHandler
    // Size: 0x8
    // Offset: 0x18
    ::System::Action_1<bool>* androidCompletionHandler;
    // Field size check
    static_assert(sizeof(::System::Action_1<bool>*) == 0x8);
    // private UnityEngine.Android.PermissionCallbacks _androidPermissionCallbacks
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Android::PermissionCallbacks* androidPermissionCallbacks;
    // Field size check
    static_assert(sizeof(::UnityEngine::Android::PermissionCallbacks*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Action`1<System.Boolean> _androidCompletionHandler
    ::System::Action_1<bool>*& dyn__androidCompletionHandler();
    // Get instance field reference: private UnityEngine.Android.PermissionCallbacks _androidPermissionCallbacks
    ::UnityEngine::Android::PermissionCallbacks*& dyn__androidPermissionCallbacks();
    // private System.Void Awake()
    // Offset: 0x13D9D14
    void Awake();
    // public System.Void Request(System.Boolean camera, System.Action`1<System.Boolean> completionHandler)
    // Offset: 0x13D9D8C
    void Request(bool camera, ::System::Action_1<bool>* completionHandler);
    // private System.Void RequestAndroid(System.Boolean camera, System.Action`1<System.Boolean> completionHandler)
    // Offset: 0x13D9E64
    void RequestAndroid(bool camera, ::System::Action_1<bool>* completionHandler);
    // private System.Void AndroidPermissionGranted(System.String permission)
    // Offset: 0x13DA0B8
    void AndroidPermissionGranted(::StringW permission);
    // private System.Void AndroidPermissionDenied(System.String permission)
    // Offset: 0x13DA220
    void AndroidPermissionDenied(::StringW permission);
    // private System.Collections.IEnumerator RequestiOS(System.Boolean camera, System.Action`1<System.Boolean> completionHandler)
    // Offset: 0x13DA038
    ::System::Collections::IEnumerator* RequestiOS(bool camera, ::System::Action_1<bool>* completionHandler);
    // public System.Void .ctor()
    // Offset: 0x13DA388
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MediaDeviceQuery::MediaDeviceQueryPermissionsHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MediaDeviceQuery::MediaDeviceQueryPermissionsHelper*, creationType>()));
    }
  }; // NatSuite.Devices.MediaDeviceQuery/NatSuite.Devices.MediaDeviceQueryPermissionsHelper
  #pragma pack(pop)
  static check_size<sizeof(MediaDeviceQuery::MediaDeviceQueryPermissionsHelper), 32 + sizeof(::UnityEngine::Android::PermissionCallbacks*)> __NatSuite_Devices_MediaDeviceQuery_MediaDeviceQueryPermissionsHelperSizeCheck;
  static_assert(sizeof(MediaDeviceQuery::MediaDeviceQueryPermissionsHelper) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::*)()>(&NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::Request
// Il2CppName: Request
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::*)(bool, ::System::Action_1<bool>*)>(&NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::Request)> {
  static const MethodInfo* get() {
    static auto* camera = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* completionHandler = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper*), "Request", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{camera, completionHandler});
  }
};
// Writing MetadataGetter for method: NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::RequestAndroid
// Il2CppName: RequestAndroid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::*)(bool, ::System::Action_1<bool>*)>(&NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::RequestAndroid)> {
  static const MethodInfo* get() {
    static auto* camera = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* completionHandler = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper*), "RequestAndroid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{camera, completionHandler});
  }
};
// Writing MetadataGetter for method: NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::AndroidPermissionGranted
// Il2CppName: AndroidPermissionGranted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::*)(::StringW)>(&NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::AndroidPermissionGranted)> {
  static const MethodInfo* get() {
    static auto* permission = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper*), "AndroidPermissionGranted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{permission});
  }
};
// Writing MetadataGetter for method: NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::AndroidPermissionDenied
// Il2CppName: AndroidPermissionDenied
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::*)(::StringW)>(&NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::AndroidPermissionDenied)> {
  static const MethodInfo* get() {
    static auto* permission = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper*), "AndroidPermissionDenied", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{permission});
  }
};
// Writing MetadataGetter for method: NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::RequestiOS
// Il2CppName: RequestiOS
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::*)(bool, ::System::Action_1<bool>*)>(&NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::RequestiOS)> {
  static const MethodInfo* get() {
    static auto* camera = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* completionHandler = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper*), "RequestiOS", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{camera, completionHandler});
  }
};
// Writing MetadataGetter for method: NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
