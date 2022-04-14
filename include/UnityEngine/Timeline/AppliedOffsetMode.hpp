// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: AppliedOffsetMode
  struct AppliedOffsetMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::AppliedOffsetMode, "UnityEngine.Timeline", "AppliedOffsetMode");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.AppliedOffsetMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct AppliedOffsetMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: AppliedOffsetMode
    constexpr AppliedOffsetMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Timeline.AppliedOffsetMode NoRootTransform
    static constexpr const int NoRootTransform = 0;
    // Get static field: static public UnityEngine.Timeline.AppliedOffsetMode NoRootTransform
    static ::UnityEngine::Timeline::AppliedOffsetMode _get_NoRootTransform();
    // Set static field: static public UnityEngine.Timeline.AppliedOffsetMode NoRootTransform
    static void _set_NoRootTransform(::UnityEngine::Timeline::AppliedOffsetMode value);
    // static field const value: static public UnityEngine.Timeline.AppliedOffsetMode TransformOffset
    static constexpr const int TransformOffset = 1;
    // Get static field: static public UnityEngine.Timeline.AppliedOffsetMode TransformOffset
    static ::UnityEngine::Timeline::AppliedOffsetMode _get_TransformOffset();
    // Set static field: static public UnityEngine.Timeline.AppliedOffsetMode TransformOffset
    static void _set_TransformOffset(::UnityEngine::Timeline::AppliedOffsetMode value);
    // static field const value: static public UnityEngine.Timeline.AppliedOffsetMode SceneOffset
    static constexpr const int SceneOffset = 2;
    // Get static field: static public UnityEngine.Timeline.AppliedOffsetMode SceneOffset
    static ::UnityEngine::Timeline::AppliedOffsetMode _get_SceneOffset();
    // Set static field: static public UnityEngine.Timeline.AppliedOffsetMode SceneOffset
    static void _set_SceneOffset(::UnityEngine::Timeline::AppliedOffsetMode value);
    // static field const value: static public UnityEngine.Timeline.AppliedOffsetMode TransformOffsetLegacy
    static constexpr const int TransformOffsetLegacy = 3;
    // Get static field: static public UnityEngine.Timeline.AppliedOffsetMode TransformOffsetLegacy
    static ::UnityEngine::Timeline::AppliedOffsetMode _get_TransformOffsetLegacy();
    // Set static field: static public UnityEngine.Timeline.AppliedOffsetMode TransformOffsetLegacy
    static void _set_TransformOffsetLegacy(::UnityEngine::Timeline::AppliedOffsetMode value);
    // static field const value: static public UnityEngine.Timeline.AppliedOffsetMode SceneOffsetLegacy
    static constexpr const int SceneOffsetLegacy = 4;
    // Get static field: static public UnityEngine.Timeline.AppliedOffsetMode SceneOffsetLegacy
    static ::UnityEngine::Timeline::AppliedOffsetMode _get_SceneOffsetLegacy();
    // Set static field: static public UnityEngine.Timeline.AppliedOffsetMode SceneOffsetLegacy
    static void _set_SceneOffsetLegacy(::UnityEngine::Timeline::AppliedOffsetMode value);
    // static field const value: static public UnityEngine.Timeline.AppliedOffsetMode SceneOffsetEditor
    static constexpr const int SceneOffsetEditor = 5;
    // Get static field: static public UnityEngine.Timeline.AppliedOffsetMode SceneOffsetEditor
    static ::UnityEngine::Timeline::AppliedOffsetMode _get_SceneOffsetEditor();
    // Set static field: static public UnityEngine.Timeline.AppliedOffsetMode SceneOffsetEditor
    static void _set_SceneOffsetEditor(::UnityEngine::Timeline::AppliedOffsetMode value);
    // static field const value: static public UnityEngine.Timeline.AppliedOffsetMode SceneOffsetLegacyEditor
    static constexpr const int SceneOffsetLegacyEditor = 6;
    // Get static field: static public UnityEngine.Timeline.AppliedOffsetMode SceneOffsetLegacyEditor
    static ::UnityEngine::Timeline::AppliedOffsetMode _get_SceneOffsetLegacyEditor();
    // Set static field: static public UnityEngine.Timeline.AppliedOffsetMode SceneOffsetLegacyEditor
    static void _set_SceneOffsetLegacyEditor(::UnityEngine::Timeline::AppliedOffsetMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // UnityEngine.Timeline.AppliedOffsetMode
  #pragma pack(pop)
  static check_size<sizeof(AppliedOffsetMode), 0 + sizeof(int)> __UnityEngine_Timeline_AppliedOffsetModeSizeCheck;
  static_assert(sizeof(AppliedOffsetMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
