// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: CanvasUpdate
  struct CanvasUpdate;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: ITextElement
  class ITextElement;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::TMPro::ITextElement);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::ITextElement*, "TMPro", "ITextElement");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.ITextElement
  // [TokenAttribute] Offset: FFFFFFFF
  class ITextElement {
    public:
    // public UnityEngine.Material get_sharedMaterial()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Material* get_sharedMaterial();
    // public System.Void Rebuild(UnityEngine.UI.CanvasUpdate update)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Rebuild(::UnityEngine::UI::CanvasUpdate update);
    // public System.Int32 GetInstanceID()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int GetInstanceID();
  }; // TMPro.ITextElement
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::ITextElement::get_sharedMaterial
// Il2CppName: get_sharedMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (TMPro::ITextElement::*)()>(&TMPro::ITextElement::get_sharedMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::ITextElement*), "get_sharedMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::ITextElement::Rebuild
// Il2CppName: Rebuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::ITextElement::*)(::UnityEngine::UI::CanvasUpdate)>(&TMPro::ITextElement::Rebuild)> {
  static const MethodInfo* get() {
    static auto* update = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "CanvasUpdate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::ITextElement*), "Rebuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{update});
  }
};
// Writing MetadataGetter for method: TMPro::ITextElement::GetInstanceID
// Il2CppName: GetInstanceID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (TMPro::ITextElement::*)()>(&TMPro::ITextElement::GetInstanceID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::ITextElement*), "GetInstanceID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};