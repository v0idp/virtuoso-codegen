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
// Forward declaring namespace: Facebook::WitAi::Data::Keywords
namespace Facebook::WitAi::Data::Keywords {
  // Forward declaring type: WitKeyword
  class WitKeyword;
}
// Completed forward declares
// Type namespace: Facebook.WitAi.Data.Entities
namespace Facebook::WitAi::Data::Entities {
  // Forward declaring type: WitEntity
  class WitEntity;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Facebook::WitAi::Data::Entities::WitEntity);
DEFINE_IL2CPP_ARG_TYPE(::Facebook::WitAi::Data::Entities::WitEntity*, "Facebook.WitAi.Data.Entities", "WitEntity");
// Type namespace: Facebook.WitAi.Data.Entities
namespace Facebook::WitAi::Data::Entities {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Facebook.WitAi.Data.Entities.WitEntity
  // [TokenAttribute] Offset: FFFFFFFF
  class WitEntity : public ::Facebook::WitAi::Configuration::WitConfigurationData {
    public:
    public:
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
    // public System.String[] lookups
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::StringW> lookups;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // public System.String[] roles
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::StringW> roles;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // public Facebook.WitAi.Data.Keywords.WitKeyword[] keywords
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::Facebook::WitAi::Data::Keywords::WitKeyword*> keywords;
    // Field size check
    static_assert(sizeof(::ArrayW<::Facebook::WitAi::Data::Keywords::WitKeyword*>) == 0x8);
    public:
    // Deleting conversion operator: operator ::Facebook::WitAi::Data::Configuration::WitConfiguration*
    constexpr operator ::Facebook::WitAi::Data::Configuration::WitConfiguration*() const noexcept = delete;
    // Get instance field reference: public System.String id
    [[deprecated("Use field access instead!")]] ::StringW& dyn_id();
    // Get instance field reference: public System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: public System.String[] lookups
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_lookups();
    // Get instance field reference: public System.String[] roles
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_roles();
    // Get instance field reference: public Facebook.WitAi.Data.Keywords.WitKeyword[] keywords
    [[deprecated("Use field access instead!")]] ::ArrayW<::Facebook::WitAi::Data::Keywords::WitKeyword*>& dyn_keywords();
    // public System.Void .ctor()
    // Offset: 0x1675080
    // Implemented from: Facebook.WitAi.Configuration.WitConfigurationData
    // Base method: System.Void WitConfigurationData::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitEntity* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Facebook::WitAi::Data::Entities::WitEntity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitEntity*, creationType>()));
    }
  }; // Facebook.WitAi.Data.Entities.WitEntity
  #pragma pack(pop)
  static check_size<sizeof(WitEntity), 56 + sizeof(::ArrayW<::Facebook::WitAi::Data::Keywords::WitKeyword*>)> __Facebook_WitAi_Data_Entities_WitEntitySizeCheck;
  static_assert(sizeof(WitEntity) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Facebook::WitAi::Data::Entities::WitEntity::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
