// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: ScreenFade
  class ScreenFade;
  // Forward declaring type: InputDevice
  class InputDevice;
  // Forward declaring type: HandPlacedDashboardHelper
  class HandPlacedDashboardHelper;
  // Forward declaring type: HighlightControllerComponentsManager
  class HighlightControllerComponentsManager;
  // Forward declaring type: TutorialInputDeviceManager
  class TutorialInputDeviceManager;
  // Forward declaring type: UIHelpers
  class UIHelpers;
  // Skipping declaration: ControllerType because it is already included!
  // Forward declaring type: InputSettings
  class InputSettings;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: VRPlayer
  class VRPlayer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::VRPlayer);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::VRPlayer*, "VROSC", "VRPlayer");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0xA4
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.VRPlayer
  // [TokenAttribute] Offset: FFFFFFFF
  class VRPlayer : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::VROSC::VRPlayer::ControllerType
    struct ControllerType;
    // Nested type: ::VROSC::VRPlayer::OverrideControllerPrefab
    class OverrideControllerPrefab;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: VROSC.VRPlayer/VROSC.ControllerType
    // [TokenAttribute] Offset: FFFFFFFF
    struct ControllerType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: ControllerType
      constexpr ControllerType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public VROSC.VRPlayer/VROSC.ControllerType OculusTouch
      static constexpr const int OculusTouch = 0;
      // Get static field: static public VROSC.VRPlayer/VROSC.ControllerType OculusTouch
      static ::VROSC::VRPlayer::ControllerType _get_OculusTouch();
      // Set static field: static public VROSC.VRPlayer/VROSC.ControllerType OculusTouch
      static void _set_OculusTouch(::VROSC::VRPlayer::ControllerType value);
      // static field const value: static public VROSC.VRPlayer/VROSC.ControllerType ViveWand
      static constexpr const int ViveWand = 1;
      // Get static field: static public VROSC.VRPlayer/VROSC.ControllerType ViveWand
      static ::VROSC::VRPlayer::ControllerType _get_ViveWand();
      // Set static field: static public VROSC.VRPlayer/VROSC.ControllerType ViveWand
      static void _set_ViveWand(::VROSC::VRPlayer::ControllerType value);
      // static field const value: static public VROSC.VRPlayer/VROSC.ControllerType ValveIndex
      static constexpr const int ValveIndex = 2;
      // Get static field: static public VROSC.VRPlayer/VROSC.ControllerType ValveIndex
      static ::VROSC::VRPlayer::ControllerType _get_ValveIndex();
      // Set static field: static public VROSC.VRPlayer/VROSC.ControllerType ValveIndex
      static void _set_ValveIndex(::VROSC::VRPlayer::ControllerType value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // VROSC.VRPlayer/VROSC.ControllerType
    #pragma pack(pop)
    static check_size<sizeof(VRPlayer::ControllerType), 0 + sizeof(int)> __VROSC_VRPlayer_ControllerTypeSizeCheck;
    static_assert(sizeof(VRPlayer::ControllerType) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private UnityEngine.Camera _camera
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Camera* camera;
    // Field size check
    static_assert(sizeof(::UnityEngine::Camera*) == 0x8);
    // private VROSC.ScreenFade _screenFade
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::ScreenFade* screenFade;
    // Field size check
    static_assert(sizeof(::VROSC::ScreenFade*) == 0x8);
    // private System.Boolean _isDebugPlayer
    // Size: 0x1
    // Offset: 0x28
    bool isDebugPlayer;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isDebugPlayer and: right
    char __padding2[0x7] = {};
    // private VROSC.InputDevice _right
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::InputDevice* right;
    // Field size check
    static_assert(sizeof(::VROSC::InputDevice*) == 0x8);
    // private VROSC.InputDevice _left
    // Size: 0x8
    // Offset: 0x38
    ::VROSC::InputDevice* left;
    // Field size check
    static_assert(sizeof(::VROSC::InputDevice*) == 0x8);
    // private UnityEngine.Transform _keyboardAnchor
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Transform* keyboardAnchor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private VROSC.HandPlacedDashboardHelper _handPlacedDashboardHelper
    // Size: 0x8
    // Offset: 0x48
    ::VROSC::HandPlacedDashboardHelper* handPlacedDashboardHelper;
    // Field size check
    static_assert(sizeof(::VROSC::HandPlacedDashboardHelper*) == 0x8);
    // private VROSC.HighlightControllerComponentsManager _highlighting
    // Size: 0x8
    // Offset: 0x50
    ::VROSC::HighlightControllerComponentsManager* highlighting;
    // Field size check
    static_assert(sizeof(::VROSC::HighlightControllerComponentsManager*) == 0x8);
    // private VROSC.TutorialInputDeviceManager _tutorialInputDeviceManager
    // Size: 0x8
    // Offset: 0x58
    ::VROSC::TutorialInputDeviceManager* tutorialInputDeviceManager;
    // Field size check
    static_assert(sizeof(::VROSC::TutorialInputDeviceManager*) == 0x8);
    // private UnityEngine.Transform _leftControllerParent
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::Transform* leftControllerParent;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _rightControllerParent
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::Transform* rightControllerParent;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private VROSC.InputDevice _leftControllerPrefab
    // Size: 0x8
    // Offset: 0x70
    ::VROSC::InputDevice* leftControllerPrefab;
    // Field size check
    static_assert(sizeof(::VROSC::InputDevice*) == 0x8);
    // private VROSC.InputDevice _rightControllerPrefab
    // Size: 0x8
    // Offset: 0x78
    ::VROSC::InputDevice* rightControllerPrefab;
    // Field size check
    static_assert(sizeof(::VROSC::InputDevice*) == 0x8);
    // private VROSC.UIHelpers _leftUIHelpers
    // Size: 0x8
    // Offset: 0x80
    ::VROSC::UIHelpers* leftUIHelpers;
    // Field size check
    static_assert(sizeof(::VROSC::UIHelpers*) == 0x8);
    // private VROSC.UIHelpers _rightUIHelpers
    // Size: 0x8
    // Offset: 0x88
    ::VROSC::UIHelpers* rightUIHelpers;
    // Field size check
    static_assert(sizeof(::VROSC::UIHelpers*) == 0x8);
    // private VROSC.VRPlayer/VROSC.OverrideControllerPrefab[] _overrideControllerPrefabs
    // Size: 0x8
    // Offset: 0x90
    ::ArrayW<::VROSC::VRPlayer::OverrideControllerPrefab*> overrideControllerPrefabs;
    // Field size check
    static_assert(sizeof(::ArrayW<::VROSC::VRPlayer::OverrideControllerPrefab*>) == 0x8);
    // private System.String _connectedControllerName
    // Size: 0x8
    // Offset: 0x98
    ::StringW connectedControllerName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private VROSC.VRPlayer/VROSC.ControllerType <Controllers>k__BackingField
    // Size: 0x4
    // Offset: 0xA0
    ::VROSC::VRPlayer::ControllerType Controllers;
    // Field size check
    static_assert(sizeof(::VROSC::VRPlayer::ControllerType) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Camera _camera
    ::UnityEngine::Camera*& dyn__camera();
    // Get instance field reference: private VROSC.ScreenFade _screenFade
    ::VROSC::ScreenFade*& dyn__screenFade();
    // Get instance field reference: private System.Boolean _isDebugPlayer
    bool& dyn__isDebugPlayer();
    // Get instance field reference: private VROSC.InputDevice _right
    ::VROSC::InputDevice*& dyn__right();
    // Get instance field reference: private VROSC.InputDevice _left
    ::VROSC::InputDevice*& dyn__left();
    // Get instance field reference: private UnityEngine.Transform _keyboardAnchor
    ::UnityEngine::Transform*& dyn__keyboardAnchor();
    // Get instance field reference: private VROSC.HandPlacedDashboardHelper _handPlacedDashboardHelper
    ::VROSC::HandPlacedDashboardHelper*& dyn__handPlacedDashboardHelper();
    // Get instance field reference: private VROSC.HighlightControllerComponentsManager _highlighting
    ::VROSC::HighlightControllerComponentsManager*& dyn__highlighting();
    // Get instance field reference: private VROSC.TutorialInputDeviceManager _tutorialInputDeviceManager
    ::VROSC::TutorialInputDeviceManager*& dyn__tutorialInputDeviceManager();
    // Get instance field reference: private UnityEngine.Transform _leftControllerParent
    ::UnityEngine::Transform*& dyn__leftControllerParent();
    // Get instance field reference: private UnityEngine.Transform _rightControllerParent
    ::UnityEngine::Transform*& dyn__rightControllerParent();
    // Get instance field reference: private VROSC.InputDevice _leftControllerPrefab
    ::VROSC::InputDevice*& dyn__leftControllerPrefab();
    // Get instance field reference: private VROSC.InputDevice _rightControllerPrefab
    ::VROSC::InputDevice*& dyn__rightControllerPrefab();
    // Get instance field reference: private VROSC.UIHelpers _leftUIHelpers
    ::VROSC::UIHelpers*& dyn__leftUIHelpers();
    // Get instance field reference: private VROSC.UIHelpers _rightUIHelpers
    ::VROSC::UIHelpers*& dyn__rightUIHelpers();
    // Get instance field reference: private VROSC.VRPlayer/VROSC.OverrideControllerPrefab[] _overrideControllerPrefabs
    ::ArrayW<::VROSC::VRPlayer::OverrideControllerPrefab*>& dyn__overrideControllerPrefabs();
    // Get instance field reference: private System.String _connectedControllerName
    ::StringW& dyn__connectedControllerName();
    // Get instance field reference: private VROSC.VRPlayer/VROSC.ControllerType <Controllers>k__BackingField
    ::VROSC::VRPlayer::ControllerType& dyn_$Controllers$k__BackingField();
    // public VROSC.InputDevice get_Right()
    // Offset: 0x13AD3C0
    ::VROSC::InputDevice* get_Right();
    // public VROSC.InputDevice get_Left()
    // Offset: 0x13AD3C8
    ::VROSC::InputDevice* get_Left();
    // public UnityEngine.Camera get_Camera()
    // Offset: 0x13AD3D0
    ::UnityEngine::Camera* get_Camera();
    // public VROSC.ScreenFade get_ScreenFade()
    // Offset: 0x13AD3D8
    ::VROSC::ScreenFade* get_ScreenFade();
    // public VROSC.HighlightControllerComponentsManager get_Highlighting()
    // Offset: 0x13AD3E0
    ::VROSC::HighlightControllerComponentsManager* get_Highlighting();
    // public VROSC.TutorialInputDeviceManager get_TutorialInputDevices()
    // Offset: 0x13AD3E8
    ::VROSC::TutorialInputDeviceManager* get_TutorialInputDevices();
    // public VROSC.HandPlacedDashboardHelper get_HandPlacedDashboardHelper()
    // Offset: 0x13AD3F0
    ::VROSC::HandPlacedDashboardHelper* get_HandPlacedDashboardHelper();
    // public System.Boolean get_IsDebugPlayer()
    // Offset: 0x13AD3F8
    bool get_IsDebugPlayer();
    // public UnityEngine.Transform get_KeyboardAnchor()
    // Offset: 0x13AD400
    ::UnityEngine::Transform* get_KeyboardAnchor();
    // public System.Collections.Generic.List`1<VROSC.InputDevice> get_InputDevices()
    // Offset: 0x13AD408
    ::System::Collections::Generic::List_1<::VROSC::InputDevice*>* get_InputDevices();
    // public VROSC.VRPlayer/VROSC.ControllerType get_Controllers()
    // Offset: 0x13AD4BC
    ::VROSC::VRPlayer::ControllerType get_Controllers();
    // private System.Void set_Controllers(VROSC.VRPlayer/VROSC.ControllerType value)
    // Offset: 0x13AD4C4
    void set_Controllers(::VROSC::VRPlayer::ControllerType value);
    // protected System.Void Awake()
    // Offset: 0x13AD4CC
    void Awake();
    // public System.Void Setup(VROSC.InputSettings inputSettings)
    // Offset: 0x13AD5CC
    void Setup(::VROSC::InputSettings* inputSettings);
    // public System.Void UpdateInput()
    // Offset: 0x13AD780
    void UpdateInput();
    // public VROSC.InputDevice GetControllerByHand(System.Boolean right)
    // Offset: 0x13AD7CC
    ::VROSC::InputDevice* GetControllerByHand(bool right);
    // public UnityEngine.Vector3 GetMouthPosition()
    // Offset: 0x13AD7E4
    ::UnityEngine::Vector3 GetMouthPosition();
    // public System.Void ShowControllers(System.Boolean show)
    // Offset: 0x13AD878
    void ShowControllers(bool show);
    // public System.Void .ctor()
    // Offset: 0x13AD904
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRPlayer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::VRPlayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRPlayer*, creationType>()));
    }
  }; // VROSC.VRPlayer
  #pragma pack(pop)
  static check_size<sizeof(VRPlayer), 160 + sizeof(::VROSC::VRPlayer::ControllerType)> __VROSC_VRPlayerSizeCheck;
  static_assert(sizeof(VRPlayer) == 0xA4);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::VRPlayer::ControllerType, "VROSC", "VRPlayer/ControllerType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::VRPlayer::get_Right
// Il2CppName: get_Right
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::InputDevice* (VROSC::VRPlayer::*)()>(&VROSC::VRPlayer::get_Right)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::VRPlayer*), "get_Right", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::VRPlayer::get_Left
// Il2CppName: get_Left
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::InputDevice* (VROSC::VRPlayer::*)()>(&VROSC::VRPlayer::get_Left)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::VRPlayer*), "get_Left", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::VRPlayer::get_Camera
// Il2CppName: get_Camera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Camera* (VROSC::VRPlayer::*)()>(&VROSC::VRPlayer::get_Camera)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::VRPlayer*), "get_Camera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::VRPlayer::get_ScreenFade
// Il2CppName: get_ScreenFade
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::ScreenFade* (VROSC::VRPlayer::*)()>(&VROSC::VRPlayer::get_ScreenFade)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::VRPlayer*), "get_ScreenFade", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::VRPlayer::get_Highlighting
// Il2CppName: get_Highlighting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::HighlightControllerComponentsManager* (VROSC::VRPlayer::*)()>(&VROSC::VRPlayer::get_Highlighting)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::VRPlayer*), "get_Highlighting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::VRPlayer::get_TutorialInputDevices
// Il2CppName: get_TutorialInputDevices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::TutorialInputDeviceManager* (VROSC::VRPlayer::*)()>(&VROSC::VRPlayer::get_TutorialInputDevices)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::VRPlayer*), "get_TutorialInputDevices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::VRPlayer::get_HandPlacedDashboardHelper
// Il2CppName: get_HandPlacedDashboardHelper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::HandPlacedDashboardHelper* (VROSC::VRPlayer::*)()>(&VROSC::VRPlayer::get_HandPlacedDashboardHelper)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::VRPlayer*), "get_HandPlacedDashboardHelper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::VRPlayer::get_IsDebugPlayer
// Il2CppName: get_IsDebugPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::VRPlayer::*)()>(&VROSC::VRPlayer::get_IsDebugPlayer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::VRPlayer*), "get_IsDebugPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::VRPlayer::get_KeyboardAnchor
// Il2CppName: get_KeyboardAnchor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (VROSC::VRPlayer::*)()>(&VROSC::VRPlayer::get_KeyboardAnchor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::VRPlayer*), "get_KeyboardAnchor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::VRPlayer::get_InputDevices
// Il2CppName: get_InputDevices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::VROSC::InputDevice*>* (VROSC::VRPlayer::*)()>(&VROSC::VRPlayer::get_InputDevices)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::VRPlayer*), "get_InputDevices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::VRPlayer::get_Controllers
// Il2CppName: get_Controllers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::VRPlayer::ControllerType (VROSC::VRPlayer::*)()>(&VROSC::VRPlayer::get_Controllers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::VRPlayer*), "get_Controllers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::VRPlayer::set_Controllers
// Il2CppName: set_Controllers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::VRPlayer::*)(::VROSC::VRPlayer::ControllerType)>(&VROSC::VRPlayer::set_Controllers)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VROSC", "VRPlayer/ControllerType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::VRPlayer*), "set_Controllers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::VRPlayer::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::VRPlayer::*)()>(&VROSC::VRPlayer::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::VRPlayer*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::VRPlayer::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::VRPlayer::*)(::VROSC::InputSettings*)>(&VROSC::VRPlayer::Setup)> {
  static const MethodInfo* get() {
    static auto* inputSettings = &::il2cpp_utils::GetClassFromName("VROSC", "InputSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::VRPlayer*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputSettings});
  }
};
// Writing MetadataGetter for method: VROSC::VRPlayer::UpdateInput
// Il2CppName: UpdateInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::VRPlayer::*)()>(&VROSC::VRPlayer::UpdateInput)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::VRPlayer*), "UpdateInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::VRPlayer::GetControllerByHand
// Il2CppName: GetControllerByHand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::InputDevice* (VROSC::VRPlayer::*)(bool)>(&VROSC::VRPlayer::GetControllerByHand)> {
  static const MethodInfo* get() {
    static auto* right = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::VRPlayer*), "GetControllerByHand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{right});
  }
};
// Writing MetadataGetter for method: VROSC::VRPlayer::GetMouthPosition
// Il2CppName: GetMouthPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (VROSC::VRPlayer::*)()>(&VROSC::VRPlayer::GetMouthPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::VRPlayer*), "GetMouthPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::VRPlayer::ShowControllers
// Il2CppName: ShowControllers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::VRPlayer::*)(bool)>(&VROSC::VRPlayer::ShowControllers)> {
  static const MethodInfo* get() {
    static auto* show = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::VRPlayer*), "ShowControllers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{show});
  }
};
// Writing MetadataGetter for method: VROSC::VRPlayer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
