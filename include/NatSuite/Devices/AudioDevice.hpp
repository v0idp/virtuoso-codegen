// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NatSuite.Devices.IAudioDevice
#include "NatSuite/Devices/IAudioDevice.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NatSuite::Devices
namespace NatSuite::Devices {
  // Forward declaring type: SampleBufferDelegate
  class SampleBufferDelegate;
  // Skipping declaration: IMediaDevice because it is already included!
}
// Completed forward declares
// Type namespace: NatSuite.Devices
namespace NatSuite::Devices {
  // Forward declaring type: AudioDevice
  class AudioDevice;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NatSuite::Devices::AudioDevice);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::AudioDevice*, "NatSuite.Devices", "AudioDevice");
// Type namespace: NatSuite.Devices
namespace NatSuite::Devices {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NatSuite.Devices.AudioDevice
  // [TokenAttribute] Offset: FFFFFFFF
  // [DocAttribute] Offset: 66BA3C
  class AudioDevice : public ::Il2CppObject/*, public ::NatSuite::Devices::IAudioDevice*/ {
    public:
    // Creating interface conversion operator: operator ::NatSuite::Devices::IAudioDevice
    operator ::NatSuite::Devices::IAudioDevice() noexcept {
      return *reinterpret_cast<::NatSuite::Devices::IAudioDevice*>(this);
    }
    // public System.String get_uniqueID()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_uniqueID();
    // public System.String get_name()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_name();
    // public System.Boolean get_echoCancellation()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_echoCancellation();
    // public System.Int32 get_sampleRate()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_sampleRate();
    // public System.Void set_sampleRate(System.Int32 value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_sampleRate(int value);
    // public System.Int32 get_channelCount()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_channelCount();
    // public System.Void set_channelCount(System.Int32 value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_channelCount(int value);
    // public System.Boolean get_running()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_running();
    // public System.Void StartRunning(NatSuite.Devices.SampleBufferDelegate delegate)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void StartRunning(::NatSuite::Devices::SampleBufferDelegate* delegate);
    // public System.Void StopRunning()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void StopRunning();
    // public System.Boolean Equals(NatSuite.Devices.IMediaDevice other)
    // Offset: 0x1370624
    bool Equals(::NatSuite::Devices::IMediaDevice* other);
    // protected System.Void .ctor()
    // Offset: 0x13707AC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioDevice* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::NatSuite::Devices::AudioDevice::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioDevice*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0x1370748
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // NatSuite.Devices.AudioDevice
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NatSuite::Devices::AudioDevice::get_uniqueID
// Il2CppName: get_uniqueID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (NatSuite::Devices::AudioDevice::*)()>(&NatSuite::Devices::AudioDevice::get_uniqueID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Devices::AudioDevice*), "get_uniqueID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NatSuite::Devices::AudioDevice::get_name
// Il2CppName: get_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (NatSuite::Devices::AudioDevice::*)()>(&NatSuite::Devices::AudioDevice::get_name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Devices::AudioDevice*), "get_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NatSuite::Devices::AudioDevice::get_echoCancellation
// Il2CppName: get_echoCancellation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NatSuite::Devices::AudioDevice::*)()>(&NatSuite::Devices::AudioDevice::get_echoCancellation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Devices::AudioDevice*), "get_echoCancellation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NatSuite::Devices::AudioDevice::get_sampleRate
// Il2CppName: get_sampleRate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (NatSuite::Devices::AudioDevice::*)()>(&NatSuite::Devices::AudioDevice::get_sampleRate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Devices::AudioDevice*), "get_sampleRate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NatSuite::Devices::AudioDevice::set_sampleRate
// Il2CppName: set_sampleRate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NatSuite::Devices::AudioDevice::*)(int)>(&NatSuite::Devices::AudioDevice::set_sampleRate)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Devices::AudioDevice*), "set_sampleRate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NatSuite::Devices::AudioDevice::get_channelCount
// Il2CppName: get_channelCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (NatSuite::Devices::AudioDevice::*)()>(&NatSuite::Devices::AudioDevice::get_channelCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Devices::AudioDevice*), "get_channelCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NatSuite::Devices::AudioDevice::set_channelCount
// Il2CppName: set_channelCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NatSuite::Devices::AudioDevice::*)(int)>(&NatSuite::Devices::AudioDevice::set_channelCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Devices::AudioDevice*), "set_channelCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NatSuite::Devices::AudioDevice::get_running
// Il2CppName: get_running
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NatSuite::Devices::AudioDevice::*)()>(&NatSuite::Devices::AudioDevice::get_running)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Devices::AudioDevice*), "get_running", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NatSuite::Devices::AudioDevice::StartRunning
// Il2CppName: StartRunning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NatSuite::Devices::AudioDevice::*)(::NatSuite::Devices::SampleBufferDelegate*)>(&NatSuite::Devices::AudioDevice::StartRunning)> {
  static const MethodInfo* get() {
    static auto* delegate = &::il2cpp_utils::GetClassFromName("NatSuite.Devices", "SampleBufferDelegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Devices::AudioDevice*), "StartRunning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delegate});
  }
};
// Writing MetadataGetter for method: NatSuite::Devices::AudioDevice::StopRunning
// Il2CppName: StopRunning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NatSuite::Devices::AudioDevice::*)()>(&NatSuite::Devices::AudioDevice::StopRunning)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Devices::AudioDevice*), "StopRunning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NatSuite::Devices::AudioDevice::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NatSuite::Devices::AudioDevice::*)(::NatSuite::Devices::IMediaDevice*)>(&NatSuite::Devices::AudioDevice::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("NatSuite.Devices", "IMediaDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Devices::AudioDevice*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: NatSuite::Devices::AudioDevice::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NatSuite::Devices::AudioDevice::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (NatSuite::Devices::AudioDevice::*)()>(&NatSuite::Devices::AudioDevice::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Devices::AudioDevice*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};