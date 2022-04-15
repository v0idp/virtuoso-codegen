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
  // Forward declaring type: SignalFilter
  class SignalFilter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::SignalFilter);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SignalFilter*, "VROSC", "SignalFilter");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SignalFilter
  // [TokenAttribute] Offset: FFFFFFFF
  class SignalFilter : public ::VROSC::SignalNode {
    public:
    // protected System.Void FilterSignal(VROSC.Signal signal)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void FilterSignal(::VROSC::Signal* signal);
    // protected System.Void .ctor()
    // Offset: 0x1928324
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::.ctor()
    // Base method: System.Void Node::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SignalFilter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SignalFilter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SignalFilter*, creationType>()));
    }
    // protected override System.Void NodeBegin(VROSC.Signal signal)
    // Offset: 0x1928304
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::NodeBegin(VROSC.Signal signal)
    void NodeBegin(::VROSC::Signal* signal);
    // protected override System.Void NodeStay(VROSC.Signal signal)
    // Offset: 0x1928314
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::NodeStay(VROSC.Signal signal)
    void NodeStay(::VROSC::Signal* signal);
  }; // VROSC.SignalFilter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SignalFilter::FilterSignal
// Il2CppName: FilterSignal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SignalFilter::*)(::VROSC::Signal*)>(&VROSC::SignalFilter::FilterSignal)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SignalFilter*), "FilterSignal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
// Writing MetadataGetter for method: VROSC::SignalFilter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::SignalFilter::NodeBegin
// Il2CppName: NodeBegin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SignalFilter::*)(::VROSC::Signal*)>(&VROSC::SignalFilter::NodeBegin)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SignalFilter*), "NodeBegin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
// Writing MetadataGetter for method: VROSC::SignalFilter::NodeStay
// Il2CppName: NodeStay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SignalFilter::*)(::VROSC::Signal*)>(&VROSC::SignalFilter::NodeStay)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SignalFilter*), "NodeStay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
