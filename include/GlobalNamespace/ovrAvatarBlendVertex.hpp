// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ovrAvatarBlendVertex
  struct ovrAvatarBlendVertex;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ovrAvatarBlendVertex, "", "ovrAvatarBlendVertex");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: ovrAvatarBlendVertex
  // [TokenAttribute] Offset: FFFFFFFF
  struct ovrAvatarBlendVertex/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Single x
    // Size: 0x4
    // Offset: 0x0
    float x;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single y
    // Size: 0x4
    // Offset: 0x4
    float y;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single z
    // Size: 0x4
    // Offset: 0x8
    float z;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single nx
    // Size: 0x4
    // Offset: 0xC
    float nx;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single ny
    // Size: 0x4
    // Offset: 0x10
    float ny;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single nz
    // Size: 0x4
    // Offset: 0x14
    float nz;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single tx
    // Size: 0x4
    // Offset: 0x18
    float tx;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single ty
    // Size: 0x4
    // Offset: 0x1C
    float ty;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single tz
    // Size: 0x4
    // Offset: 0x20
    float tz;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: ovrAvatarBlendVertex
    constexpr ovrAvatarBlendVertex(float x_ = {}, float y_ = {}, float z_ = {}, float nx_ = {}, float ny_ = {}, float nz_ = {}, float tx_ = {}, float ty_ = {}, float tz_ = {}) noexcept : x{x_}, y{y_}, z{z_}, nx{nx_}, ny{ny_}, nz{nz_}, tx{tx_}, ty{ty_}, tz{tz_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single x
    [[deprecated("Use field access instead!")]] float& dyn_x();
    // Get instance field reference: public System.Single y
    [[deprecated("Use field access instead!")]] float& dyn_y();
    // Get instance field reference: public System.Single z
    [[deprecated("Use field access instead!")]] float& dyn_z();
    // Get instance field reference: public System.Single nx
    [[deprecated("Use field access instead!")]] float& dyn_nx();
    // Get instance field reference: public System.Single ny
    [[deprecated("Use field access instead!")]] float& dyn_ny();
    // Get instance field reference: public System.Single nz
    [[deprecated("Use field access instead!")]] float& dyn_nz();
    // Get instance field reference: public System.Single tx
    [[deprecated("Use field access instead!")]] float& dyn_tx();
    // Get instance field reference: public System.Single ty
    [[deprecated("Use field access instead!")]] float& dyn_ty();
    // Get instance field reference: public System.Single tz
    [[deprecated("Use field access instead!")]] float& dyn_tz();
  }; // ovrAvatarBlendVertex
  #pragma pack(pop)
  static check_size<sizeof(ovrAvatarBlendVertex), 32 + sizeof(float)> __GlobalNamespace_ovrAvatarBlendVertexSizeCheck;
  static_assert(sizeof(ovrAvatarBlendVertex) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
