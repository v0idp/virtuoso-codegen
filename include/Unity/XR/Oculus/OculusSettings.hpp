// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Completed forward declares
// Type namespace: Unity.XR.Oculus
namespace Unity::XR::Oculus {
  // Forward declaring type: OculusSettings
  class OculusSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::XR::Oculus::OculusSettings);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::OculusSettings*, "Unity.XR.Oculus", "OculusSettings");
// Type namespace: Unity.XR.Oculus
namespace Unity::XR::Oculus {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Unity.XR.Oculus.OculusSettings
  // [TokenAttribute] Offset: FFFFFFFF
  // [XRConfigurationDataAttribute] Offset: 5E7950
  class OculusSettings : public ::UnityEngine::ScriptableObject {
    public:
    // Nested type: ::Unity::XR::Oculus::OculusSettings::StereoRenderingModeDesktop
    struct StereoRenderingModeDesktop;
    // Nested type: ::Unity::XR::Oculus::OculusSettings::StereoRenderingModeAndroid
    struct StereoRenderingModeAndroid;
    // Size: 0x14
    #pragma pack(push, 1)
    // Autogenerated type: Unity.XR.Oculus.OculusSettings/Unity.XR.Oculus.StereoRenderingModeDesktop
    // [TokenAttribute] Offset: FFFFFFFF
    struct StereoRenderingModeDesktop/*, public ::System::Enum*/ {
      public:
      // Writing base type padding for base size: 0x0 to desired offset: 0x10
      char ___base_padding[0x10] = {};
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x10
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: StereoRenderingModeDesktop
      constexpr StereoRenderingModeDesktop(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Unity.XR.Oculus.OculusSettings/Unity.XR.Oculus.StereoRenderingModeDesktop MultiPass
      static constexpr const int MultiPass = 0;
      // Get static field: static public Unity.XR.Oculus.OculusSettings/Unity.XR.Oculus.StereoRenderingModeDesktop MultiPass
      static ::Unity::XR::Oculus::OculusSettings::StereoRenderingModeDesktop _get_MultiPass();
      // Set static field: static public Unity.XR.Oculus.OculusSettings/Unity.XR.Oculus.StereoRenderingModeDesktop MultiPass
      static void _set_MultiPass(::Unity::XR::Oculus::OculusSettings::StereoRenderingModeDesktop value);
      // static field const value: static public Unity.XR.Oculus.OculusSettings/Unity.XR.Oculus.StereoRenderingModeDesktop SinglePassInstanced
      static constexpr const int SinglePassInstanced = 1;
      // Get static field: static public Unity.XR.Oculus.OculusSettings/Unity.XR.Oculus.StereoRenderingModeDesktop SinglePassInstanced
      static ::Unity::XR::Oculus::OculusSettings::StereoRenderingModeDesktop _get_SinglePassInstanced();
      // Set static field: static public Unity.XR.Oculus.OculusSettings/Unity.XR.Oculus.StereoRenderingModeDesktop SinglePassInstanced
      static void _set_SinglePassInstanced(::Unity::XR::Oculus::OculusSettings::StereoRenderingModeDesktop value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // Unity.XR.Oculus.OculusSettings/Unity.XR.Oculus.StereoRenderingModeDesktop
    #pragma pack(pop)
    static check_size<sizeof(OculusSettings::StereoRenderingModeDesktop), 16 + sizeof(int)> __Unity_XR_Oculus_OculusSettings_StereoRenderingModeDesktopSizeCheck;
    static_assert(sizeof(OculusSettings::StereoRenderingModeDesktop) == 0x14);
    // Size: 0x14
    #pragma pack(push, 1)
    // Autogenerated type: Unity.XR.Oculus.OculusSettings/Unity.XR.Oculus.StereoRenderingModeAndroid
    // [TokenAttribute] Offset: FFFFFFFF
    struct StereoRenderingModeAndroid/*, public ::System::Enum*/ {
      public:
      // Writing base type padding for base size: 0x0 to desired offset: 0x10
      char ___base_padding[0x10] = {};
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x10
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: StereoRenderingModeAndroid
      constexpr StereoRenderingModeAndroid(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Unity.XR.Oculus.OculusSettings/Unity.XR.Oculus.StereoRenderingModeAndroid MultiPass
      static constexpr const int MultiPass = 0;
      // Get static field: static public Unity.XR.Oculus.OculusSettings/Unity.XR.Oculus.StereoRenderingModeAndroid MultiPass
      static ::Unity::XR::Oculus::OculusSettings::StereoRenderingModeAndroid _get_MultiPass();
      // Set static field: static public Unity.XR.Oculus.OculusSettings/Unity.XR.Oculus.StereoRenderingModeAndroid MultiPass
      static void _set_MultiPass(::Unity::XR::Oculus::OculusSettings::StereoRenderingModeAndroid value);
      // static field const value: static public Unity.XR.Oculus.OculusSettings/Unity.XR.Oculus.StereoRenderingModeAndroid Multiview
      static constexpr const int Multiview = 2;
      // Get static field: static public Unity.XR.Oculus.OculusSettings/Unity.XR.Oculus.StereoRenderingModeAndroid Multiview
      static ::Unity::XR::Oculus::OculusSettings::StereoRenderingModeAndroid _get_Multiview();
      // Set static field: static public Unity.XR.Oculus.OculusSettings/Unity.XR.Oculus.StereoRenderingModeAndroid Multiview
      static void _set_Multiview(::Unity::XR::Oculus::OculusSettings::StereoRenderingModeAndroid value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // Unity.XR.Oculus.OculusSettings/Unity.XR.Oculus.StereoRenderingModeAndroid
    #pragma pack(pop)
    static check_size<sizeof(OculusSettings::StereoRenderingModeAndroid), 16 + sizeof(int)> __Unity_XR_Oculus_OculusSettings_StereoRenderingModeAndroidSizeCheck;
    static_assert(sizeof(OculusSettings::StereoRenderingModeAndroid) == 0x14);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [TooltipAttribute] Offset: 0x5E79BC
    // public Unity.XR.Oculus.OculusSettings/Unity.XR.Oculus.StereoRenderingModeDesktop m_StereoRenderingModeDesktop
    // Size: 0x14
    // Offset: 0x18
    ::Unity::XR::Oculus::OculusSettings::StereoRenderingModeDesktop m_StereoRenderingModeDesktop;
    // Field size check
    static_assert(sizeof(::Unity::XR::Oculus::OculusSettings::StereoRenderingModeDesktop) == 0x14);
    // [TooltipAttribute] Offset: 0x5E7A08
    // public Unity.XR.Oculus.OculusSettings/Unity.XR.Oculus.StereoRenderingModeAndroid m_StereoRenderingModeAndroid
    // Size: 0x14
    // Offset: 0x1C
    ::Unity::XR::Oculus::OculusSettings::StereoRenderingModeAndroid m_StereoRenderingModeAndroid;
    // Field size check
    static_assert(sizeof(::Unity::XR::Oculus::OculusSettings::StereoRenderingModeAndroid) == 0x14);
    // [TooltipAttribute] Offset: 0x5E7A54
    // public System.Boolean SharedDepthBuffer
    // Size: 0x1
    // Offset: 0x20
    bool SharedDepthBuffer;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [TooltipAttribute] Offset: 0x5E7AA0
    // public System.Boolean DashSupport
    // Size: 0x1
    // Offset: 0x21
    bool DashSupport;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [TooltipAttribute] Offset: 0x5E7AEC
    // public System.Boolean V2Signing
    // Size: 0x1
    // Offset: 0x22
    bool V2Signing;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [TooltipAttribute] Offset: 0x5E7B38
    // public System.Boolean LowOverheadMode
    // Size: 0x1
    // Offset: 0x23
    bool LowOverheadMode;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [TooltipAttribute] Offset: 0x5E7B84
    // public System.Boolean ProtectedContext
    // Size: 0x1
    // Offset: 0x24
    bool ProtectedContext;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [TooltipAttribute] Offset: 0x5E7BD0
    // public System.Boolean FocusAware
    // Size: 0x1
    // Offset: 0x25
    bool FocusAware;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [TooltipAttribute] Offset: 0x5E7C1C
    // public System.Boolean OptimizeBufferDiscards
    // Size: 0x1
    // Offset: 0x26
    bool OptimizeBufferDiscards;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [TooltipAttribute] Offset: 0x5E7C68
    // public System.Boolean PhaseSync
    // Size: 0x1
    // Offset: 0x27
    bool PhaseSync;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [TooltipAttribute] Offset: 0x5E7CB4
    // public System.Boolean SubsampledLayout
    // Size: 0x1
    // Offset: 0x28
    bool SubsampledLayout;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [TooltipAttribute] Offset: 0x5E7D00
    // public System.Boolean TargetQuest
    // Size: 0x1
    // Offset: 0x29
    bool TargetQuest;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [TooltipAttribute] Offset: 0x5E7D4C
    // public System.Boolean TargetQuest2
    // Size: 0x1
    // Offset: 0x2A
    bool TargetQuest2;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: TargetQuest2 and: SystemSplashScreen
    char __padding12[0x5] = {};
    // [TooltipAttribute] Offset: 0x5E7D98
    // public UnityEngine.Texture2D SystemSplashScreen
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Texture2D* SystemSplashScreen;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture2D*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static public Unity.XR.Oculus.OculusSettings s_Settings
    static ::Unity::XR::Oculus::OculusSettings* _get_s_Settings();
    // Set static field: static public Unity.XR.Oculus.OculusSettings s_Settings
    static void _set_s_Settings(::Unity::XR::Oculus::OculusSettings* value);
    // Get instance field reference: public Unity.XR.Oculus.OculusSettings/Unity.XR.Oculus.StereoRenderingModeDesktop m_StereoRenderingModeDesktop
    ::Unity::XR::Oculus::OculusSettings::StereoRenderingModeDesktop& dyn_m_StereoRenderingModeDesktop();
    // Get instance field reference: public Unity.XR.Oculus.OculusSettings/Unity.XR.Oculus.StereoRenderingModeAndroid m_StereoRenderingModeAndroid
    ::Unity::XR::Oculus::OculusSettings::StereoRenderingModeAndroid& dyn_m_StereoRenderingModeAndroid();
    // Get instance field reference: public System.Boolean SharedDepthBuffer
    bool& dyn_SharedDepthBuffer();
    // Get instance field reference: public System.Boolean DashSupport
    bool& dyn_DashSupport();
    // Get instance field reference: public System.Boolean V2Signing
    bool& dyn_V2Signing();
    // Get instance field reference: public System.Boolean LowOverheadMode
    bool& dyn_LowOverheadMode();
    // Get instance field reference: public System.Boolean ProtectedContext
    bool& dyn_ProtectedContext();
    // Get instance field reference: public System.Boolean FocusAware
    bool& dyn_FocusAware();
    // Get instance field reference: public System.Boolean OptimizeBufferDiscards
    bool& dyn_OptimizeBufferDiscards();
    // Get instance field reference: public System.Boolean PhaseSync
    bool& dyn_PhaseSync();
    // Get instance field reference: public System.Boolean SubsampledLayout
    bool& dyn_SubsampledLayout();
    // Get instance field reference: public System.Boolean TargetQuest
    bool& dyn_TargetQuest();
    // Get instance field reference: public System.Boolean TargetQuest2
    bool& dyn_TargetQuest2();
    // Get instance field reference: public UnityEngine.Texture2D SystemSplashScreen
    ::UnityEngine::Texture2D*& dyn_SystemSplashScreen();
    // public System.UInt16 GetStereoRenderingMode()
    // Offset: 0x12DAF74
    uint16_t GetStereoRenderingMode();
    // public System.Void Awake()
    // Offset: 0x12DB4EC
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x12DB53C
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::XR::Oculus::OculusSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusSettings*, creationType>()));
    }
  }; // Unity.XR.Oculus.OculusSettings
  #pragma pack(pop)
  static check_size<sizeof(OculusSettings), 48 + sizeof(::UnityEngine::Texture2D*)> __Unity_XR_Oculus_OculusSettingsSizeCheck;
  static_assert(sizeof(OculusSettings) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::OculusSettings::StereoRenderingModeAndroid, "Unity.XR.Oculus", "OculusSettings/StereoRenderingModeAndroid");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::OculusSettings::StereoRenderingModeDesktop, "Unity.XR.Oculus", "OculusSettings/StereoRenderingModeDesktop");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::XR::Oculus::OculusSettings::GetStereoRenderingMode
// Il2CppName: GetStereoRenderingMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (Unity::XR::Oculus::OculusSettings::*)()>(&Unity::XR::Oculus::OculusSettings::GetStereoRenderingMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::OculusSettings*), "GetStereoRenderingMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::OculusSettings::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::XR::Oculus::OculusSettings::*)()>(&Unity::XR::Oculus::OculusSettings::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::OculusSettings*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::OculusSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
