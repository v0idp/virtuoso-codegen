// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Camera
#include "UnityEngine/Camera.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Camera::RenderRequestOutputSpace, "UnityEngine", "Camera/RenderRequestOutputSpace");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Camera/UnityEngine.RenderRequestOutputSpace
  // [TokenAttribute] Offset: FFFFFFFF
  struct Camera::RenderRequestOutputSpace/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: RenderRequestOutputSpace
    constexpr RenderRequestOutputSpace(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Camera/UnityEngine.RenderRequestOutputSpace ScreenSpace
    static constexpr const int ScreenSpace = -1;
    // Get static field: static public UnityEngine.Camera/UnityEngine.RenderRequestOutputSpace ScreenSpace
    static ::UnityEngine::Camera::RenderRequestOutputSpace _get_ScreenSpace();
    // Set static field: static public UnityEngine.Camera/UnityEngine.RenderRequestOutputSpace ScreenSpace
    static void _set_ScreenSpace(::UnityEngine::Camera::RenderRequestOutputSpace value);
    // static field const value: static public UnityEngine.Camera/UnityEngine.RenderRequestOutputSpace UV0
    static constexpr const int UV0 = 0;
    // Get static field: static public UnityEngine.Camera/UnityEngine.RenderRequestOutputSpace UV0
    static ::UnityEngine::Camera::RenderRequestOutputSpace _get_UV0();
    // Set static field: static public UnityEngine.Camera/UnityEngine.RenderRequestOutputSpace UV0
    static void _set_UV0(::UnityEngine::Camera::RenderRequestOutputSpace value);
    // static field const value: static public UnityEngine.Camera/UnityEngine.RenderRequestOutputSpace UV1
    static constexpr const int UV1 = 1;
    // Get static field: static public UnityEngine.Camera/UnityEngine.RenderRequestOutputSpace UV1
    static ::UnityEngine::Camera::RenderRequestOutputSpace _get_UV1();
    // Set static field: static public UnityEngine.Camera/UnityEngine.RenderRequestOutputSpace UV1
    static void _set_UV1(::UnityEngine::Camera::RenderRequestOutputSpace value);
    // static field const value: static public UnityEngine.Camera/UnityEngine.RenderRequestOutputSpace UV2
    static constexpr const int UV2 = 2;
    // Get static field: static public UnityEngine.Camera/UnityEngine.RenderRequestOutputSpace UV2
    static ::UnityEngine::Camera::RenderRequestOutputSpace _get_UV2();
    // Set static field: static public UnityEngine.Camera/UnityEngine.RenderRequestOutputSpace UV2
    static void _set_UV2(::UnityEngine::Camera::RenderRequestOutputSpace value);
    // static field const value: static public UnityEngine.Camera/UnityEngine.RenderRequestOutputSpace UV3
    static constexpr const int UV3 = 3;
    // Get static field: static public UnityEngine.Camera/UnityEngine.RenderRequestOutputSpace UV3
    static ::UnityEngine::Camera::RenderRequestOutputSpace _get_UV3();
    // Set static field: static public UnityEngine.Camera/UnityEngine.RenderRequestOutputSpace UV3
    static void _set_UV3(::UnityEngine::Camera::RenderRequestOutputSpace value);
    // static field const value: static public UnityEngine.Camera/UnityEngine.RenderRequestOutputSpace UV4
    static constexpr const int UV4 = 4;
    // Get static field: static public UnityEngine.Camera/UnityEngine.RenderRequestOutputSpace UV4
    static ::UnityEngine::Camera::RenderRequestOutputSpace _get_UV4();
    // Set static field: static public UnityEngine.Camera/UnityEngine.RenderRequestOutputSpace UV4
    static void _set_UV4(::UnityEngine::Camera::RenderRequestOutputSpace value);
    // static field const value: static public UnityEngine.Camera/UnityEngine.RenderRequestOutputSpace UV5
    static constexpr const int UV5 = 5;
    // Get static field: static public UnityEngine.Camera/UnityEngine.RenderRequestOutputSpace UV5
    static ::UnityEngine::Camera::RenderRequestOutputSpace _get_UV5();
    // Set static field: static public UnityEngine.Camera/UnityEngine.RenderRequestOutputSpace UV5
    static void _set_UV5(::UnityEngine::Camera::RenderRequestOutputSpace value);
    // static field const value: static public UnityEngine.Camera/UnityEngine.RenderRequestOutputSpace UV6
    static constexpr const int UV6 = 6;
    // Get static field: static public UnityEngine.Camera/UnityEngine.RenderRequestOutputSpace UV6
    static ::UnityEngine::Camera::RenderRequestOutputSpace _get_UV6();
    // Set static field: static public UnityEngine.Camera/UnityEngine.RenderRequestOutputSpace UV6
    static void _set_UV6(::UnityEngine::Camera::RenderRequestOutputSpace value);
    // static field const value: static public UnityEngine.Camera/UnityEngine.RenderRequestOutputSpace UV7
    static constexpr const int UV7 = 7;
    // Get static field: static public UnityEngine.Camera/UnityEngine.RenderRequestOutputSpace UV7
    static ::UnityEngine::Camera::RenderRequestOutputSpace _get_UV7();
    // Set static field: static public UnityEngine.Camera/UnityEngine.RenderRequestOutputSpace UV7
    static void _set_UV7(::UnityEngine::Camera::RenderRequestOutputSpace value);
    // static field const value: static public UnityEngine.Camera/UnityEngine.RenderRequestOutputSpace UV8
    static constexpr const int UV8 = 8;
    // Get static field: static public UnityEngine.Camera/UnityEngine.RenderRequestOutputSpace UV8
    static ::UnityEngine::Camera::RenderRequestOutputSpace _get_UV8();
    // Set static field: static public UnityEngine.Camera/UnityEngine.RenderRequestOutputSpace UV8
    static void _set_UV8(::UnityEngine::Camera::RenderRequestOutputSpace value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // UnityEngine.Camera/UnityEngine.RenderRequestOutputSpace
  #pragma pack(pop)
  static check_size<sizeof(Camera::RenderRequestOutputSpace), 0 + sizeof(int)> __UnityEngine_Camera_RenderRequestOutputSpaceSizeCheck;
  static_assert(sizeof(Camera::RenderRequestOutputSpace) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
