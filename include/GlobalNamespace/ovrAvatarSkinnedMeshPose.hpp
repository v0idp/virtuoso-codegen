// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: ovrAvatarTransform
#include "GlobalNamespace/ovrAvatarTransform.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ovrAvatarSkinnedMeshPose
  struct ovrAvatarSkinnedMeshPose;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ovrAvatarSkinnedMeshPose, "", "ovrAvatarSkinnedMeshPose");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: ovrAvatarSkinnedMeshPose
  // [TokenAttribute] Offset: FFFFFFFF
  struct ovrAvatarSkinnedMeshPose/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt32 jointCount
    // Size: 0x4
    // Offset: 0x0
    uint jointCount;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: jointCount and: jointTransform
    char __padding0[0x4] = {};
    // public ovrAvatarTransform[] jointTransform
    // Size: 0x8
    // Offset: 0x8
    ::ArrayW<::GlobalNamespace::ovrAvatarTransform> jointTransform;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::ovrAvatarTransform>) == 0x8);
    // public System.Int32[] jointParents
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<int> jointParents;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // public System.IntPtr[] jointNames
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::System::IntPtr> jointNames;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::IntPtr>) == 0x8);
    public:
    // Creating value type constructor for type: ovrAvatarSkinnedMeshPose
    constexpr ovrAvatarSkinnedMeshPose(uint jointCount_ = {}, ::ArrayW<::GlobalNamespace::ovrAvatarTransform> jointTransform_ = ::ArrayW<::GlobalNamespace::ovrAvatarTransform>(static_cast<void*>(nullptr)), ::ArrayW<int> jointParents_ = ::ArrayW<int>(static_cast<void*>(nullptr)), ::ArrayW<::System::IntPtr> jointNames_ = ::ArrayW<::System::IntPtr>(static_cast<void*>(nullptr))) noexcept : jointCount{jointCount_}, jointTransform{jointTransform_}, jointParents{jointParents_}, jointNames{jointNames_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt32 jointCount
    uint& dyn_jointCount();
    // Get instance field reference: public ovrAvatarTransform[] jointTransform
    ::ArrayW<::GlobalNamespace::ovrAvatarTransform>& dyn_jointTransform();
    // Get instance field reference: public System.Int32[] jointParents
    ::ArrayW<int>& dyn_jointParents();
    // Get instance field reference: public System.IntPtr[] jointNames
    ::ArrayW<::System::IntPtr>& dyn_jointNames();
  }; // ovrAvatarSkinnedMeshPose
  #pragma pack(pop)
  static check_size<sizeof(ovrAvatarSkinnedMeshPose), 24 + sizeof(::ArrayW<::System::IntPtr>)> __GlobalNamespace_ovrAvatarSkinnedMeshPoseSizeCheck;
  static_assert(sizeof(ovrAvatarSkinnedMeshPose) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"