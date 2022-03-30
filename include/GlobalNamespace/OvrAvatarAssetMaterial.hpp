// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OvrAvatarAsset
#include "GlobalNamespace/OvrAvatarAsset.hpp"
// Including type: ovrAvatarMaterialState
#include "GlobalNamespace/ovrAvatarMaterialState.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OvrAvatarAssetMaterial
  class OvrAvatarAssetMaterial;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OvrAvatarAssetMaterial);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OvrAvatarAssetMaterial*, "", "OvrAvatarAssetMaterial");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xC0
  #pragma pack(push, 1)
  // Autogenerated type: OvrAvatarAssetMaterial
  // [TokenAttribute] Offset: FFFFFFFF
  class OvrAvatarAssetMaterial : public ::GlobalNamespace::OvrAvatarAsset {
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
    // public ovrAvatarMaterialState material
    // Size: 0xA8
    // Offset: 0x18
    ::GlobalNamespace::ovrAvatarMaterialState material;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ovrAvatarMaterialState) == 0xA8);
    public:
    // Deleting conversion operator: operator uint64_t
    constexpr operator uint64_t() const noexcept = delete;
    // Get instance field reference: public ovrAvatarMaterialState material
    ::GlobalNamespace::ovrAvatarMaterialState& dyn_material();
    // public System.Void .ctor(System.UInt64 id, System.IntPtr mat)
    // Offset: 0x9261A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OvrAvatarAssetMaterial* New_ctor(uint64_t id, ::System::IntPtr mat) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OvrAvatarAssetMaterial::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OvrAvatarAssetMaterial*, creationType>(id, mat)));
    }
  }; // OvrAvatarAssetMaterial
  #pragma pack(pop)
  static check_size<sizeof(OvrAvatarAssetMaterial), 24 + sizeof(::GlobalNamespace::ovrAvatarMaterialState)> __GlobalNamespace_OvrAvatarAssetMaterialSizeCheck;
  static_assert(sizeof(OvrAvatarAssetMaterial) == 0xC0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarAssetMaterial::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
