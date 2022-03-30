// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Playables.PlayableOutput
#include "UnityEngine/Playables/PlayableOutput.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayState
  struct PlayState;
  // Skipping declaration: Flags because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Forward declaring type: FrameData
  struct FrameData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::FrameData, "UnityEngine.Playables", "FrameData");
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Size: 0x3C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Playables.FrameData
  // [TokenAttribute] Offset: FFFFFFFF
  struct FrameData/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::UnityEngine::Playables::FrameData::Flags
    struct Flags;
    // Nested type: ::UnityEngine::Playables::FrameData::EvaluationType
    struct EvaluationType;
    // Size: 0x14
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.Playables.FrameData/UnityEngine.Playables.Flags
    // [TokenAttribute] Offset: FFFFFFFF
    // [FlagsAttribute] Offset: FFFFFFFF
    struct Flags/*, public ::System::Enum*/ {
      public:
      // Writing base type padding for base size: 0x0 to desired offset: 0x10
      char ___base_padding[0x10] = {};
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x10
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Flags
      constexpr Flags(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.Playables.FrameData/UnityEngine.Playables.Flags Evaluate
      static constexpr const int Evaluate = 1;
      // Get static field: static public UnityEngine.Playables.FrameData/UnityEngine.Playables.Flags Evaluate
      static ::UnityEngine::Playables::FrameData::Flags _get_Evaluate();
      // Set static field: static public UnityEngine.Playables.FrameData/UnityEngine.Playables.Flags Evaluate
      static void _set_Evaluate(::UnityEngine::Playables::FrameData::Flags value);
      // static field const value: static public UnityEngine.Playables.FrameData/UnityEngine.Playables.Flags SeekOccured
      static constexpr const int SeekOccured = 2;
      // Get static field: static public UnityEngine.Playables.FrameData/UnityEngine.Playables.Flags SeekOccured
      static ::UnityEngine::Playables::FrameData::Flags _get_SeekOccured();
      // Set static field: static public UnityEngine.Playables.FrameData/UnityEngine.Playables.Flags SeekOccured
      static void _set_SeekOccured(::UnityEngine::Playables::FrameData::Flags value);
      // static field const value: static public UnityEngine.Playables.FrameData/UnityEngine.Playables.Flags Loop
      static constexpr const int Loop = 4;
      // Get static field: static public UnityEngine.Playables.FrameData/UnityEngine.Playables.Flags Loop
      static ::UnityEngine::Playables::FrameData::Flags _get_Loop();
      // Set static field: static public UnityEngine.Playables.FrameData/UnityEngine.Playables.Flags Loop
      static void _set_Loop(::UnityEngine::Playables::FrameData::Flags value);
      // static field const value: static public UnityEngine.Playables.FrameData/UnityEngine.Playables.Flags Hold
      static constexpr const int Hold = 8;
      // Get static field: static public UnityEngine.Playables.FrameData/UnityEngine.Playables.Flags Hold
      static ::UnityEngine::Playables::FrameData::Flags _get_Hold();
      // Set static field: static public UnityEngine.Playables.FrameData/UnityEngine.Playables.Flags Hold
      static void _set_Hold(::UnityEngine::Playables::FrameData::Flags value);
      // static field const value: static public UnityEngine.Playables.FrameData/UnityEngine.Playables.Flags EffectivePlayStateDelayed
      static constexpr const int EffectivePlayStateDelayed = 16;
      // Get static field: static public UnityEngine.Playables.FrameData/UnityEngine.Playables.Flags EffectivePlayStateDelayed
      static ::UnityEngine::Playables::FrameData::Flags _get_EffectivePlayStateDelayed();
      // Set static field: static public UnityEngine.Playables.FrameData/UnityEngine.Playables.Flags EffectivePlayStateDelayed
      static void _set_EffectivePlayStateDelayed(::UnityEngine::Playables::FrameData::Flags value);
      // static field const value: static public UnityEngine.Playables.FrameData/UnityEngine.Playables.Flags EffectivePlayStatePlaying
      static constexpr const int EffectivePlayStatePlaying = 32;
      // Get static field: static public UnityEngine.Playables.FrameData/UnityEngine.Playables.Flags EffectivePlayStatePlaying
      static ::UnityEngine::Playables::FrameData::Flags _get_EffectivePlayStatePlaying();
      // Set static field: static public UnityEngine.Playables.FrameData/UnityEngine.Playables.Flags EffectivePlayStatePlaying
      static void _set_EffectivePlayStatePlaying(::UnityEngine::Playables::FrameData::Flags value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // UnityEngine.Playables.FrameData/UnityEngine.Playables.Flags
    #pragma pack(pop)
    static check_size<sizeof(FrameData::Flags), 16 + sizeof(int)> __UnityEngine_Playables_FrameData_FlagsSizeCheck;
    static_assert(sizeof(FrameData::Flags) == 0x14);
    public:
    // System.UInt64 m_FrameID
    // Size: 0x8
    // Offset: 0x0
    uint64_t m_FrameID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // System.Double m_DeltaTime
    // Size: 0x8
    // Offset: 0x8
    double m_DeltaTime;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // System.Single m_Weight
    // Size: 0x4
    // Offset: 0x10
    float m_Weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Single m_EffectiveWeight
    // Size: 0x4
    // Offset: 0x14
    float m_EffectiveWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Double m_EffectiveParentDelay
    // Size: 0x8
    // Offset: 0x18
    double m_EffectiveParentDelay;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // System.Single m_EffectiveParentSpeed
    // Size: 0x4
    // Offset: 0x20
    float m_EffectiveParentSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Single m_EffectiveSpeed
    // Size: 0x4
    // Offset: 0x24
    float m_EffectiveSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // UnityEngine.Playables.FrameData/UnityEngine.Playables.Flags m_Flags
    // Size: 0x14
    // Offset: 0x28
    ::UnityEngine::Playables::FrameData::Flags m_Flags;
    // Field size check
    static_assert(sizeof(::UnityEngine::Playables::FrameData::Flags) == 0x14);
    // UnityEngine.Playables.PlayableOutput m_Output
    // Size: 0xC
    // Offset: 0x30
    ::UnityEngine::Playables::PlayableOutput m_Output;
    // Field size check
    static_assert(sizeof(::UnityEngine::Playables::PlayableOutput) == 0xC);
    public:
    // Creating value type constructor for type: FrameData
    constexpr FrameData(uint64_t m_FrameID_ = {}, double m_DeltaTime_ = {}, float m_Weight_ = {}, float m_EffectiveWeight_ = {}, double m_EffectiveParentDelay_ = {}, float m_EffectiveParentSpeed_ = {}, float m_EffectiveSpeed_ = {}, ::UnityEngine::Playables::FrameData::Flags m_Flags_ = {}, ::UnityEngine::Playables::PlayableOutput m_Output_ = {}) noexcept : m_FrameID{m_FrameID_}, m_DeltaTime{m_DeltaTime_}, m_Weight{m_Weight_}, m_EffectiveWeight{m_EffectiveWeight_}, m_EffectiveParentDelay{m_EffectiveParentDelay_}, m_EffectiveParentSpeed{m_EffectiveParentSpeed_}, m_EffectiveSpeed{m_EffectiveSpeed_}, m_Flags{m_Flags_}, m_Output{m_Output_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: System.UInt64 m_FrameID
    uint64_t& dyn_m_FrameID();
    // Get instance field reference: System.Double m_DeltaTime
    double& dyn_m_DeltaTime();
    // Get instance field reference: System.Single m_Weight
    float& dyn_m_Weight();
    // Get instance field reference: System.Single m_EffectiveWeight
    float& dyn_m_EffectiveWeight();
    // Get instance field reference: System.Double m_EffectiveParentDelay
    double& dyn_m_EffectiveParentDelay();
    // Get instance field reference: System.Single m_EffectiveParentSpeed
    float& dyn_m_EffectiveParentSpeed();
    // Get instance field reference: System.Single m_EffectiveSpeed
    float& dyn_m_EffectiveSpeed();
    // Get instance field reference: UnityEngine.Playables.FrameData/UnityEngine.Playables.Flags m_Flags
    ::UnityEngine::Playables::FrameData::Flags& dyn_m_Flags();
    // Get instance field reference: UnityEngine.Playables.PlayableOutput m_Output
    ::UnityEngine::Playables::PlayableOutput& dyn_m_Output();
    // public System.Single get_deltaTime()
    // Offset: 0xE3AA8C
    float get_deltaTime();
    // public System.Single get_effectiveSpeed()
    // Offset: 0xE3AA98
    float get_effectiveSpeed();
    // public UnityEngine.Playables.FrameData/UnityEngine.Playables.EvaluationType get_evaluationType()
    // Offset: 0xE3AAA0
    ::UnityEngine::Playables::FrameData::EvaluationType get_evaluationType();
    // public System.Boolean get_seekOccurred()
    // Offset: 0xE3AAB0
    bool get_seekOccurred();
    // public System.Boolean get_timeLooped()
    // Offset: 0xE3AABC
    bool get_timeLooped();
    // public System.Boolean get_timeHeld()
    // Offset: 0xE3AAC8
    bool get_timeHeld();
    // public UnityEngine.Playables.PlayableOutput get_output()
    // Offset: 0xE3AAD4
    ::UnityEngine::Playables::PlayableOutput get_output();
    // public UnityEngine.Playables.PlayState get_effectivePlayState()
    // Offset: 0xE3AAE0
    ::UnityEngine::Playables::PlayState get_effectivePlayState();
    // private System.Boolean HasFlags(UnityEngine.Playables.FrameData/UnityEngine.Playables.Flags flag)
    // Offset: 0xE3AA7C
    bool HasFlags(::UnityEngine::Playables::FrameData::Flags flag);
  }; // UnityEngine.Playables.FrameData
  #pragma pack(pop)
  static check_size<sizeof(FrameData), 48 + sizeof(::UnityEngine::Playables::PlayableOutput)> __UnityEngine_Playables_FrameDataSizeCheck;
  static_assert(sizeof(FrameData) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::FrameData::Flags, "UnityEngine.Playables", "FrameData/Flags");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Playables::FrameData::get_deltaTime
// Il2CppName: get_deltaTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Playables::FrameData::*)()>(&UnityEngine::Playables::FrameData::get_deltaTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::FrameData), "get_deltaTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::FrameData::get_effectiveSpeed
// Il2CppName: get_effectiveSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Playables::FrameData::*)()>(&UnityEngine::Playables::FrameData::get_effectiveSpeed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::FrameData), "get_effectiveSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::FrameData::get_evaluationType
// Il2CppName: get_evaluationType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::FrameData::EvaluationType (UnityEngine::Playables::FrameData::*)()>(&UnityEngine::Playables::FrameData::get_evaluationType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::FrameData), "get_evaluationType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::FrameData::get_seekOccurred
// Il2CppName: get_seekOccurred
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Playables::FrameData::*)()>(&UnityEngine::Playables::FrameData::get_seekOccurred)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::FrameData), "get_seekOccurred", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::FrameData::get_timeLooped
// Il2CppName: get_timeLooped
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Playables::FrameData::*)()>(&UnityEngine::Playables::FrameData::get_timeLooped)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::FrameData), "get_timeLooped", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::FrameData::get_timeHeld
// Il2CppName: get_timeHeld
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Playables::FrameData::*)()>(&UnityEngine::Playables::FrameData::get_timeHeld)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::FrameData), "get_timeHeld", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::FrameData::get_output
// Il2CppName: get_output
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableOutput (UnityEngine::Playables::FrameData::*)()>(&UnityEngine::Playables::FrameData::get_output)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::FrameData), "get_output", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::FrameData::get_effectivePlayState
// Il2CppName: get_effectivePlayState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayState (UnityEngine::Playables::FrameData::*)()>(&UnityEngine::Playables::FrameData::get_effectivePlayState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::FrameData), "get_effectivePlayState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::FrameData::HasFlags
// Il2CppName: HasFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Playables::FrameData::*)(::UnityEngine::Playables::FrameData::Flags)>(&UnityEngine::Playables::FrameData::HasFlags)> {
  static const MethodInfo* get() {
    static auto* flag = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData/Flags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::FrameData), "HasFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{flag});
  }
};
