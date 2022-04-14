// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRInput
#include "OVR/OpenVR/IVRInput.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.VRBoneTransform_t
#include "OVR/OpenVR/VRBoneTransform_t.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRInputError
  struct EVRInputError;
  // Forward declaring type: EVRSkeletalTransformSpace
  struct EVRSkeletalTransformSpace;
  // Forward declaring type: EVRSkeletalMotionRange
  struct EVRSkeletalMotionRange;
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
NEED_NO_BOX(::OVR::OpenVR::IVRInput::_GetSkeletalBoneData);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRInput::_GetSkeletalBoneData*, "OVR.OpenVR", "IVRInput/_GetSkeletalBoneData");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRInput/OVR.OpenVR._GetSkeletalBoneData
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 69646C
  class IVRInput::_GetSkeletalBoneData : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x81FAD4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRInput::_GetSkeletalBoneData* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVRInput::_GetSkeletalBoneData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRInput::_GetSkeletalBoneData*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRInputError Invoke(System.UInt64 action, OVR.OpenVR.EVRSkeletalTransformSpace eTransformSpace, OVR.OpenVR.EVRSkeletalMotionRange eMotionRange, in OVR.OpenVR.VRBoneTransform_t[] pTransformArray, System.UInt32 unTransformArrayCount, System.UInt64 ulRestrictToDevice)
    // Offset: 0x81FAE4
    ::OVR::OpenVR::EVRInputError Invoke(uint64_t action, ::OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace, ::OVR::OpenVR::EVRSkeletalMotionRange eMotionRange, ByRef<::ArrayW<::OVR::OpenVR::VRBoneTransform_t>> pTransformArray, uint unTransformArrayCount, uint64_t ulRestrictToDevice);
    // public System.IAsyncResult BeginInvoke(System.UInt64 action, OVR.OpenVR.EVRSkeletalTransformSpace eTransformSpace, OVR.OpenVR.EVRSkeletalMotionRange eMotionRange, in OVR.OpenVR.VRBoneTransform_t[] pTransformArray, System.UInt32 unTransformArrayCount, System.UInt64 ulRestrictToDevice, System.AsyncCallback callback, System.Object object)
    // Offset: 0x81FD84
    ::System::IAsyncResult* BeginInvoke(uint64_t action, ::OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace, ::OVR::OpenVR::EVRSkeletalMotionRange eMotionRange, ByRef<::ArrayW<::OVR::OpenVR::VRBoneTransform_t>> pTransformArray, uint unTransformArrayCount, uint64_t ulRestrictToDevice, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRInputError EndInvoke(System.IAsyncResult result)
    // Offset: 0x81FEB0
    ::OVR::OpenVR::EVRInputError EndInvoke(::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRInput/OVR.OpenVR._GetSkeletalBoneData
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_GetSkeletalBoneData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_GetSkeletalBoneData::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (OVR::OpenVR::IVRInput::_GetSkeletalBoneData::*)(uint64_t, ::OVR::OpenVR::EVRSkeletalTransformSpace, ::OVR::OpenVR::EVRSkeletalMotionRange, ByRef<::ArrayW<::OVR::OpenVR::VRBoneTransform_t>>, uint, uint64_t)>(&OVR::OpenVR::IVRInput::_GetSkeletalBoneData::Invoke)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* eTransformSpace = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRSkeletalTransformSpace")->byval_arg;
    static auto* eMotionRange = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRSkeletalMotionRange")->byval_arg;
    static auto* pTransformArray = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VRBoneTransform_t"), 1)->this_arg;
    static auto* unTransformArrayCount = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* ulRestrictToDevice = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRInput::_GetSkeletalBoneData*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action, eTransformSpace, eMotionRange, pTransformArray, unTransformArrayCount, ulRestrictToDevice});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_GetSkeletalBoneData::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVRInput::_GetSkeletalBoneData::*)(uint64_t, ::OVR::OpenVR::EVRSkeletalTransformSpace, ::OVR::OpenVR::EVRSkeletalMotionRange, ByRef<::ArrayW<::OVR::OpenVR::VRBoneTransform_t>>, uint, uint64_t, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRInput::_GetSkeletalBoneData::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* eTransformSpace = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRSkeletalTransformSpace")->byval_arg;
    static auto* eMotionRange = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRSkeletalMotionRange")->byval_arg;
    static auto* pTransformArray = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VRBoneTransform_t"), 1)->this_arg;
    static auto* unTransformArrayCount = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* ulRestrictToDevice = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRInput::_GetSkeletalBoneData*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action, eTransformSpace, eMotionRange, pTransformArray, unTransformArrayCount, ulRestrictToDevice, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_GetSkeletalBoneData::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (OVR::OpenVR::IVRInput::_GetSkeletalBoneData::*)(::System::IAsyncResult*)>(&OVR::OpenVR::IVRInput::_GetSkeletalBoneData::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRInput::_GetSkeletalBoneData*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
