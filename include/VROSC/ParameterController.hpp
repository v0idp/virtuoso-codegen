// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.SignalNode
#include "VROSC/SignalNode.hpp"
// Including type: VROSC.MidiCC
#include "VROSC/MidiCC.hpp"
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
  // Forward declaring type: Signal
  class Signal;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: ParameterController
  class ParameterController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::ParameterController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ParameterController*, "VROSC", "ParameterController");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.ParameterController
  // [TokenAttribute] Offset: FFFFFFFF
  class ParameterController : public ::VROSC::SignalNode {
    public:
    // Nested type: ::VROSC::ParameterController::TargetParameter
    struct TargetParameter;
    // Size: 0x14
    #pragma pack(push, 1)
    // Autogenerated type: VROSC.ParameterController/VROSC.TargetParameter
    // [TokenAttribute] Offset: FFFFFFFF
    struct TargetParameter/*, public ::System::Enum*/ {
      public:
      // Writing base type padding for base size: 0x0 to desired offset: 0x10
      char ___base_padding[0x10] = {};
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x10
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: TargetParameter
      constexpr TargetParameter(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public VROSC.ParameterController/VROSC.TargetParameter MidiPitchBend
      static constexpr const int MidiPitchBend = 0;
      // Get static field: static public VROSC.ParameterController/VROSC.TargetParameter MidiPitchBend
      static ::VROSC::ParameterController::TargetParameter _get_MidiPitchBend();
      // Set static field: static public VROSC.ParameterController/VROSC.TargetParameter MidiPitchBend
      static void _set_MidiPitchBend(::VROSC::ParameterController::TargetParameter value);
      // static field const value: static public VROSC.ParameterController/VROSC.TargetParameter MidiCC
      static constexpr const int MidiCC = 1;
      // Get static field: static public VROSC.ParameterController/VROSC.TargetParameter MidiCC
      static ::VROSC::ParameterController::TargetParameter _get_MidiCC();
      // Set static field: static public VROSC.ParameterController/VROSC.TargetParameter MidiCC
      static void _set_MidiCC(::VROSC::ParameterController::TargetParameter value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // VROSC.ParameterController/VROSC.TargetParameter
    #pragma pack(pop)
    static check_size<sizeof(ParameterController::TargetParameter), 16 + sizeof(int)> __VROSC_ParameterController_TargetParameterSizeCheck;
    static_assert(sizeof(ParameterController::TargetParameter) == 0x14);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private VROSC.ParameterController/VROSC.TargetParameter _targetParameter
    // Size: 0x14
    // Offset: 0x40
    ::VROSC::ParameterController::TargetParameter targetParameter;
    // Field size check
    static_assert(sizeof(::VROSC::ParameterController::TargetParameter) == 0x14);
    // private VROSC.MidiCC _midiCC
    // Size: 0x14
    // Offset: 0x44
    ::VROSC::MidiCC midiCC;
    // Field size check
    static_assert(sizeof(::VROSC::MidiCC) == 0x14);
    // private VROSC.InstrumentController _instrument
    // Size: 0x8
    // Offset: 0x48
    ::VROSC::InstrumentController* instrument;
    // Field size check
    static_assert(sizeof(::VROSC::InstrumentController*) == 0x8);
    // private System.Boolean _handSpecific
    // Size: 0x1
    // Offset: 0x50
    bool handSpecific;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _saveToPatch
    // Size: 0x1
    // Offset: 0x51
    bool saveToPatch;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: saveToPatch and: lastSendTime
    char __padding4[0x2] = {};
    // private System.Single _lastSendTime
    // Size: 0x4
    // Offset: 0x54
    float lastSendTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // static field const value: static private System.Single MaxExternalSendFrequency
    static constexpr const float MaxExternalSendFrequency = 50;
    // Get static field: static private System.Single MaxExternalSendFrequency
    static float _get_MaxExternalSendFrequency();
    // Set static field: static private System.Single MaxExternalSendFrequency
    static void _set_MaxExternalSendFrequency(float value);
    // Get instance field reference: private VROSC.ParameterController/VROSC.TargetParameter _targetParameter
    ::VROSC::ParameterController::TargetParameter& dyn__targetParameter();
    // Get instance field reference: private VROSC.MidiCC _midiCC
    ::VROSC::MidiCC& dyn__midiCC();
    // Get instance field reference: private VROSC.InstrumentController _instrument
    ::VROSC::InstrumentController*& dyn__instrument();
    // Get instance field reference: private System.Boolean _handSpecific
    bool& dyn__handSpecific();
    // Get instance field reference: private System.Boolean _saveToPatch
    bool& dyn__saveToPatch();
    // Get instance field reference: private System.Single _lastSendTime
    float& dyn__lastSendTime();
    // public VROSC.InstrumentController get_Instrument()
    // Offset: 0x8F8200
    ::VROSC::InstrumentController* get_Instrument();
    // public System.Void set_Instrument(VROSC.InstrumentController value)
    // Offset: 0x8F8208
    void set_Instrument(::VROSC::InstrumentController* value);
    // private System.Void UpdateParameterChange(VROSC.Signal signal)
    // Offset: 0x8F8214
    void UpdateParameterChange(::VROSC::Signal* signal);
    // public System.Void .ctor()
    // Offset: 0x8F8428
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::.ctor()
    // Base method: System.Void Node::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ParameterController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::ParameterController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ParameterController*, creationType>()));
    }
    // protected override System.Void NodeBegin(VROSC.Signal signal)
    // Offset: 0x8F8210
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::NodeBegin(VROSC.Signal signal)
    void NodeBegin(::VROSC::Signal* signal);
    // protected override System.Void NodeStay(VROSC.Signal signal)
    // Offset: 0x8F8424
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::NodeStay(VROSC.Signal signal)
    void NodeStay(::VROSC::Signal* signal);
  }; // VROSC.ParameterController
  #pragma pack(pop)
  static check_size<sizeof(ParameterController), 84 + sizeof(float)> __VROSC_ParameterControllerSizeCheck;
  static_assert(sizeof(ParameterController) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ParameterController::TargetParameter, "VROSC", "ParameterController/TargetParameter");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::ParameterController::get_Instrument
// Il2CppName: get_Instrument
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::InstrumentController* (VROSC::ParameterController::*)()>(&VROSC::ParameterController::get_Instrument)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ParameterController*), "get_Instrument", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ParameterController::set_Instrument
// Il2CppName: set_Instrument
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ParameterController::*)(::VROSC::InstrumentController*)>(&VROSC::ParameterController::set_Instrument)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VROSC", "InstrumentController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ParameterController*), "set_Instrument", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::ParameterController::UpdateParameterChange
// Il2CppName: UpdateParameterChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ParameterController::*)(::VROSC::Signal*)>(&VROSC::ParameterController::UpdateParameterChange)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ParameterController*), "UpdateParameterChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
// Writing MetadataGetter for method: VROSC::ParameterController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::ParameterController::NodeBegin
// Il2CppName: NodeBegin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ParameterController::*)(::VROSC::Signal*)>(&VROSC::ParameterController::NodeBegin)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ParameterController*), "NodeBegin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
// Writing MetadataGetter for method: VROSC::ParameterController::NodeStay
// Il2CppName: NodeStay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ParameterController::*)(::VROSC::Signal*)>(&VROSC::ParameterController::NodeStay)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ParameterController*), "NodeStay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
