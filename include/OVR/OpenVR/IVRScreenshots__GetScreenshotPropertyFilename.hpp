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
  // Forward declaring type: EVRScreenshotPropertyFilenames
  struct EVRScreenshotPropertyFilenames;
  // Forward declaring type: EVRScreenshotError
  struct EVRScreenshotError;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
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
NEED_NO_BOX(::OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyFilename);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyFilename*, "OVR.OpenVR", "IVRScreenshots/_GetScreenshotPropertyFilename");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRScreenshots/OVR.OpenVR._GetScreenshotPropertyFilename
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 58B810
  class IVRScreenshots::_GetScreenshotPropertyFilename : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x722088
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRScreenshots::_GetScreenshotPropertyFilename* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyFilename::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRScreenshots::_GetScreenshotPropertyFilename*, creationType>(object, method)));
    }
    // public System.UInt32 Invoke(System.UInt32 screenshotHandle, OVR.OpenVR.EVRScreenshotPropertyFilenames filenameType, System.Text.StringBuilder pchFilename, System.UInt32 cchFilename, ref OVR.OpenVR.EVRScreenshotError pError)
    // Offset: 0x722098
    uint Invoke(uint screenshotHandle, ::OVR::OpenVR::EVRScreenshotPropertyFilenames filenameType, ::System::Text::StringBuilder* pchFilename, uint cchFilename, ByRef<::OVR::OpenVR::EVRScreenshotError> pError);
    // public System.IAsyncResult BeginInvoke(System.UInt32 screenshotHandle, OVR.OpenVR.EVRScreenshotPropertyFilenames filenameType, System.Text.StringBuilder pchFilename, System.UInt32 cchFilename, ref OVR.OpenVR.EVRScreenshotError pError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x722324
    ::System::IAsyncResult* BeginInvoke(uint screenshotHandle, ::OVR::OpenVR::EVRScreenshotPropertyFilenames filenameType, ::System::Text::StringBuilder* pchFilename, uint cchFilename, ByRef<::OVR::OpenVR::EVRScreenshotError> pError, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(ref OVR.OpenVR.EVRScreenshotError pError, System.IAsyncResult result)
    // Offset: 0x722424
    uint EndInvoke(ByRef<::OVR::OpenVR::EVRScreenshotError> pError, ::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRScreenshots/OVR.OpenVR._GetScreenshotPropertyFilename
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyFilename::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyFilename::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyFilename::*)(uint, ::OVR::OpenVR::EVRScreenshotPropertyFilenames, ::System::Text::StringBuilder*, uint, ByRef<::OVR::OpenVR::EVRScreenshotError>)>(&OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyFilename::Invoke)> {
  static const MethodInfo* get() {
    static auto* screenshotHandle = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* filenameType = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRScreenshotPropertyFilenames")->byval_arg;
    static auto* pchFilename = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* cchFilename = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRScreenshotError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyFilename*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{screenshotHandle, filenameType, pchFilename, cchFilename, pError});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyFilename::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyFilename::*)(uint, ::OVR::OpenVR::EVRScreenshotPropertyFilenames, ::System::Text::StringBuilder*, uint, ByRef<::OVR::OpenVR::EVRScreenshotError>, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyFilename::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* screenshotHandle = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* filenameType = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRScreenshotPropertyFilenames")->byval_arg;
    static auto* pchFilename = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* cchFilename = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRScreenshotError")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyFilename*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{screenshotHandle, filenameType, pchFilename, cchFilename, pError, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyFilename::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyFilename::*)(ByRef<::OVR::OpenVR::EVRScreenshotError>, ::System::IAsyncResult*)>(&OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyFilename::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRScreenshotError")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyFilename*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pError, result});
  }
};