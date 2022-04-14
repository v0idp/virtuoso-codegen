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
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: HmdModel
  struct HmdModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::HmdModel, "VROSC", "HmdModel");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.HmdModel
  // [TokenAttribute] Offset: FFFFFFFF
  struct HmdModel/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: HmdModel
    constexpr HmdModel(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public VROSC.HmdModel Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public VROSC.HmdModel Unknown
    static ::VROSC::HmdModel _get_Unknown();
    // Set static field: static public VROSC.HmdModel Unknown
    static void _set_Unknown(::VROSC::HmdModel value);
    // static field const value: static public VROSC.HmdModel RiftLegacy
    static constexpr const int RiftLegacy = 1;
    // Get static field: static public VROSC.HmdModel RiftLegacy
    static ::VROSC::HmdModel _get_RiftLegacy();
    // Set static field: static public VROSC.HmdModel RiftLegacy
    static void _set_RiftLegacy(::VROSC::HmdModel value);
    // static field const value: static public VROSC.HmdModel RiftS
    static constexpr const int RiftS = 2;
    // Get static field: static public VROSC.HmdModel RiftS
    static ::VROSC::HmdModel _get_RiftS();
    // Set static field: static public VROSC.HmdModel RiftS
    static void _set_RiftS(::VROSC::HmdModel value);
    // static field const value: static public VROSC.HmdModel QuestAndroid
    static constexpr const int QuestAndroid = 3;
    // Get static field: static public VROSC.HmdModel QuestAndroid
    static ::VROSC::HmdModel _get_QuestAndroid();
    // Set static field: static public VROSC.HmdModel QuestAndroid
    static void _set_QuestAndroid(::VROSC::HmdModel value);
    // static field const value: static public VROSC.HmdModel Quest2Android
    static constexpr const int Quest2Android = 4;
    // Get static field: static public VROSC.HmdModel Quest2Android
    static ::VROSC::HmdModel _get_Quest2Android();
    // Set static field: static public VROSC.HmdModel Quest2Android
    static void _set_Quest2Android(::VROSC::HmdModel value);
    // static field const value: static public VROSC.HmdModel QuestLink
    static constexpr const int QuestLink = 5;
    // Get static field: static public VROSC.HmdModel QuestLink
    static ::VROSC::HmdModel _get_QuestLink();
    // Set static field: static public VROSC.HmdModel QuestLink
    static void _set_QuestLink(::VROSC::HmdModel value);
    // static field const value: static public VROSC.HmdModel Quest2Link
    static constexpr const int Quest2Link = 6;
    // Get static field: static public VROSC.HmdModel Quest2Link
    static ::VROSC::HmdModel _get_Quest2Link();
    // Set static field: static public VROSC.HmdModel Quest2Link
    static void _set_Quest2Link(::VROSC::HmdModel value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // VROSC.HmdModel
  #pragma pack(pop)
  static check_size<sizeof(HmdModel), 0 + sizeof(int)> __VROSC_HmdModelSizeCheck;
  static_assert(sizeof(HmdModel) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
