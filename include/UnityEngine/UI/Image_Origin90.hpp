// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UI.Image
#include "UnityEngine/UI/Image.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Image::Origin90, "UnityEngine.UI", "Image/Origin90");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.Image/UnityEngine.UI.Origin90
  // [TokenAttribute] Offset: FFFFFFFF
  struct Image::Origin90/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Origin90
    constexpr Origin90(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.UI.Image/UnityEngine.UI.Origin90 BottomLeft
    static constexpr const int BottomLeft = 0;
    // Get static field: static public UnityEngine.UI.Image/UnityEngine.UI.Origin90 BottomLeft
    static ::UnityEngine::UI::Image::Origin90 _get_BottomLeft();
    // Set static field: static public UnityEngine.UI.Image/UnityEngine.UI.Origin90 BottomLeft
    static void _set_BottomLeft(::UnityEngine::UI::Image::Origin90 value);
    // static field const value: static public UnityEngine.UI.Image/UnityEngine.UI.Origin90 TopLeft
    static constexpr const int TopLeft = 1;
    // Get static field: static public UnityEngine.UI.Image/UnityEngine.UI.Origin90 TopLeft
    static ::UnityEngine::UI::Image::Origin90 _get_TopLeft();
    // Set static field: static public UnityEngine.UI.Image/UnityEngine.UI.Origin90 TopLeft
    static void _set_TopLeft(::UnityEngine::UI::Image::Origin90 value);
    // static field const value: static public UnityEngine.UI.Image/UnityEngine.UI.Origin90 TopRight
    static constexpr const int TopRight = 2;
    // Get static field: static public UnityEngine.UI.Image/UnityEngine.UI.Origin90 TopRight
    static ::UnityEngine::UI::Image::Origin90 _get_TopRight();
    // Set static field: static public UnityEngine.UI.Image/UnityEngine.UI.Origin90 TopRight
    static void _set_TopRight(::UnityEngine::UI::Image::Origin90 value);
    // static field const value: static public UnityEngine.UI.Image/UnityEngine.UI.Origin90 BottomRight
    static constexpr const int BottomRight = 3;
    // Get static field: static public UnityEngine.UI.Image/UnityEngine.UI.Origin90 BottomRight
    static ::UnityEngine::UI::Image::Origin90 _get_BottomRight();
    // Set static field: static public UnityEngine.UI.Image/UnityEngine.UI.Origin90 BottomRight
    static void _set_BottomRight(::UnityEngine::UI::Image::Origin90 value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.UI.Image/UnityEngine.UI.Origin90
  #pragma pack(pop)
  static check_size<sizeof(Image::Origin90), 0 + sizeof(int)> __UnityEngine_UI_Image_Origin90SizeCheck;
  static_assert(sizeof(Image::Origin90) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
