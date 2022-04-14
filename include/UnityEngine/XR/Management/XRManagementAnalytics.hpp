// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::XR::Management
namespace UnityEngine::XR::Management {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Management
namespace UnityEngine::XR::Management {
  // Forward declaring type: XRManagementAnalytics
  class XRManagementAnalytics;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Management::XRManagementAnalytics);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Management::XRManagementAnalytics*, "UnityEngine.XR.Management", "XRManagementAnalytics");
// Type namespace: UnityEngine.XR.Management
namespace UnityEngine::XR::Management {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Management.XRManagementAnalytics
  // [TokenAttribute] Offset: FFFFFFFF
  class XRManagementAnalytics : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::XR::Management::XRManagementAnalytics::BuildEvent
    struct BuildEvent;
    // static field const value: static private System.Int32 kMaxEventsPerHour
    static constexpr const int kMaxEventsPerHour = 1000;
    // Get static field: static private System.Int32 kMaxEventsPerHour
    static int _get_kMaxEventsPerHour();
    // Set static field: static private System.Int32 kMaxEventsPerHour
    static void _set_kMaxEventsPerHour(int value);
    // static field const value: static private System.Int32 kMaxNumberOfElements
    static constexpr const int kMaxNumberOfElements = 1000;
    // Get static field: static private System.Int32 kMaxNumberOfElements
    static int _get_kMaxNumberOfElements();
    // Set static field: static private System.Int32 kMaxNumberOfElements
    static void _set_kMaxNumberOfElements(int value);
    // static field const value: static private System.String kVendorKey
    static constexpr const char* kVendorKey = "unity.xrmanagement";
    // Get static field: static private System.String kVendorKey
    static ::StringW _get_kVendorKey();
    // Set static field: static private System.String kVendorKey
    static void _set_kVendorKey(::StringW value);
    // static field const value: static private System.String kEventBuild
    static constexpr const char* kEventBuild = "xrmanagment_build";
    // Get static field: static private System.String kEventBuild
    static ::StringW _get_kEventBuild();
    // Set static field: static private System.String kEventBuild
    static void _set_kEventBuild(::StringW value);
    // Get static field: static private System.Boolean s_Initialized
    static bool _get_s_Initialized();
    // Set static field: static private System.Boolean s_Initialized
    static void _set_s_Initialized(bool value);
    // static private System.Void .cctor()
    // Offset: 0x18FAEAC
    static void _cctor();
    // static private System.Boolean Initialize()
    // Offset: 0x18FAE48
    static bool Initialize();
  }; // UnityEngine.XR.Management.XRManagementAnalytics
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Management::XRManagementAnalytics::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::XR::Management::XRManagementAnalytics::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Management::XRManagementAnalytics*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Management::XRManagementAnalytics::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::XR::Management::XRManagementAnalytics::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Management::XRManagementAnalytics*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
