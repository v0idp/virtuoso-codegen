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
// Completed includes
// Type namespace: System.Diagnostics.CodeAnalysis
namespace System::Diagnostics::CodeAnalysis {
  // Forward declaring type: NotNullAttribute
  class NotNullAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::CodeAnalysis::NotNullAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::CodeAnalysis::NotNullAttribute*, "System.Diagnostics.CodeAnalysis", "NotNullAttribute");
// Type namespace: System.Diagnostics.CodeAnalysis
namespace System::Diagnostics::CodeAnalysis {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.CodeAnalysis.NotNullAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 671F80
  class NotNullAttribute : public ::System::Attribute {
    public:
    // public System.Void .ctor()
    // Offset: 0x13489B8
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NotNullAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::CodeAnalysis::NotNullAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NotNullAttribute*, creationType>()));
    }
  }; // System.Diagnostics.CodeAnalysis.NotNullAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::CodeAnalysis::NotNullAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
