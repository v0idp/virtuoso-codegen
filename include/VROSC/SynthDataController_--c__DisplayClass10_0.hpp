// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.SynthDataController
#include "VROSC/SynthDataController.hpp"
// Including type: VROSC.Error
#include "VROSC/Error.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::SynthDataController::$$c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SynthDataController::$$c__DisplayClass10_0*, "VROSC", "SynthDataController/<>c__DisplayClass10_0");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SynthDataController/VROSC.<>c__DisplayClass10_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SynthDataController::$$c__DisplayClass10_0 : public ::Il2CppObject {
    public:
    public:
    // public VROSC.SynthDataController <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::VROSC::SynthDataController* $$4__this;
    // Field size check
    static_assert(sizeof(::VROSC::SynthDataController*) == 0x8);
    // public System.Action`1<VROSC.Error> onFailure
    // Size: 0x8
    // Offset: 0x18
    ::System::Action_1<::VROSC::Error>* onFailure;
    // Field size check
    static_assert(sizeof(::System::Action_1<::VROSC::Error>*) == 0x8);
    // public System.Action <>9__0
    // Size: 0x8
    // Offset: 0x20
    ::System::Action* $$9__0;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // public System.Action`1<VROSC.Error> <>9__1
    // Size: 0x8
    // Offset: 0x28
    ::System::Action_1<::VROSC::Error>* $$9__1;
    // Field size check
    static_assert(sizeof(::System::Action_1<::VROSC::Error>*) == 0x8);
    public:
    // Get instance field reference: public VROSC.SynthDataController <>4__this
    [[deprecated]] ::VROSC::SynthDataController*& dyn_$$4__this();
    // Get instance field reference: public System.Action`1<VROSC.Error> onFailure
    [[deprecated]] ::System::Action_1<::VROSC::Error>*& dyn_onFailure();
    // Get instance field reference: public System.Action <>9__0
    [[deprecated]] ::System::Action*& dyn_$$9__0();
    // Get instance field reference: public System.Action`1<VROSC.Error> <>9__1
    [[deprecated]] ::System::Action_1<::VROSC::Error>*& dyn_$$9__1();
    // System.Void <SaveData>b__0()
    // Offset: 0x8DA778
    void $SaveData$b__0();
    // System.Void <SaveData>b__1(VROSC.Error error)
    // Offset: 0x8DA7A0
    void $SaveData$b__1(::VROSC::Error error);
    // public System.Void .ctor()
    // Offset: 0x8DA770
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SynthDataController::$$c__DisplayClass10_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SynthDataController::$$c__DisplayClass10_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SynthDataController::$$c__DisplayClass10_0*, creationType>()));
    }
  }; // VROSC.SynthDataController/VROSC.<>c__DisplayClass10_0
  #pragma pack(pop)
  static check_size<sizeof(SynthDataController::$$c__DisplayClass10_0), 40 + sizeof(::System::Action_1<::VROSC::Error>*)> __VROSC_SynthDataController_$$c__DisplayClass10_0SizeCheck;
  static_assert(sizeof(SynthDataController::$$c__DisplayClass10_0) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SynthDataController::$$c__DisplayClass10_0::$SaveData$b__0
// Il2CppName: <SaveData>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SynthDataController::$$c__DisplayClass10_0::*)()>(&VROSC::SynthDataController::$$c__DisplayClass10_0::$SaveData$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController::$$c__DisplayClass10_0*), "<SaveData>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::$$c__DisplayClass10_0::$SaveData$b__1
// Il2CppName: <SaveData>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SynthDataController::$$c__DisplayClass10_0::*)(::VROSC::Error)>(&VROSC::SynthDataController::$$c__DisplayClass10_0::$SaveData$b__1)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataController::$$c__DisplayClass10_0*), "<SaveData>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataController::$$c__DisplayClass10_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
