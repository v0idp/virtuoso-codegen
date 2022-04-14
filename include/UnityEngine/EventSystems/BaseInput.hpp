// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine/EventSystems/UIBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: IMECompositionMode
  struct IMECompositionMode;
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: Touch
  struct Touch;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: BaseInput
  class BaseInput;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::EventSystems::BaseInput);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::BaseInput*, "UnityEngine.EventSystems", "BaseInput");
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.BaseInput
  // [TokenAttribute] Offset: FFFFFFFF
  class BaseInput : public ::UnityEngine::EventSystems::UIBehaviour {
    public:
    // public System.String get_compositionString()
    // Offset: 0xEAB234
    ::StringW get_compositionString();
    // public UnityEngine.IMECompositionMode get_imeCompositionMode()
    // Offset: 0xEAB23C
    ::UnityEngine::IMECompositionMode get_imeCompositionMode();
    // public System.Void set_imeCompositionMode(UnityEngine.IMECompositionMode value)
    // Offset: 0xEAB244
    void set_imeCompositionMode(::UnityEngine::IMECompositionMode value);
    // public UnityEngine.Vector2 get_compositionCursorPos()
    // Offset: 0xEAB250
    ::UnityEngine::Vector2 get_compositionCursorPos();
    // public System.Void set_compositionCursorPos(UnityEngine.Vector2 value)
    // Offset: 0xEAB258
    void set_compositionCursorPos(::UnityEngine::Vector2 value);
    // public System.Boolean get_mousePresent()
    // Offset: 0xEAB260
    bool get_mousePresent();
    // public UnityEngine.Vector2 get_mousePosition()
    // Offset: 0xEAB28C
    ::UnityEngine::Vector2 get_mousePosition();
    // public UnityEngine.Vector2 get_mouseScrollDelta()
    // Offset: 0xEAB294
    ::UnityEngine::Vector2 get_mouseScrollDelta();
    // public System.Boolean get_touchSupported()
    // Offset: 0xEAB29C
    bool get_touchSupported();
    // public System.Int32 get_touchCount()
    // Offset: 0xEAB2A4
    int get_touchCount();
    // public System.Boolean GetMouseButtonDown(System.Int32 button)
    // Offset: 0xEAB268
    bool GetMouseButtonDown(int button);
    // public System.Boolean GetMouseButtonUp(System.Int32 button)
    // Offset: 0xEAB274
    bool GetMouseButtonUp(int button);
    // public System.Boolean GetMouseButton(System.Int32 button)
    // Offset: 0xEAB280
    bool GetMouseButton(int button);
    // public UnityEngine.Touch GetTouch(System.Int32 index)
    // Offset: 0xEAB2AC
    ::UnityEngine::Touch GetTouch(int index);
    // public System.Single GetAxisRaw(System.String axisName)
    // Offset: 0xEAB2F0
    float GetAxisRaw(::StringW axisName);
    // public System.Boolean GetButtonDown(System.String buttonName)
    // Offset: 0xEAB2FC
    bool GetButtonDown(::StringW buttonName);
    // public System.Void .ctor()
    // Offset: 0xEAB308
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseInput* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::EventSystems::BaseInput::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseInput*, creationType>()));
    }
  }; // UnityEngine.EventSystems.BaseInput
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseInput::get_compositionString
// Il2CppName: get_compositionString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::EventSystems::BaseInput::*)()>(&UnityEngine::EventSystems::BaseInput::get_compositionString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseInput*), "get_compositionString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseInput::get_imeCompositionMode
// Il2CppName: get_imeCompositionMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::IMECompositionMode (UnityEngine::EventSystems::BaseInput::*)()>(&UnityEngine::EventSystems::BaseInput::get_imeCompositionMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseInput*), "get_imeCompositionMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseInput::set_imeCompositionMode
// Il2CppName: set_imeCompositionMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::BaseInput::*)(::UnityEngine::IMECompositionMode)>(&UnityEngine::EventSystems::BaseInput::set_imeCompositionMode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "IMECompositionMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseInput*), "set_imeCompositionMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseInput::get_compositionCursorPos
// Il2CppName: get_compositionCursorPos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::EventSystems::BaseInput::*)()>(&UnityEngine::EventSystems::BaseInput::get_compositionCursorPos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseInput*), "get_compositionCursorPos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseInput::set_compositionCursorPos
// Il2CppName: set_compositionCursorPos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::BaseInput::*)(::UnityEngine::Vector2)>(&UnityEngine::EventSystems::BaseInput::set_compositionCursorPos)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseInput*), "set_compositionCursorPos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseInput::get_mousePresent
// Il2CppName: get_mousePresent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::BaseInput::*)()>(&UnityEngine::EventSystems::BaseInput::get_mousePresent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseInput*), "get_mousePresent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseInput::get_mousePosition
// Il2CppName: get_mousePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::EventSystems::BaseInput::*)()>(&UnityEngine::EventSystems::BaseInput::get_mousePosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseInput*), "get_mousePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseInput::get_mouseScrollDelta
// Il2CppName: get_mouseScrollDelta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::EventSystems::BaseInput::*)()>(&UnityEngine::EventSystems::BaseInput::get_mouseScrollDelta)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseInput*), "get_mouseScrollDelta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseInput::get_touchSupported
// Il2CppName: get_touchSupported
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::BaseInput::*)()>(&UnityEngine::EventSystems::BaseInput::get_touchSupported)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseInput*), "get_touchSupported", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseInput::get_touchCount
// Il2CppName: get_touchCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::EventSystems::BaseInput::*)()>(&UnityEngine::EventSystems::BaseInput::get_touchCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseInput*), "get_touchCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseInput::GetMouseButtonDown
// Il2CppName: GetMouseButtonDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::BaseInput::*)(int)>(&UnityEngine::EventSystems::BaseInput::GetMouseButtonDown)> {
  static const MethodInfo* get() {
    static auto* button = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseInput*), "GetMouseButtonDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{button});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseInput::GetMouseButtonUp
// Il2CppName: GetMouseButtonUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::BaseInput::*)(int)>(&UnityEngine::EventSystems::BaseInput::GetMouseButtonUp)> {
  static const MethodInfo* get() {
    static auto* button = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseInput*), "GetMouseButtonUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{button});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseInput::GetMouseButton
// Il2CppName: GetMouseButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::BaseInput::*)(int)>(&UnityEngine::EventSystems::BaseInput::GetMouseButton)> {
  static const MethodInfo* get() {
    static auto* button = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseInput*), "GetMouseButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{button});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseInput::GetTouch
// Il2CppName: GetTouch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Touch (UnityEngine::EventSystems::BaseInput::*)(int)>(&UnityEngine::EventSystems::BaseInput::GetTouch)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseInput*), "GetTouch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseInput::GetAxisRaw
// Il2CppName: GetAxisRaw
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::EventSystems::BaseInput::*)(::StringW)>(&UnityEngine::EventSystems::BaseInput::GetAxisRaw)> {
  static const MethodInfo* get() {
    static auto* axisName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseInput*), "GetAxisRaw", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{axisName});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseInput::GetButtonDown
// Il2CppName: GetButtonDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::BaseInput::*)(::StringW)>(&UnityEngine::EventSystems::BaseInput::GetButtonDown)> {
  static const MethodInfo* get() {
    static auto* buttonName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::BaseInput*), "GetButtonDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buttonName});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::BaseInput::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
