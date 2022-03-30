// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Unity.XR.Oculus.NativeMethods
#include "Unity/XR/Oculus/NativeMethods.hpp"
// Including type: Unity.XR.Oculus.Boundary
#include "Unity/XR/Oculus/Boundary.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Forward declaring namespace: Unity::XR::Oculus
namespace Unity::XR::Oculus {
  // Forward declaring type: SystemHeadset
  struct SystemHeadset;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::XR::Oculus::NativeMethods::Internal);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::NativeMethods::Internal*, "Unity.XR.Oculus", "NativeMethods/Internal");
// Type namespace: Unity.XR.Oculus
namespace Unity::XR::Oculus {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Unity.XR.Oculus.NativeMethods/Unity.XR.Oculus.Internal
  // [TokenAttribute] Offset: FFFFFFFF
  class NativeMethods::Internal : public ::Il2CppObject {
    public:
    // static System.Void SetColorScale(System.Single x, System.Single y, System.Single z, System.Single w)
    // Offset: 0x12D9D2C
    static void SetColorScale(float x, float y, float z, float w);
    // static System.Void SetColorOffset(System.Single x, System.Single y, System.Single z, System.Single w)
    // Offset: 0x12D9DD4
    static void SetColorOffset(float x, float y, float z, float w);
    // static System.IntPtr GetOvrJava()
    // Offset: 0x12D9E78
    static ::System::IntPtr GetOvrJava();
    // static System.Boolean GetIsSupportedDevice()
    // Offset: 0x12DA02C
    static bool GetIsSupportedDevice();
    // static System.Boolean LoadOVRPlugin(System.String ovrpPath)
    // Offset: 0x12DA0AC
    static bool LoadOVRPlugin(::StringW ovrpPath);
    // static System.Void UnloadOVRPlugin()
    // Offset: 0x12DA140
    static void UnloadOVRPlugin();
    // static System.Void SetUserDefinedSettings(Unity.XR.Oculus.NativeMethods/Unity.XR.Oculus.UserDefinedSettings settings)
    // Offset: 0x12DA1E0
    static void SetUserDefinedSettings(::Unity::XR::Oculus::NativeMethods::UserDefinedSettings settings);
    // static System.Int32 SetCPULevel(System.Int32 cpuLevel)
    // Offset: 0x12DA274
    static int SetCPULevel(int cpuLevel);
    // static System.Int32 SetGPULevel(System.Int32 gpuLevel)
    // Offset: 0x12DA2F8
    static int SetGPULevel(int gpuLevel);
    // static System.Void vrapi_SetPropertyInt(System.IntPtr java, Unity.XR.Oculus.NativeMethods/Unity.XR.Oculus.OvrProperty prop, System.Int32 val)
    // Offset: 0x12D9EF0
    static void vrapi_SetPropertyInt(::System::IntPtr java, ::Unity::XR::Oculus::NativeMethods::OvrProperty prop, int val);
    // static System.Boolean vrapi_GetPropertyInt(System.IntPtr java, Unity.XR.Oculus.NativeMethods/Unity.XR.Oculus.OvrProperty propType, out System.Int32 intVal)
    // Offset: 0x12D9F8C
    static bool vrapi_GetPropertyInt(::System::IntPtr java, ::Unity::XR::Oculus::NativeMethods::OvrProperty propType, ByRef<int> intVal);
    // static System.Void GetOVRPVersion(System.Byte[] version)
    // Offset: 0x12DA37C
    static void GetOVRPVersion(::ArrayW<uint8_t> version);
    // static System.Void EnablePerfMetrics(System.Boolean enable)
    // Offset: 0x12DA408
    static void EnablePerfMetrics(bool enable);
    // static System.Void EnableAppMetrics(System.Boolean enable)
    // Offset: 0x12DA490
    static void EnableAppMetrics(bool enable);
    // static System.Boolean SetDeveloperModeStrict(System.Boolean active)
    // Offset: 0x12DA510
    static bool SetDeveloperModeStrict(bool active);
    // static System.Boolean GetAppHasInputFocus()
    // Offset: 0x12DA598
    static bool GetAppHasInputFocus();
    // static System.Boolean GetBoundaryConfigured()
    // Offset: 0x12DA614
    static bool GetBoundaryConfigured();
    // static System.Boolean GetBoundaryDimensions(Unity.XR.Oculus.Boundary/Unity.XR.Oculus.BoundaryType boundaryType, out UnityEngine.Vector3 dimensions)
    // Offset: 0x12DA690
    static bool GetBoundaryDimensions(::Unity::XR::Oculus::Boundary::BoundaryType boundaryType, ByRef<::UnityEngine::Vector3> dimensions);
    // static System.Boolean GetBoundaryVisible()
    // Offset: 0x12DA728
    static bool GetBoundaryVisible();
    // static System.Void SetBoundaryVisible(System.Boolean boundaryVisible)
    // Offset: 0x12DA7A4
    static void SetBoundaryVisible(bool boundaryVisible);
    // static System.Boolean GetAppShouldQuit()
    // Offset: 0x12DA828
    static bool GetAppShouldQuit();
    // static System.Boolean GetDisplayAvailableFrequencies(System.IntPtr ptr, ref System.Int32 numFrequencies)
    // Offset: 0x12DA8A8
    static bool GetDisplayAvailableFrequencies(::System::IntPtr ptr, ByRef<int> numFrequencies);
    // static System.Boolean SetDisplayFrequency(System.Single refreshRate)
    // Offset: 0x12DA944
    static bool SetDisplayFrequency(float refreshRate);
    // static System.Boolean GetDisplayFrequency(out System.Single refreshRate)
    // Offset: 0x12DA9D8
    static bool GetDisplayFrequency(ByRef<float> refreshRate);
    // static Unity.XR.Oculus.SystemHeadset GetSystemHeadsetType()
    // Offset: 0x12DAA64
    static ::Unity::XR::Oculus::SystemHeadset GetSystemHeadsetType();
  }; // Unity.XR.Oculus.NativeMethods/Unity.XR.Oculus.Internal
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::Internal::SetColorScale
// Il2CppName: SetColorScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float, float, float, float)>(&Unity::XR::Oculus::NativeMethods::Internal::SetColorScale)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* w = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods::Internal*), "SetColorScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z, w});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::Internal::SetColorOffset
// Il2CppName: SetColorOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float, float, float, float)>(&Unity::XR::Oculus::NativeMethods::Internal::SetColorOffset)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* w = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods::Internal*), "SetColorOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z, w});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::Internal::GetOvrJava
// Il2CppName: GetOvrJava
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)()>(&Unity::XR::Oculus::NativeMethods::Internal::GetOvrJava)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods::Internal*), "GetOvrJava", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::Internal::GetIsSupportedDevice
// Il2CppName: GetIsSupportedDevice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Unity::XR::Oculus::NativeMethods::Internal::GetIsSupportedDevice)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods::Internal*), "GetIsSupportedDevice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::Internal::LoadOVRPlugin
// Il2CppName: LoadOVRPlugin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&Unity::XR::Oculus::NativeMethods::Internal::LoadOVRPlugin)> {
  static const MethodInfo* get() {
    static auto* ovrpPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods::Internal*), "LoadOVRPlugin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ovrpPath});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::Internal::UnloadOVRPlugin
// Il2CppName: UnloadOVRPlugin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Unity::XR::Oculus::NativeMethods::Internal::UnloadOVRPlugin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods::Internal*), "UnloadOVRPlugin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::Internal::SetUserDefinedSettings
// Il2CppName: SetUserDefinedSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Unity::XR::Oculus::NativeMethods::UserDefinedSettings)>(&Unity::XR::Oculus::NativeMethods::Internal::SetUserDefinedSettings)> {
  static const MethodInfo* get() {
    static auto* settings = &::il2cpp_utils::GetClassFromName("Unity.XR.Oculus", "NativeMethods/UserDefinedSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods::Internal*), "SetUserDefinedSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{settings});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::Internal::SetCPULevel
// Il2CppName: SetCPULevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&Unity::XR::Oculus::NativeMethods::Internal::SetCPULevel)> {
  static const MethodInfo* get() {
    static auto* cpuLevel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods::Internal*), "SetCPULevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cpuLevel});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::Internal::SetGPULevel
// Il2CppName: SetGPULevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&Unity::XR::Oculus::NativeMethods::Internal::SetGPULevel)> {
  static const MethodInfo* get() {
    static auto* gpuLevel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods::Internal*), "SetGPULevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gpuLevel});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::Internal::vrapi_SetPropertyInt
// Il2CppName: vrapi_SetPropertyInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::Unity::XR::Oculus::NativeMethods::OvrProperty, int)>(&Unity::XR::Oculus::NativeMethods::Internal::vrapi_SetPropertyInt)> {
  static const MethodInfo* get() {
    static auto* java = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* prop = &::il2cpp_utils::GetClassFromName("Unity.XR.Oculus", "NativeMethods/OvrProperty")->byval_arg;
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods::Internal*), "vrapi_SetPropertyInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{java, prop, val});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::Internal::vrapi_GetPropertyInt
// Il2CppName: vrapi_GetPropertyInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, ::Unity::XR::Oculus::NativeMethods::OvrProperty, ByRef<int>)>(&Unity::XR::Oculus::NativeMethods::Internal::vrapi_GetPropertyInt)> {
  static const MethodInfo* get() {
    static auto* java = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* propType = &::il2cpp_utils::GetClassFromName("Unity.XR.Oculus", "NativeMethods/OvrProperty")->byval_arg;
    static auto* intVal = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods::Internal*), "vrapi_GetPropertyInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{java, propType, intVal});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::Internal::GetOVRPVersion
// Il2CppName: GetOVRPVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>)>(&Unity::XR::Oculus::NativeMethods::Internal::GetOVRPVersion)> {
  static const MethodInfo* get() {
    static auto* version = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods::Internal*), "GetOVRPVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{version});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::Internal::EnablePerfMetrics
// Il2CppName: EnablePerfMetrics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&Unity::XR::Oculus::NativeMethods::Internal::EnablePerfMetrics)> {
  static const MethodInfo* get() {
    static auto* enable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods::Internal*), "EnablePerfMetrics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enable});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::Internal::EnableAppMetrics
// Il2CppName: EnableAppMetrics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&Unity::XR::Oculus::NativeMethods::Internal::EnableAppMetrics)> {
  static const MethodInfo* get() {
    static auto* enable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods::Internal*), "EnableAppMetrics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enable});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::Internal::SetDeveloperModeStrict
// Il2CppName: SetDeveloperModeStrict
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(bool)>(&Unity::XR::Oculus::NativeMethods::Internal::SetDeveloperModeStrict)> {
  static const MethodInfo* get() {
    static auto* active = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods::Internal*), "SetDeveloperModeStrict", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{active});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::Internal::GetAppHasInputFocus
// Il2CppName: GetAppHasInputFocus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Unity::XR::Oculus::NativeMethods::Internal::GetAppHasInputFocus)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods::Internal*), "GetAppHasInputFocus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::Internal::GetBoundaryConfigured
// Il2CppName: GetBoundaryConfigured
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Unity::XR::Oculus::NativeMethods::Internal::GetBoundaryConfigured)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods::Internal*), "GetBoundaryConfigured", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::Internal::GetBoundaryDimensions
// Il2CppName: GetBoundaryDimensions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Unity::XR::Oculus::Boundary::BoundaryType, ByRef<::UnityEngine::Vector3>)>(&Unity::XR::Oculus::NativeMethods::Internal::GetBoundaryDimensions)> {
  static const MethodInfo* get() {
    static auto* boundaryType = &::il2cpp_utils::GetClassFromName("Unity.XR.Oculus", "Boundary/BoundaryType")->byval_arg;
    static auto* dimensions = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods::Internal*), "GetBoundaryDimensions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{boundaryType, dimensions});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::Internal::GetBoundaryVisible
// Il2CppName: GetBoundaryVisible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Unity::XR::Oculus::NativeMethods::Internal::GetBoundaryVisible)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods::Internal*), "GetBoundaryVisible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::Internal::SetBoundaryVisible
// Il2CppName: SetBoundaryVisible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&Unity::XR::Oculus::NativeMethods::Internal::SetBoundaryVisible)> {
  static const MethodInfo* get() {
    static auto* boundaryVisible = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods::Internal*), "SetBoundaryVisible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{boundaryVisible});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::Internal::GetAppShouldQuit
// Il2CppName: GetAppShouldQuit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Unity::XR::Oculus::NativeMethods::Internal::GetAppShouldQuit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods::Internal*), "GetAppShouldQuit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::Internal::GetDisplayAvailableFrequencies
// Il2CppName: GetDisplayAvailableFrequencies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, ByRef<int>)>(&Unity::XR::Oculus::NativeMethods::Internal::GetDisplayAvailableFrequencies)> {
  static const MethodInfo* get() {
    static auto* ptr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* numFrequencies = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods::Internal*), "GetDisplayAvailableFrequencies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ptr, numFrequencies});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::Internal::SetDisplayFrequency
// Il2CppName: SetDisplayFrequency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float)>(&Unity::XR::Oculus::NativeMethods::Internal::SetDisplayFrequency)> {
  static const MethodInfo* get() {
    static auto* refreshRate = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods::Internal*), "SetDisplayFrequency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{refreshRate});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::Internal::GetDisplayFrequency
// Il2CppName: GetDisplayFrequency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<float>)>(&Unity::XR::Oculus::NativeMethods::Internal::GetDisplayFrequency)> {
  static const MethodInfo* get() {
    static auto* refreshRate = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods::Internal*), "GetDisplayFrequency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{refreshRate});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::NativeMethods::Internal::GetSystemHeadsetType
// Il2CppName: GetSystemHeadsetType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::XR::Oculus::SystemHeadset (*)()>(&Unity::XR::Oculus::NativeMethods::Internal::GetSystemHeadsetType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::NativeMethods::Internal*), "GetSystemHeadsetType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};