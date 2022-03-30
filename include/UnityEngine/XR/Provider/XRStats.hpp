// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: IntegratedSubsystem
  class IntegratedSubsystem;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Provider
namespace UnityEngine::XR::Provider {
  // Forward declaring type: XRStats
  class XRStats;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Provider::XRStats);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Provider::XRStats*, "UnityEngine.XR.Provider", "XRStats");
// Type namespace: UnityEngine.XR.Provider
namespace UnityEngine::XR::Provider {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Provider.XRStats
  // [TokenAttribute] Offset: FFFFFFFF
  class XRStats : public ::Il2CppObject {
    public:
    // static public System.Boolean TryGetStat(UnityEngine.IntegratedSubsystem xrSubsystem, System.String tag, out System.Single value)
    // Offset: 0x12C6E70
    static bool TryGetStat(::UnityEngine::IntegratedSubsystem* xrSubsystem, ::StringW tag, ByRef<float> value);
    // static private System.Boolean TryGetStat_Internal(System.IntPtr ptr, System.String tag, out System.Single value)
    // Offset: 0x12C6ED0
    static bool TryGetStat_Internal(::System::IntPtr ptr, ::StringW tag, ByRef<float> value);
  }; // UnityEngine.XR.Provider.XRStats
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Provider::XRStats::TryGetStat
// Il2CppName: TryGetStat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::IntegratedSubsystem*, ::StringW, ByRef<float>)>(&UnityEngine::XR::Provider::XRStats::TryGetStat)> {
  static const MethodInfo* get() {
    static auto* xrSubsystem = &::il2cpp_utils::GetClassFromName("UnityEngine", "IntegratedSubsystem")->byval_arg;
    static auto* tag = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Provider::XRStats*), "TryGetStat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xrSubsystem, tag, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Provider::XRStats::TryGetStat_Internal
// Il2CppName: TryGetStat_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, ::StringW, ByRef<float>)>(&UnityEngine::XR::Provider::XRStats::TryGetStat_Internal)> {
  static const MethodInfo* get() {
    static auto* ptr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* tag = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Provider::XRStats*), "TryGetStat_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ptr, tag, value});
  }
};
