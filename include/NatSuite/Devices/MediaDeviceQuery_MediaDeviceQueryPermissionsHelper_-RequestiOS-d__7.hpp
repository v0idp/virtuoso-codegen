// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NatSuite.Devices.MediaDeviceQuery/NatSuite.Devices.MediaDeviceQueryPermissionsHelper
#include "NatSuite/Devices/MediaDeviceQuery_MediaDeviceQueryPermissionsHelper.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: UnityEngine.UserAuthorization
#include "UnityEngine/UserAuthorization.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::$RequestiOS$d__7);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::$RequestiOS$d__7*, "NatSuite.Devices", "MediaDeviceQuery/MediaDeviceQueryPermissionsHelper/<RequestiOS>d__7");
// Type namespace: NatSuite.Devices
namespace NatSuite::Devices {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: NatSuite.Devices.MediaDeviceQuery/NatSuite.Devices.MediaDeviceQueryPermissionsHelper/NatSuite.Devices.<RequestiOS>d__7
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::$RequestiOS$d__7 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Boolean camera
    // Size: 0x1
    // Offset: 0x20
    bool camera;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: camera and: completionHandler
    char __padding2[0x7] = {};
    // public System.Action`1<System.Boolean> completionHandler
    // Size: 0x8
    // Offset: 0x28
    ::System::Action_1<bool>* completionHandler;
    // Field size check
    static_assert(sizeof(::System::Action_1<bool>*) == 0x8);
    // private UnityEngine.UserAuthorization <permission>5__2
    // Size: 0x14
    // Offset: 0x30
    ::UnityEngine::UserAuthorization $permission$5__2;
    // Field size check
    static_assert(sizeof(::UnityEngine::UserAuthorization) == 0x14);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public System.Boolean camera
    bool& dyn_camera();
    // Get instance field reference: public System.Action`1<System.Boolean> completionHandler
    ::System::Action_1<bool>*& dyn_completionHandler();
    // Get instance field reference: private UnityEngine.UserAuthorization <permission>5__2
    ::UnityEngine::UserAuthorization& dyn_$permission$5__2();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x141A498
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x141A4E0
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x141A384
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::$RequestiOS$d__7* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::$RequestiOS$d__7::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::$RequestiOS$d__7*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x141A3B0
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x141A3B4
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x141A4A0
    void System_Collections_IEnumerator_Reset();
  }; // NatSuite.Devices.MediaDeviceQuery/NatSuite.Devices.MediaDeviceQueryPermissionsHelper/NatSuite.Devices.<RequestiOS>d__7
  #pragma pack(pop)
  static check_size<sizeof(MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::$RequestiOS$d__7), 48 + sizeof(::UnityEngine::UserAuthorization)> __NatSuite_Devices_MediaDeviceQuery_MediaDeviceQueryPermissionsHelper_$RequestiOS$d__7SizeCheck;
  static_assert(sizeof(MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::$RequestiOS$d__7) == 0x44);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::$RequestiOS$d__7::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::$RequestiOS$d__7::*)()>(&NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::$RequestiOS$d__7::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::$RequestiOS$d__7*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::$RequestiOS$d__7::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::$RequestiOS$d__7::*)()>(&NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::$RequestiOS$d__7::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::$RequestiOS$d__7*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::$RequestiOS$d__7::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::$RequestiOS$d__7::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::$RequestiOS$d__7::*)()>(&NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::$RequestiOS$d__7::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::$RequestiOS$d__7*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::$RequestiOS$d__7::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::$RequestiOS$d__7::*)()>(&NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::$RequestiOS$d__7::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::$RequestiOS$d__7*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::$RequestiOS$d__7::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::$RequestiOS$d__7::*)()>(&NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::$RequestiOS$d__7::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper::$RequestiOS$d__7*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
