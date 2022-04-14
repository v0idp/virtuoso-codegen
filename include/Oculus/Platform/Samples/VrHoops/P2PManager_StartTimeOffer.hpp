// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.Samples.VrHoops.P2PManager
#include "Oculus/Platform/Samples/VrHoops/P2PManager.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Samples::VrHoops::P2PManager::StartTimeOffer);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Samples::VrHoops::P2PManager::StartTimeOffer*, "Oculus.Platform.Samples.VrHoops", "P2PManager/StartTimeOffer");
// Type namespace: Oculus.Platform.Samples.VrHoops
namespace Oculus::Platform::Samples::VrHoops {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Samples.VrHoops.P2PManager/Oculus.Platform.Samples.VrHoops.StartTimeOffer
  // [TokenAttribute] Offset: FFFFFFFF
  class P2PManager::StartTimeOffer : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1722FB4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static P2PManager::StartTimeOffer* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Samples::VrHoops::P2PManager::StartTimeOffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<P2PManager::StartTimeOffer*, creationType>(object, method)));
    }
    // public System.Single Invoke(System.Single remoteTime)
    // Offset: 0x1722FC4
    float Invoke(float remoteTime);
    // public System.IAsyncResult BeginInvoke(System.Single remoteTime, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1723200
    ::System::IAsyncResult* BeginInvoke(float remoteTime, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Single EndInvoke(System.IAsyncResult result)
    // Offset: 0x1723288
    float EndInvoke(::System::IAsyncResult* result);
  }; // Oculus.Platform.Samples.VrHoops.P2PManager/Oculus.Platform.Samples.VrHoops.StartTimeOffer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::P2PManager::StartTimeOffer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::P2PManager::StartTimeOffer::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Platform::Samples::VrHoops::P2PManager::StartTimeOffer::*)(float)>(&Oculus::Platform::Samples::VrHoops::P2PManager::StartTimeOffer::Invoke)> {
  static const MethodInfo* get() {
    static auto* remoteTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::P2PManager::StartTimeOffer*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{remoteTime});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::P2PManager::StartTimeOffer::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Oculus::Platform::Samples::VrHoops::P2PManager::StartTimeOffer::*)(float, ::System::AsyncCallback*, ::Il2CppObject*)>(&Oculus::Platform::Samples::VrHoops::P2PManager::StartTimeOffer::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* remoteTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::P2PManager::StartTimeOffer*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{remoteTime, callback, object});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::P2PManager::StartTimeOffer::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Platform::Samples::VrHoops::P2PManager::StartTimeOffer::*)(::System::IAsyncResult*)>(&Oculus::Platform::Samples::VrHoops::P2PManager::StartTimeOffer::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::P2PManager::StartTimeOffer*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
