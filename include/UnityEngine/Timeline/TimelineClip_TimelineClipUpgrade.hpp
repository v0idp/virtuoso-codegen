// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Timeline.TimelineClip
#include "UnityEngine/Timeline/TimelineClip.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Timeline::TimelineClip::TimelineClipUpgrade);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimelineClip::TimelineClipUpgrade*, "UnityEngine.Timeline", "TimelineClip/TimelineClipUpgrade");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.TimelineClip/UnityEngine.Timeline.TimelineClipUpgrade
  // [TokenAttribute] Offset: FFFFFFFF
  class TimelineClip::TimelineClipUpgrade : public ::Il2CppObject {
    public:
    // static public System.Void UpgradeClipInFromGlobalToLocal(UnityEngine.Timeline.TimelineClip clip)
    // Offset: 0x18D5C6C
    static void UpgradeClipInFromGlobalToLocal(::UnityEngine::Timeline::TimelineClip* clip);
  }; // UnityEngine.Timeline.TimelineClip/UnityEngine.Timeline.TimelineClipUpgrade
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineClip::TimelineClipUpgrade::UpgradeClipInFromGlobalToLocal
// Il2CppName: UpgradeClipInFromGlobalToLocal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Timeline::TimelineClip*)>(&UnityEngine::Timeline::TimelineClip::TimelineClipUpgrade::UpgradeClipInFromGlobalToLocal)> {
  static const MethodInfo* get() {
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "TimelineClip")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineClip::TimelineClipUpgrade*), "UpgradeClipInFromGlobalToLocal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clip});
  }
};
