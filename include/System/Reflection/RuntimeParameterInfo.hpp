// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Reflection.ParameterInfo
#include "System/Reflection/ParameterInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: RuntimeParameterInfo
  class RuntimeParameterInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::RuntimeParameterInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::RuntimeParameterInfo*, "System.Reflection", "RuntimeParameterInfo");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.RuntimeParameterInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class RuntimeParameterInfo : public ::System::Reflection::ParameterInfo {
    public:
    // protected System.Void .ctor()
    // Offset: 0xCE5C7C
    // Implemented from: System.Reflection.ParameterInfo
    // Base method: System.Void ParameterInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RuntimeParameterInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::RuntimeParameterInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RuntimeParameterInfo*, creationType>()));
    }
  }; // System.Reflection.RuntimeParameterInfo
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::RuntimeParameterInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
