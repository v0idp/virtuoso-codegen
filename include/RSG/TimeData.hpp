// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: RSG
namespace RSG {
  // Forward declaring type: TimeData
  struct TimeData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::RSG::TimeData, "RSG", "TimeData");
// Type namespace: RSG
namespace RSG {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: RSG.TimeData
  // [TokenAttribute] Offset: FFFFFFFF
  struct TimeData/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Single elapsedTime
    // Size: 0x4
    // Offset: 0x0
    float elapsedTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single deltaTime
    // Size: 0x4
    // Offset: 0x4
    float deltaTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 elapsedUpdates
    // Size: 0x4
    // Offset: 0x8
    int elapsedUpdates;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TimeData
    constexpr TimeData(float elapsedTime_ = {}, float deltaTime_ = {}, int elapsedUpdates_ = {}) noexcept : elapsedTime{elapsedTime_}, deltaTime{deltaTime_}, elapsedUpdates{elapsedUpdates_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single elapsedTime
    [[deprecated]] float& dyn_elapsedTime();
    // Get instance field reference: public System.Single deltaTime
    [[deprecated]] float& dyn_deltaTime();
    // Get instance field reference: public System.Int32 elapsedUpdates
    [[deprecated]] int& dyn_elapsedUpdates();
  }; // RSG.TimeData
  #pragma pack(pop)
  static check_size<sizeof(TimeData), 8 + sizeof(int)> __RSG_TimeDataSizeCheck;
  static_assert(sizeof(TimeData) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
