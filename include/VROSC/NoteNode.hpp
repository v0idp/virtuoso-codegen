// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.IntNode
#include "VROSC/IntNode.hpp"
// Including type: VROSC.Note
#include "VROSC/Note.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: NoteNode
  class NoteNode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::NoteNode);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteNode*, "VROSC", "NoteNode");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.NoteNode
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteNode : public ::VROSC::IntNode {
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
    // private VROSC.Note _note
    // Size: 0x14
    // Offset: 0x30
    ::VROSC::Note note;
    // Field size check
    static_assert(sizeof(::VROSC::Note) == 0x14);
    public:
    // Get instance field reference: private VROSC.Note _note
    ::VROSC::Note& dyn__note();
    // public VROSC.Note get_Note()
    // Offset: 0xA15D28
    ::VROSC::Note get_Note();
    // public System.Void set_Note(VROSC.Note value)
    // Offset: 0xA15D30
    void set_Note(::VROSC::Note value);
    // public System.Void .ctor()
    // Offset: 0xA15D88
    // Implemented from: VROSC.IntNode
    // Base method: System.Void IntNode::.ctor()
    // Base method: System.Void Node::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteNode* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::NoteNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteNode*, creationType>()));
    }
    // protected override System.Void OnValidate()
    // Offset: 0xA15D3C
    // Implemented from: VROSC.IntNode
    // Base method: System.Void IntNode::OnValidate()
    void OnValidate();
    // protected override System.Int32 SetValueInRange(System.Int32 value)
    // Offset: 0xA15D60
    // Implemented from: VROSC.IntNode
    // Base method: System.Int32 IntNode::SetValueInRange(System.Int32 value)
    int SetValueInRange(int value);
  }; // VROSC.NoteNode
  #pragma pack(pop)
  static check_size<sizeof(NoteNode), 48 + sizeof(::VROSC::Note)> __VROSC_NoteNodeSizeCheck;
  static_assert(sizeof(NoteNode) == 0x44);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::NoteNode::get_Note
// Il2CppName: get_Note
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::Note (VROSC::NoteNode::*)()>(&VROSC::NoteNode::get_Note)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteNode*), "get_Note", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteNode::set_Note
// Il2CppName: set_Note
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteNode::*)(::VROSC::Note)>(&VROSC::NoteNode::set_Note)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VROSC", "Note")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteNode*), "set_Note", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::NoteNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::NoteNode::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteNode::*)()>(&VROSC::NoteNode::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteNode*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteNode::SetValueInRange
// Il2CppName: SetValueInRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::NoteNode::*)(int)>(&VROSC::NoteNode::SetValueInRange)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteNode*), "SetValueInRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
