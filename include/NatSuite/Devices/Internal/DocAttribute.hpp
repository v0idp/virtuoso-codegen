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
// Type namespace: NatSuite.Devices.Internal
namespace NatSuite::Devices::Internal {
  // Forward declaring type: DocAttribute
  class DocAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NatSuite::Devices::Internal::DocAttribute);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::Internal::DocAttribute*, "NatSuite.Devices.Internal", "DocAttribute");
// Type namespace: NatSuite.Devices.Internal
namespace NatSuite::Devices::Internal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NatSuite.Devices.Internal.DocAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  class DocAttribute : public ::System::Attribute {
    public:
    // public System.Void .ctor(System.String descriptionKey)
    // Offset: 0x130C100
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DocAttribute* New_ctor(::StringW descriptionKey) {
      static auto ___internal__logger = ::Logger::get().WithContext("::NatSuite::Devices::Internal::DocAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DocAttribute*, creationType>(descriptionKey)));
    }
    // public System.Void .ctor(System.String summaryKey, System.String descriptionKey)
    // Offset: 0x130C108
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DocAttribute* New_ctor(::StringW summaryKey, ::StringW descriptionKey) {
      static auto ___internal__logger = ::Logger::get().WithContext("::NatSuite::Devices::Internal::DocAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DocAttribute*, creationType>(summaryKey, descriptionKey)));
    }
  }; // NatSuite.Devices.Internal.DocAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NatSuite::Devices::Internal::DocAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NatSuite::Devices::Internal::DocAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
