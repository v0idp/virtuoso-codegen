// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Microphone
  class Microphone;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Microphone);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Microphone*, "UnityEngine", "Microphone");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Microphone
  // [TokenAttribute] Offset: FFFFFFFF
  // [StaticAccessorAttribute] Offset: 5AB954
  class Microphone : public ::Il2CppObject {
    public:
    // static public System.String[] get_devices()
    // Offset: 0x12D8A08
    static ::ArrayW<::StringW> get_devices();
    // static private System.Int32 GetMicrophoneDeviceIDFromName(System.String name)
    // Offset: 0x12D861C
    static int GetMicrophoneDeviceIDFromName(::StringW name);
    // static private UnityEngine.AudioClip StartRecord(System.Int32 deviceID, System.Boolean loop, System.Single lengthSec, System.Int32 frequency)
    // Offset: 0x12D865C
    static ::UnityEngine::AudioClip* StartRecord(int deviceID, bool loop, float lengthSec, int frequency);
    // static private System.Void EndRecord(System.Int32 deviceID)
    // Offset: 0x12D86C4
    static void EndRecord(int deviceID);
    // static private System.Boolean IsRecording(System.Int32 deviceID)
    // Offset: 0x12D8704
    static bool IsRecording(int deviceID);
    // static private System.Int32 GetRecordPosition(System.Int32 deviceID)
    // Offset: 0x12D8744
    static int GetRecordPosition(int deviceID);
    // static private System.Void GetDeviceCaps(System.Int32 deviceID, out System.Int32 minFreq, out System.Int32 maxFreq)
    // Offset: 0x12D8784
    static void GetDeviceCaps(int deviceID, ByRef<int> minFreq, ByRef<int> maxFreq);
    // static public UnityEngine.AudioClip Start(System.String deviceName, System.Boolean loop, System.Int32 lengthSec, System.Int32 frequency)
    // Offset: 0x12D87DC
    static ::UnityEngine::AudioClip* Start(::StringW deviceName, bool loop, int lengthSec, int frequency);
    // static public System.Void End(System.String deviceName)
    // Offset: 0x12D8988
    static void End(::StringW deviceName);
    // static public System.Boolean IsRecording(System.String deviceName)
    // Offset: 0x12D8A3C
    static bool IsRecording(::StringW deviceName);
    // static public System.Int32 GetPosition(System.String deviceName)
    // Offset: 0x12D8AC0
    static int GetPosition(::StringW deviceName);
    // static public System.Void GetDeviceCaps(System.String deviceName, out System.Int32 minFreq, out System.Int32 maxFreq)
    // Offset: 0x12D8B44
    static void GetDeviceCaps(::StringW deviceName, ByRef<int> minFreq, ByRef<int> maxFreq);
  }; // UnityEngine.Microphone
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Microphone::get_devices
// Il2CppName: get_devices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)()>(&UnityEngine::Microphone::get_devices)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Microphone*), "get_devices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Microphone::GetMicrophoneDeviceIDFromName
// Il2CppName: GetMicrophoneDeviceIDFromName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW)>(&UnityEngine::Microphone::GetMicrophoneDeviceIDFromName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Microphone*), "GetMicrophoneDeviceIDFromName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: UnityEngine::Microphone::StartRecord
// Il2CppName: StartRecord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioClip* (*)(int, bool, float, int)>(&UnityEngine::Microphone::StartRecord)> {
  static const MethodInfo* get() {
    static auto* deviceID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* loop = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* lengthSec = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* frequency = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Microphone*), "StartRecord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deviceID, loop, lengthSec, frequency});
  }
};
// Writing MetadataGetter for method: UnityEngine::Microphone::EndRecord
// Il2CppName: EndRecord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&UnityEngine::Microphone::EndRecord)> {
  static const MethodInfo* get() {
    static auto* deviceID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Microphone*), "EndRecord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deviceID});
  }
};
// Writing MetadataGetter for method: UnityEngine::Microphone::IsRecording
// Il2CppName: IsRecording
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&UnityEngine::Microphone::IsRecording)> {
  static const MethodInfo* get() {
    static auto* deviceID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Microphone*), "IsRecording", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deviceID});
  }
};
// Writing MetadataGetter for method: UnityEngine::Microphone::GetRecordPosition
// Il2CppName: GetRecordPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&UnityEngine::Microphone::GetRecordPosition)> {
  static const MethodInfo* get() {
    static auto* deviceID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Microphone*), "GetRecordPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deviceID});
  }
};
// Writing MetadataGetter for method: UnityEngine::Microphone::GetDeviceCaps
// Il2CppName: GetDeviceCaps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ByRef<int>, ByRef<int>)>(&UnityEngine::Microphone::GetDeviceCaps)> {
  static const MethodInfo* get() {
    static auto* deviceID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* minFreq = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* maxFreq = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Microphone*), "GetDeviceCaps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deviceID, minFreq, maxFreq});
  }
};
// Writing MetadataGetter for method: UnityEngine::Microphone::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioClip* (*)(::StringW, bool, int, int)>(&UnityEngine::Microphone::Start)> {
  static const MethodInfo* get() {
    static auto* deviceName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* loop = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* lengthSec = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* frequency = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Microphone*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deviceName, loop, lengthSec, frequency});
  }
};
// Writing MetadataGetter for method: UnityEngine::Microphone::End
// Il2CppName: End
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&UnityEngine::Microphone::End)> {
  static const MethodInfo* get() {
    static auto* deviceName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Microphone*), "End", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deviceName});
  }
};
// Writing MetadataGetter for method: UnityEngine::Microphone::IsRecording
// Il2CppName: IsRecording
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&UnityEngine::Microphone::IsRecording)> {
  static const MethodInfo* get() {
    static auto* deviceName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Microphone*), "IsRecording", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deviceName});
  }
};
// Writing MetadataGetter for method: UnityEngine::Microphone::GetPosition
// Il2CppName: GetPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW)>(&UnityEngine::Microphone::GetPosition)> {
  static const MethodInfo* get() {
    static auto* deviceName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Microphone*), "GetPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deviceName});
  }
};
// Writing MetadataGetter for method: UnityEngine::Microphone::GetDeviceCaps
// Il2CppName: GetDeviceCaps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ByRef<int>, ByRef<int>)>(&UnityEngine::Microphone::GetDeviceCaps)> {
  static const MethodInfo* get() {
    static auto* deviceName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* minFreq = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* maxFreq = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Microphone*), "GetDeviceCaps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deviceName, minFreq, maxFreq});
  }
};