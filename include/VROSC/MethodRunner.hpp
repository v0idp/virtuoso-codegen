// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.SignalNode
#include "VROSC/SignalNode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: Signal
  class Signal;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: MethodRunner
  class MethodRunner;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::MethodRunner);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MethodRunner*, "VROSC", "MethodRunner");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.MethodRunner
  // [TokenAttribute] Offset: FFFFFFFF
  class MethodRunner : public ::VROSC::SignalNode {
    public:
    // Nested type: ::VROSC::MethodRunner::RunMethodEvent
    class RunMethodEvent;
    public:
    // private VROSC.MethodRunner/VROSC.RunMethodEvent _targetMethod
    // Size: 0x8
    // Offset: 0x40
    ::VROSC::MethodRunner::RunMethodEvent* targetMethod;
    // Field size check
    static_assert(sizeof(::VROSC::MethodRunner::RunMethodEvent*) == 0x8);
    public:
    // Get instance field reference: private VROSC.MethodRunner/VROSC.RunMethodEvent _targetMethod
    [[deprecated]] ::VROSC::MethodRunner::RunMethodEvent*& dyn__targetMethod();
    // public System.Void .ctor()
    // Offset: 0xAC1D90
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::.ctor()
    // Base method: System.Void Node::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MethodRunner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::MethodRunner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MethodRunner*, creationType>()));
    }
    // protected override System.Void NodeBegin(VROSC.Signal signal)
    // Offset: 0xAC1D2C
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::NodeBegin(VROSC.Signal signal)
    void NodeBegin(::VROSC::Signal* signal);
  }; // VROSC.MethodRunner
  #pragma pack(pop)
  static check_size<sizeof(MethodRunner), 64 + sizeof(::VROSC::MethodRunner::RunMethodEvent*)> __VROSC_MethodRunnerSizeCheck;
  static_assert(sizeof(MethodRunner) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::MethodRunner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::MethodRunner::NodeBegin
// Il2CppName: NodeBegin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MethodRunner::*)(::VROSC::Signal*)>(&VROSC::MethodRunner::NodeBegin)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MethodRunner*), "NodeBegin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
