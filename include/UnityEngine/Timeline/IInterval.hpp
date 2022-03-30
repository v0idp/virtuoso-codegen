// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: IInterval
  class IInterval;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Timeline::IInterval);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::IInterval*, "UnityEngine.Timeline", "IInterval");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.IInterval
  // [TokenAttribute] Offset: FFFFFFFF
  class IInterval {
    public:
    // public System.Int64 get_intervalStart()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int64_t get_intervalStart();
    // public System.Int64 get_intervalEnd()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int64_t get_intervalEnd();
  }; // UnityEngine.Timeline.IInterval
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::IInterval::get_intervalStart
// Il2CppName: get_intervalStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (UnityEngine::Timeline::IInterval::*)()>(&UnityEngine::Timeline::IInterval::get_intervalStart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::IInterval*), "get_intervalStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::IInterval::get_intervalEnd
// Il2CppName: get_intervalEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (UnityEngine::Timeline::IInterval::*)()>(&UnityEngine::Timeline::IInterval::get_intervalEnd)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::IInterval*), "get_intervalEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
