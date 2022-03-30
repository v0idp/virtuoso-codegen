// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.SignalNode
#include "VROSC/SignalNode.hpp"
// Including type: AudioHelm.Param
#include "AudioHelm/Param.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: InstrumentController
  class InstrumentController;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: ParametricPositionSignalGenerator
  class ParametricPositionSignalGenerator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::ParametricPositionSignalGenerator);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ParametricPositionSignalGenerator*, "VROSC", "ParametricPositionSignalGenerator");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x59
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.ParametricPositionSignalGenerator
  // [TokenAttribute] Offset: FFFFFFFF
  class ParametricPositionSignalGenerator : public ::VROSC::SignalNode {
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
    // private AudioHelm.Param _paramX
    // Size: 0x14
    // Offset: 0x40
    ::AudioHelm::Param paramX;
    // Field size check
    static_assert(sizeof(::AudioHelm::Param) == 0x14);
    // private AudioHelm.Param _paramY
    // Size: 0x14
    // Offset: 0x44
    ::AudioHelm::Param paramY;
    // Field size check
    static_assert(sizeof(::AudioHelm::Param) == 0x14);
    // private AudioHelm.Param _paramZ
    // Size: 0x14
    // Offset: 0x48
    ::AudioHelm::Param paramZ;
    // Field size check
    static_assert(sizeof(::AudioHelm::Param) == 0x14);
    // private VROSC.InstrumentController _instrument
    // Size: 0x8
    // Offset: 0x50
    ::VROSC::InstrumentController* instrument;
    // Field size check
    static_assert(sizeof(::VROSC::InstrumentController*) == 0x8);
    // private System.Boolean _setup
    // Size: 0x1
    // Offset: 0x58
    bool setup;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private AudioHelm.Param _paramX
    ::AudioHelm::Param& dyn__paramX();
    // Get instance field reference: private AudioHelm.Param _paramY
    ::AudioHelm::Param& dyn__paramY();
    // Get instance field reference: private AudioHelm.Param _paramZ
    ::AudioHelm::Param& dyn__paramZ();
    // Get instance field reference: private VROSC.InstrumentController _instrument
    ::VROSC::InstrumentController*& dyn__instrument();
    // Get instance field reference: private System.Boolean _setup
    bool& dyn__setup();
    // public System.Void Setup(VROSC.InstrumentController instrument)
    // Offset: 0x8F8488
    void Setup(::VROSC::InstrumentController* instrument);
    // public System.Void ResetGenerator()
    // Offset: 0x8F8498
    void ResetGenerator();
    // private System.Void SendPositionalSignal()
    // Offset: 0x8F849C
    void SendPositionalSignal();
    // public System.Void .ctor()
    // Offset: 0x8F8720
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::.ctor()
    // Base method: System.Void Node::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ParametricPositionSignalGenerator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::ParametricPositionSignalGenerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ParametricPositionSignalGenerator*, creationType>()));
    }
    // protected override System.Void OnEnable()
    // Offset: 0x8F8650
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::OnEnable()
    void OnEnable();
  }; // VROSC.ParametricPositionSignalGenerator
  #pragma pack(pop)
  static check_size<sizeof(ParametricPositionSignalGenerator), 88 + sizeof(bool)> __VROSC_ParametricPositionSignalGeneratorSizeCheck;
  static_assert(sizeof(ParametricPositionSignalGenerator) == 0x59);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::ParametricPositionSignalGenerator::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ParametricPositionSignalGenerator::*)(::VROSC::InstrumentController*)>(&VROSC::ParametricPositionSignalGenerator::Setup)> {
  static const MethodInfo* get() {
    static auto* instrument = &::il2cpp_utils::GetClassFromName("VROSC", "InstrumentController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ParametricPositionSignalGenerator*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instrument});
  }
};
// Writing MetadataGetter for method: VROSC::ParametricPositionSignalGenerator::ResetGenerator
// Il2CppName: ResetGenerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ParametricPositionSignalGenerator::*)()>(&VROSC::ParametricPositionSignalGenerator::ResetGenerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ParametricPositionSignalGenerator*), "ResetGenerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ParametricPositionSignalGenerator::SendPositionalSignal
// Il2CppName: SendPositionalSignal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ParametricPositionSignalGenerator::*)()>(&VROSC::ParametricPositionSignalGenerator::SendPositionalSignal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ParametricPositionSignalGenerator*), "SendPositionalSignal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ParametricPositionSignalGenerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::ParametricPositionSignalGenerator::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ParametricPositionSignalGenerator::*)()>(&VROSC::ParametricPositionSignalGenerator::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ParametricPositionSignalGenerator*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};