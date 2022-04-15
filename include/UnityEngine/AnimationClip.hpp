// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Motion
#include "UnityEngine/Motion.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AnimationClip);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimationClip*, "UnityEngine", "AnimationClip");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AnimationClip
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 6BBE20
  // [NativeTypeAttribute] Offset: 6BBE20
  class AnimationClip : public ::UnityEngine::Motion {
    public:
    // public System.Single get_length()
    // Offset: 0x18CECF0
    float get_length();
    // public System.Single get_frameRate()
    // Offset: 0x18CED30
    float get_frameRate();
    // public System.Void set_frameRate(System.Single value)
    // Offset: 0x18CED70
    void set_frameRate(float value);
    // public System.Boolean get_legacy()
    // Offset: 0x18CEDC0
    bool get_legacy();
    // public System.Void set_legacy(System.Boolean value)
    // Offset: 0x18CEE00
    void set_legacy(bool value);
    // public System.Boolean get_empty()
    // Offset: 0x18CEE50
    bool get_empty();
    // public System.Boolean get_hasGenericRootTransform()
    // Offset: 0x18CEE90
    bool get_hasGenericRootTransform();
    // public System.Boolean get_hasMotionCurves()
    // Offset: 0x18CEED0
    bool get_hasMotionCurves();
    // public System.Boolean get_hasRootCurves()
    // Offset: 0x18CEF10
    bool get_hasRootCurves();
    // System.Boolean get_hasRootMotion()
    // Offset: 0x18CEF50
    bool get_hasRootMotion();
    // static private System.Void Internal_CreateAnimationClip(UnityEngine.AnimationClip self)
    // Offset: 0x18CECB0
    static void Internal_CreateAnimationClip(::UnityEngine::AnimationClip* self);
    // public System.Void .ctor()
    // Offset: 0x18CEC08
    // Implemented from: UnityEngine.Motion
    // Base method: System.Void Motion::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimationClip* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AnimationClip::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimationClip*, creationType>()));
    }
  }; // UnityEngine.AnimationClip
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AnimationClip::get_length
// Il2CppName: get_length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::AnimationClip::*)()>(&UnityEngine::AnimationClip::get_length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationClip*), "get_length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationClip::get_frameRate
// Il2CppName: get_frameRate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::AnimationClip::*)()>(&UnityEngine::AnimationClip::get_frameRate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationClip*), "get_frameRate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationClip::set_frameRate
// Il2CppName: set_frameRate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AnimationClip::*)(float)>(&UnityEngine::AnimationClip::set_frameRate)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationClip*), "set_frameRate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationClip::get_legacy
// Il2CppName: get_legacy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AnimationClip::*)()>(&UnityEngine::AnimationClip::get_legacy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationClip*), "get_legacy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationClip::set_legacy
// Il2CppName: set_legacy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AnimationClip::*)(bool)>(&UnityEngine::AnimationClip::set_legacy)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationClip*), "set_legacy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationClip::get_empty
// Il2CppName: get_empty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AnimationClip::*)()>(&UnityEngine::AnimationClip::get_empty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationClip*), "get_empty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationClip::get_hasGenericRootTransform
// Il2CppName: get_hasGenericRootTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AnimationClip::*)()>(&UnityEngine::AnimationClip::get_hasGenericRootTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationClip*), "get_hasGenericRootTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationClip::get_hasMotionCurves
// Il2CppName: get_hasMotionCurves
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AnimationClip::*)()>(&UnityEngine::AnimationClip::get_hasMotionCurves)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationClip*), "get_hasMotionCurves", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationClip::get_hasRootCurves
// Il2CppName: get_hasRootCurves
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AnimationClip::*)()>(&UnityEngine::AnimationClip::get_hasRootCurves)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationClip*), "get_hasRootCurves", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationClip::get_hasRootMotion
// Il2CppName: get_hasRootMotion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AnimationClip::*)()>(&UnityEngine::AnimationClip::get_hasRootMotion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationClip*), "get_hasRootMotion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationClip::Internal_CreateAnimationClip
// Il2CppName: Internal_CreateAnimationClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::AnimationClip*)>(&UnityEngine::AnimationClip::Internal_CreateAnimationClip)> {
  static const MethodInfo* get() {
    static auto* self = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationClip")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationClip*), "Internal_CreateAnimationClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{self});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationClip::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
