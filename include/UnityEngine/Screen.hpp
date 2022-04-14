// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ScreenOrientation
  struct ScreenOrientation;
  // Forward declaring type: Resolution
  struct Resolution;
  // Forward declaring type: FullScreenMode
  struct FullScreenMode;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Screen
  class Screen;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Screen);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Screen*, "UnityEngine", "Screen");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Screen
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 65F684
  // [NativeHeaderAttribute] Offset: 65F684
  // [StaticAccessorAttribute] Offset: 65F684
  class Screen : public ::Il2CppObject {
    public:
    // static public System.Int32 get_width()
    // Offset: 0xBD254C
    static int get_width();
    // static public System.Int32 get_height()
    // Offset: 0xBD2580
    static int get_height();
    // static public System.Single get_dpi()
    // Offset: 0xBD25B4
    static float get_dpi();
    // static public UnityEngine.ScreenOrientation get_orientation()
    // Offset: 0xBD261C
    static ::UnityEngine::ScreenOrientation get_orientation();
    // static public UnityEngine.Resolution get_currentResolution()
    // Offset: 0xBD2650
    static ::UnityEngine::Resolution get_currentResolution();
    // static public System.Boolean get_fullScreen()
    // Offset: 0xBD26E8
    static bool get_fullScreen();
    // static public System.Void set_fullScreen(System.Boolean value)
    // Offset: 0xBD271C
    static void set_fullScreen(bool value);
    // static public UnityEngine.FullScreenMode get_fullScreenMode()
    // Offset: 0xBD275C
    static ::UnityEngine::FullScreenMode get_fullScreenMode();
    // static private UnityEngine.ScreenOrientation GetScreenOrientation()
    // Offset: 0xBD25E8
    static ::UnityEngine::ScreenOrientation GetScreenOrientation();
    // static private System.Void get_currentResolution_Injected(out UnityEngine.Resolution ret)
    // Offset: 0xBD26A8
    static void get_currentResolution_Injected(ByRef<::UnityEngine::Resolution> ret);
  }; // UnityEngine.Screen
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Screen::get_width
// Il2CppName: get_width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&UnityEngine::Screen::get_width)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Screen*), "get_width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Screen::get_height
// Il2CppName: get_height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&UnityEngine::Screen::get_height)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Screen*), "get_height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Screen::get_dpi
// Il2CppName: get_dpi
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&UnityEngine::Screen::get_dpi)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Screen*), "get_dpi", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Screen::get_orientation
// Il2CppName: get_orientation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ScreenOrientation (*)()>(&UnityEngine::Screen::get_orientation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Screen*), "get_orientation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Screen::get_currentResolution
// Il2CppName: get_currentResolution
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Resolution (*)()>(&UnityEngine::Screen::get_currentResolution)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Screen*), "get_currentResolution", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Screen::get_fullScreen
// Il2CppName: get_fullScreen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::Screen::get_fullScreen)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Screen*), "get_fullScreen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Screen::set_fullScreen
// Il2CppName: set_fullScreen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&UnityEngine::Screen::set_fullScreen)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Screen*), "set_fullScreen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Screen::get_fullScreenMode
// Il2CppName: get_fullScreenMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::FullScreenMode (*)()>(&UnityEngine::Screen::get_fullScreenMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Screen*), "get_fullScreenMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Screen::GetScreenOrientation
// Il2CppName: GetScreenOrientation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ScreenOrientation (*)()>(&UnityEngine::Screen::GetScreenOrientation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Screen*), "GetScreenOrientation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Screen::get_currentResolution_Injected
// Il2CppName: get_currentResolution_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Resolution>)>(&UnityEngine::Screen::get_currentResolution_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Resolution")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Screen*), "get_currentResolution_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
