// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NatSuite.Devices.IMediaDevice
#include "NatSuite/Devices/IMediaDevice.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NatSuite::Devices
namespace NatSuite::Devices {
  // Forward declaring type: SampleBufferDelegate
  class SampleBufferDelegate;
}
// Completed forward declares
// Type namespace: NatSuite.Devices
namespace NatSuite::Devices {
  // Forward declaring type: IAudioDevice
  class IAudioDevice;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NatSuite::Devices::IAudioDevice);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::IAudioDevice*, "NatSuite.Devices", "IAudioDevice");
// Type namespace: NatSuite.Devices
namespace NatSuite::Devices {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NatSuite.Devices.IAudioDevice
  // [TokenAttribute] Offset: FFFFFFFF
  class IAudioDevice/*, public ::NatSuite::Devices::IMediaDevice*/ {
    public:
    // Creating interface conversion operator: operator ::NatSuite::Devices::IMediaDevice
    operator ::NatSuite::Devices::IMediaDevice() noexcept {
      return *reinterpret_cast<::NatSuite::Devices::IMediaDevice*>(this);
    }
    // public System.Int32 get_sampleRate()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_sampleRate();
    // public System.Int32 get_channelCount()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_channelCount();
    // public System.Void StartRunning(NatSuite.Devices.SampleBufferDelegate delegate)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void StartRunning(::NatSuite::Devices::SampleBufferDelegate* delegate);
  }; // NatSuite.Devices.IAudioDevice
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NatSuite::Devices::IAudioDevice::get_sampleRate
// Il2CppName: get_sampleRate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (NatSuite::Devices::IAudioDevice::*)()>(&NatSuite::Devices::IAudioDevice::get_sampleRate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Devices::IAudioDevice*), "get_sampleRate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NatSuite::Devices::IAudioDevice::get_channelCount
// Il2CppName: get_channelCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (NatSuite::Devices::IAudioDevice::*)()>(&NatSuite::Devices::IAudioDevice::get_channelCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Devices::IAudioDevice*), "get_channelCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NatSuite::Devices::IAudioDevice::StartRunning
// Il2CppName: StartRunning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NatSuite::Devices::IAudioDevice::*)(::NatSuite::Devices::SampleBufferDelegate*)>(&NatSuite::Devices::IAudioDevice::StartRunning)> {
  static const MethodInfo* get() {
    static auto* delegate = &::il2cpp_utils::GetClassFromName("NatSuite.Devices", "SampleBufferDelegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Devices::IAudioDevice*), "StartRunning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delegate});
  }
};
