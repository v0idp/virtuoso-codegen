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
  // Forward declaring type: Color
  struct Color;
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Gizmos
  class Gizmos;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Gizmos);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Gizmos*, "UnityEngine", "Gizmos");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Gizmos
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 5653AC
  // [StaticAccessorAttribute] Offset: 5653AC
  class Gizmos : public ::Il2CppObject {
    public:
    // static public System.Void set_color(UnityEngine.Color value)
    // Offset: 0xE3BDD8
    static void set_color(::UnityEngine::Color value);
    // static public System.Void DrawLine(UnityEngine.Vector3 from, UnityEngine.Vector3 to)
    // Offset: 0xE3BA74
    static void DrawLine(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to);
    // static public System.Void DrawWireSphere(UnityEngine.Vector3 center, System.Single radius)
    // Offset: 0xE3BB20
    static void DrawWireSphere(::UnityEngine::Vector3 center, float radius);
    // static public System.Void DrawSphere(UnityEngine.Vector3 center, System.Single radius)
    // Offset: 0xE3BBD0
    static void DrawSphere(::UnityEngine::Vector3 center, float radius);
    // static public System.Void DrawWireCube(UnityEngine.Vector3 center, UnityEngine.Vector3 size)
    // Offset: 0xE3BC80
    static void DrawWireCube(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 size);
    // static public System.Void DrawCube(UnityEngine.Vector3 center, UnityEngine.Vector3 size)
    // Offset: 0xE3BD2C
    static void DrawCube(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 size);
    // static private System.Void DrawLine_Injected(ref UnityEngine.Vector3 from, ref UnityEngine.Vector3 to)
    // Offset: 0xE3BAD0
    static void DrawLine_Injected(ByRef<::UnityEngine::Vector3> from, ByRef<::UnityEngine::Vector3> to);
    // static private System.Void DrawWireSphere_Injected(ref UnityEngine.Vector3 center, System.Single radius)
    // Offset: 0xE3BB80
    static void DrawWireSphere_Injected(ByRef<::UnityEngine::Vector3> center, float radius);
    // static private System.Void DrawSphere_Injected(ref UnityEngine.Vector3 center, System.Single radius)
    // Offset: 0xE3BC30
    static void DrawSphere_Injected(ByRef<::UnityEngine::Vector3> center, float radius);
    // static private System.Void DrawWireCube_Injected(ref UnityEngine.Vector3 center, ref UnityEngine.Vector3 size)
    // Offset: 0xE3BCDC
    static void DrawWireCube_Injected(ByRef<::UnityEngine::Vector3> center, ByRef<::UnityEngine::Vector3> size);
    // static private System.Void DrawCube_Injected(ref UnityEngine.Vector3 center, ref UnityEngine.Vector3 size)
    // Offset: 0xE3BD88
    static void DrawCube_Injected(ByRef<::UnityEngine::Vector3> center, ByRef<::UnityEngine::Vector3> size);
    // static private System.Void set_color_Injected(ref UnityEngine.Color value)
    // Offset: 0xE3BE28
    static void set_color_Injected(ByRef<::UnityEngine::Color> value);
  }; // UnityEngine.Gizmos
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Gizmos::set_color
// Il2CppName: set_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Color)>(&UnityEngine::Gizmos::set_color)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Gizmos*), "set_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Gizmos::DrawLine
// Il2CppName: DrawLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&UnityEngine::Gizmos::DrawLine)> {
  static const MethodInfo* get() {
    static auto* from = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* to = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Gizmos*), "DrawLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{from, to});
  }
};
// Writing MetadataGetter for method: UnityEngine::Gizmos::DrawWireSphere
// Il2CppName: DrawWireSphere
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Vector3, float)>(&UnityEngine::Gizmos::DrawWireSphere)> {
  static const MethodInfo* get() {
    static auto* center = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* radius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Gizmos*), "DrawWireSphere", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{center, radius});
  }
};
// Writing MetadataGetter for method: UnityEngine::Gizmos::DrawSphere
// Il2CppName: DrawSphere
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Vector3, float)>(&UnityEngine::Gizmos::DrawSphere)> {
  static const MethodInfo* get() {
    static auto* center = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* radius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Gizmos*), "DrawSphere", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{center, radius});
  }
};
// Writing MetadataGetter for method: UnityEngine::Gizmos::DrawWireCube
// Il2CppName: DrawWireCube
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&UnityEngine::Gizmos::DrawWireCube)> {
  static const MethodInfo* get() {
    static auto* center = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Gizmos*), "DrawWireCube", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{center, size});
  }
};
// Writing MetadataGetter for method: UnityEngine::Gizmos::DrawCube
// Il2CppName: DrawCube
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&UnityEngine::Gizmos::DrawCube)> {
  static const MethodInfo* get() {
    static auto* center = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Gizmos*), "DrawCube", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{center, size});
  }
};
// Writing MetadataGetter for method: UnityEngine::Gizmos::DrawLine_Injected
// Il2CppName: DrawLine_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>)>(&UnityEngine::Gizmos::DrawLine_Injected)> {
  static const MethodInfo* get() {
    static auto* from = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* to = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Gizmos*), "DrawLine_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{from, to});
  }
};
// Writing MetadataGetter for method: UnityEngine::Gizmos::DrawWireSphere_Injected
// Il2CppName: DrawWireSphere_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Vector3>, float)>(&UnityEngine::Gizmos::DrawWireSphere_Injected)> {
  static const MethodInfo* get() {
    static auto* center = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* radius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Gizmos*), "DrawWireSphere_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{center, radius});
  }
};
// Writing MetadataGetter for method: UnityEngine::Gizmos::DrawSphere_Injected
// Il2CppName: DrawSphere_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Vector3>, float)>(&UnityEngine::Gizmos::DrawSphere_Injected)> {
  static const MethodInfo* get() {
    static auto* center = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* radius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Gizmos*), "DrawSphere_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{center, radius});
  }
};
// Writing MetadataGetter for method: UnityEngine::Gizmos::DrawWireCube_Injected
// Il2CppName: DrawWireCube_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>)>(&UnityEngine::Gizmos::DrawWireCube_Injected)> {
  static const MethodInfo* get() {
    static auto* center = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Gizmos*), "DrawWireCube_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{center, size});
  }
};
// Writing MetadataGetter for method: UnityEngine::Gizmos::DrawCube_Injected
// Il2CppName: DrawCube_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>)>(&UnityEngine::Gizmos::DrawCube_Injected)> {
  static const MethodInfo* get() {
    static auto* center = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Gizmos*), "DrawCube_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{center, size});
  }
};
// Writing MetadataGetter for method: UnityEngine::Gizmos::set_color_Injected
// Il2CppName: set_color_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Color>)>(&UnityEngine::Gizmos::set_color_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Gizmos*), "set_color_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
