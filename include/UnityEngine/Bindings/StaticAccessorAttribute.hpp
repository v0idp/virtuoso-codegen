// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: UnityEngine.Bindings.StaticAccessorType
#include "UnityEngine/Bindings/StaticAccessorType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.Bindings
namespace UnityEngine::Bindings {
  // Forward declaring type: StaticAccessorAttribute
  class StaticAccessorAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Bindings::StaticAccessorAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::StaticAccessorAttribute*, "UnityEngine.Bindings", "StaticAccessorAttribute");
// Type namespace: UnityEngine.Bindings
namespace UnityEngine::Bindings {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Bindings.StaticAccessorAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 5BA6CC
  // [VisibleToOtherModulesAttribute] Offset: FFFFFFFF
  class StaticAccessorAttribute : public ::System::Attribute {
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
    // [DebuggerBrowsableAttribute] Offset: 0x5BAD04
    // private System.String <Name>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0x5BAD40
    // private UnityEngine.Bindings.StaticAccessorType <Type>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    ::UnityEngine::Bindings::StaticAccessorType Type;
    // Field size check
    static_assert(sizeof(::UnityEngine::Bindings::StaticAccessorType) == 0x4);
    public:
    // Get instance field reference: private System.String <Name>k__BackingField
    ::StringW& dyn_$Name$k__BackingField();
    // Get instance field reference: private UnityEngine.Bindings.StaticAccessorType <Type>k__BackingField
    ::UnityEngine::Bindings::StaticAccessorType& dyn_$Type$k__BackingField();
    // public System.Void set_Name(System.String value)
    // Offset: 0x12FA530
    void set_Name(::StringW value);
    // public System.Void set_Type(UnityEngine.Bindings.StaticAccessorType value)
    // Offset: 0x12FA538
    void set_Type(::UnityEngine::Bindings::StaticAccessorType value);
    // System.Void .ctor(System.String name)
    // Offset: 0x12FA540
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StaticAccessorAttribute* New_ctor(::StringW name) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Bindings::StaticAccessorAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StaticAccessorAttribute*, creationType>(name)));
    }
    // public System.Void .ctor(System.String name, UnityEngine.Bindings.StaticAccessorType type)
    // Offset: 0x12FA56C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StaticAccessorAttribute* New_ctor(::StringW name, ::UnityEngine::Bindings::StaticAccessorType type) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Bindings::StaticAccessorAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StaticAccessorAttribute*, creationType>(name, type)));
    }
  }; // UnityEngine.Bindings.StaticAccessorAttribute
  #pragma pack(pop)
  static check_size<sizeof(StaticAccessorAttribute), 24 + sizeof(::UnityEngine::Bindings::StaticAccessorType)> __UnityEngine_Bindings_StaticAccessorAttributeSizeCheck;
  static_assert(sizeof(StaticAccessorAttribute) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Bindings::StaticAccessorAttribute::set_Name
// Il2CppName: set_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Bindings::StaticAccessorAttribute::*)(::StringW)>(&UnityEngine::Bindings::StaticAccessorAttribute::set_Name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bindings::StaticAccessorAttribute*), "set_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bindings::StaticAccessorAttribute::set_Type
// Il2CppName: set_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Bindings::StaticAccessorAttribute::*)(::UnityEngine::Bindings::StaticAccessorType)>(&UnityEngine::Bindings::StaticAccessorAttribute::set_Type)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Bindings", "StaticAccessorType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bindings::StaticAccessorAttribute*), "set_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bindings::StaticAccessorAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Bindings::StaticAccessorAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
