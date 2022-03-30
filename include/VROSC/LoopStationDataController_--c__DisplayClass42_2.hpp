// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.LoopStationDataController
#include "VROSC/LoopStationDataController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: LoopStationTrack
  class LoopStationTrack;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::LoopStationDataController::$$c__DisplayClass42_2);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationDataController::$$c__DisplayClass42_2*, "VROSC", "LoopStationDataController/<>c__DisplayClass42_2");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.LoopStationDataController/VROSC.<>c__DisplayClass42_2
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class LoopStationDataController::$$c__DisplayClass42_2 : public ::Il2CppObject {
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
    // public VROSC.LoopStationTrack loopStationTrack
    // Size: 0x8
    // Offset: 0x10
    ::VROSC::LoopStationTrack* loopStationTrack;
    // Field size check
    static_assert(sizeof(::VROSC::LoopStationTrack*) == 0x8);
    // public VROSC.LoopStationDataController/VROSC.<>c__DisplayClass42_1 CS$<>8__locals2
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::LoopStationDataController::$$c__DisplayClass42_1* CS$$$8__locals2;
    // Field size check
    static_assert(sizeof(::VROSC::LoopStationDataController::$$c__DisplayClass42_1*) == 0x8);
    public:
    // Get instance field reference: public VROSC.LoopStationTrack loopStationTrack
    ::VROSC::LoopStationTrack*& dyn_loopStationTrack();
    // Get instance field reference: public VROSC.LoopStationDataController/VROSC.<>c__DisplayClass42_1 CS$<>8__locals2
    ::VROSC::LoopStationDataController::$$c__DisplayClass42_1*& dyn_CS$$$8__locals2();
    // System.Void <LoadData>b__1(System.Single[] audioData, System.Int32 length)
    // Offset: 0x13D6020
    void $LoadData$b__1(::ArrayW<float> audioData, int length);
    // public System.Void .ctor()
    // Offset: 0x13D6018
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoopStationDataController::$$c__DisplayClass42_2* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::LoopStationDataController::$$c__DisplayClass42_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoopStationDataController::$$c__DisplayClass42_2*, creationType>()));
    }
  }; // VROSC.LoopStationDataController/VROSC.<>c__DisplayClass42_2
  #pragma pack(pop)
  static check_size<sizeof(LoopStationDataController::$$c__DisplayClass42_2), 24 + sizeof(::VROSC::LoopStationDataController::$$c__DisplayClass42_1*)> __VROSC_LoopStationDataController_$$c__DisplayClass42_2SizeCheck;
  static_assert(sizeof(LoopStationDataController::$$c__DisplayClass42_2) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::LoopStationDataController::$$c__DisplayClass42_2::$LoadData$b__1
// Il2CppName: <LoadData>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationDataController::$$c__DisplayClass42_2::*)(::ArrayW<float>, int)>(&VROSC::LoopStationDataController::$$c__DisplayClass42_2::$LoadData$b__1)> {
  static const MethodInfo* get() {
    static auto* audioData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationDataController::$$c__DisplayClass42_2*), "<LoadData>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{audioData, length});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationDataController::$$c__DisplayClass42_2::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
