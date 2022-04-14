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
  // Forward declaring type: FloatNode
  class FloatNode;
  // Forward declaring type: Signal
  class Signal;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: FloatChanger
  class FloatChanger;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::FloatChanger);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FloatChanger*, "VROSC", "FloatChanger");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x49
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.FloatChanger
  // [TokenAttribute] Offset: FFFFFFFF
  class FloatChanger : public ::VROSC::SignalNode {
    public:
    public:
    // protected VROSC.FloatNode _outputNode
    // Size: 0x8
    // Offset: 0x40
    ::VROSC::FloatNode* outputNode;
    // Field size check
    static_assert(sizeof(::VROSC::FloatNode*) == 0x8);
    // protected System.Boolean _continuous
    // Size: 0x1
    // Offset: 0x48
    bool continuous;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: protected VROSC.FloatNode _outputNode
    [[deprecated]] ::VROSC::FloatNode*& dyn__outputNode();
    // Get instance field reference: protected System.Boolean _continuous
    [[deprecated]] bool& dyn__continuous();
    // protected System.Void SetValueBySignal(VROSC.Signal signal)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetValueBySignal(::VROSC::Signal* signal);
    // protected override System.Int32 get_MaxInputs()
    // Offset: 0x199F6B4
    // Implemented from: VROSC.SignalNode
    // Base method: System.Int32 SignalNode::get_MaxInputs()
    int get_MaxInputs();
    // protected System.Void .ctor()
    // Offset: 0x199F80C
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::.ctor()
    // Base method: System.Void Node::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FloatChanger* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::FloatChanger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FloatChanger*, creationType>()));
    }
    // protected override System.Void NodeBegin(VROSC.Signal signal)
    // Offset: 0x199F6BC
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::NodeBegin(VROSC.Signal signal)
    void NodeBegin(::VROSC::Signal* signal);
    // protected override System.Void NodeStay(VROSC.Signal signal)
    // Offset: 0x199F760
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::NodeStay(VROSC.Signal signal)
    void NodeStay(::VROSC::Signal* signal);
  }; // VROSC.FloatChanger
  #pragma pack(pop)
  static check_size<sizeof(FloatChanger), 72 + sizeof(bool)> __VROSC_FloatChangerSizeCheck;
  static_assert(sizeof(FloatChanger) == 0x49);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::FloatChanger::SetValueBySignal
// Il2CppName: SetValueBySignal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::FloatChanger::*)(::VROSC::Signal*)>(&VROSC::FloatChanger::SetValueBySignal)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::FloatChanger*), "SetValueBySignal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
// Writing MetadataGetter for method: VROSC::FloatChanger::get_MaxInputs
// Il2CppName: get_MaxInputs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::FloatChanger::*)()>(&VROSC::FloatChanger::get_MaxInputs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::FloatChanger*), "get_MaxInputs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::FloatChanger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::FloatChanger::NodeBegin
// Il2CppName: NodeBegin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::FloatChanger::*)(::VROSC::Signal*)>(&VROSC::FloatChanger::NodeBegin)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::FloatChanger*), "NodeBegin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
// Writing MetadataGetter for method: VROSC::FloatChanger::NodeStay
// Il2CppName: NodeStay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::FloatChanger::*)(::VROSC::Signal*)>(&VROSC::FloatChanger::NodeStay)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::FloatChanger*), "NodeStay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
