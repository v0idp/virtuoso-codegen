// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.LeafNode
#include "System/Xml/Schema/LeafNode.hpp"
// Including type: System.Decimal
#include "System/Decimal.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: BitSet
  class BitSet;
  // Forward declaring type: InteriorNode
  class InteriorNode;
  // Forward declaring type: SymbolsDictionary
  class SymbolsDictionary;
  // Forward declaring type: Positions
  class Positions;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: LeafRangeNode
  class LeafRangeNode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::LeafRangeNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::LeafRangeNode*, "System.Xml.Schema", "LeafRangeNode");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.LeafRangeNode
  // [TokenAttribute] Offset: FFFFFFFF
  class LeafRangeNode : public ::System::Xml::Schema::LeafNode {
    public:
    public:
    // private System.Decimal min
    // Size: 0x10
    // Offset: 0x14
    ::System::Decimal min;
    // Field size check
    static_assert(sizeof(::System::Decimal) == 0x10);
    // private System.Decimal max
    // Size: 0x10
    // Offset: 0x24
    ::System::Decimal max;
    // Field size check
    static_assert(sizeof(::System::Decimal) == 0x10);
    // Padding between fields: max and: nextIteration
    char __padding1[0x4] = {};
    // private System.Xml.Schema.BitSet nextIteration
    // Size: 0x8
    // Offset: 0x38
    ::System::Xml::Schema::BitSet* nextIteration;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::BitSet*) == 0x8);
    public:
    // Deleting conversion operator: operator int
    constexpr operator int() const noexcept = delete;
    // Get instance field reference: private System.Decimal min
    [[deprecated]] ::System::Decimal& dyn_min();
    // Get instance field reference: private System.Decimal max
    [[deprecated]] ::System::Decimal& dyn_max();
    // Get instance field reference: private System.Xml.Schema.BitSet nextIteration
    [[deprecated]] ::System::Xml::Schema::BitSet*& dyn_nextIteration();
    // public System.Decimal get_Max()
    // Offset: 0xAF344C
    ::System::Decimal get_Max();
    // public System.Decimal get_Min()
    // Offset: 0xAF345C
    ::System::Decimal get_Min();
    // public System.Xml.Schema.BitSet get_NextIteration()
    // Offset: 0xAF346C
    ::System::Xml::Schema::BitSet* get_NextIteration();
    // public System.Void set_NextIteration(System.Xml.Schema.BitSet value)
    // Offset: 0xAF3474
    void set_NextIteration(::System::Xml::Schema::BitSet* value);
    // public System.Void .ctor(System.Decimal min, System.Decimal max)
    // Offset: 0xAF3394
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeafRangeNode* New_ctor(::System::Decimal min, ::System::Decimal max) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::LeafRangeNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeafRangeNode*, creationType>(min, max)));
    }
    // public System.Void .ctor(System.Int32 pos, System.Decimal min, System.Decimal max)
    // Offset: 0xAF33F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeafRangeNode* New_ctor(int pos, ::System::Decimal min, ::System::Decimal max) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::LeafRangeNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeafRangeNode*, creationType>(pos, min, max)));
    }
    // public override System.Boolean get_IsRangeNode()
    // Offset: 0xAF347C
    // Implemented from: System.Xml.Schema.SyntaxTreeNode
    // Base method: System.Boolean SyntaxTreeNode::get_IsRangeNode()
    bool get_IsRangeNode();
    // public override System.Void ExpandTree(System.Xml.Schema.InteriorNode parent, System.Xml.Schema.SymbolsDictionary symbols, System.Xml.Schema.Positions positions)
    // Offset: 0xAF3484
    // Implemented from: System.Xml.Schema.LeafNode
    // Base method: System.Void LeafNode::ExpandTree(System.Xml.Schema.InteriorNode parent, System.Xml.Schema.SymbolsDictionary symbols, System.Xml.Schema.Positions positions)
    void ExpandTree(::System::Xml::Schema::InteriorNode* parent, ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::Positions* positions);
  }; // System.Xml.Schema.LeafRangeNode
  #pragma pack(pop)
  static check_size<sizeof(LeafRangeNode), 56 + sizeof(::System::Xml::Schema::BitSet*)> __System_Xml_Schema_LeafRangeNodeSizeCheck;
  static_assert(sizeof(LeafRangeNode) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::LeafRangeNode::get_Max
// Il2CppName: get_Max
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (System::Xml::Schema::LeafRangeNode::*)()>(&System::Xml::Schema::LeafRangeNode::get_Max)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::LeafRangeNode*), "get_Max", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::LeafRangeNode::get_Min
// Il2CppName: get_Min
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (System::Xml::Schema::LeafRangeNode::*)()>(&System::Xml::Schema::LeafRangeNode::get_Min)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::LeafRangeNode*), "get_Min", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::LeafRangeNode::get_NextIteration
// Il2CppName: get_NextIteration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::BitSet* (System::Xml::Schema::LeafRangeNode::*)()>(&System::Xml::Schema::LeafRangeNode::get_NextIteration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::LeafRangeNode*), "get_NextIteration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::LeafRangeNode::set_NextIteration
// Il2CppName: set_NextIteration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::LeafRangeNode::*)(::System::Xml::Schema::BitSet*)>(&System::Xml::Schema::LeafRangeNode::set_NextIteration)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "BitSet")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::LeafRangeNode*), "set_NextIteration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::LeafRangeNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::LeafRangeNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::LeafRangeNode::get_IsRangeNode
// Il2CppName: get_IsRangeNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::LeafRangeNode::*)()>(&System::Xml::Schema::LeafRangeNode::get_IsRangeNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::LeafRangeNode*), "get_IsRangeNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::LeafRangeNode::ExpandTree
// Il2CppName: ExpandTree
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::LeafRangeNode::*)(::System::Xml::Schema::InteriorNode*, ::System::Xml::Schema::SymbolsDictionary*, ::System::Xml::Schema::Positions*)>(&System::Xml::Schema::LeafRangeNode::ExpandTree)> {
  static const MethodInfo* get() {
    static auto* parent = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "InteriorNode")->byval_arg;
    static auto* symbols = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "SymbolsDictionary")->byval_arg;
    static auto* positions = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "Positions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::LeafRangeNode*), "ExpandTree", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parent, symbols, positions});
  }
};
