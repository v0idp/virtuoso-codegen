// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Facebook.WitAi.Configuration.WitConfigurationData
#include "Facebook/WitAi/Configuration/WitConfigurationData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Facebook::WitAi::Data::Traits
namespace Facebook::WitAi::Data::Traits {
  // Forward declaring type: WitTraitValue
  class WitTraitValue;
}
// Completed forward declares
// Type namespace: Facebook.WitAi.Data.Traits
namespace Facebook::WitAi::Data::Traits {
  // Forward declaring type: WitTrait
  class WitTrait;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Facebook::WitAi::Data::Traits::WitTrait);
DEFINE_IL2CPP_ARG_TYPE(::Facebook::WitAi::Data::Traits::WitTrait*, "Facebook.WitAi.Data.Traits", "WitTrait");
// Type namespace: Facebook.WitAi.Data.Traits
namespace Facebook::WitAi::Data::Traits {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Facebook.WitAi.Data.Traits.WitTrait
  // [TokenAttribute] Offset: FFFFFFFF
  class WitTrait : public ::Facebook::WitAi::Configuration::WitConfigurationData {
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
    // public System.String id
    // Size: 0x8
    // Offset: 0x18
    ::StringW id;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String name
    // Size: 0x8
    // Offset: 0x20
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public Facebook.WitAi.Data.Traits.WitTraitValue[] values
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::Facebook::WitAi::Data::Traits::WitTraitValue*> values;
    // Field size check
    static_assert(sizeof(::ArrayW<::Facebook::WitAi::Data::Traits::WitTraitValue*>) == 0x8);
    public:
    // Deleting conversion operator: operator ::Facebook::WitAi::Data::Configuration::WitConfiguration*
    constexpr operator ::Facebook::WitAi::Data::Configuration::WitConfiguration*() const noexcept = delete;
    // Get instance field reference: public System.String id
    ::StringW& dyn_id();
    // Get instance field reference: public System.String name
    ::StringW& dyn_name();
    // Get instance field reference: public Facebook.WitAi.Data.Traits.WitTraitValue[] values
    ::ArrayW<::Facebook::WitAi::Data::Traits::WitTraitValue*>& dyn_values();
    // public System.Void .ctor()
    // Offset: 0x1106BFC
    // Implemented from: Facebook.WitAi.Configuration.WitConfigurationData
    // Base method: System.Void WitConfigurationData::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitTrait* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Facebook::WitAi::Data::Traits::WitTrait::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitTrait*, creationType>()));
    }
  }; // Facebook.WitAi.Data.Traits.WitTrait
  #pragma pack(pop)
  static check_size<sizeof(WitTrait), 40 + sizeof(::ArrayW<::Facebook::WitAi::Data::Traits::WitTraitValue*>)> __Facebook_WitAi_Data_Traits_WitTraitSizeCheck;
  static_assert(sizeof(WitTrait) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Facebook::WitAi::Data::Traits::WitTrait::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!