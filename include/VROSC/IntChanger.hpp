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
  // Forward declaring type: IntNode
  class IntNode;
  // Forward declaring type: Signal
  class Signal;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: IntChanger
  class IntChanger;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::IntChanger);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::IntChanger*, "VROSC", "IntChanger");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x49
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.IntChanger
  // [TokenAttribute] Offset: FFFFFFFF
  class IntChanger : public ::VROSC::SignalNode {
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
    // protected VROSC.IntNode _outputNode
    // Size: 0x8
    // Offset: 0x40
    ::VROSC::IntNode* outputNode;
    // Field size check
    static_assert(sizeof(::VROSC::IntNode*) == 0x8);
    // protected System.Boolean _continuous
    // Size: 0x1
    // Offset: 0x48
    bool continuous;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: protected VROSC.IntNode _outputNode
    ::VROSC::IntNode*& dyn__outputNode();
    // Get instance field reference: protected System.Boolean _continuous
    bool& dyn__continuous();
    // protected System.Void SetValueBySignal(VROSC.Signal signal)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetValueBySignal(::VROSC::Signal* signal);
    // protected override System.Int32 get_MaxInputs()
    // Offset: 0x1385574
    // Implemented from: VROSC.SignalNode
    // Base method: System.Int32 SignalNode::get_MaxInputs()
    int get_MaxInputs();
    // protected System.Void .ctor()
    // Offset: 0x13856CC
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::.ctor()
    // Base method: System.Void Node::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IntChanger* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::IntChanger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IntChanger*, creationType>()));
    }
    // protected override System.Void NodeBegin(VROSC.Signal signal)
    // Offset: 0x138557C
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::NodeBegin(VROSC.Signal signal)
    void NodeBegin(::VROSC::Signal* signal);
    // protected override System.Void NodeStay(VROSC.Signal signal)
    // Offset: 0x1385620
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::NodeStay(VROSC.Signal signal)
    void NodeStay(::VROSC::Signal* signal);
  }; // VROSC.IntChanger
  #pragma pack(pop)
  static check_size<sizeof(IntChanger), 72 + sizeof(bool)> __VROSC_IntChangerSizeCheck;
  static_assert(sizeof(IntChanger) == 0x49);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::IntChanger::SetValueBySignal
// Il2CppName: SetValueBySignal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::IntChanger::*)(::VROSC::Signal*)>(&VROSC::IntChanger::SetValueBySignal)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::IntChanger*), "SetValueBySignal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
// Writing MetadataGetter for method: VROSC::IntChanger::get_MaxInputs
// Il2CppName: get_MaxInputs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::IntChanger::*)()>(&VROSC::IntChanger::get_MaxInputs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::IntChanger*), "get_MaxInputs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::IntChanger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::IntChanger::NodeBegin
// Il2CppName: NodeBegin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::IntChanger::*)(::VROSC::Signal*)>(&VROSC::IntChanger::NodeBegin)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::IntChanger*), "NodeBegin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
// Writing MetadataGetter for method: VROSC::IntChanger::NodeStay
// Il2CppName: NodeStay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::IntChanger::*)(::VROSC::Signal*)>(&VROSC::IntChanger::NodeStay)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::IntChanger*), "NodeStay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
