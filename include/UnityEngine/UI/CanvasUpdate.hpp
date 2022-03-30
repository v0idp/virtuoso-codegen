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
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Forward declaring type: CanvasUpdate
  struct CanvasUpdate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::CanvasUpdate, "UnityEngine.UI", "CanvasUpdate");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.CanvasUpdate
  // [TokenAttribute] Offset: FFFFFFFF
  struct CanvasUpdate/*, public ::System::Enum*/ {
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
    // Creating value type constructor for type: CanvasUpdate
    constexpr CanvasUpdate(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.UI.CanvasUpdate Prelayout
    static constexpr const int Prelayout = 0;
    // Get static field: static public UnityEngine.UI.CanvasUpdate Prelayout
    static ::UnityEngine::UI::CanvasUpdate _get_Prelayout();
    // Set static field: static public UnityEngine.UI.CanvasUpdate Prelayout
    static void _set_Prelayout(::UnityEngine::UI::CanvasUpdate value);
    // static field const value: static public UnityEngine.UI.CanvasUpdate Layout
    static constexpr const int Layout = 1;
    // Get static field: static public UnityEngine.UI.CanvasUpdate Layout
    static ::UnityEngine::UI::CanvasUpdate _get_Layout();
    // Set static field: static public UnityEngine.UI.CanvasUpdate Layout
    static void _set_Layout(::UnityEngine::UI::CanvasUpdate value);
    // static field const value: static public UnityEngine.UI.CanvasUpdate PostLayout
    static constexpr const int PostLayout = 2;
    // Get static field: static public UnityEngine.UI.CanvasUpdate PostLayout
    static ::UnityEngine::UI::CanvasUpdate _get_PostLayout();
    // Set static field: static public UnityEngine.UI.CanvasUpdate PostLayout
    static void _set_PostLayout(::UnityEngine::UI::CanvasUpdate value);
    // static field const value: static public UnityEngine.UI.CanvasUpdate PreRender
    static constexpr const int PreRender = 3;
    // Get static field: static public UnityEngine.UI.CanvasUpdate PreRender
    static ::UnityEngine::UI::CanvasUpdate _get_PreRender();
    // Set static field: static public UnityEngine.UI.CanvasUpdate PreRender
    static void _set_PreRender(::UnityEngine::UI::CanvasUpdate value);
    // static field const value: static public UnityEngine.UI.CanvasUpdate LatePreRender
    static constexpr const int LatePreRender = 4;
    // Get static field: static public UnityEngine.UI.CanvasUpdate LatePreRender
    static ::UnityEngine::UI::CanvasUpdate _get_LatePreRender();
    // Set static field: static public UnityEngine.UI.CanvasUpdate LatePreRender
    static void _set_LatePreRender(::UnityEngine::UI::CanvasUpdate value);
    // static field const value: static public UnityEngine.UI.CanvasUpdate MaxUpdateValue
    static constexpr const int MaxUpdateValue = 5;
    // Get static field: static public UnityEngine.UI.CanvasUpdate MaxUpdateValue
    static ::UnityEngine::UI::CanvasUpdate _get_MaxUpdateValue();
    // Set static field: static public UnityEngine.UI.CanvasUpdate MaxUpdateValue
    static void _set_MaxUpdateValue(::UnityEngine::UI::CanvasUpdate value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.UI.CanvasUpdate
  #pragma pack(pop)
  static check_size<sizeof(CanvasUpdate), 16 + sizeof(int)> __UnityEngine_UI_CanvasUpdateSizeCheck;
  static_assert(sizeof(CanvasUpdate) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
