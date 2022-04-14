// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRScreenshots
#include "OVR/OpenVR/IVRScreenshots.hpp"
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
  // Forward declaring type: EVRScreenshotType
  struct EVRScreenshotType;
  // Forward declaring type: EVRScreenshotError
  struct EVRScreenshotError;
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
NEED_NO_BOX(::OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyType);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyType*, "OVR.OpenVR", "IVRScreenshots/_GetScreenshotPropertyType");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRScreenshots/OVR.OpenVR._GetScreenshotPropertyType
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 6962F0
  class IVRScreenshots::_GetScreenshotPropertyType : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x838B60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRScreenshots::_GetScreenshotPropertyType* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyType::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRScreenshots::_GetScreenshotPropertyType*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRScreenshotType Invoke(System.UInt32 screenshotHandle, ref OVR.OpenVR.EVRScreenshotError pError)
    // Offset: 0x838B70
    ::OVR::OpenVR::EVRScreenshotType Invoke(uint screenshotHandle, ByRef<::OVR::OpenVR::EVRScreenshotError> pError);
    // public System.IAsyncResult BeginInvoke(System.UInt32 screenshotHandle, ref OVR.OpenVR.EVRScreenshotError pError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x838DB8
    ::System::IAsyncResult* BeginInvoke(uint screenshotHandle, ByRef<::OVR::OpenVR::EVRScreenshotError> pError, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRScreenshotType EndInvoke(ref OVR.OpenVR.EVRScreenshotError pError, System.IAsyncResult result)
    // Offset: 0x838E74
    ::OVR::OpenVR::EVRScreenshotType EndInvoke(ByRef<::OVR::OpenVR::EVRScreenshotError> pError, ::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRScreenshots/OVR.OpenVR._GetScreenshotPropertyType
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyType::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyType::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRScreenshotType (OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyType::*)(uint, ByRef<::OVR::OpenVR::EVRScreenshotError>)>(&OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyType::Invoke)> {
  static const MethodInfo* get() {
    static auto* screenshotHandle = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRScreenshotError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyType*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{screenshotHandle, pError});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyType::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyType::*)(uint, ByRef<::OVR::OpenVR::EVRScreenshotError>, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyType::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* screenshotHandle = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRScreenshotError")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyType*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{screenshotHandle, pError, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyType::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRScreenshotType (OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyType::*)(ByRef<::OVR::OpenVR::EVRScreenshotError>, ::System::IAsyncResult*)>(&OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyType::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRScreenshotError")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyType*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pError, result});
  }
};
