// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: TransformMoverControllerInput
  class TransformMoverControllerInput;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::TransformMoverControllerInput);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TransformMoverControllerInput*, "VROSC", "TransformMoverControllerInput");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.TransformMoverControllerInput
  // [TokenAttribute] Offset: FFFFFFFF
  class TransformMoverControllerInput : public ::UnityEngine::MonoBehaviour {
    public:
    // public System.Void .ctor()
    // Offset: 0xA2C5BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TransformMoverControllerInput* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::TransformMoverControllerInput::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TransformMoverControllerInput*, creationType>()));
    }
  }; // VROSC.TransformMoverControllerInput
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::TransformMoverControllerInput::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
