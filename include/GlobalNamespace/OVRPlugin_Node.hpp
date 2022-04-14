// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::Node, "", "OVRPlugin/Node");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/Node
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::Node/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Node
    constexpr Node(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRPlugin/Node None
    static constexpr const int None = -1;
    // Get static field: static public OVRPlugin/Node None
    static ::GlobalNamespace::OVRPlugin::Node _get_None();
    // Set static field: static public OVRPlugin/Node None
    static void _set_None(::GlobalNamespace::OVRPlugin::Node value);
    // static field const value: static public OVRPlugin/Node EyeLeft
    static constexpr const int EyeLeft = 0;
    // Get static field: static public OVRPlugin/Node EyeLeft
    static ::GlobalNamespace::OVRPlugin::Node _get_EyeLeft();
    // Set static field: static public OVRPlugin/Node EyeLeft
    static void _set_EyeLeft(::GlobalNamespace::OVRPlugin::Node value);
    // static field const value: static public OVRPlugin/Node EyeRight
    static constexpr const int EyeRight = 1;
    // Get static field: static public OVRPlugin/Node EyeRight
    static ::GlobalNamespace::OVRPlugin::Node _get_EyeRight();
    // Set static field: static public OVRPlugin/Node EyeRight
    static void _set_EyeRight(::GlobalNamespace::OVRPlugin::Node value);
    // static field const value: static public OVRPlugin/Node EyeCenter
    static constexpr const int EyeCenter = 2;
    // Get static field: static public OVRPlugin/Node EyeCenter
    static ::GlobalNamespace::OVRPlugin::Node _get_EyeCenter();
    // Set static field: static public OVRPlugin/Node EyeCenter
    static void _set_EyeCenter(::GlobalNamespace::OVRPlugin::Node value);
    // static field const value: static public OVRPlugin/Node HandLeft
    static constexpr const int HandLeft = 3;
    // Get static field: static public OVRPlugin/Node HandLeft
    static ::GlobalNamespace::OVRPlugin::Node _get_HandLeft();
    // Set static field: static public OVRPlugin/Node HandLeft
    static void _set_HandLeft(::GlobalNamespace::OVRPlugin::Node value);
    // static field const value: static public OVRPlugin/Node HandRight
    static constexpr const int HandRight = 4;
    // Get static field: static public OVRPlugin/Node HandRight
    static ::GlobalNamespace::OVRPlugin::Node _get_HandRight();
    // Set static field: static public OVRPlugin/Node HandRight
    static void _set_HandRight(::GlobalNamespace::OVRPlugin::Node value);
    // static field const value: static public OVRPlugin/Node TrackerZero
    static constexpr const int TrackerZero = 5;
    // Get static field: static public OVRPlugin/Node TrackerZero
    static ::GlobalNamespace::OVRPlugin::Node _get_TrackerZero();
    // Set static field: static public OVRPlugin/Node TrackerZero
    static void _set_TrackerZero(::GlobalNamespace::OVRPlugin::Node value);
    // static field const value: static public OVRPlugin/Node TrackerOne
    static constexpr const int TrackerOne = 6;
    // Get static field: static public OVRPlugin/Node TrackerOne
    static ::GlobalNamespace::OVRPlugin::Node _get_TrackerOne();
    // Set static field: static public OVRPlugin/Node TrackerOne
    static void _set_TrackerOne(::GlobalNamespace::OVRPlugin::Node value);
    // static field const value: static public OVRPlugin/Node TrackerTwo
    static constexpr const int TrackerTwo = 7;
    // Get static field: static public OVRPlugin/Node TrackerTwo
    static ::GlobalNamespace::OVRPlugin::Node _get_TrackerTwo();
    // Set static field: static public OVRPlugin/Node TrackerTwo
    static void _set_TrackerTwo(::GlobalNamespace::OVRPlugin::Node value);
    // static field const value: static public OVRPlugin/Node TrackerThree
    static constexpr const int TrackerThree = 8;
    // Get static field: static public OVRPlugin/Node TrackerThree
    static ::GlobalNamespace::OVRPlugin::Node _get_TrackerThree();
    // Set static field: static public OVRPlugin/Node TrackerThree
    static void _set_TrackerThree(::GlobalNamespace::OVRPlugin::Node value);
    // static field const value: static public OVRPlugin/Node Head
    static constexpr const int Head = 9;
    // Get static field: static public OVRPlugin/Node Head
    static ::GlobalNamespace::OVRPlugin::Node _get_Head();
    // Set static field: static public OVRPlugin/Node Head
    static void _set_Head(::GlobalNamespace::OVRPlugin::Node value);
    // static field const value: static public OVRPlugin/Node DeviceObjectZero
    static constexpr const int DeviceObjectZero = 10;
    // Get static field: static public OVRPlugin/Node DeviceObjectZero
    static ::GlobalNamespace::OVRPlugin::Node _get_DeviceObjectZero();
    // Set static field: static public OVRPlugin/Node DeviceObjectZero
    static void _set_DeviceObjectZero(::GlobalNamespace::OVRPlugin::Node value);
    // static field const value: static public OVRPlugin/Node Count
    static constexpr const int Count = 11;
    // Get static field: static public OVRPlugin/Node Count
    static ::GlobalNamespace::OVRPlugin::Node _get_Count();
    // Set static field: static public OVRPlugin/Node Count
    static void _set_Count(::GlobalNamespace::OVRPlugin::Node value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // OVRPlugin/Node
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::Node), 0 + sizeof(int)> __GlobalNamespace_OVRPlugin_NodeSizeCheck;
  static_assert(sizeof(OVRPlugin::Node) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
