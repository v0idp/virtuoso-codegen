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
// Type namespace: UnityEngine.SceneManagement
namespace UnityEngine::SceneManagement {
  // Forward declaring type: LoadSceneMode
  struct LoadSceneMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SceneManagement::LoadSceneMode, "UnityEngine.SceneManagement", "LoadSceneMode");
// Type namespace: UnityEngine.SceneManagement
namespace UnityEngine::SceneManagement {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.SceneManagement.LoadSceneMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct LoadSceneMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: LoadSceneMode
    constexpr LoadSceneMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.SceneManagement.LoadSceneMode Single
    static constexpr const int Single = 0;
    // Get static field: static public UnityEngine.SceneManagement.LoadSceneMode Single
    static ::UnityEngine::SceneManagement::LoadSceneMode _get_Single();
    // Set static field: static public UnityEngine.SceneManagement.LoadSceneMode Single
    static void _set_Single(::UnityEngine::SceneManagement::LoadSceneMode value);
    // static field const value: static public UnityEngine.SceneManagement.LoadSceneMode Additive
    static constexpr const int Additive = 1;
    // Get static field: static public UnityEngine.SceneManagement.LoadSceneMode Additive
    static ::UnityEngine::SceneManagement::LoadSceneMode _get_Additive();
    // Set static field: static public UnityEngine.SceneManagement.LoadSceneMode Additive
    static void _set_Additive(::UnityEngine::SceneManagement::LoadSceneMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // UnityEngine.SceneManagement.LoadSceneMode
  #pragma pack(pop)
  static check_size<sizeof(LoadSceneMode), 0 + sizeof(int)> __UnityEngine_SceneManagement_LoadSceneModeSizeCheck;
  static_assert(sizeof(LoadSceneMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
