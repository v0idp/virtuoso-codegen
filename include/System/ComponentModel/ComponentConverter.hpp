// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.ReferenceConverter
#include "System/ComponentModel/ReferenceConverter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ComponentConverter
  class ComponentConverter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::ComponentConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ComponentConverter*, "System.ComponentModel", "ComponentConverter");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.ComponentConverter
  // [TokenAttribute] Offset: FFFFFFFF
  class ComponentConverter : public ::System::ComponentModel::ReferenceConverter {
    public:
    // public System.Void .ctor(System.Type type)
    // Offset: 0x10E34AC
    // Implemented from: System.ComponentModel.ReferenceConverter
    // Base method: System.Void ReferenceConverter::.ctor(System.Type type)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ComponentConverter* New_ctor(::System::Type* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::ComponentConverter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ComponentConverter*, creationType>(type)));
    }
  }; // System.ComponentModel.ComponentConverter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::ComponentConverter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
