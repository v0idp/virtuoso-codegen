// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVROverlay
#include "OVR/OpenVR/IVROverlay.hpp"
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
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
  // Forward declaring type: ETextureType
  struct ETextureType;
  // Forward declaring type: EColorSpace
  struct EColorSpace;
  // Forward declaring type: VRTextureBounds_t
  struct VRTextureBounds_t;
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
NEED_NO_BOX(::OVR::OpenVR::IVROverlay::_GetOverlayTexture);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVROverlay::_GetOverlayTexture*, "OVR.OpenVR", "IVROverlay/_GetOverlayTexture");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVROverlay/OVR.OpenVR._GetOverlayTexture
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 695EA4
  class IVROverlay::_GetOverlayTexture : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x827A78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_GetOverlayTexture* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVROverlay::_GetOverlayTexture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_GetOverlayTexture*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, ref System.IntPtr pNativeTextureHandle, System.IntPtr pNativeTextureRef, ref System.UInt32 pWidth, ref System.UInt32 pHeight, ref System.UInt32 pNativeFormat, ref OVR.OpenVR.ETextureType pAPIType, ref OVR.OpenVR.EColorSpace pColorSpace, ref OVR.OpenVR.VRTextureBounds_t pTextureBounds)
    // Offset: 0x827A88
    ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<::System::IntPtr> pNativeTextureHandle, ::System::IntPtr pNativeTextureRef, ByRef<uint> pWidth, ByRef<uint> pHeight, ByRef<uint> pNativeFormat, ByRef<::OVR::OpenVR::ETextureType> pAPIType, ByRef<::OVR::OpenVR::EColorSpace> pColorSpace, ByRef<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, ref System.IntPtr pNativeTextureHandle, System.IntPtr pNativeTextureRef, ref System.UInt32 pWidth, ref System.UInt32 pHeight, ref System.UInt32 pNativeFormat, ref OVR.OpenVR.ETextureType pAPIType, ref OVR.OpenVR.EColorSpace pColorSpace, ref OVR.OpenVR.VRTextureBounds_t pTextureBounds, System.AsyncCallback callback, System.Object object)
    // Offset: 0x827D2C
    ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ByRef<::System::IntPtr> pNativeTextureHandle, ::System::IntPtr pNativeTextureRef, ByRef<uint> pWidth, ByRef<uint> pHeight, ByRef<uint> pNativeFormat, ByRef<::OVR::OpenVR::ETextureType> pAPIType, ByRef<::OVR::OpenVR::EColorSpace> pColorSpace, ByRef<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(ref System.IntPtr pNativeTextureHandle, ref System.UInt32 pWidth, ref System.UInt32 pHeight, ref System.UInt32 pNativeFormat, ref OVR.OpenVR.ETextureType pAPIType, ref OVR.OpenVR.EColorSpace pColorSpace, ref OVR.OpenVR.VRTextureBounds_t pTextureBounds, System.IAsyncResult result)
    // Offset: 0x827EF0
    ::OVR::OpenVR::EVROverlayError EndInvoke(ByRef<::System::IntPtr> pNativeTextureHandle, ByRef<uint> pWidth, ByRef<uint> pHeight, ByRef<uint> pNativeFormat, ByRef<::OVR::OpenVR::ETextureType> pAPIType, ByRef<::OVR::OpenVR::EColorSpace> pColorSpace, ByRef<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds, ::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/OVR.OpenVR._GetOverlayTexture
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_GetOverlayTexture::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_GetOverlayTexture::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (OVR::OpenVR::IVROverlay::_GetOverlayTexture::*)(uint64_t, ByRef<::System::IntPtr>, ::System::IntPtr, ByRef<uint>, ByRef<uint>, ByRef<uint>, ByRef<::OVR::OpenVR::ETextureType>, ByRef<::OVR::OpenVR::EColorSpace>, ByRef<::OVR::OpenVR::VRTextureBounds_t>)>(&OVR::OpenVR::IVROverlay::_GetOverlayTexture::Invoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pNativeTextureHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    static auto* pNativeTextureRef = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* pWidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pHeight = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pNativeFormat = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pAPIType = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "ETextureType")->this_arg;
    static auto* pColorSpace = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EColorSpace")->this_arg;
    static auto* pTextureBounds = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VRTextureBounds_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_GetOverlayTexture*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, pNativeTextureHandle, pNativeTextureRef, pWidth, pHeight, pNativeFormat, pAPIType, pColorSpace, pTextureBounds});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_GetOverlayTexture::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVROverlay::_GetOverlayTexture::*)(uint64_t, ByRef<::System::IntPtr>, ::System::IntPtr, ByRef<uint>, ByRef<uint>, ByRef<uint>, ByRef<::OVR::OpenVR::ETextureType>, ByRef<::OVR::OpenVR::EColorSpace>, ByRef<::OVR::OpenVR::VRTextureBounds_t>, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVROverlay::_GetOverlayTexture::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pNativeTextureHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    static auto* pNativeTextureRef = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* pWidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pHeight = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pNativeFormat = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pAPIType = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "ETextureType")->this_arg;
    static auto* pColorSpace = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EColorSpace")->this_arg;
    static auto* pTextureBounds = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VRTextureBounds_t")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_GetOverlayTexture*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, pNativeTextureHandle, pNativeTextureRef, pWidth, pHeight, pNativeFormat, pAPIType, pColorSpace, pTextureBounds, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_GetOverlayTexture::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (OVR::OpenVR::IVROverlay::_GetOverlayTexture::*)(ByRef<::System::IntPtr>, ByRef<uint>, ByRef<uint>, ByRef<uint>, ByRef<::OVR::OpenVR::ETextureType>, ByRef<::OVR::OpenVR::EColorSpace>, ByRef<::OVR::OpenVR::VRTextureBounds_t>, ::System::IAsyncResult*)>(&OVR::OpenVR::IVROverlay::_GetOverlayTexture::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pNativeTextureHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    static auto* pWidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pHeight = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pNativeFormat = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pAPIType = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "ETextureType")->this_arg;
    static auto* pColorSpace = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EColorSpace")->this_arg;
    static auto* pTextureBounds = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VRTextureBounds_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_GetOverlayTexture*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pNativeTextureHandle, pWidth, pHeight, pNativeFormat, pAPIType, pColorSpace, pTextureBounds, result});
  }
};
