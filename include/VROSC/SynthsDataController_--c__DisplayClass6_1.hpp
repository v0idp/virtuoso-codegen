// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.SynthsDataController
#include "VROSC/SynthsDataController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::SynthsDataController::$$c__DisplayClass6_1);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SynthsDataController::$$c__DisplayClass6_1*, "VROSC", "SynthsDataController/<>c__DisplayClass6_1");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SynthsDataController/VROSC.<>c__DisplayClass6_1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SynthsDataController::$$c__DisplayClass6_1 : public ::Il2CppObject {
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
    // public System.Int32 patchCountToLoad
    // Size: 0x4
    // Offset: 0x10
    int patchCountToLoad;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: patchCountToLoad and: CS$$$8__locals1
    char __padding0[0x4] = {};
    // public VROSC.SynthsDataController/VROSC.<>c__DisplayClass6_0 CS$<>8__locals1
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::SynthsDataController::$$c__DisplayClass6_0* CS$$$8__locals1;
    // Field size check
    static_assert(sizeof(::VROSC::SynthsDataController::$$c__DisplayClass6_0*) == 0x8);
    public:
    // Get instance field reference: public System.Int32 patchCountToLoad
    int& dyn_patchCountToLoad();
    // Get instance field reference: public VROSC.SynthsDataController/VROSC.<>c__DisplayClass6_0 CS$<>8__locals1
    ::VROSC::SynthsDataController::$$c__DisplayClass6_0*& dyn_CS$$$8__locals1();
    // public System.Void .ctor()
    // Offset: 0x134EE10
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SynthsDataController::$$c__DisplayClass6_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SynthsDataController::$$c__DisplayClass6_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SynthsDataController::$$c__DisplayClass6_1*, creationType>()));
    }
  }; // VROSC.SynthsDataController/VROSC.<>c__DisplayClass6_1
  #pragma pack(pop)
  static check_size<sizeof(SynthsDataController::$$c__DisplayClass6_1), 24 + sizeof(::VROSC::SynthsDataController::$$c__DisplayClass6_0*)> __VROSC_SynthsDataController_$$c__DisplayClass6_1SizeCheck;
  static_assert(sizeof(SynthsDataController::$$c__DisplayClass6_1) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SynthsDataController::$$c__DisplayClass6_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
