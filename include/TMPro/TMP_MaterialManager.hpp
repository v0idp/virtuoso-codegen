// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_FontAsset
  class TMP_FontAsset;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: MaskableGraphic
  class MaskableGraphic;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_MaterialManager
  class TMP_MaterialManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::TMPro::TMP_MaterialManager);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_MaterialManager*, "TMPro", "TMP_MaterialManager");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_MaterialManager
  // [TokenAttribute] Offset: FFFFFFFF
  class TMP_MaterialManager : public ::Il2CppObject {
    public:
    // Nested type: ::TMPro::TMP_MaterialManager::FallbackMaterial
    class FallbackMaterial;
    // Nested type: ::TMPro::TMP_MaterialManager::MaskingMaterial
    class MaskingMaterial;
    // Nested type: ::TMPro::TMP_MaterialManager::$$c__DisplayClass9_0
    class $$c__DisplayClass9_0;
    // Nested type: ::TMPro::TMP_MaterialManager::$$c__DisplayClass11_0
    class $$c__DisplayClass11_0;
    // Nested type: ::TMPro::TMP_MaterialManager::$$c__DisplayClass12_0
    class $$c__DisplayClass12_0;
    // Nested type: ::TMPro::TMP_MaterialManager::$$c__DisplayClass13_0
    class $$c__DisplayClass13_0;
    // Get static field: static private System.Collections.Generic.List`1<TMPro.TMP_MaterialManager/TMPro.MaskingMaterial> m_materialList
    static ::System::Collections::Generic::List_1<::TMPro::TMP_MaterialManager::MaskingMaterial*>* _get_m_materialList();
    // Set static field: static private System.Collections.Generic.List`1<TMPro.TMP_MaterialManager/TMPro.MaskingMaterial> m_materialList
    static void _set_m_materialList(::System::Collections::Generic::List_1<::TMPro::TMP_MaterialManager::MaskingMaterial*>* value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.Int64,TMPro.TMP_MaterialManager/TMPro.FallbackMaterial> m_fallbackMaterials
    static ::System::Collections::Generic::Dictionary_2<int64_t, ::TMPro::TMP_MaterialManager::FallbackMaterial*>* _get_m_fallbackMaterials();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.Int64,TMPro.TMP_MaterialManager/TMPro.FallbackMaterial> m_fallbackMaterials
    static void _set_m_fallbackMaterials(::System::Collections::Generic::Dictionary_2<int64_t, ::TMPro::TMP_MaterialManager::FallbackMaterial*>* value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.Int32,System.Int64> m_fallbackMaterialLookup
    static ::System::Collections::Generic::Dictionary_2<int, int64_t>* _get_m_fallbackMaterialLookup();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.Int32,System.Int64> m_fallbackMaterialLookup
    static void _set_m_fallbackMaterialLookup(::System::Collections::Generic::Dictionary_2<int, int64_t>* value);
    // Get static field: static private System.Collections.Generic.List`1<TMPro.TMP_MaterialManager/TMPro.FallbackMaterial> m_fallbackCleanupList
    static ::System::Collections::Generic::List_1<::TMPro::TMP_MaterialManager::FallbackMaterial*>* _get_m_fallbackCleanupList();
    // Set static field: static private System.Collections.Generic.List`1<TMPro.TMP_MaterialManager/TMPro.FallbackMaterial> m_fallbackCleanupList
    static void _set_m_fallbackCleanupList(::System::Collections::Generic::List_1<::TMPro::TMP_MaterialManager::FallbackMaterial*>* value);
    // Get static field: static private System.Boolean isFallbackListDirty
    static bool _get_isFallbackListDirty();
    // Set static field: static private System.Boolean isFallbackListDirty
    static void _set_isFallbackListDirty(bool value);
    // static private System.Void .cctor()
    // Offset: 0x103C084
    static void _cctor();
    // static private System.Void OnPreRender()
    // Offset: 0x103C230
    static void OnPreRender();
    // static public UnityEngine.Material GetStencilMaterial(UnityEngine.Material baseMaterial, System.Int32 stencilID)
    // Offset: 0x103C510
    static ::UnityEngine::Material* GetStencilMaterial(::UnityEngine::Material* baseMaterial, int stencilID);
    // static public System.Void ReleaseStencilMaterial(UnityEngine.Material stencilMaterial)
    // Offset: 0x103C904
    static void ReleaseStencilMaterial(::UnityEngine::Material* stencilMaterial);
    // static public UnityEngine.Material GetBaseMaterial(UnityEngine.Material stencilMaterial)
    // Offset: 0x103CB94
    static ::UnityEngine::Material* GetBaseMaterial(::UnityEngine::Material* stencilMaterial);
    // static public UnityEngine.Material SetStencil(UnityEngine.Material material, System.Int32 stencilID)
    // Offset: 0x103CD28
    static ::UnityEngine::Material* SetStencil(::UnityEngine::Material* material, int stencilID);
    // static public System.Void AddMaskingMaterial(UnityEngine.Material baseMaterial, UnityEngine.Material stencilMaterial, System.Int32 stencilID)
    // Offset: 0x103CE10
    static void AddMaskingMaterial(::UnityEngine::Material* baseMaterial, ::UnityEngine::Material* stencilMaterial, int stencilID);
    // static public System.Void RemoveStencilMaterial(UnityEngine.Material stencilMaterial)
    // Offset: 0x103D08C
    static void RemoveStencilMaterial(::UnityEngine::Material* stencilMaterial);
    // static public System.Void ReleaseBaseMaterial(UnityEngine.Material baseMaterial)
    // Offset: 0x103D210
    static void ReleaseBaseMaterial(::UnityEngine::Material* baseMaterial);
    // static public System.Void ClearMaterials()
    // Offset: 0x103D834
    static void ClearMaterials();
    // static public System.Int32 GetStencilID(UnityEngine.GameObject obj)
    // Offset: 0x103DA20
    static int GetStencilID(::UnityEngine::GameObject* obj);
    // static public UnityEngine.Material GetMaterialForRendering(UnityEngine.UI.MaskableGraphic graphic, UnityEngine.Material baseMaterial)
    // Offset: 0x103DEF8
    static ::UnityEngine::Material* GetMaterialForRendering(::UnityEngine::UI::MaskableGraphic* graphic, ::UnityEngine::Material* baseMaterial);
    // static private UnityEngine.Transform FindRootSortOverrideCanvas(UnityEngine.Transform start)
    // Offset: 0x103DD38
    static ::UnityEngine::Transform* FindRootSortOverrideCanvas(::UnityEngine::Transform* start);
    // static UnityEngine.Material GetFallbackMaterial(TMPro.TMP_FontAsset fontAsset, UnityEngine.Material sourceMaterial, System.Int32 atlasIndex)
    // Offset: 0x103E118
    static ::UnityEngine::Material* GetFallbackMaterial(::TMPro::TMP_FontAsset* fontAsset, ::UnityEngine::Material* sourceMaterial, int atlasIndex);
    // static public UnityEngine.Material GetFallbackMaterial(UnityEngine.Material sourceMaterial, UnityEngine.Material targetMaterial)
    // Offset: 0x103E69C
    static ::UnityEngine::Material* GetFallbackMaterial(::UnityEngine::Material* sourceMaterial, ::UnityEngine::Material* targetMaterial);
    // static public System.Void AddFallbackMaterialReference(UnityEngine.Material targetMaterial)
    // Offset: 0x103EAFC
    static void AddFallbackMaterialReference(::UnityEngine::Material* targetMaterial);
    // static public System.Void RemoveFallbackMaterialReference(UnityEngine.Material targetMaterial)
    // Offset: 0x103EC5C
    static void RemoveFallbackMaterialReference(::UnityEngine::Material* targetMaterial);
    // static public System.Void CleanupFallbackMaterials()
    // Offset: 0x103C2BC
    static void CleanupFallbackMaterials();
    // static public System.Void ReleaseFallbackMaterial(UnityEngine.Material fallbackMaterial)
    // Offset: 0x103EE0C
    static void ReleaseFallbackMaterial(::UnityEngine::Material* fallbackMaterial);
    // static public System.Void CopyMaterialPresetProperties(UnityEngine.Material source, UnityEngine.Material destination)
    // Offset: 0x103E414
    static void CopyMaterialPresetProperties(::UnityEngine::Material* source, ::UnityEngine::Material* destination);
  }; // TMPro.TMP_MaterialManager
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_MaterialManager::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&TMPro::TMP_MaterialManager::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_MaterialManager*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_MaterialManager::OnPreRender
// Il2CppName: OnPreRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&TMPro::TMP_MaterialManager::OnPreRender)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_MaterialManager*), "OnPreRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_MaterialManager::GetStencilMaterial
// Il2CppName: GetStencilMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)(::UnityEngine::Material*, int)>(&TMPro::TMP_MaterialManager::GetStencilMaterial)> {
  static const MethodInfo* get() {
    static auto* baseMaterial = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* stencilID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_MaterialManager*), "GetStencilMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{baseMaterial, stencilID});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_MaterialManager::ReleaseStencilMaterial
// Il2CppName: ReleaseStencilMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Material*)>(&TMPro::TMP_MaterialManager::ReleaseStencilMaterial)> {
  static const MethodInfo* get() {
    static auto* stencilMaterial = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_MaterialManager*), "ReleaseStencilMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stencilMaterial});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_MaterialManager::GetBaseMaterial
// Il2CppName: GetBaseMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)(::UnityEngine::Material*)>(&TMPro::TMP_MaterialManager::GetBaseMaterial)> {
  static const MethodInfo* get() {
    static auto* stencilMaterial = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_MaterialManager*), "GetBaseMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stencilMaterial});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_MaterialManager::SetStencil
// Il2CppName: SetStencil
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)(::UnityEngine::Material*, int)>(&TMPro::TMP_MaterialManager::SetStencil)> {
  static const MethodInfo* get() {
    static auto* material = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* stencilID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_MaterialManager*), "SetStencil", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{material, stencilID});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_MaterialManager::AddMaskingMaterial
// Il2CppName: AddMaskingMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Material*, ::UnityEngine::Material*, int)>(&TMPro::TMP_MaterialManager::AddMaskingMaterial)> {
  static const MethodInfo* get() {
    static auto* baseMaterial = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* stencilMaterial = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* stencilID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_MaterialManager*), "AddMaskingMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{baseMaterial, stencilMaterial, stencilID});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_MaterialManager::RemoveStencilMaterial
// Il2CppName: RemoveStencilMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Material*)>(&TMPro::TMP_MaterialManager::RemoveStencilMaterial)> {
  static const MethodInfo* get() {
    static auto* stencilMaterial = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_MaterialManager*), "RemoveStencilMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stencilMaterial});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_MaterialManager::ReleaseBaseMaterial
// Il2CppName: ReleaseBaseMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Material*)>(&TMPro::TMP_MaterialManager::ReleaseBaseMaterial)> {
  static const MethodInfo* get() {
    static auto* baseMaterial = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_MaterialManager*), "ReleaseBaseMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{baseMaterial});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_MaterialManager::ClearMaterials
// Il2CppName: ClearMaterials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&TMPro::TMP_MaterialManager::ClearMaterials)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_MaterialManager*), "ClearMaterials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_MaterialManager::GetStencilID
// Il2CppName: GetStencilID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::GameObject*)>(&TMPro::TMP_MaterialManager::GetStencilID)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_MaterialManager*), "GetStencilID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_MaterialManager::GetMaterialForRendering
// Il2CppName: GetMaterialForRendering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)(::UnityEngine::UI::MaskableGraphic*, ::UnityEngine::Material*)>(&TMPro::TMP_MaterialManager::GetMaterialForRendering)> {
  static const MethodInfo* get() {
    static auto* graphic = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "MaskableGraphic")->byval_arg;
    static auto* baseMaterial = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_MaterialManager*), "GetMaterialForRendering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graphic, baseMaterial});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_MaterialManager::FindRootSortOverrideCanvas
// Il2CppName: FindRootSortOverrideCanvas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (*)(::UnityEngine::Transform*)>(&TMPro::TMP_MaterialManager::FindRootSortOverrideCanvas)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_MaterialManager*), "FindRootSortOverrideCanvas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_MaterialManager::GetFallbackMaterial
// Il2CppName: GetFallbackMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)(::TMPro::TMP_FontAsset*, ::UnityEngine::Material*, int)>(&TMPro::TMP_MaterialManager::GetFallbackMaterial)> {
  static const MethodInfo* get() {
    static auto* fontAsset = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_FontAsset")->byval_arg;
    static auto* sourceMaterial = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* atlasIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_MaterialManager*), "GetFallbackMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fontAsset, sourceMaterial, atlasIndex});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_MaterialManager::GetFallbackMaterial
// Il2CppName: GetFallbackMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)(::UnityEngine::Material*, ::UnityEngine::Material*)>(&TMPro::TMP_MaterialManager::GetFallbackMaterial)> {
  static const MethodInfo* get() {
    static auto* sourceMaterial = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* targetMaterial = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_MaterialManager*), "GetFallbackMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourceMaterial, targetMaterial});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_MaterialManager::AddFallbackMaterialReference
// Il2CppName: AddFallbackMaterialReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Material*)>(&TMPro::TMP_MaterialManager::AddFallbackMaterialReference)> {
  static const MethodInfo* get() {
    static auto* targetMaterial = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_MaterialManager*), "AddFallbackMaterialReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetMaterial});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_MaterialManager::RemoveFallbackMaterialReference
// Il2CppName: RemoveFallbackMaterialReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Material*)>(&TMPro::TMP_MaterialManager::RemoveFallbackMaterialReference)> {
  static const MethodInfo* get() {
    static auto* targetMaterial = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_MaterialManager*), "RemoveFallbackMaterialReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetMaterial});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_MaterialManager::CleanupFallbackMaterials
// Il2CppName: CleanupFallbackMaterials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&TMPro::TMP_MaterialManager::CleanupFallbackMaterials)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_MaterialManager*), "CleanupFallbackMaterials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_MaterialManager::ReleaseFallbackMaterial
// Il2CppName: ReleaseFallbackMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Material*)>(&TMPro::TMP_MaterialManager::ReleaseFallbackMaterial)> {
  static const MethodInfo* get() {
    static auto* fallbackMaterial = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_MaterialManager*), "ReleaseFallbackMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fallbackMaterial});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_MaterialManager::CopyMaterialPresetProperties
// Il2CppName: CopyMaterialPresetProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Material*, ::UnityEngine::Material*)>(&TMPro::TMP_MaterialManager::CopyMaterialPresetProperties)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* destination = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_MaterialManager*), "CopyMaterialPresetProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source, destination});
  }
};
