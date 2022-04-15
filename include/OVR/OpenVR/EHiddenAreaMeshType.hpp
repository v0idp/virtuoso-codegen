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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EHiddenAreaMeshType
  struct EHiddenAreaMeshType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EHiddenAreaMeshType, "OVR.OpenVR", "EHiddenAreaMeshType");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.EHiddenAreaMeshType
  // [TokenAttribute] Offset: FFFFFFFF
  struct EHiddenAreaMeshType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EHiddenAreaMeshType
    constexpr EHiddenAreaMeshType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVR.OpenVR.EHiddenAreaMeshType k_eHiddenAreaMesh_Standard
    static constexpr const int k_eHiddenAreaMesh_Standard = 0;
    // Get static field: static public OVR.OpenVR.EHiddenAreaMeshType k_eHiddenAreaMesh_Standard
    static ::OVR::OpenVR::EHiddenAreaMeshType _get_k_eHiddenAreaMesh_Standard();
    // Set static field: static public OVR.OpenVR.EHiddenAreaMeshType k_eHiddenAreaMesh_Standard
    static void _set_k_eHiddenAreaMesh_Standard(::OVR::OpenVR::EHiddenAreaMeshType value);
    // static field const value: static public OVR.OpenVR.EHiddenAreaMeshType k_eHiddenAreaMesh_Inverse
    static constexpr const int k_eHiddenAreaMesh_Inverse = 1;
    // Get static field: static public OVR.OpenVR.EHiddenAreaMeshType k_eHiddenAreaMesh_Inverse
    static ::OVR::OpenVR::EHiddenAreaMeshType _get_k_eHiddenAreaMesh_Inverse();
    // Set static field: static public OVR.OpenVR.EHiddenAreaMeshType k_eHiddenAreaMesh_Inverse
    static void _set_k_eHiddenAreaMesh_Inverse(::OVR::OpenVR::EHiddenAreaMeshType value);
    // static field const value: static public OVR.OpenVR.EHiddenAreaMeshType k_eHiddenAreaMesh_LineLoop
    static constexpr const int k_eHiddenAreaMesh_LineLoop = 2;
    // Get static field: static public OVR.OpenVR.EHiddenAreaMeshType k_eHiddenAreaMesh_LineLoop
    static ::OVR::OpenVR::EHiddenAreaMeshType _get_k_eHiddenAreaMesh_LineLoop();
    // Set static field: static public OVR.OpenVR.EHiddenAreaMeshType k_eHiddenAreaMesh_LineLoop
    static void _set_k_eHiddenAreaMesh_LineLoop(::OVR::OpenVR::EHiddenAreaMeshType value);
    // static field const value: static public OVR.OpenVR.EHiddenAreaMeshType k_eHiddenAreaMesh_Max
    static constexpr const int k_eHiddenAreaMesh_Max = 3;
    // Get static field: static public OVR.OpenVR.EHiddenAreaMeshType k_eHiddenAreaMesh_Max
    static ::OVR::OpenVR::EHiddenAreaMeshType _get_k_eHiddenAreaMesh_Max();
    // Set static field: static public OVR.OpenVR.EHiddenAreaMeshType k_eHiddenAreaMesh_Max
    static void _set_k_eHiddenAreaMesh_Max(::OVR::OpenVR::EHiddenAreaMeshType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVR.OpenVR.EHiddenAreaMeshType
  #pragma pack(pop)
  static check_size<sizeof(EHiddenAreaMeshType), 0 + sizeof(int)> __OVR_OpenVR_EHiddenAreaMeshTypeSizeCheck;
  static_assert(sizeof(EHiddenAreaMeshType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
