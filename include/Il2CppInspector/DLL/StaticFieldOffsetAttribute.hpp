// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Il2CppInspector.DLL
namespace Il2CppInspector::DLL {
  // Forward declaring type: StaticFieldOffsetAttribute
  class StaticFieldOffsetAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Il2CppInspector::DLL::StaticFieldOffsetAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Il2CppInspector::DLL::StaticFieldOffsetAttribute*, "Il2CppInspector.DLL", "StaticFieldOffsetAttribute");
// Type namespace: Il2CppInspector.DLL
namespace Il2CppInspector::DLL {
  // WARNING Size may be invalid!
  // Autogenerated type: Il2CppInspector.DLL.StaticFieldOffsetAttribute
  class StaticFieldOffsetAttribute : public ::System::Attribute {
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
    // public System.String Offset
    // Size: 0x8
    // Offset: 0xFFFFFFFF
    ::StringW Offset;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return Offset;
    }
    // Get instance field reference: public System.String Offset
    ::StringW& dyn_Offset();
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StaticFieldOffsetAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Il2CppInspector::DLL::StaticFieldOffsetAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StaticFieldOffsetAttribute*, creationType>()));
    }
  }; // Il2CppInspector.DLL.StaticFieldOffsetAttribute
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Il2CppInspector::DLL::StaticFieldOffsetAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
