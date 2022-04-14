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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRGLTFType
  struct OVRGLTFType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGLTFType, "", "OVRGLTFType");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRGLTFType
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRGLTFType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: OVRGLTFType
    constexpr OVRGLTFType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRGLTFType NONE
    static constexpr const int NONE = 0;
    // Get static field: static public OVRGLTFType NONE
    static ::GlobalNamespace::OVRGLTFType _get_NONE();
    // Set static field: static public OVRGLTFType NONE
    static void _set_NONE(::GlobalNamespace::OVRGLTFType value);
    // static field const value: static public OVRGLTFType SCALAR
    static constexpr const int SCALAR = 1;
    // Get static field: static public OVRGLTFType SCALAR
    static ::GlobalNamespace::OVRGLTFType _get_SCALAR();
    // Set static field: static public OVRGLTFType SCALAR
    static void _set_SCALAR(::GlobalNamespace::OVRGLTFType value);
    // static field const value: static public OVRGLTFType VEC2
    static constexpr const int VEC2 = 2;
    // Get static field: static public OVRGLTFType VEC2
    static ::GlobalNamespace::OVRGLTFType _get_VEC2();
    // Set static field: static public OVRGLTFType VEC2
    static void _set_VEC2(::GlobalNamespace::OVRGLTFType value);
    // static field const value: static public OVRGLTFType VEC3
    static constexpr const int VEC3 = 3;
    // Get static field: static public OVRGLTFType VEC3
    static ::GlobalNamespace::OVRGLTFType _get_VEC3();
    // Set static field: static public OVRGLTFType VEC3
    static void _set_VEC3(::GlobalNamespace::OVRGLTFType value);
    // static field const value: static public OVRGLTFType VEC4
    static constexpr const int VEC4 = 4;
    // Get static field: static public OVRGLTFType VEC4
    static ::GlobalNamespace::OVRGLTFType _get_VEC4();
    // Set static field: static public OVRGLTFType VEC4
    static void _set_VEC4(::GlobalNamespace::OVRGLTFType value);
    // static field const value: static public OVRGLTFType MAT4
    static constexpr const int MAT4 = 5;
    // Get static field: static public OVRGLTFType MAT4
    static ::GlobalNamespace::OVRGLTFType _get_MAT4();
    // Set static field: static public OVRGLTFType MAT4
    static void _set_MAT4(::GlobalNamespace::OVRGLTFType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // OVRGLTFType
  #pragma pack(pop)
  static check_size<sizeof(OVRGLTFType), 0 + sizeof(int)> __GlobalNamespace_OVRGLTFTypeSizeCheck;
  static_assert(sizeof(OVRGLTFType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
