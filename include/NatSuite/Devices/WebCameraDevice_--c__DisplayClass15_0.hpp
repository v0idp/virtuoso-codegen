// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NatSuite.Devices.WebCameraDevice
#include "NatSuite/Devices/WebCameraDevice.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NatSuite::Devices::WebCameraDevice::$$c__DisplayClass15_0);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::WebCameraDevice::$$c__DisplayClass15_0*, "NatSuite.Devices", "WebCameraDevice/<>c__DisplayClass15_0");
// Type namespace: NatSuite.Devices
namespace NatSuite::Devices {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: NatSuite.Devices.WebCameraDevice/NatSuite.Devices.<>c__DisplayClass15_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class WebCameraDevice::$$c__DisplayClass15_0 : public ::Il2CppObject {
    public:
    public:
    // public NatSuite.Devices.WebCameraDevice <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::NatSuite::Devices::WebCameraDevice* $$4__this;
    // Field size check
    static_assert(sizeof(::NatSuite::Devices::WebCameraDevice*) == 0x8);
    // public System.Threading.Tasks.TaskCompletionSource`1<UnityEngine.Texture2D> startTask
    // Size: 0x8
    // Offset: 0x18
    ::System::Threading::Tasks::TaskCompletionSource_1<::UnityEngine::Texture2D*>* startTask;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::TaskCompletionSource_1<::UnityEngine::Texture2D*>*) == 0x8);
    public:
    // Get instance field reference: public NatSuite.Devices.WebCameraDevice <>4__this
    [[deprecated("Use field access instead!")]] ::NatSuite::Devices::WebCameraDevice*& dyn_$$4__this();
    // Get instance field reference: public System.Threading.Tasks.TaskCompletionSource`1<UnityEngine.Texture2D> startTask
    [[deprecated("Use field access instead!")]] ::System::Threading::Tasks::TaskCompletionSource_1<::UnityEngine::Texture2D*>*& dyn_startTask();
    // public System.Void .ctor()
    // Offset: 0xE8A0F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebCameraDevice::$$c__DisplayClass15_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::NatSuite::Devices::WebCameraDevice::$$c__DisplayClass15_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebCameraDevice::$$c__DisplayClass15_0*, creationType>()));
    }
    // System.Void <StartRunning>b__0()
    // Offset: 0xE8A100
    void $StartRunning$b__0();
  }; // NatSuite.Devices.WebCameraDevice/NatSuite.Devices.<>c__DisplayClass15_0
  #pragma pack(pop)
  static check_size<sizeof(WebCameraDevice::$$c__DisplayClass15_0), 24 + sizeof(::System::Threading::Tasks::TaskCompletionSource_1<::UnityEngine::Texture2D*>*)> __NatSuite_Devices_WebCameraDevice_$$c__DisplayClass15_0SizeCheck;
  static_assert(sizeof(WebCameraDevice::$$c__DisplayClass15_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NatSuite::Devices::WebCameraDevice::$$c__DisplayClass15_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NatSuite::Devices::WebCameraDevice::$$c__DisplayClass15_0::$StartRunning$b__0
// Il2CppName: <StartRunning>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NatSuite::Devices::WebCameraDevice::$$c__DisplayClass15_0::*)()>(&NatSuite::Devices::WebCameraDevice::$$c__DisplayClass15_0::$StartRunning$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Devices::WebCameraDevice::$$c__DisplayClass15_0*), "<StartRunning>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
