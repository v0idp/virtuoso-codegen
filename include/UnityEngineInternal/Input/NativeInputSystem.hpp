// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngineInternal.Input.NativeInputUpdateType
#include "UnityEngineInternal/Input/NativeInputUpdateType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngineInternal::Input
namespace UnityEngineInternal::Input {
  // Forward declaring type: NativeUpdateCallback
  class NativeUpdateCallback;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: UnityEngineInternal.Input
namespace UnityEngineInternal::Input {
  // Forward declaring type: NativeInputSystem
  class NativeInputSystem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngineInternal::Input::NativeInputSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngineInternal::Input::NativeInputSystem*, "UnityEngineInternal.Input", "NativeInputSystem");
// Type namespace: UnityEngineInternal.Input
namespace UnityEngineInternal::Input {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngineInternal.Input.NativeInputSystem
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 5D9894
  // [NativeHeaderAttribute] Offset: 5D9894
  class NativeInputSystem : public ::Il2CppObject {
    public:
    // Get static field: static public UnityEngineInternal.Input.NativeUpdateCallback onUpdate
    static ::UnityEngineInternal::Input::NativeUpdateCallback* _get_onUpdate();
    // Set static field: static public UnityEngineInternal.Input.NativeUpdateCallback onUpdate
    static void _set_onUpdate(::UnityEngineInternal::Input::NativeUpdateCallback* value);
    // Get static field: static public System.Action`1<UnityEngineInternal.Input.NativeInputUpdateType> onBeforeUpdate
    static ::System::Action_1<::UnityEngineInternal::Input::NativeInputUpdateType>* _get_onBeforeUpdate();
    // Set static field: static public System.Action`1<UnityEngineInternal.Input.NativeInputUpdateType> onBeforeUpdate
    static void _set_onBeforeUpdate(::System::Action_1<::UnityEngineInternal::Input::NativeInputUpdateType>* value);
    // Get static field: static public System.Func`2<UnityEngineInternal.Input.NativeInputUpdateType,System.Boolean> onShouldRunUpdate
    static ::System::Func_2<::UnityEngineInternal::Input::NativeInputUpdateType, bool>* _get_onShouldRunUpdate();
    // Set static field: static public System.Func`2<UnityEngineInternal.Input.NativeInputUpdateType,System.Boolean> onShouldRunUpdate
    static void _set_onShouldRunUpdate(::System::Func_2<::UnityEngineInternal::Input::NativeInputUpdateType, bool>* value);
    // Get static field: static private System.Action`2<System.Int32,System.String> s_OnDeviceDiscoveredCallback
    static ::System::Action_2<int, ::StringW>* _get_s_OnDeviceDiscoveredCallback();
    // Set static field: static private System.Action`2<System.Int32,System.String> s_OnDeviceDiscoveredCallback
    static void _set_s_OnDeviceDiscoveredCallback(::System::Action_2<int, ::StringW>* value);
    // static System.Void set_hasDeviceDiscoveredCallback(System.Boolean value)
    // Offset: 0x1304D6C
    static void set_hasDeviceDiscoveredCallback(bool value);
    // static private System.Void .cctor()
    // Offset: 0x1304D30
    static void _cctor();
    // static System.Void NotifyBeforeUpdate(UnityEngineInternal.Input.NativeInputUpdateType updateType)
    // Offset: 0x1304DAC
    static void NotifyBeforeUpdate(::UnityEngineInternal::Input::NativeInputUpdateType updateType);
    // static System.Void NotifyUpdate(UnityEngineInternal.Input.NativeInputUpdateType updateType, System.IntPtr eventBuffer)
    // Offset: 0x1304E40
    static void NotifyUpdate(::UnityEngineInternal::Input::NativeInputUpdateType updateType, ::System::IntPtr eventBuffer);
    // static System.Void NotifyDeviceDiscovered(System.Int32 deviceId, System.String deviceDescriptor)
    // Offset: 0x130514C
    static void NotifyDeviceDiscovered(int deviceId, ::StringW deviceDescriptor);
    // static System.Void ShouldRunUpdate(UnityEngineInternal.Input.NativeInputUpdateType updateType, out System.Boolean retval)
    // Offset: 0x13051F4
    static void ShouldRunUpdate(::UnityEngineInternal::Input::NativeInputUpdateType updateType, ByRef<bool> retval);
  }; // UnityEngineInternal.Input.NativeInputSystem
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngineInternal::Input::NativeInputSystem::set_hasDeviceDiscoveredCallback
// Il2CppName: set_hasDeviceDiscoveredCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&UnityEngineInternal::Input::NativeInputSystem::set_hasDeviceDiscoveredCallback)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngineInternal::Input::NativeInputSystem*), "set_hasDeviceDiscoveredCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngineInternal::Input::NativeInputSystem::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngineInternal::Input::NativeInputSystem::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngineInternal::Input::NativeInputSystem*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngineInternal::Input::NativeInputSystem::NotifyBeforeUpdate
// Il2CppName: NotifyBeforeUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngineInternal::Input::NativeInputUpdateType)>(&UnityEngineInternal::Input::NativeInputSystem::NotifyBeforeUpdate)> {
  static const MethodInfo* get() {
    static auto* updateType = &::il2cpp_utils::GetClassFromName("UnityEngineInternal.Input", "NativeInputUpdateType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngineInternal::Input::NativeInputSystem*), "NotifyBeforeUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{updateType});
  }
};
// Writing MetadataGetter for method: UnityEngineInternal::Input::NativeInputSystem::NotifyUpdate
// Il2CppName: NotifyUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngineInternal::Input::NativeInputUpdateType, ::System::IntPtr)>(&UnityEngineInternal::Input::NativeInputSystem::NotifyUpdate)> {
  static const MethodInfo* get() {
    static auto* updateType = &::il2cpp_utils::GetClassFromName("UnityEngineInternal.Input", "NativeInputUpdateType")->byval_arg;
    static auto* eventBuffer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngineInternal::Input::NativeInputSystem*), "NotifyUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{updateType, eventBuffer});
  }
};
// Writing MetadataGetter for method: UnityEngineInternal::Input::NativeInputSystem::NotifyDeviceDiscovered
// Il2CppName: NotifyDeviceDiscovered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::StringW)>(&UnityEngineInternal::Input::NativeInputSystem::NotifyDeviceDiscovered)> {
  static const MethodInfo* get() {
    static auto* deviceId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* deviceDescriptor = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngineInternal::Input::NativeInputSystem*), "NotifyDeviceDiscovered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deviceId, deviceDescriptor});
  }
};
// Writing MetadataGetter for method: UnityEngineInternal::Input::NativeInputSystem::ShouldRunUpdate
// Il2CppName: ShouldRunUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngineInternal::Input::NativeInputUpdateType, ByRef<bool>)>(&UnityEngineInternal::Input::NativeInputSystem::ShouldRunUpdate)> {
  static const MethodInfo* get() {
    static auto* updateType = &::il2cpp_utils::GetClassFromName("UnityEngineInternal.Input", "NativeInputUpdateType")->byval_arg;
    static auto* retval = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngineInternal::Input::NativeInputSystem*), "ShouldRunUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{updateType, retval});
  }
};