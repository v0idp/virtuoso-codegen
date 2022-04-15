// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::XR::Management
namespace UnityEngine::XR::Management {
  // Forward declaring type: XRManagerSettings
  class XRManagerSettings;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Management
namespace UnityEngine::XR::Management {
  // Forward declaring type: XRGeneralSettings
  class XRGeneralSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Management::XRGeneralSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Management::XRGeneralSettings*, "UnityEngine.XR.Management", "XRGeneralSettings");
// Type namespace: UnityEngine.XR.Management
namespace UnityEngine::XR::Management {
  // Size: 0x32
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Management.XRGeneralSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class XRGeneralSettings : public ::UnityEngine::ScriptableObject {
    public:
    public:
    // UnityEngine.XR.Management.XRManagerSettings m_LoaderManagerInstance
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::XR::Management::XRManagerSettings* m_LoaderManagerInstance;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Management::XRManagerSettings*) == 0x8);
    // [TooltipAttribute] Offset: 0x6F9900
    // System.Boolean m_InitManagerOnStart
    // Size: 0x1
    // Offset: 0x20
    bool m_InitManagerOnStart;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_InitManagerOnStart and: m_XRManager
    char __padding1[0x7] = {};
    // private UnityEngine.XR.Management.XRManagerSettings m_XRManager
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::XR::Management::XRManagerSettings* m_XRManager;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Management::XRManagerSettings*) == 0x8);
    // private System.Boolean m_ProviderIntialized
    // Size: 0x1
    // Offset: 0x30
    bool m_ProviderIntialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_ProviderStarted
    // Size: 0x1
    // Offset: 0x31
    bool m_ProviderStarted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static public System.String k_SettingsKey
    static ::StringW _get_k_SettingsKey();
    // Set static field: static public System.String k_SettingsKey
    static void _set_k_SettingsKey(::StringW value);
    // Get static field: static UnityEngine.XR.Management.XRGeneralSettings s_RuntimeSettingsInstance
    static ::UnityEngine::XR::Management::XRGeneralSettings* _get_s_RuntimeSettingsInstance();
    // Set static field: static UnityEngine.XR.Management.XRGeneralSettings s_RuntimeSettingsInstance
    static void _set_s_RuntimeSettingsInstance(::UnityEngine::XR::Management::XRGeneralSettings* value);
    // Get instance field reference: UnityEngine.XR.Management.XRManagerSettings m_LoaderManagerInstance
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Management::XRManagerSettings*& dyn_m_LoaderManagerInstance();
    // Get instance field reference: System.Boolean m_InitManagerOnStart
    [[deprecated("Use field access instead!")]] bool& dyn_m_InitManagerOnStart();
    // Get instance field reference: private UnityEngine.XR.Management.XRManagerSettings m_XRManager
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Management::XRManagerSettings*& dyn_m_XRManager();
    // Get instance field reference: private System.Boolean m_ProviderIntialized
    [[deprecated("Use field access instead!")]] bool& dyn_m_ProviderIntialized();
    // Get instance field reference: private System.Boolean m_ProviderStarted
    [[deprecated("Use field access instead!")]] bool& dyn_m_ProviderStarted();
    // public UnityEngine.XR.Management.XRManagerSettings get_Manager()
    // Offset: 0x18F9D30
    ::UnityEngine::XR::Management::XRManagerSettings* get_Manager();
    // public System.Void set_Manager(UnityEngine.XR.Management.XRManagerSettings value)
    // Offset: 0x18F9D38
    void set_Manager(::UnityEngine::XR::Management::XRManagerSettings* value);
    // static public UnityEngine.XR.Management.XRGeneralSettings get_Instance()
    // Offset: 0x18F9D40
    static ::UnityEngine::XR::Management::XRGeneralSettings* get_Instance();
    // public UnityEngine.XR.Management.XRManagerSettings get_AssignedSettings()
    // Offset: 0x18F9DA4
    ::UnityEngine::XR::Management::XRManagerSettings* get_AssignedSettings();
    // public System.Boolean get_InitManagerOnStart()
    // Offset: 0x18F9DAC
    bool get_InitManagerOnStart();
    // public System.Void .ctor()
    // Offset: 0x18FAC60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XRGeneralSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Management::XRGeneralSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XRGeneralSettings*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x18FAC70
    static void _cctor();
    // private System.Void Awake()
    // Offset: 0x18F9DB4
    void Awake();
    // static private System.Void Quit()
    // Offset: 0x18F9EF8
    static void Quit();
    // private System.Void Start()
    // Offset: 0x18FA0BC
    void Start();
    // private System.Void OnDestroy()
    // Offset: 0x18FA18C
    void OnDestroy();
    // static System.Void AttemptInitializeXRSDKOnLoad()
    // Offset: 0x18FA190
    static void AttemptInitializeXRSDKOnLoad();
    // static System.Void AttemptStartXRSDKOnBeforeSplashScreen()
    // Offset: 0x18FA58C
    static void AttemptStartXRSDKOnBeforeSplashScreen();
    // private System.Void InitXRSDK()
    // Offset: 0x18FA290
    void InitXRSDK();
    // private System.Void StartXRSDK()
    // Offset: 0x18FA0C0
    void StartXRSDK();
    // private System.Void StopXRSDK()
    // Offset: 0x18FA9B0
    void StopXRSDK();
    // private System.Void DeInitXRSDK()
    // Offset: 0x18F9FF0
    void DeInitXRSDK();
  }; // UnityEngine.XR.Management.XRGeneralSettings
  #pragma pack(pop)
  static check_size<sizeof(XRGeneralSettings), 49 + sizeof(bool)> __UnityEngine_XR_Management_XRGeneralSettingsSizeCheck;
  static_assert(sizeof(XRGeneralSettings) == 0x32);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Management::XRGeneralSettings::get_Manager
// Il2CppName: get_Manager
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Management::XRManagerSettings* (UnityEngine::XR::Management::XRGeneralSettings::*)()>(&UnityEngine::XR::Management::XRGeneralSettings::get_Manager)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Management::XRGeneralSettings*), "get_Manager", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Management::XRGeneralSettings::set_Manager
// Il2CppName: set_Manager
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Management::XRGeneralSettings::*)(::UnityEngine::XR::Management::XRManagerSettings*)>(&UnityEngine::XR::Management::XRGeneralSettings::set_Manager)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Management", "XRManagerSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Management::XRGeneralSettings*), "set_Manager", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Management::XRGeneralSettings::get_Instance
// Il2CppName: get_Instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Management::XRGeneralSettings* (*)()>(&UnityEngine::XR::Management::XRGeneralSettings::get_Instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Management::XRGeneralSettings*), "get_Instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Management::XRGeneralSettings::get_AssignedSettings
// Il2CppName: get_AssignedSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Management::XRManagerSettings* (UnityEngine::XR::Management::XRGeneralSettings::*)()>(&UnityEngine::XR::Management::XRGeneralSettings::get_AssignedSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Management::XRGeneralSettings*), "get_AssignedSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Management::XRGeneralSettings::get_InitManagerOnStart
// Il2CppName: get_InitManagerOnStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Management::XRGeneralSettings::*)()>(&UnityEngine::XR::Management::XRGeneralSettings::get_InitManagerOnStart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Management::XRGeneralSettings*), "get_InitManagerOnStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Management::XRGeneralSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::XR::Management::XRGeneralSettings::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::XR::Management::XRGeneralSettings::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Management::XRGeneralSettings*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Management::XRGeneralSettings::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Management::XRGeneralSettings::*)()>(&UnityEngine::XR::Management::XRGeneralSettings::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Management::XRGeneralSettings*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Management::XRGeneralSettings::Quit
// Il2CppName: Quit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::XR::Management::XRGeneralSettings::Quit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Management::XRGeneralSettings*), "Quit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Management::XRGeneralSettings::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Management::XRGeneralSettings::*)()>(&UnityEngine::XR::Management::XRGeneralSettings::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Management::XRGeneralSettings*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Management::XRGeneralSettings::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Management::XRGeneralSettings::*)()>(&UnityEngine::XR::Management::XRGeneralSettings::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Management::XRGeneralSettings*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Management::XRGeneralSettings::AttemptInitializeXRSDKOnLoad
// Il2CppName: AttemptInitializeXRSDKOnLoad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::XR::Management::XRGeneralSettings::AttemptInitializeXRSDKOnLoad)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Management::XRGeneralSettings*), "AttemptInitializeXRSDKOnLoad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Management::XRGeneralSettings::AttemptStartXRSDKOnBeforeSplashScreen
// Il2CppName: AttemptStartXRSDKOnBeforeSplashScreen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::XR::Management::XRGeneralSettings::AttemptStartXRSDKOnBeforeSplashScreen)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Management::XRGeneralSettings*), "AttemptStartXRSDKOnBeforeSplashScreen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Management::XRGeneralSettings::InitXRSDK
// Il2CppName: InitXRSDK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Management::XRGeneralSettings::*)()>(&UnityEngine::XR::Management::XRGeneralSettings::InitXRSDK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Management::XRGeneralSettings*), "InitXRSDK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Management::XRGeneralSettings::StartXRSDK
// Il2CppName: StartXRSDK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Management::XRGeneralSettings::*)()>(&UnityEngine::XR::Management::XRGeneralSettings::StartXRSDK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Management::XRGeneralSettings*), "StartXRSDK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Management::XRGeneralSettings::StopXRSDK
// Il2CppName: StopXRSDK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Management::XRGeneralSettings::*)()>(&UnityEngine::XR::Management::XRGeneralSettings::StopXRSDK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Management::XRGeneralSettings*), "StopXRSDK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Management::XRGeneralSettings::DeInitXRSDK
// Il2CppName: DeInitXRSDK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Management::XRGeneralSettings::*)()>(&UnityEngine::XR::Management::XRGeneralSettings::DeInitXRSDK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Management::XRGeneralSettings*), "DeInitXRSDK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
