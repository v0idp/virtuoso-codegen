// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: ovrAvatarGazeTargetType
#include "GlobalNamespace/ovrAvatarGazeTargetType.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ovrAvatarGazeTarget
  struct ovrAvatarGazeTarget;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ovrAvatarGazeTarget, "", "ovrAvatarGazeTarget");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: ovrAvatarGazeTarget
  // [TokenAttribute] Offset: FFFFFFFF
  struct ovrAvatarGazeTarget/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt32 id
    // Size: 0x4
    // Offset: 0x0
    uint id;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public UnityEngine.Vector3 worldPosition
    // Size: 0xC
    // Offset: 0x4
    ::UnityEngine::Vector3 worldPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public ovrAvatarGazeTargetType type
    // Size: 0x4
    // Offset: 0x10
    ::GlobalNamespace::ovrAvatarGazeTargetType type;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ovrAvatarGazeTargetType) == 0x4);
    public:
    // Creating value type constructor for type: ovrAvatarGazeTarget
    constexpr ovrAvatarGazeTarget(uint id_ = {}, ::UnityEngine::Vector3 worldPosition_ = {}, ::GlobalNamespace::ovrAvatarGazeTargetType type_ = {}) noexcept : id{id_}, worldPosition{worldPosition_}, type{type_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt32 id
    [[deprecated]] uint& dyn_id();
    // Get instance field reference: public UnityEngine.Vector3 worldPosition
    [[deprecated]] ::UnityEngine::Vector3& dyn_worldPosition();
    // Get instance field reference: public ovrAvatarGazeTargetType type
    [[deprecated]] ::GlobalNamespace::ovrAvatarGazeTargetType& dyn_type();
  }; // ovrAvatarGazeTarget
  #pragma pack(pop)
  static check_size<sizeof(ovrAvatarGazeTarget), 16 + sizeof(::GlobalNamespace::ovrAvatarGazeTargetType)> __GlobalNamespace_ovrAvatarGazeTargetSizeCheck;
  static_assert(sizeof(ovrAvatarGazeTarget) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
