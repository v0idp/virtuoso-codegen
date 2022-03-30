// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Playables.IPlayable
#include "UnityEngine/Playables/IPlayable.hpp"
// Including type: UnityEngine.Playables.PlayableHandle
#include "UnityEngine/Playables/PlayableHandle.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
  // Forward declaring type: Playable
  struct Playable;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AvatarMask
  class AvatarMask;
}
// Completed forward declares
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Forward declaring type: AnimationLayerMixerPlayable
  struct AnimationLayerMixerPlayable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::AnimationLayerMixerPlayable, "UnityEngine.Animations", "AnimationLayerMixerPlayable");
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Animations.AnimationLayerMixerPlayable
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 5A64D4
  // [NativeHeaderAttribute] Offset: 5A64D4
  // [StaticAccessorAttribute] Offset: 5A64D4
  // [RequiredByNativeCodeAttribute] Offset: 5A64D4
  // [NativeHeaderAttribute] Offset: 5A64D4
  struct AnimationLayerMixerPlayable/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::Animations::AnimationLayerMixerPlayable>, public ::UnityEngine::Playables::IPlayable*/ {
    public:
    public:
    // private UnityEngine.Playables.PlayableHandle m_Handle
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Playables::PlayableHandle m_Handle;
    // Field size check
    static_assert(sizeof(::UnityEngine::Playables::PlayableHandle) == 0xC);
    public:
    // Creating value type constructor for type: AnimationLayerMixerPlayable
    constexpr AnimationLayerMixerPlayable(::UnityEngine::Playables::PlayableHandle m_Handle_ = {}) noexcept : m_Handle{m_Handle_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::Animations::AnimationLayerMixerPlayable>
    operator ::System::IEquatable_1<::UnityEngine::Animations::AnimationLayerMixerPlayable>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::Animations::AnimationLayerMixerPlayable>*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::Playables::IPlayable
    operator ::UnityEngine::Playables::IPlayable() noexcept {
      return *reinterpret_cast<::UnityEngine::Playables::IPlayable*>(this);
    }
    // Creating conversion operator: operator ::UnityEngine::Playables::PlayableHandle
    constexpr operator ::UnityEngine::Playables::PlayableHandle() const noexcept {
      return m_Handle;
    }
    // Get static field: static private readonly UnityEngine.Animations.AnimationLayerMixerPlayable m_NullPlayable
    static ::UnityEngine::Animations::AnimationLayerMixerPlayable _get_m_NullPlayable();
    // Set static field: static private readonly UnityEngine.Animations.AnimationLayerMixerPlayable m_NullPlayable
    static void _set_m_NullPlayable(::UnityEngine::Animations::AnimationLayerMixerPlayable value);
    // Get instance field reference: private UnityEngine.Playables.PlayableHandle m_Handle
    ::UnityEngine::Playables::PlayableHandle& dyn_m_Handle();
    // System.Void .ctor(UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0x12CD538
    // ABORTED: conflicts with another method.  AnimationLayerMixerPlayable(::UnityEngine::Playables::PlayableHandle handle);
    // static private System.Void .cctor()
    // Offset: 0x12CD9F0
    static void _cctor();
    // static public UnityEngine.Animations.AnimationLayerMixerPlayable Create(UnityEngine.Playables.PlayableGraph graph, System.Int32 inputCount)
    // Offset: 0x12CD394
    static ::UnityEngine::Animations::AnimationLayerMixerPlayable Create(::UnityEngine::Playables::PlayableGraph graph, int inputCount);
    // static private UnityEngine.Playables.PlayableHandle CreateHandle(UnityEngine.Playables.PlayableGraph graph, System.Int32 inputCount)
    // Offset: 0x12CD438
    static ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph graph, int inputCount);
    // public UnityEngine.Playables.PlayableHandle GetHandle()
    // Offset: 0x12CD690
    ::UnityEngine::Playables::PlayableHandle GetHandle();
    // public System.Boolean Equals(UnityEngine.Animations.AnimationLayerMixerPlayable other)
    // Offset: 0x12CD6D0
    bool Equals(::UnityEngine::Animations::AnimationLayerMixerPlayable other);
    // public System.Void SetLayerMaskFromAvatarMask(System.UInt32 layerIndex, UnityEngine.AvatarMask mask)
    // Offset: 0x12CD754
    void SetLayerMaskFromAvatarMask(uint layerIndex, ::UnityEngine::AvatarMask* mask);
    // static private System.Boolean CreateHandleInternal(UnityEngine.Playables.PlayableGraph graph, ref UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0x12CD5F8
    static bool CreateHandleInternal(::UnityEngine::Playables::PlayableGraph graph, ByRef<::UnityEngine::Playables::PlayableHandle> handle);
    // static private System.Void SetLayerMaskFromAvatarMaskInternal(ref UnityEngine.Playables.PlayableHandle handle, System.UInt32 layerIndex, UnityEngine.AvatarMask mask)
    // Offset: 0x12CD948
    static void SetLayerMaskFromAvatarMaskInternal(ByRef<::UnityEngine::Playables::PlayableHandle> handle, uint layerIndex, ::UnityEngine::AvatarMask* mask);
    // static private System.Boolean CreateHandleInternal_Injected(ref UnityEngine.Playables.PlayableGraph graph, ref UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0x12CD9A0
    static bool CreateHandleInternal_Injected(ByRef<::UnityEngine::Playables::PlayableGraph> graph, ByRef<::UnityEngine::Playables::PlayableHandle> handle);
  }; // UnityEngine.Animations.AnimationLayerMixerPlayable
  #pragma pack(pop)
  static check_size<sizeof(AnimationLayerMixerPlayable), 0 + sizeof(::UnityEngine::Playables::PlayableHandle)> __UnityEngine_Animations_AnimationLayerMixerPlayableSizeCheck;
  static_assert(sizeof(AnimationLayerMixerPlayable) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationLayerMixerPlayable::AnimationLayerMixerPlayable
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationLayerMixerPlayable::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Animations::AnimationLayerMixerPlayable::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationLayerMixerPlayable), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationLayerMixerPlayable::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Animations::AnimationLayerMixerPlayable (*)(::UnityEngine::Playables::PlayableGraph, int)>(&UnityEngine::Animations::AnimationLayerMixerPlayable::Create)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationLayerMixerPlayable), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, inputCount});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationLayerMixerPlayable::CreateHandle
// Il2CppName: CreateHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableHandle (*)(::UnityEngine::Playables::PlayableGraph, int)>(&UnityEngine::Animations::AnimationLayerMixerPlayable::CreateHandle)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationLayerMixerPlayable), "CreateHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, inputCount});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationLayerMixerPlayable::GetHandle
// Il2CppName: GetHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableHandle (UnityEngine::Animations::AnimationLayerMixerPlayable::*)()>(&UnityEngine::Animations::AnimationLayerMixerPlayable::GetHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationLayerMixerPlayable), "GetHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationLayerMixerPlayable::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::AnimationLayerMixerPlayable::*)(::UnityEngine::Animations::AnimationLayerMixerPlayable)>(&UnityEngine::Animations::AnimationLayerMixerPlayable::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "AnimationLayerMixerPlayable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationLayerMixerPlayable), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationLayerMixerPlayable::SetLayerMaskFromAvatarMask
// Il2CppName: SetLayerMaskFromAvatarMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::AnimationLayerMixerPlayable::*)(uint, ::UnityEngine::AvatarMask*)>(&UnityEngine::Animations::AnimationLayerMixerPlayable::SetLayerMaskFromAvatarMask)> {
  static const MethodInfo* get() {
    static auto* layerIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* mask = &::il2cpp_utils::GetClassFromName("UnityEngine", "AvatarMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationLayerMixerPlayable), "SetLayerMaskFromAvatarMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layerIndex, mask});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationLayerMixerPlayable::CreateHandleInternal
// Il2CppName: CreateHandleInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Playables::PlayableGraph, ByRef<::UnityEngine::Playables::PlayableHandle>)>(&UnityEngine::Animations::AnimationLayerMixerPlayable::CreateHandleInternal)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* handle = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationLayerMixerPlayable), "CreateHandleInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, handle});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationLayerMixerPlayable::SetLayerMaskFromAvatarMaskInternal
// Il2CppName: SetLayerMaskFromAvatarMaskInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Playables::PlayableHandle>, uint, ::UnityEngine::AvatarMask*)>(&UnityEngine::Animations::AnimationLayerMixerPlayable::SetLayerMaskFromAvatarMaskInternal)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->this_arg;
    static auto* layerIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* mask = &::il2cpp_utils::GetClassFromName("UnityEngine", "AvatarMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationLayerMixerPlayable), "SetLayerMaskFromAvatarMaskInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle, layerIndex, mask});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationLayerMixerPlayable::CreateHandleInternal_Injected
// Il2CppName: CreateHandleInternal_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::UnityEngine::Playables::PlayableGraph>, ByRef<::UnityEngine::Playables::PlayableHandle>)>(&UnityEngine::Animations::AnimationLayerMixerPlayable::CreateHandleInternal_Injected)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->this_arg;
    static auto* handle = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableHandle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationLayerMixerPlayable), "CreateHandleInternal_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, handle});
  }
};
