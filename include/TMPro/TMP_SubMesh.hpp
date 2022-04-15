// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_FontAsset
  class TMP_FontAsset;
  // Forward declaring type: TMP_SpriteAsset
  class TMP_SpriteAsset;
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
  // Forward declaring type: TMP_Text
  class TMP_Text;
  // Forward declaring type: MaterialReference
  struct MaterialReference;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Renderer
  class Renderer;
  // Forward declaring type: MeshFilter
  class MeshFilter;
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_SubMesh
  class TMP_SubMesh;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::TMPro::TMP_SubMesh);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_SubMesh*, "TMPro", "TMP_SubMesh");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x71
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_SubMesh
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: 6B1D9C
  // [ExecuteAlways] Offset: FFFFFFFF
  class TMP_SubMesh : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private TMPro.TMP_FontAsset m_fontAsset
    // Size: 0x8
    // Offset: 0x18
    ::TMPro::TMP_FontAsset* m_fontAsset;
    // Field size check
    static_assert(sizeof(::TMPro::TMP_FontAsset*) == 0x8);
    // private TMPro.TMP_SpriteAsset m_spriteAsset
    // Size: 0x8
    // Offset: 0x20
    ::TMPro::TMP_SpriteAsset* m_spriteAsset;
    // Field size check
    static_assert(sizeof(::TMPro::TMP_SpriteAsset*) == 0x8);
    // private UnityEngine.Material m_material
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Material* m_material;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private UnityEngine.Material m_sharedMaterial
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Material* m_sharedMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private UnityEngine.Material m_fallbackMaterial
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Material* m_fallbackMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private UnityEngine.Material m_fallbackSourceMaterial
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Material* m_fallbackSourceMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private System.Boolean m_isDefaultMaterial
    // Size: 0x1
    // Offset: 0x48
    bool m_isDefaultMaterial;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_isDefaultMaterial and: m_padding
    char __padding6[0x3] = {};
    // private System.Single m_padding
    // Size: 0x4
    // Offset: 0x4C
    float m_padding;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Renderer m_renderer
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::Renderer* m_renderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::Renderer*) == 0x8);
    // private UnityEngine.MeshFilter m_meshFilter
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::MeshFilter* m_meshFilter;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshFilter*) == 0x8);
    // private UnityEngine.Mesh m_mesh
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::Mesh* m_mesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::Mesh*) == 0x8);
    // private TMPro.TextMeshPro m_TextComponent
    // Size: 0x8
    // Offset: 0x68
    ::TMPro::TextMeshPro* m_TextComponent;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshPro*) == 0x8);
    // private System.Boolean m_isRegisteredForEvents
    // Size: 0x1
    // Offset: 0x70
    bool m_isRegisteredForEvents;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private TMPro.TMP_FontAsset m_fontAsset
    [[deprecated("Use field access instead!")]] ::TMPro::TMP_FontAsset*& dyn_m_fontAsset();
    // Get instance field reference: private TMPro.TMP_SpriteAsset m_spriteAsset
    [[deprecated("Use field access instead!")]] ::TMPro::TMP_SpriteAsset*& dyn_m_spriteAsset();
    // Get instance field reference: private UnityEngine.Material m_material
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_m_material();
    // Get instance field reference: private UnityEngine.Material m_sharedMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_m_sharedMaterial();
    // Get instance field reference: private UnityEngine.Material m_fallbackMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_m_fallbackMaterial();
    // Get instance field reference: private UnityEngine.Material m_fallbackSourceMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_m_fallbackSourceMaterial();
    // Get instance field reference: private System.Boolean m_isDefaultMaterial
    [[deprecated("Use field access instead!")]] bool& dyn_m_isDefaultMaterial();
    // Get instance field reference: private System.Single m_padding
    [[deprecated("Use field access instead!")]] float& dyn_m_padding();
    // Get instance field reference: private UnityEngine.Renderer m_renderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::Renderer*& dyn_m_renderer();
    // Get instance field reference: private UnityEngine.MeshFilter m_meshFilter
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshFilter*& dyn_m_meshFilter();
    // Get instance field reference: private UnityEngine.Mesh m_mesh
    [[deprecated("Use field access instead!")]] ::UnityEngine::Mesh*& dyn_m_mesh();
    // Get instance field reference: private TMPro.TextMeshPro m_TextComponent
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshPro*& dyn_m_TextComponent();
    // Get instance field reference: private System.Boolean m_isRegisteredForEvents
    [[deprecated("Use field access instead!")]] bool& dyn_m_isRegisteredForEvents();
    // public TMPro.TMP_FontAsset get_fontAsset()
    // Offset: 0x9B4634
    ::TMPro::TMP_FontAsset* get_fontAsset();
    // public System.Void set_fontAsset(TMPro.TMP_FontAsset value)
    // Offset: 0x9B463C
    void set_fontAsset(::TMPro::TMP_FontAsset* value);
    // public TMPro.TMP_SpriteAsset get_spriteAsset()
    // Offset: 0x9B4644
    ::TMPro::TMP_SpriteAsset* get_spriteAsset();
    // public System.Void set_spriteAsset(TMPro.TMP_SpriteAsset value)
    // Offset: 0x9B464C
    void set_spriteAsset(::TMPro::TMP_SpriteAsset* value);
    // public UnityEngine.Material get_material()
    // Offset: 0x9B4654
    ::UnityEngine::Material* get_material();
    // public System.Void set_material(UnityEngine.Material value)
    // Offset: 0x9B4798
    void set_material(::UnityEngine::Material* value);
    // public UnityEngine.Material get_sharedMaterial()
    // Offset: 0x9B4984
    ::UnityEngine::Material* get_sharedMaterial();
    // public System.Void set_sharedMaterial(UnityEngine.Material value)
    // Offset: 0x9B498C
    void set_sharedMaterial(::UnityEngine::Material* value);
    // public UnityEngine.Material get_fallbackMaterial()
    // Offset: 0x9B49E4
    ::UnityEngine::Material* get_fallbackMaterial();
    // public System.Void set_fallbackMaterial(UnityEngine.Material value)
    // Offset: 0x9B49EC
    void set_fallbackMaterial(::UnityEngine::Material* value);
    // public UnityEngine.Material get_fallbackSourceMaterial()
    // Offset: 0x9B4B60
    ::UnityEngine::Material* get_fallbackSourceMaterial();
    // public System.Void set_fallbackSourceMaterial(UnityEngine.Material value)
    // Offset: 0x9B4B68
    void set_fallbackSourceMaterial(::UnityEngine::Material* value);
    // public System.Boolean get_isDefaultMaterial()
    // Offset: 0x9B4B70
    bool get_isDefaultMaterial();
    // public System.Void set_isDefaultMaterial(System.Boolean value)
    // Offset: 0x9B4B78
    void set_isDefaultMaterial(bool value);
    // public System.Single get_padding()
    // Offset: 0x9B4B84
    float get_padding();
    // public System.Void set_padding(System.Single value)
    // Offset: 0x9B4B8C
    void set_padding(float value);
    // public UnityEngine.Renderer get_renderer()
    // Offset: 0x9B4B94
    ::UnityEngine::Renderer* get_renderer();
    // public UnityEngine.MeshFilter get_meshFilter()
    // Offset: 0x9B4C34
    ::UnityEngine::MeshFilter* get_meshFilter();
    // public UnityEngine.Mesh get_mesh()
    // Offset: 0x9B4D4C
    ::UnityEngine::Mesh* get_mesh();
    // public System.Void set_mesh(UnityEngine.Mesh value)
    // Offset: 0x9B4E08
    void set_mesh(::UnityEngine::Mesh* value);
    // public TMPro.TMP_Text get_textComponent()
    // Offset: 0x9B4E10
    ::TMPro::TMP_Text* get_textComponent();
    // public System.Void .ctor()
    // Offset: 0x9B5A0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_SubMesh* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::TMPro::TMP_SubMesh::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_SubMesh*, creationType>()));
    }
    // static public TMPro.TMP_SubMesh AddSubTextObject(TMPro.TextMeshPro textComponent, TMPro.MaterialReference materialReference)
    // Offset: 0x9B4EB0
    static ::TMPro::TMP_SubMesh* AddSubTextObject(::TMPro::TextMeshPro* textComponent, ::TMPro::MaterialReference materialReference);
    // private System.Void OnEnable()
    // Offset: 0x9B5204
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x9B5360
    void OnDisable();
    // private System.Void OnDestroy()
    // Offset: 0x9B542C
    void OnDestroy();
    // public System.Void DestroySelf()
    // Offset: 0x9B55F4
    void DestroySelf();
    // private UnityEngine.Material GetMaterial(UnityEngine.Material mat)
    // Offset: 0x9B465C
    ::UnityEngine::Material* GetMaterial(::UnityEngine::Material* mat);
    // private UnityEngine.Material CreateMaterialInstance(UnityEngine.Material source)
    // Offset: 0x9B5670
    ::UnityEngine::Material* CreateMaterialInstance(::UnityEngine::Material* source);
    // private UnityEngine.Material GetSharedMaterial()
    // Offset: 0x9B5734
    ::UnityEngine::Material* GetSharedMaterial();
    // private System.Void SetSharedMaterial(UnityEngine.Material mat)
    // Offset: 0x9B49B8
    void SetSharedMaterial(::UnityEngine::Material* mat);
    // public System.Single GetPaddingForMaterial()
    // Offset: 0x9B481C
    float GetPaddingForMaterial();
    // public System.Void UpdateMeshPadding(System.Boolean isExtraPadding, System.Boolean isUsingBold)
    // Offset: 0x9B57E4
    void UpdateMeshPadding(bool isExtraPadding, bool isUsingBold);
    // public System.Void SetVerticesDirty()
    // Offset: 0x9B48B0
    void SetVerticesDirty();
    // public System.Void SetMaterialDirty()
    // Offset: 0x9B4980
    void SetMaterialDirty();
    // protected System.Void UpdateMaterial()
    // Offset: 0x9B586C
    void UpdateMaterial();
  }; // TMPro.TMP_SubMesh
  #pragma pack(pop)
  static check_size<sizeof(TMP_SubMesh), 112 + sizeof(bool)> __TMPro_TMP_SubMeshSizeCheck;
  static_assert(sizeof(TMP_SubMesh) == 0x71);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_SubMesh::get_fontAsset
// Il2CppName: get_fontAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_FontAsset* (TMPro::TMP_SubMesh::*)()>(&TMPro::TMP_SubMesh::get_fontAsset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SubMesh*), "get_fontAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SubMesh::set_fontAsset
// Il2CppName: set_fontAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_SubMesh::*)(::TMPro::TMP_FontAsset*)>(&TMPro::TMP_SubMesh::set_fontAsset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_FontAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SubMesh*), "set_fontAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SubMesh::get_spriteAsset
// Il2CppName: get_spriteAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_SpriteAsset* (TMPro::TMP_SubMesh::*)()>(&TMPro::TMP_SubMesh::get_spriteAsset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SubMesh*), "get_spriteAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SubMesh::set_spriteAsset
// Il2CppName: set_spriteAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_SubMesh::*)(::TMPro::TMP_SpriteAsset*)>(&TMPro::TMP_SubMesh::set_spriteAsset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_SpriteAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SubMesh*), "set_spriteAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SubMesh::get_material
// Il2CppName: get_material
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (TMPro::TMP_SubMesh::*)()>(&TMPro::TMP_SubMesh::get_material)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SubMesh*), "get_material", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SubMesh::set_material
// Il2CppName: set_material
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_SubMesh::*)(::UnityEngine::Material*)>(&TMPro::TMP_SubMesh::set_material)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SubMesh*), "set_material", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SubMesh::get_sharedMaterial
// Il2CppName: get_sharedMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (TMPro::TMP_SubMesh::*)()>(&TMPro::TMP_SubMesh::get_sharedMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SubMesh*), "get_sharedMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SubMesh::set_sharedMaterial
// Il2CppName: set_sharedMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_SubMesh::*)(::UnityEngine::Material*)>(&TMPro::TMP_SubMesh::set_sharedMaterial)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SubMesh*), "set_sharedMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SubMesh::get_fallbackMaterial
// Il2CppName: get_fallbackMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (TMPro::TMP_SubMesh::*)()>(&TMPro::TMP_SubMesh::get_fallbackMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SubMesh*), "get_fallbackMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SubMesh::set_fallbackMaterial
// Il2CppName: set_fallbackMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_SubMesh::*)(::UnityEngine::Material*)>(&TMPro::TMP_SubMesh::set_fallbackMaterial)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SubMesh*), "set_fallbackMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SubMesh::get_fallbackSourceMaterial
// Il2CppName: get_fallbackSourceMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (TMPro::TMP_SubMesh::*)()>(&TMPro::TMP_SubMesh::get_fallbackSourceMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SubMesh*), "get_fallbackSourceMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SubMesh::set_fallbackSourceMaterial
// Il2CppName: set_fallbackSourceMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_SubMesh::*)(::UnityEngine::Material*)>(&TMPro::TMP_SubMesh::set_fallbackSourceMaterial)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SubMesh*), "set_fallbackSourceMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SubMesh::get_isDefaultMaterial
// Il2CppName: get_isDefaultMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (TMPro::TMP_SubMesh::*)()>(&TMPro::TMP_SubMesh::get_isDefaultMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SubMesh*), "get_isDefaultMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SubMesh::set_isDefaultMaterial
// Il2CppName: set_isDefaultMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_SubMesh::*)(bool)>(&TMPro::TMP_SubMesh::set_isDefaultMaterial)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SubMesh*), "set_isDefaultMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SubMesh::get_padding
// Il2CppName: get_padding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (TMPro::TMP_SubMesh::*)()>(&TMPro::TMP_SubMesh::get_padding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SubMesh*), "get_padding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SubMesh::set_padding
// Il2CppName: set_padding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_SubMesh::*)(float)>(&TMPro::TMP_SubMesh::set_padding)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SubMesh*), "set_padding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SubMesh::get_renderer
// Il2CppName: get_renderer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Renderer* (TMPro::TMP_SubMesh::*)()>(&TMPro::TMP_SubMesh::get_renderer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SubMesh*), "get_renderer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SubMesh::get_meshFilter
// Il2CppName: get_meshFilter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::MeshFilter* (TMPro::TMP_SubMesh::*)()>(&TMPro::TMP_SubMesh::get_meshFilter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SubMesh*), "get_meshFilter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SubMesh::get_mesh
// Il2CppName: get_mesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Mesh* (TMPro::TMP_SubMesh::*)()>(&TMPro::TMP_SubMesh::get_mesh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SubMesh*), "get_mesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SubMesh::set_mesh
// Il2CppName: set_mesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_SubMesh::*)(::UnityEngine::Mesh*)>(&TMPro::TMP_SubMesh::set_mesh)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SubMesh*), "set_mesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SubMesh::get_textComponent
// Il2CppName: get_textComponent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_Text* (TMPro::TMP_SubMesh::*)()>(&TMPro::TMP_SubMesh::get_textComponent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SubMesh*), "get_textComponent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SubMesh::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::TMP_SubMesh::AddSubTextObject
// Il2CppName: AddSubTextObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_SubMesh* (*)(::TMPro::TextMeshPro*, ::TMPro::MaterialReference)>(&TMPro::TMP_SubMesh::AddSubTextObject)> {
  static const MethodInfo* get() {
    static auto* textComponent = &::il2cpp_utils::GetClassFromName("TMPro", "TextMeshPro")->byval_arg;
    static auto* materialReference = &::il2cpp_utils::GetClassFromName("TMPro", "MaterialReference")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SubMesh*), "AddSubTextObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{textComponent, materialReference});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SubMesh::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_SubMesh::*)()>(&TMPro::TMP_SubMesh::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SubMesh*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SubMesh::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_SubMesh::*)()>(&TMPro::TMP_SubMesh::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SubMesh*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SubMesh::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_SubMesh::*)()>(&TMPro::TMP_SubMesh::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SubMesh*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SubMesh::DestroySelf
// Il2CppName: DestroySelf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_SubMesh::*)()>(&TMPro::TMP_SubMesh::DestroySelf)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SubMesh*), "DestroySelf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SubMesh::GetMaterial
// Il2CppName: GetMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (TMPro::TMP_SubMesh::*)(::UnityEngine::Material*)>(&TMPro::TMP_SubMesh::GetMaterial)> {
  static const MethodInfo* get() {
    static auto* mat = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SubMesh*), "GetMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mat});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SubMesh::CreateMaterialInstance
// Il2CppName: CreateMaterialInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (TMPro::TMP_SubMesh::*)(::UnityEngine::Material*)>(&TMPro::TMP_SubMesh::CreateMaterialInstance)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SubMesh*), "CreateMaterialInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SubMesh::GetSharedMaterial
// Il2CppName: GetSharedMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (TMPro::TMP_SubMesh::*)()>(&TMPro::TMP_SubMesh::GetSharedMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SubMesh*), "GetSharedMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SubMesh::SetSharedMaterial
// Il2CppName: SetSharedMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_SubMesh::*)(::UnityEngine::Material*)>(&TMPro::TMP_SubMesh::SetSharedMaterial)> {
  static const MethodInfo* get() {
    static auto* mat = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SubMesh*), "SetSharedMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mat});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SubMesh::GetPaddingForMaterial
// Il2CppName: GetPaddingForMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (TMPro::TMP_SubMesh::*)()>(&TMPro::TMP_SubMesh::GetPaddingForMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SubMesh*), "GetPaddingForMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SubMesh::UpdateMeshPadding
// Il2CppName: UpdateMeshPadding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_SubMesh::*)(bool, bool)>(&TMPro::TMP_SubMesh::UpdateMeshPadding)> {
  static const MethodInfo* get() {
    static auto* isExtraPadding = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isUsingBold = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SubMesh*), "UpdateMeshPadding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isExtraPadding, isUsingBold});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SubMesh::SetVerticesDirty
// Il2CppName: SetVerticesDirty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_SubMesh::*)()>(&TMPro::TMP_SubMesh::SetVerticesDirty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SubMesh*), "SetVerticesDirty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SubMesh::SetMaterialDirty
// Il2CppName: SetMaterialDirty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_SubMesh::*)()>(&TMPro::TMP_SubMesh::SetMaterialDirty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SubMesh*), "SetMaterialDirty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_SubMesh::UpdateMaterial
// Il2CppName: UpdateMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_SubMesh::*)()>(&TMPro::TMP_SubMesh::UpdateMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_SubMesh*), "UpdateMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
