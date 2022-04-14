// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Unity.XR.Oculus.Stats
#include "Unity/XR/Oculus/Stats.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::XR::Oculus::Stats::AdaptivePerformance);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Stats::AdaptivePerformance*, "Unity.XR.Oculus", "Stats/AdaptivePerformance");
// Type namespace: Unity.XR.Oculus
namespace Unity::XR::Oculus {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Unity.XR.Oculus.Stats/Unity.XR.Oculus.AdaptivePerformance
  // [TokenAttribute] Offset: FFFFFFFF
  class Stats::AdaptivePerformance : public ::Il2CppObject {
    public:
    // static public System.Single get_GPUAppTime()
    // Offset: 0x18DE3DC
    static float get_GPUAppTime();
    // static public System.Single get_GPUCompositorTime()
    // Offset: 0x18DE498
    static float get_GPUCompositorTime();
    // static public System.Single get_MotionToPhoton()
    // Offset: 0x18DE554
    static float get_MotionToPhoton();
    // static public System.Single get_RefreshRate()
    // Offset: 0x18DE610
    static float get_RefreshRate();
    // static public System.Single get_BatteryTemp()
    // Offset: 0x18DE6CC
    static float get_BatteryTemp();
    // static public System.Single get_BatteryLevel()
    // Offset: 0x18DE754
    static float get_BatteryLevel();
    // static public System.Boolean get_PowerSavingMode()
    // Offset: 0x18DE7DC
    static bool get_PowerSavingMode();
    // static public System.Single get_AdaptivePerformanceScale()
    // Offset: 0x18DE86C
    static float get_AdaptivePerformanceScale();
    // static public System.Int32 get_CPULevel()
    // Offset: 0x18DE8F4
    static int get_CPULevel();
    // static public System.Int32 get_GPULevel()
    // Offset: 0x18DE998
    static int get_GPULevel();
  }; // Unity.XR.Oculus.Stats/Unity.XR.Oculus.AdaptivePerformance
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::XR::Oculus::Stats::AdaptivePerformance::get_GPUAppTime
// Il2CppName: get_GPUAppTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&Unity::XR::Oculus::Stats::AdaptivePerformance::get_GPUAppTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::Stats::AdaptivePerformance*), "get_GPUAppTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::Stats::AdaptivePerformance::get_GPUCompositorTime
// Il2CppName: get_GPUCompositorTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&Unity::XR::Oculus::Stats::AdaptivePerformance::get_GPUCompositorTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::Stats::AdaptivePerformance*), "get_GPUCompositorTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::Stats::AdaptivePerformance::get_MotionToPhoton
// Il2CppName: get_MotionToPhoton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&Unity::XR::Oculus::Stats::AdaptivePerformance::get_MotionToPhoton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::Stats::AdaptivePerformance*), "get_MotionToPhoton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::Stats::AdaptivePerformance::get_RefreshRate
// Il2CppName: get_RefreshRate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&Unity::XR::Oculus::Stats::AdaptivePerformance::get_RefreshRate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::Stats::AdaptivePerformance*), "get_RefreshRate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::Stats::AdaptivePerformance::get_BatteryTemp
// Il2CppName: get_BatteryTemp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&Unity::XR::Oculus::Stats::AdaptivePerformance::get_BatteryTemp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::Stats::AdaptivePerformance*), "get_BatteryTemp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::Stats::AdaptivePerformance::get_BatteryLevel
// Il2CppName: get_BatteryLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&Unity::XR::Oculus::Stats::AdaptivePerformance::get_BatteryLevel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::Stats::AdaptivePerformance*), "get_BatteryLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::Stats::AdaptivePerformance::get_PowerSavingMode
// Il2CppName: get_PowerSavingMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Unity::XR::Oculus::Stats::AdaptivePerformance::get_PowerSavingMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::Stats::AdaptivePerformance*), "get_PowerSavingMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::Stats::AdaptivePerformance::get_AdaptivePerformanceScale
// Il2CppName: get_AdaptivePerformanceScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&Unity::XR::Oculus::Stats::AdaptivePerformance::get_AdaptivePerformanceScale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::Stats::AdaptivePerformance*), "get_AdaptivePerformanceScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::Stats::AdaptivePerformance::get_CPULevel
// Il2CppName: get_CPULevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&Unity::XR::Oculus::Stats::AdaptivePerformance::get_CPULevel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::Stats::AdaptivePerformance*), "get_CPULevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::Stats::AdaptivePerformance::get_GPULevel
// Il2CppName: get_GPULevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&Unity::XR::Oculus::Stats::AdaptivePerformance::get_GPULevel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::Stats::AdaptivePerformance*), "get_GPULevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
