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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
  // Forward declaring type: ToggleBypass
  class ToggleBypass;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::ToggleBypass);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ToggleBypass*, "VROSC", "ToggleBypass");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.ToggleBypass
  // [TokenAttribute] Offset: FFFFFFFF
  class ToggleBypass : public ::VROSC::SignalNode {
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
    // private VROSC.SignalNode[] _nodesToToggle
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::VROSC::SignalNode*> nodesToToggle;
    // Field size check
    static_assert(sizeof(::ArrayW<::VROSC::SignalNode*>) == 0x8);
    public:
    // Get instance field reference: private VROSC.SignalNode[] _nodesToToggle
    ::ArrayW<::VROSC::SignalNode*>& dyn__nodesToToggle();
    // public System.Void .ctor()
    // Offset: 0x1400248
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::.ctor()
    // Base method: System.Void Node::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ToggleBypass* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::ToggleBypass::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ToggleBypass*, creationType>()));
    }
    // protected override System.Void NodeBegin(VROSC.Signal signal)
    // Offset: 0x140015C
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::NodeBegin(VROSC.Signal signal)
    void NodeBegin(::VROSC::Signal* signal);
  }; // VROSC.ToggleBypass
  #pragma pack(pop)
  static check_size<sizeof(ToggleBypass), 64 + sizeof(::ArrayW<::VROSC::SignalNode*>)> __VROSC_ToggleBypassSizeCheck;
  static_assert(sizeof(ToggleBypass) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::ToggleBypass::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::ToggleBypass::NodeBegin
// Il2CppName: NodeBegin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ToggleBypass::*)(::VROSC::Signal*)>(&VROSC::ToggleBypass::NodeBegin)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ToggleBypass*), "NodeBegin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
