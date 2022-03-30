// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Timeline.AnimationTrack
#include "UnityEngine/Timeline/AnimationTrack.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Timeline::AnimationTrack::AnimationTrackUpgrade);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::AnimationTrack::AnimationTrackUpgrade*, "UnityEngine.Timeline", "AnimationTrack/AnimationTrackUpgrade");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.AnimationTrack/UnityEngine.Timeline.AnimationTrackUpgrade
  // [TokenAttribute] Offset: FFFFFFFF
  class AnimationTrack::AnimationTrackUpgrade : public ::Il2CppObject {
    public:
    // static public System.Void ConvertRotationsToEuler(UnityEngine.Timeline.AnimationTrack track)
    // Offset: 0x12D1310
    static void ConvertRotationsToEuler(::UnityEngine::Timeline::AnimationTrack* track);
    // static public System.Void ConvertRootMotion(UnityEngine.Timeline.AnimationTrack track)
    // Offset: 0x12D135C
    static void ConvertRootMotion(::UnityEngine::Timeline::AnimationTrack* track);
    // static public System.Void ConvertInfiniteTrack(UnityEngine.Timeline.AnimationTrack track)
    // Offset: 0x12D13B0
    static void ConvertInfiniteTrack(::UnityEngine::Timeline::AnimationTrack* track);
  }; // UnityEngine.Timeline.AnimationTrack/UnityEngine.Timeline.AnimationTrackUpgrade
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::AnimationTrack::AnimationTrackUpgrade::ConvertRotationsToEuler
// Il2CppName: ConvertRotationsToEuler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Timeline::AnimationTrack*)>(&UnityEngine::Timeline::AnimationTrack::AnimationTrackUpgrade::ConvertRotationsToEuler)> {
  static const MethodInfo* get() {
    static auto* track = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "AnimationTrack")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::AnimationTrack::AnimationTrackUpgrade*), "ConvertRotationsToEuler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{track});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::AnimationTrack::AnimationTrackUpgrade::ConvertRootMotion
// Il2CppName: ConvertRootMotion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Timeline::AnimationTrack*)>(&UnityEngine::Timeline::AnimationTrack::AnimationTrackUpgrade::ConvertRootMotion)> {
  static const MethodInfo* get() {
    static auto* track = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "AnimationTrack")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::AnimationTrack::AnimationTrackUpgrade*), "ConvertRootMotion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{track});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::AnimationTrack::AnimationTrackUpgrade::ConvertInfiniteTrack
// Il2CppName: ConvertInfiniteTrack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Timeline::AnimationTrack*)>(&UnityEngine::Timeline::AnimationTrack::AnimationTrackUpgrade::ConvertInfiniteTrack)> {
  static const MethodInfo* get() {
    static auto* track = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "AnimationTrack")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::AnimationTrack::AnimationTrackUpgrade*), "ConvertInfiniteTrack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{track});
  }
};
