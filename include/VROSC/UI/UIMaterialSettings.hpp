// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: VROSC.UI
namespace VROSC::UI {
  // Forward declaring type: UIMaterialSettings
  class UIMaterialSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::UI::UIMaterialSettings);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::UIMaterialSettings*, "VROSC.UI", "UIMaterialSettings");
// Type namespace: VROSC.UI
namespace VROSC::UI {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.UI.UIMaterialSettings
  // [TokenAttribute] Offset: FFFFFFFF
  // [CreateAssetMenuAttribute] Offset: 780FC0
  class UIMaterialSettings : public ::UnityEngine::ScriptableObject {
    public:
    public:
    // protected UnityEngine.Material _opaqueMaterial
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Material* opaqueMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // protected UnityEngine.Material _transparentMaterial
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Material* transparentMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: protected UnityEngine.Material _opaqueMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn__opaqueMaterial();
    // Get instance field reference: protected UnityEngine.Material _transparentMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn__transparentMaterial();
    // public System.Void .ctor()
    // Offset: 0x1912C94
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UIMaterialSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::UI::UIMaterialSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UIMaterialSettings*, creationType>()));
    }
    // public UnityEngine.Material GetMaterial(System.Boolean needsTransparency)
    // Offset: 0x1912C7C
    ::UnityEngine::Material* GetMaterial(bool needsTransparency);
  }; // VROSC.UI.UIMaterialSettings
  #pragma pack(pop)
  static check_size<sizeof(UIMaterialSettings), 32 + sizeof(::UnityEngine::Material*)> __VROSC_UI_UIMaterialSettingsSizeCheck;
  static_assert(sizeof(UIMaterialSettings) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::UI::UIMaterialSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::UI::UIMaterialSettings::GetMaterial
// Il2CppName: GetMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (VROSC::UI::UIMaterialSettings::*)(bool)>(&VROSC::UI::UIMaterialSettings::GetMaterial)> {
  static const MethodInfo* get() {
    static auto* needsTransparency = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UI::UIMaterialSettings*), "GetMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{needsTransparency});
  }
};
