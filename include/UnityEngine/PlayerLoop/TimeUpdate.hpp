// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::PlayerLoop
namespace UnityEngine::PlayerLoop {
}
// Completed forward declares
// Type namespace: UnityEngine.PlayerLoop
namespace UnityEngine::PlayerLoop {
  // Forward declaring type: TimeUpdate
  struct TimeUpdate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::TimeUpdate, "UnityEngine.PlayerLoop", "TimeUpdate");
// Type namespace: UnityEngine.PlayerLoop
namespace UnityEngine::PlayerLoop {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.PlayerLoop.TimeUpdate
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: 5680D8
  struct TimeUpdate/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::UnityEngine::PlayerLoop::TimeUpdate::WaitForLastPresentationAndUpdateTime
    struct WaitForLastPresentationAndUpdateTime;
    // Creating value type constructor for type: TimeUpdate
    constexpr TimeUpdate() noexcept {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
  }; // UnityEngine.PlayerLoop.TimeUpdate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
