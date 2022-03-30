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
  // [NativeHeaderAttribute] Offset: 5654A8
  // [StaticAccessorAttribute] Offset: 5654A8
  // [NativeHeaderAttribute] Offset: 5654A8
  class Screen : public ::Il2CppObject {
    public:
    // static public System.Int32 get_width()
    // Offset: 0x9DD7A4
    static int get_width();
    // static public System.Int32 get_height()
    // Offset: 0x9DD7D8
    static int get_height();
    // static public System.Single get_dpi()
    // Offset: 0x9DD80C
    static float get_dpi();
    // static public UnityEngine.ScreenOrientation get_orientation()
    // Offset: 0x9DD874
    static ::UnityEngine::ScreenOrientation get_orientation();
    // static public System.Boolean get_fullScreen()
    // Offset: 0x9DD8A8
    static bool get_fullScreen();
    // static public System.Void set_fullScreen(System.Boolean value)
    // Offset: 0x9DD8DC
    static void set_fullScreen(bool value);
    // static public UnityEngine.FullScreenMode get_fullScreenMode()
    // Offset: 0x9DD91C
    static ::UnityEngine::FullScreenMode get_fullScreenMode();
    // static private UnityEngine.ScreenOrientation GetScreenOrientation()
    // Offset: 0x9DD840
    static ::UnityEngine::ScreenOrientation GetScreenOrientation();
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