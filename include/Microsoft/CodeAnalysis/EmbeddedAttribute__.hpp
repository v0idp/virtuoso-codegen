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
// Type namespace: Microsoft.CodeAnalysis
namespace Microsoft::CodeAnalysis {
  // Forward declaring type: EmbeddedAttribute
  class EmbeddedAttribute__;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Microsoft::CodeAnalysis::EmbeddedAttribute__);
DEFINE_IL2CPP_ARG_TYPE(::Microsoft::CodeAnalysis::EmbeddedAttribute__*, "Microsoft.CodeAnalysis", "EmbeddedAttribute");
// Type namespace: Microsoft.CodeAnalysis
namespace Microsoft::CodeAnalysis {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Microsoft.CodeAnalysis.EmbeddedAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  // [EmbeddedAttribute] Offset: 6946F8
  class EmbeddedAttribute__ : public ::System::Attribute {
    public:
    // public System.Void .ctor()
    // Offset: 0x9869DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EmbeddedAttribute__* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Microsoft::CodeAnalysis::EmbeddedAttribute__::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EmbeddedAttribute__*, creationType>()));
    }
  }; // Microsoft.CodeAnalysis.EmbeddedAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Microsoft::CodeAnalysis::EmbeddedAttribute__::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
