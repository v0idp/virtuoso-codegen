// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Forward declaring type: AnimationStream
  struct AnimationStream;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::AnimationStream, "UnityEngine.Animations", "AnimationStream");
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Size: 0x38
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Animations.AnimationStream
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: 5A6C4C
  // [NativeHeaderAttribute] Offset: 5A6C4C
  // [NativeHeaderAttribute] Offset: 5A6C4C
  // [MovedFromAttribute] Offset: 5A6C4C
  struct AnimationStream/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.UInt32 m_AnimatorBindingsVersion
    // Size: 0x4
    // Offset: 0x0
    uint m_AnimatorBindingsVersion;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: m_AnimatorBindingsVersion and: constant
    char __padding0[0x4] = {};
    // private System.IntPtr constant
    // Size: 0x8
    // Offset: 0x8
    ::System::IntPtr constant;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private System.IntPtr input
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr input;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private System.IntPtr output
    // Size: 0x8
    // Offset: 0x18
    ::System::IntPtr output;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private System.IntPtr workspace
    // Size: 0x8
    // Offset: 0x20
    ::System::IntPtr workspace;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private System.IntPtr inputStreamAccessor
    // Size: 0x8
    // Offset: 0x28
    ::System::IntPtr inputStreamAccessor;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private System.IntPtr animationHandleBinder
    // Size: 0x8
    // Offset: 0x30
    ::System::IntPtr animationHandleBinder;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: AnimationStream
    constexpr AnimationStream(uint m_AnimatorBindingsVersion_ = {}, ::System::IntPtr constant_ = {}, ::System::IntPtr input_ = {}, ::System::IntPtr output_ = {}, ::System::IntPtr workspace_ = {}, ::System::IntPtr inputStreamAccessor_ = {}, ::System::IntPtr animationHandleBinder_ = {}) noexcept : m_AnimatorBindingsVersion{m_AnimatorBindingsVersion_}, constant{constant_}, input{input_}, output{output_}, workspace{workspace_}, inputStreamAccessor{inputStreamAccessor_}, animationHandleBinder{animationHandleBinder_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.UInt32 m_AnimatorBindingsVersion
    uint& dyn_m_AnimatorBindingsVersion();
    // Get instance field reference: private System.IntPtr constant
    ::System::IntPtr& dyn_constant();
    // Get instance field reference: private System.IntPtr input
    ::System::IntPtr& dyn_input();
    // Get instance field reference: private System.IntPtr output
    ::System::IntPtr& dyn_output();
    // Get instance field reference: private System.IntPtr workspace
    ::System::IntPtr& dyn_workspace();
    // Get instance field reference: private System.IntPtr inputStreamAccessor
    ::System::IntPtr& dyn_inputStreamAccessor();
    // Get instance field reference: private System.IntPtr animationHandleBinder
    ::System::IntPtr& dyn_animationHandleBinder();
  }; // UnityEngine.Animations.AnimationStream
  #pragma pack(pop)
  static check_size<sizeof(AnimationStream), 48 + sizeof(::System::IntPtr)> __UnityEngine_Animations_AnimationStreamSizeCheck;
  static_assert(sizeof(AnimationStream) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"