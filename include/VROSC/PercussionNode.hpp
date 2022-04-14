// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.IntNode
#include "VROSC/IntNode.hpp"
// Including type: VROSC.MidiPercussion
#include "VROSC/MidiPercussion.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: PercussionNode
  class PercussionNode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::PercussionNode);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PercussionNode*, "VROSC", "PercussionNode");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.PercussionNode
  // [TokenAttribute] Offset: FFFFFFFF
  class PercussionNode : public ::VROSC::IntNode {
    public:
    public:
    // private VROSC.MidiPercussion _percussionValue
    // Size: 0x4
    // Offset: 0x30
    ::VROSC::MidiPercussion percussionValue;
    // Field size check
    static_assert(sizeof(::VROSC::MidiPercussion) == 0x4);
    public:
    // Get instance field reference: private VROSC.MidiPercussion _percussionValue
    [[deprecated]] ::VROSC::MidiPercussion& dyn__percussionValue();
    // public VROSC.MidiPercussion get_PercussionValue()
    // Offset: 0xADE824
    ::VROSC::MidiPercussion get_PercussionValue();
    // public System.Void set_PercussionValue(VROSC.MidiPercussion value)
    // Offset: 0xADE82C
    void set_PercussionValue(::VROSC::MidiPercussion value);
    // public System.Void .ctor()
    // Offset: 0xADE87C
    // Implemented from: VROSC.IntNode
    // Base method: System.Void IntNode::.ctor()
    // Base method: System.Void Node::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PercussionNode* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::PercussionNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PercussionNode*, creationType>()));
    }
    // protected override System.Void OnValidate()
    // Offset: 0xADE838
    // Implemented from: VROSC.IntNode
    // Base method: System.Void IntNode::OnValidate()
    void OnValidate();
    // protected override System.Int32 SetValueInRange(System.Int32 value)
    // Offset: 0xADE854
    // Implemented from: VROSC.IntNode
    // Base method: System.Int32 IntNode::SetValueInRange(System.Int32 value)
    int SetValueInRange(int value);
  }; // VROSC.PercussionNode
  #pragma pack(pop)
  static check_size<sizeof(PercussionNode), 48 + sizeof(::VROSC::MidiPercussion)> __VROSC_PercussionNodeSizeCheck;
  static_assert(sizeof(PercussionNode) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::PercussionNode::get_PercussionValue
// Il2CppName: get_PercussionValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::MidiPercussion (VROSC::PercussionNode::*)()>(&VROSC::PercussionNode::get_PercussionValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::PercussionNode*), "get_PercussionValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::PercussionNode::set_PercussionValue
// Il2CppName: set_PercussionValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PercussionNode::*)(::VROSC::MidiPercussion)>(&VROSC::PercussionNode::set_PercussionValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VROSC", "MidiPercussion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::PercussionNode*), "set_PercussionValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::PercussionNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::PercussionNode::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PercussionNode::*)()>(&VROSC::PercussionNode::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::PercussionNode*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::PercussionNode::SetValueInRange
// Il2CppName: SetValueInRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::PercussionNode::*)(int)>(&VROSC::PercussionNode::SetValueInRange)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::PercussionNode*), "SetValueInRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
