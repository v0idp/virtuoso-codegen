// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GUISkin
  class GUISkin;
  // Forward declaring type: Rect
  struct Rect;
  // Forward declaring type: GUIStyle
  class GUIStyle;
  // Forward declaring type: GUIContent
  class GUIContent;
}
// Forward declaring namespace: UnityEngineInternal
namespace UnityEngineInternal {
  // Forward declaring type: GenericStack
  class GenericStack;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GUI
  class GUI;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::GUI);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUI*, "UnityEngine", "GUI");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.GUI
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 5A8D00
  // [NativeHeaderAttribute] Offset: 5A8D00
  class GUI : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::GUI::WindowFunction
    class WindowFunction;
    // Get static field: static private System.Int32 s_HotTextField
    static int _get_s_HotTextField();
    // Set static field: static private System.Int32 s_HotTextField
    static void _set_s_HotTextField(int value);
    // Get static field: static private readonly System.Int32 s_BoxHash
    static int _get_s_BoxHash();
    // Set static field: static private readonly System.Int32 s_BoxHash
    static void _set_s_BoxHash(int value);
    // Get static field: static private readonly System.Int32 s_ButonHash
    static int _get_s_ButonHash();
    // Set static field: static private readonly System.Int32 s_ButonHash
    static void _set_s_ButonHash(int value);
    // Get static field: static private readonly System.Int32 s_RepeatButtonHash
    static int _get_s_RepeatButtonHash();
    // Set static field: static private readonly System.Int32 s_RepeatButtonHash
    static void _set_s_RepeatButtonHash(int value);
    // Get static field: static private readonly System.Int32 s_ToggleHash
    static int _get_s_ToggleHash();
    // Set static field: static private readonly System.Int32 s_ToggleHash
    static void _set_s_ToggleHash(int value);
    // Get static field: static private readonly System.Int32 s_ButtonGridHash
    static int _get_s_ButtonGridHash();
    // Set static field: static private readonly System.Int32 s_ButtonGridHash
    static void _set_s_ButtonGridHash(int value);
    // Get static field: static private readonly System.Int32 s_SliderHash
    static int _get_s_SliderHash();
    // Set static field: static private readonly System.Int32 s_SliderHash
    static void _set_s_SliderHash(int value);
    // Get static field: static private readonly System.Int32 s_BeginGroupHash
    static int _get_s_BeginGroupHash();
    // Set static field: static private readonly System.Int32 s_BeginGroupHash
    static void _set_s_BeginGroupHash(int value);
    // Get static field: static private readonly System.Int32 s_ScrollviewHash
    static int _get_s_ScrollviewHash();
    // Set static field: static private readonly System.Int32 s_ScrollviewHash
    static void _set_s_ScrollviewHash(int value);
    // [DebuggerBrowsableAttribute] Offset: 0x5A95D0
    // Get static field: static private System.DateTime <nextScrollStepTime>k__BackingField
    static ::System::DateTime _get_$nextScrollStepTime$k__BackingField();
    // Set static field: static private System.DateTime <nextScrollStepTime>k__BackingField
    static void _set_$nextScrollStepTime$k__BackingField(::System::DateTime value);
    // Get static field: static private UnityEngine.GUISkin s_Skin
    static ::UnityEngine::GUISkin* _get_s_Skin();
    // Set static field: static private UnityEngine.GUISkin s_Skin
    static void _set_s_Skin(::UnityEngine::GUISkin* value);
    // [DebuggerBrowsableAttribute] Offset: 0x5A960C
    // Get static field: static private UnityEngineInternal.GenericStack <scrollViewStates>k__BackingField
    static ::UnityEngineInternal::GenericStack* _get_$scrollViewStates$k__BackingField();
    // Set static field: static private UnityEngineInternal.GenericStack <scrollViewStates>k__BackingField
    static void _set_$scrollViewStates$k__BackingField(::UnityEngineInternal::GenericStack* value);
    // static public System.Void set_changed(System.Boolean value)
    // Offset: 0x1289D34
    static void set_changed(bool value);
    // static System.Void set_nextScrollStepTime(System.DateTime value)
    // Offset: 0x128A0D4
    static void set_nextScrollStepTime(::System::DateTime value);
    // static public UnityEngine.GUISkin get_skin()
    // Offset: 0x128A2E4
    static ::UnityEngine::GUISkin* get_skin();
    // static public System.Void set_skin(UnityEngine.GUISkin value)
    // Offset: 0x128A13C
    static void set_skin(::UnityEngine::GUISkin* value);
    // static UnityEngineInternal.GenericStack get_scrollViewStates()
    // Offset: 0x128B354
    static ::UnityEngineInternal::GenericStack* get_scrollViewStates();
    // static private System.Void .cctor()
    // Offset: 0x1289E28
    static void _cctor();
    // static System.Void GrabMouseControl(System.Int32 id)
    // Offset: 0x1289D74
    static void GrabMouseControl(int id);
    // static System.Boolean HasMouseControl(System.Int32 id)
    // Offset: 0x1289DB4
    static bool HasMouseControl(int id);
    // static System.Void ReleaseMouseControl()
    // Offset: 0x1289DF4
    static void ReleaseMouseControl();
    // static System.Void DoSetSkin(UnityEngine.GUISkin newSkin)
    // Offset: 0x128A22C
    static void DoSetSkin(::UnityEngine::GUISkin* newSkin);
    // static public System.Void Label(UnityEngine.Rect position, System.String text, UnityEngine.GUIStyle style)
    // Offset: 0x128A4B8
    static void Label(::UnityEngine::Rect position, ::StringW text, ::UnityEngine::GUIStyle* style);
    // static public System.Void Label(UnityEngine.Rect position, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
    // Offset: 0x128A640
    static void Label(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style);
    // static public System.Boolean Button(UnityEngine.Rect position, System.String text)
    // Offset: 0x128A890
    static bool Button(::UnityEngine::Rect position, ::StringW text);
    // static public System.Boolean Button(UnityEngine.Rect position, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
    // Offset: 0x128A97C
    static bool Button(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style);
    // static System.Boolean Button(UnityEngine.Rect position, System.Int32 id, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
    // Offset: 0x128AAA8
    static bool Button(::UnityEngine::Rect position, int id, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style);
    // static System.Boolean DoControl(UnityEngine.Rect position, System.Int32 id, System.Boolean on, System.Boolean hover, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
    // Offset: 0x128AC70
    static bool DoControl(::UnityEngine::Rect position, int id, bool on, bool hover, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style);
    // static private System.Void DoLabel(UnityEngine.Rect position, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
    // Offset: 0x128A6E4
    static void DoLabel(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style);
    // static System.Boolean DoButton(UnityEngine.Rect position, System.Int32 id, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
    // Offset: 0x128AB54
    static bool DoButton(::UnityEngine::Rect position, int id, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style);
    // static System.Void CallWindowDelegate(UnityEngine.GUI/UnityEngine.WindowFunction func, System.Int32 id, System.Int32 instanceID, UnityEngine.GUISkin _skin, System.Int32 forceRect, System.Single width, System.Single height, UnityEngine.GUIStyle style)
    // Offset: 0x128B3B8
    static void CallWindowDelegate(::UnityEngine::GUI::WindowFunction* func, int id, int instanceID, ::UnityEngine::GUISkin* _skin, int forceRect, float width, float height, ::UnityEngine::GUIStyle* style);
  }; // UnityEngine.GUI
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::GUI::set_changed
// Il2CppName: set_changed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&UnityEngine::GUI::set_changed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUI*), "set_changed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUI::set_nextScrollStepTime
// Il2CppName: set_nextScrollStepTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::DateTime)>(&UnityEngine::GUI::set_nextScrollStepTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUI*), "set_nextScrollStepTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUI::get_skin
// Il2CppName: get_skin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GUISkin* (*)()>(&UnityEngine::GUI::get_skin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUI*), "get_skin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUI::set_skin
// Il2CppName: set_skin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::GUISkin*)>(&UnityEngine::GUI::set_skin)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUISkin")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUI*), "set_skin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUI::get_scrollViewStates
// Il2CppName: get_scrollViewStates
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngineInternal::GenericStack* (*)()>(&UnityEngine::GUI::get_scrollViewStates)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUI*), "get_scrollViewStates", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUI::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::GUI::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUI*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUI::GrabMouseControl
// Il2CppName: GrabMouseControl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&UnityEngine::GUI::GrabMouseControl)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUI*), "GrabMouseControl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUI::HasMouseControl
// Il2CppName: HasMouseControl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&UnityEngine::GUI::HasMouseControl)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUI*), "HasMouseControl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUI::ReleaseMouseControl
// Il2CppName: ReleaseMouseControl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::GUI::ReleaseMouseControl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUI*), "ReleaseMouseControl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUI::DoSetSkin
// Il2CppName: DoSetSkin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::GUISkin*)>(&UnityEngine::GUI::DoSetSkin)> {
  static const MethodInfo* get() {
    static auto* newSkin = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUISkin")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUI*), "DoSetSkin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newSkin});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUI::Label
// Il2CppName: Label
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rect, ::StringW, ::UnityEngine::GUIStyle*)>(&UnityEngine::GUI::Label)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIStyle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUI*), "Label", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, text, style});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUI::Label
// Il2CppName: Label
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*)>(&UnityEngine::GUI::Label)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    static auto* content = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIContent")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIStyle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUI*), "Label", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, content, style});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUI::Button
// Il2CppName: Button
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Rect, ::StringW)>(&UnityEngine::GUI::Button)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUI*), "Button", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, text});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUI::Button
// Il2CppName: Button
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*)>(&UnityEngine::GUI::Button)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    static auto* content = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIContent")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIStyle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUI*), "Button", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, content, style});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUI::Button
// Il2CppName: Button
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Rect, int, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*)>(&UnityEngine::GUI::Button)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* content = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIContent")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIStyle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUI*), "Button", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, id, content, style});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUI::DoControl
// Il2CppName: DoControl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Rect, int, bool, bool, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*)>(&UnityEngine::GUI::DoControl)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* on = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* hover = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* content = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIContent")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIStyle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUI*), "DoControl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, id, on, hover, content, style});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUI::DoLabel
// Il2CppName: DoLabel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*)>(&UnityEngine::GUI::DoLabel)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    static auto* content = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIContent")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIStyle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUI*), "DoLabel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, content, style});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUI::DoButton
// Il2CppName: DoButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Rect, int, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*)>(&UnityEngine::GUI::DoButton)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* content = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIContent")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIStyle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUI*), "DoButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, id, content, style});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUI::CallWindowDelegate
// Il2CppName: CallWindowDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::GUI::WindowFunction*, int, int, ::UnityEngine::GUISkin*, int, float, float, ::UnityEngine::GUIStyle*)>(&UnityEngine::GUI::CallWindowDelegate)> {
  static const MethodInfo* get() {
    static auto* func = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUI/WindowFunction")->byval_arg;
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* instanceID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* _skin = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUISkin")->byval_arg;
    static auto* forceRect = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIStyle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUI*), "CallWindowDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{func, id, instanceID, _skin, forceRect, width, height, style});
  }
};