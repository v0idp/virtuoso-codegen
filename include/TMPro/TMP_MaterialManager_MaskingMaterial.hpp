// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TMPro.TMP_MaterialManager
#include "TMPro/TMP_MaterialManager.hpp"
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
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::TMPro::TMP_MaterialManager::MaskingMaterial);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_MaterialManager::MaskingMaterial*, "TMPro", "TMP_MaterialManager/MaskingMaterial");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_MaterialManager/TMPro.MaskingMaterial
  // [TokenAttribute] Offset: FFFFFFFF
  class TMP_MaterialManager::MaskingMaterial : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public UnityEngine.Material baseMaterial
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Material* baseMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // public UnityEngine.Material stencilMaterial
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Material* stencilMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // public System.Int32 count
    // Size: 0x4
    // Offset: 0x20
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 stencilID
    // Size: 0x4
    // Offset: 0x24
    int stencilID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public UnityEngine.Material baseMaterial
    ::UnityEngine::Material*& dyn_baseMaterial();
    // Get instance field reference: public UnityEngine.Material stencilMaterial
    ::UnityEngine::Material*& dyn_stencilMaterial();
    // Get instance field reference: public System.Int32 count
    int& dyn_count();
    // Get instance field reference: public System.Int32 stencilID
    int& dyn_stencilID();
    // public System.Void .ctor()
    // Offset: 0x124715C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_MaterialManager::MaskingMaterial* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::TMPro::TMP_MaterialManager::MaskingMaterial::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_MaterialManager::MaskingMaterial*, creationType>()));
    }
  }; // TMPro.TMP_MaterialManager/TMPro.MaskingMaterial
  #pragma pack(pop)
  static check_size<sizeof(TMP_MaterialManager::MaskingMaterial), 36 + sizeof(int)> __TMPro_TMP_MaterialManager_MaskingMaterialSizeCheck;
  static_assert(sizeof(TMP_MaterialManager::MaskingMaterial) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_MaterialManager::MaskingMaterial::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
