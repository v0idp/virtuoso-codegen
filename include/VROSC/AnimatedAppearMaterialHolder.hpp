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
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Renderer
  class Renderer;
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: AnimatedAppearMaterialHolder
  class AnimatedAppearMaterialHolder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::AnimatedAppearMaterialHolder);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AnimatedAppearMaterialHolder*, "VROSC", "AnimatedAppearMaterialHolder");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.AnimatedAppearMaterialHolder
  // [TokenAttribute] Offset: FFFFFFFF
  class AnimatedAppearMaterialHolder : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private TMPro.TextMeshPro _textMesh
    // Size: 0x8
    // Offset: 0x18
    ::TMPro::TextMeshPro* textMesh;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshPro*) == 0x8);
    // private UnityEngine.Renderer _renderer
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Renderer* renderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::Renderer*) == 0x8);
    // private UnityEngine.Material _material
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Material* material;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private TMPro.TextMeshPro _textMesh
    [[deprecated]] ::TMPro::TextMeshPro*& dyn__textMesh();
    // Get instance field reference: private UnityEngine.Renderer _renderer
    [[deprecated]] ::UnityEngine::Renderer*& dyn__renderer();
    // Get instance field reference: private UnityEngine.Material _material
    [[deprecated]] ::UnityEngine::Material*& dyn__material();
    // public System.Void Setup(TMPro.TextMeshPro textMesh, UnityEngine.Material material)
    // Offset: 0x96A8F0
    void Setup(::TMPro::TextMeshPro* textMesh, ::UnityEngine::Material* material);
    // public System.Void Setup(UnityEngine.Renderer renderer, UnityEngine.Material material)
    // Offset: 0x96A8FC
    void Setup(::UnityEngine::Renderer* renderer, ::UnityEngine::Material* material);
    // public System.Void Reset()
    // Offset: 0x96A904
    void Reset();
    // public System.Void .ctor()
    // Offset: 0x96AA14
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimatedAppearMaterialHolder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::AnimatedAppearMaterialHolder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimatedAppearMaterialHolder*, creationType>()));
    }
  }; // VROSC.AnimatedAppearMaterialHolder
  #pragma pack(pop)
  static check_size<sizeof(AnimatedAppearMaterialHolder), 40 + sizeof(::UnityEngine::Material*)> __VROSC_AnimatedAppearMaterialHolderSizeCheck;
  static_assert(sizeof(AnimatedAppearMaterialHolder) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::AnimatedAppearMaterialHolder::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AnimatedAppearMaterialHolder::*)(::TMPro::TextMeshPro*, ::UnityEngine::Material*)>(&VROSC::AnimatedAppearMaterialHolder::Setup)> {
  static const MethodInfo* get() {
    static auto* textMesh = &::il2cpp_utils::GetClassFromName("TMPro", "TextMeshPro")->byval_arg;
    static auto* material = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AnimatedAppearMaterialHolder*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{textMesh, material});
  }
};
// Writing MetadataGetter for method: VROSC::AnimatedAppearMaterialHolder::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AnimatedAppearMaterialHolder::*)(::UnityEngine::Renderer*, ::UnityEngine::Material*)>(&VROSC::AnimatedAppearMaterialHolder::Setup)> {
  static const MethodInfo* get() {
    static auto* renderer = &::il2cpp_utils::GetClassFromName("UnityEngine", "Renderer")->byval_arg;
    static auto* material = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AnimatedAppearMaterialHolder*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{renderer, material});
  }
};
// Writing MetadataGetter for method: VROSC::AnimatedAppearMaterialHolder::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AnimatedAppearMaterialHolder::*)()>(&VROSC::AnimatedAppearMaterialHolder::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AnimatedAppearMaterialHolder*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AnimatedAppearMaterialHolder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
