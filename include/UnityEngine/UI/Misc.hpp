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
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Forward declaring type: Misc
  class Misc;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UI::Misc);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Misc*, "UnityEngine.UI", "Misc");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.Misc
  // [TokenAttribute] Offset: FFFFFFFF
  class Misc : public ::Il2CppObject {
    public:
    // static public System.Void Destroy(UnityEngine.Object obj)
    // Offset: 0x14267C8
    static void Destroy(::UnityEngine::Object* obj);
    // static public System.Void DestroyImmediate(UnityEngine.Object obj)
    // Offset: 0x14268E4
    static void DestroyImmediate(::UnityEngine::Object* obj);
  }; // UnityEngine.UI.Misc
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::Misc::Destroy
// Il2CppName: Destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Object*)>(&UnityEngine::UI::Misc::Destroy)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Misc*), "Destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Misc::DestroyImmediate
// Il2CppName: DestroyImmediate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Object*)>(&UnityEngine::UI::Misc::DestroyImmediate)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Misc*), "DestroyImmediate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
