// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRSystem
#include "OVR/OpenVR/IVRSystem.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: TrackedDevicePose_t
  struct TrackedDevicePose_t;
  // Forward declaring type: HmdMatrix34_t
  struct HmdMatrix34_t;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OVR::OpenVR::IVRSystem::_ApplyTransform);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem::_ApplyTransform*, "OVR.OpenVR", "IVRSystem/_ApplyTransform");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRSystem/OVR.OpenVR._ApplyTransform
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 58A35C
  class IVRSystem::_ApplyTransform : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x7281CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_ApplyTransform* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVRSystem::_ApplyTransform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_ApplyTransform*, creationType>(object, method)));
    }
    // public System.Void Invoke(ref OVR.OpenVR.TrackedDevicePose_t pOutputPose, ref OVR.OpenVR.TrackedDevicePose_t pTrackedDevicePose, ref OVR.OpenVR.HmdMatrix34_t pTransform)
    // Offset: 0x7281DC
    void Invoke(ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, ByRef<::OVR::OpenVR::HmdMatrix34_t> pTransform);
    // public System.IAsyncResult BeginInvoke(ref OVR.OpenVR.TrackedDevicePose_t pOutputPose, ref OVR.OpenVR.TrackedDevicePose_t pTrackedDevicePose, ref OVR.OpenVR.HmdMatrix34_t pTransform, System.AsyncCallback callback, System.Object object)
    // Offset: 0x728444
    ::System::IAsyncResult* BeginInvoke(ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, ByRef<::OVR::OpenVR::HmdMatrix34_t> pTransform, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref OVR.OpenVR.TrackedDevicePose_t pOutputPose, ref OVR.OpenVR.TrackedDevicePose_t pTrackedDevicePose, ref OVR.OpenVR.HmdMatrix34_t pTransform, System.IAsyncResult result)
    // Offset: 0x728520
    void EndInvoke(ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, ByRef<::OVR::OpenVR::HmdMatrix34_t> pTransform, ::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/OVR.OpenVR._ApplyTransform
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_ApplyTransform::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_ApplyTransform::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVRSystem::_ApplyTransform::*)(ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ByRef<::OVR::OpenVR::HmdMatrix34_t>)>(&OVR::OpenVR::IVRSystem::_ApplyTransform::Invoke)> {
  static const MethodInfo* get() {
    static auto* pOutputPose = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "TrackedDevicePose_t")->this_arg;
    static auto* pTrackedDevicePose = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "TrackedDevicePose_t")->this_arg;
    static auto* pTransform = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdMatrix34_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_ApplyTransform*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pOutputPose, pTrackedDevicePose, pTransform});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_ApplyTransform::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVRSystem::_ApplyTransform::*)(ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRSystem::_ApplyTransform::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pOutputPose = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "TrackedDevicePose_t")->this_arg;
    static auto* pTrackedDevicePose = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "TrackedDevicePose_t")->this_arg;
    static auto* pTransform = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdMatrix34_t")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_ApplyTransform*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pOutputPose, pTrackedDevicePose, pTransform, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_ApplyTransform::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVRSystem::_ApplyTransform::*)(ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::IAsyncResult*)>(&OVR::OpenVR::IVRSystem::_ApplyTransform::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pOutputPose = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "TrackedDevicePose_t")->this_arg;
    static auto* pTrackedDevicePose = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "TrackedDevicePose_t")->this_arg;
    static auto* pTransform = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdMatrix34_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_ApplyTransform*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pOutputPose, pTrackedDevicePose, pTransform, result});
  }
};
