// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: IVRScreenshots
  struct IVRScreenshots;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRScreenshots, "OVR.OpenVR", "IVRScreenshots");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x38
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.IVRScreenshots
  // [TokenAttribute] Offset: FFFFFFFF
  struct IVRScreenshots/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::OVR::OpenVR::IVRScreenshots::_RequestScreenshot
    class _RequestScreenshot;
    // Nested type: ::OVR::OpenVR::IVRScreenshots::_HookScreenshot
    class _HookScreenshot;
    // Nested type: ::OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyType
    class _GetScreenshotPropertyType;
    // Nested type: ::OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyFilename
    class _GetScreenshotPropertyFilename;
    // Nested type: ::OVR::OpenVR::IVRScreenshots::_UpdateScreenshotProgress
    class _UpdateScreenshotProgress;
    // Nested type: ::OVR::OpenVR::IVRScreenshots::_TakeStereoScreenshot
    class _TakeStereoScreenshot;
    // Nested type: ::OVR::OpenVR::IVRScreenshots::_SubmitScreenshot
    class _SubmitScreenshot;
    public:
    // OVR.OpenVR.IVRScreenshots/OVR.OpenVR._RequestScreenshot RequestScreenshot
    // Size: 0x8
    // Offset: 0x0
    ::OVR::OpenVR::IVRScreenshots::_RequestScreenshot* RequestScreenshot;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRScreenshots::_RequestScreenshot*) == 0x8);
    // OVR.OpenVR.IVRScreenshots/OVR.OpenVR._HookScreenshot HookScreenshot
    // Size: 0x8
    // Offset: 0x8
    ::OVR::OpenVR::IVRScreenshots::_HookScreenshot* HookScreenshot;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRScreenshots::_HookScreenshot*) == 0x8);
    // OVR.OpenVR.IVRScreenshots/OVR.OpenVR._GetScreenshotPropertyType GetScreenshotPropertyType
    // Size: 0x8
    // Offset: 0x10
    ::OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyType* GetScreenshotPropertyType;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyType*) == 0x8);
    // OVR.OpenVR.IVRScreenshots/OVR.OpenVR._GetScreenshotPropertyFilename GetScreenshotPropertyFilename
    // Size: 0x8
    // Offset: 0x18
    ::OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyFilename* GetScreenshotPropertyFilename;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyFilename*) == 0x8);
    // OVR.OpenVR.IVRScreenshots/OVR.OpenVR._UpdateScreenshotProgress UpdateScreenshotProgress
    // Size: 0x8
    // Offset: 0x20
    ::OVR::OpenVR::IVRScreenshots::_UpdateScreenshotProgress* UpdateScreenshotProgress;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRScreenshots::_UpdateScreenshotProgress*) == 0x8);
    // OVR.OpenVR.IVRScreenshots/OVR.OpenVR._TakeStereoScreenshot TakeStereoScreenshot
    // Size: 0x8
    // Offset: 0x28
    ::OVR::OpenVR::IVRScreenshots::_TakeStereoScreenshot* TakeStereoScreenshot;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRScreenshots::_TakeStereoScreenshot*) == 0x8);
    // OVR.OpenVR.IVRScreenshots/OVR.OpenVR._SubmitScreenshot SubmitScreenshot
    // Size: 0x8
    // Offset: 0x30
    ::OVR::OpenVR::IVRScreenshots::_SubmitScreenshot* SubmitScreenshot;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRScreenshots::_SubmitScreenshot*) == 0x8);
    public:
    // Creating value type constructor for type: IVRScreenshots
    constexpr IVRScreenshots(::OVR::OpenVR::IVRScreenshots::_RequestScreenshot* RequestScreenshot_ = {}, ::OVR::OpenVR::IVRScreenshots::_HookScreenshot* HookScreenshot_ = {}, ::OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyType* GetScreenshotPropertyType_ = {}, ::OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyFilename* GetScreenshotPropertyFilename_ = {}, ::OVR::OpenVR::IVRScreenshots::_UpdateScreenshotProgress* UpdateScreenshotProgress_ = {}, ::OVR::OpenVR::IVRScreenshots::_TakeStereoScreenshot* TakeStereoScreenshot_ = {}, ::OVR::OpenVR::IVRScreenshots::_SubmitScreenshot* SubmitScreenshot_ = {}) noexcept : RequestScreenshot{RequestScreenshot_}, HookScreenshot{HookScreenshot_}, GetScreenshotPropertyType{GetScreenshotPropertyType_}, GetScreenshotPropertyFilename{GetScreenshotPropertyFilename_}, UpdateScreenshotProgress{UpdateScreenshotProgress_}, TakeStereoScreenshot{TakeStereoScreenshot_}, SubmitScreenshot{SubmitScreenshot_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: OVR.OpenVR.IVRScreenshots/OVR.OpenVR._RequestScreenshot RequestScreenshot
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRScreenshots::_RequestScreenshot*& dyn_RequestScreenshot();
    // Get instance field reference: OVR.OpenVR.IVRScreenshots/OVR.OpenVR._HookScreenshot HookScreenshot
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRScreenshots::_HookScreenshot*& dyn_HookScreenshot();
    // Get instance field reference: OVR.OpenVR.IVRScreenshots/OVR.OpenVR._GetScreenshotPropertyType GetScreenshotPropertyType
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyType*& dyn_GetScreenshotPropertyType();
    // Get instance field reference: OVR.OpenVR.IVRScreenshots/OVR.OpenVR._GetScreenshotPropertyFilename GetScreenshotPropertyFilename
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyFilename*& dyn_GetScreenshotPropertyFilename();
    // Get instance field reference: OVR.OpenVR.IVRScreenshots/OVR.OpenVR._UpdateScreenshotProgress UpdateScreenshotProgress
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRScreenshots::_UpdateScreenshotProgress*& dyn_UpdateScreenshotProgress();
    // Get instance field reference: OVR.OpenVR.IVRScreenshots/OVR.OpenVR._TakeStereoScreenshot TakeStereoScreenshot
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRScreenshots::_TakeStereoScreenshot*& dyn_TakeStereoScreenshot();
    // Get instance field reference: OVR.OpenVR.IVRScreenshots/OVR.OpenVR._SubmitScreenshot SubmitScreenshot
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRScreenshots::_SubmitScreenshot*& dyn_SubmitScreenshot();
  }; // OVR.OpenVR.IVRScreenshots
  #pragma pack(pop)
  static check_size<sizeof(IVRScreenshots), 48 + sizeof(::OVR::OpenVR::IVRScreenshots::_SubmitScreenshot*)> __OVR_OpenVR_IVRScreenshotsSizeCheck;
  static_assert(sizeof(IVRScreenshots) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
