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
  // Forward declaring type: TransformMover
  class TransformMover;
  // Forward declaring type: Signal
  class Signal;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: SignalToMover
  class SignalToMover;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::SignalToMover);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SignalToMover*, "VROSC", "SignalToMover");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SignalToMover
  // [TokenAttribute] Offset: FFFFFFFF
  class SignalToMover : public ::VROSC::SignalNode {
    public:
    public:
    // private VROSC.TransformMover transformMover
    // Size: 0x8
    // Offset: 0x40
    ::VROSC::TransformMover* transformMover;
    // Field size check
    static_assert(sizeof(::VROSC::TransformMover*) == 0x8);
    public:
    // Get instance field reference: private VROSC.TransformMover transformMover
    [[deprecated]] ::VROSC::TransformMover*& dyn_transformMover();
    // public System.Void .ctor()
    // Offset: 0x19287E4
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::.ctor()
    // Base method: System.Void Node::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SignalToMover* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SignalToMover::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SignalToMover*, creationType>()));
    }
    // protected override System.Void NodeBegin(VROSC.Signal signal)
    // Offset: 0x192864C
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::NodeBegin(VROSC.Signal signal)
    void NodeBegin(::VROSC::Signal* signal);
    // protected override System.Void NodeEnd(VROSC.Signal signal)
    // Offset: 0x1928718
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::NodeEnd(VROSC.Signal signal)
    void NodeEnd(::VROSC::Signal* signal);
  }; // VROSC.SignalToMover
  #pragma pack(pop)
  static check_size<sizeof(SignalToMover), 64 + sizeof(::VROSC::TransformMover*)> __VROSC_SignalToMoverSizeCheck;
  static_assert(sizeof(SignalToMover) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SignalToMover::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::SignalToMover::NodeBegin
// Il2CppName: NodeBegin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SignalToMover::*)(::VROSC::Signal*)>(&VROSC::SignalToMover::NodeBegin)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SignalToMover*), "NodeBegin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
// Writing MetadataGetter for method: VROSC::SignalToMover::NodeEnd
// Il2CppName: NodeEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SignalToMover::*)(::VROSC::Signal*)>(&VROSC::SignalToMover::NodeEnd)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SignalToMover*), "NodeEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
