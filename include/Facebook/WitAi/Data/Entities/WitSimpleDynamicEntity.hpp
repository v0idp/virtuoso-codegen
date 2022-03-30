// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Facebook.WitAi.Interfaces.IDynamicEntitiesProvider
#include "Facebook/WitAi/Interfaces/IDynamicEntitiesProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: KeyValuePair`2<TKey, TValue>
  template<typename TKey, typename TValue>
  struct KeyValuePair_2;
}
// Forward declaring namespace: Facebook::WitAi::Lib
namespace Facebook::WitAi::Lib {
  // Forward declaring type: WitResponseArray
  class WitResponseArray;
}
// Completed forward declares
// Type namespace: Facebook.WitAi.Data.Entities
namespace Facebook::WitAi::Data::Entities {
  // Forward declaring type: WitSimpleDynamicEntity
  class WitSimpleDynamicEntity;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Facebook::WitAi::Data::Entities::WitSimpleDynamicEntity);
DEFINE_IL2CPP_ARG_TYPE(::Facebook::WitAi::Data::Entities::WitSimpleDynamicEntity*, "Facebook.WitAi.Data.Entities", "WitSimpleDynamicEntity");
// Type namespace: Facebook.WitAi.Data.Entities
namespace Facebook::WitAi::Data::Entities {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Facebook.WitAi.Data.Entities.WitSimpleDynamicEntity
  // [TokenAttribute] Offset: FFFFFFFF
  class WitSimpleDynamicEntity : public ::Il2CppObject/*, public ::Facebook::WitAi::Interfaces::IDynamicEntitiesProvider*/ {
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
    // public System.Collections.Generic.List`1<System.String> keywords
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::StringW>* keywords;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    // public System.String entity
    // Size: 0x8
    // Offset: 0x18
    ::StringW entity;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Facebook::WitAi::Interfaces::IDynamicEntitiesProvider
    operator ::Facebook::WitAi::Interfaces::IDynamicEntitiesProvider() noexcept {
      return *reinterpret_cast<::Facebook::WitAi::Interfaces::IDynamicEntitiesProvider*>(this);
    }
    // Get instance field reference: public System.Collections.Generic.List`1<System.String> keywords
    ::System::Collections::Generic::List_1<::StringW>*& dyn_keywords();
    // Get instance field reference: public System.String entity
    ::StringW& dyn_entity();
    // public System.Void .ctor(System.String entityIdentifier, System.Collections.Generic.List`1<System.String> words)
    // Offset: 0x11069F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitSimpleDynamicEntity* New_ctor(::StringW entityIdentifier, ::System::Collections::Generic::List_1<::StringW>* words) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Facebook::WitAi::Data::Entities::WitSimpleDynamicEntity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitSimpleDynamicEntity*, creationType>(entityIdentifier, words)));
    }
    // public System.Collections.Generic.KeyValuePair`2<System.String,Facebook.WitAi.Lib.WitResponseArray> GetEntityPair()
    // Offset: 0x10FDEB4
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::Facebook::WitAi::Lib::WitResponseArray*> GetEntityPair();
    // public System.String ToJSON()
    // Offset: 0x1106A2C
    ::StringW ToJSON();
  }; // Facebook.WitAi.Data.Entities.WitSimpleDynamicEntity
  #pragma pack(pop)
  static check_size<sizeof(WitSimpleDynamicEntity), 24 + sizeof(::StringW)> __Facebook_WitAi_Data_Entities_WitSimpleDynamicEntitySizeCheck;
  static_assert(sizeof(WitSimpleDynamicEntity) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Facebook::WitAi::Data::Entities::WitSimpleDynamicEntity::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Facebook::WitAi::Data::Entities::WitSimpleDynamicEntity::GetEntityPair
// Il2CppName: GetEntityPair
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Facebook::WitAi::Lib::WitResponseArray*> (Facebook::WitAi::Data::Entities::WitSimpleDynamicEntity::*)()>(&Facebook::WitAi::Data::Entities::WitSimpleDynamicEntity::GetEntityPair)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Data::Entities::WitSimpleDynamicEntity*), "GetEntityPair", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Data::Entities::WitSimpleDynamicEntity::ToJSON
// Il2CppName: ToJSON
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Facebook::WitAi::Data::Entities::WitSimpleDynamicEntity::*)()>(&Facebook::WitAi::Data::Entities::WitSimpleDynamicEntity::ToJSON)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Data::Entities::WitSimpleDynamicEntity*), "ToJSON", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
