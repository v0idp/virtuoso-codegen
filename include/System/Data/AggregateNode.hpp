// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Data.ExpressionNode
#include "System/Data/ExpressionNode.hpp"
// Including type: System.Data.AggregateType
#include "System/Data/AggregateType.hpp"
// Including type: System.Data.Aggregate
#include "System/Data/Aggregate.hpp"
// Including type: System.Data.FunctionId
#include "System/Data/FunctionId.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Data
namespace System::Data {
  // Forward declaring type: DataTable
  class DataTable;
  // Forward declaring type: DataColumn
  class DataColumn;
  // Forward declaring type: DataRelation
  class DataRelation;
  // Forward declaring type: DataRow
  class DataRow;
  // Forward declaring type: DataRowVersion
  struct DataRowVersion;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: System.Data
namespace System::Data {
  // Forward declaring type: AggregateNode
  class AggregateNode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::AggregateNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::AggregateNode*, "System.Data", "AggregateNode");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.AggregateNode
  // [TokenAttribute] Offset: FFFFFFFF
  class AggregateNode : public ::System::Data::ExpressionNode {
    public:
    public:
    // private readonly System.Data.AggregateType _type
    // Size: 0x4
    // Offset: 0x18
    ::System::Data::AggregateType type;
    // Field size check
    static_assert(sizeof(::System::Data::AggregateType) == 0x4);
    // private readonly System.Data.Aggregate _aggregate
    // Size: 0x4
    // Offset: 0x1C
    ::System::Data::Aggregate aggregate;
    // Field size check
    static_assert(sizeof(::System::Data::Aggregate) == 0x4);
    // private readonly System.Boolean _local
    // Size: 0x1
    // Offset: 0x20
    bool local;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: local and: relationName
    char __padding2[0x7] = {};
    // private readonly System.String _relationName
    // Size: 0x8
    // Offset: 0x28
    ::StringW relationName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.String _columnName
    // Size: 0x8
    // Offset: 0x30
    ::StringW columnName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Data.DataTable _childTable
    // Size: 0x8
    // Offset: 0x38
    ::System::Data::DataTable* childTable;
    // Field size check
    static_assert(sizeof(::System::Data::DataTable*) == 0x8);
    // private System.Data.DataColumn _column
    // Size: 0x8
    // Offset: 0x40
    ::System::Data::DataColumn* column;
    // Field size check
    static_assert(sizeof(::System::Data::DataColumn*) == 0x8);
    // private System.Data.DataRelation _relation
    // Size: 0x8
    // Offset: 0x48
    ::System::Data::DataRelation* relation;
    // Field size check
    static_assert(sizeof(::System::Data::DataRelation*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::Data::DataTable*
    constexpr operator ::System::Data::DataTable*() const noexcept = delete;
    // Get instance field reference: private readonly System.Data.AggregateType _type
    [[deprecated]] ::System::Data::AggregateType& dyn__type();
    // Get instance field reference: private readonly System.Data.Aggregate _aggregate
    [[deprecated]] ::System::Data::Aggregate& dyn__aggregate();
    // Get instance field reference: private readonly System.Boolean _local
    [[deprecated]] bool& dyn__local();
    // Get instance field reference: private readonly System.String _relationName
    [[deprecated]] ::StringW& dyn__relationName();
    // Get instance field reference: private readonly System.String _columnName
    [[deprecated]] ::StringW& dyn__columnName();
    // Get instance field reference: private System.Data.DataTable _childTable
    [[deprecated]] ::System::Data::DataTable*& dyn__childTable();
    // Get instance field reference: private System.Data.DataColumn _column
    [[deprecated]] ::System::Data::DataColumn*& dyn__column();
    // Get instance field reference: private System.Data.DataRelation _relation
    [[deprecated]] ::System::Data::DataRelation*& dyn__relation();
    // System.Void .ctor(System.Data.DataTable table, System.Data.FunctionId aggregateType, System.String columnName)
    // Offset: 0x14A1B30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AggregateNode* New_ctor(::System::Data::DataTable* table, ::System::Data::FunctionId aggregateType, ::StringW columnName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::AggregateNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AggregateNode*, creationType>(table, aggregateType, columnName)));
    }
    // System.Void .ctor(System.Data.DataTable table, System.Data.FunctionId aggregateType, System.String columnName, System.Boolean local, System.String relationName)
    // Offset: 0x14A1B3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AggregateNode* New_ctor(::System::Data::DataTable* table, ::System::Data::FunctionId aggregateType, ::StringW columnName, bool local, ::StringW relationName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::AggregateNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AggregateNode*, creationType>(table, aggregateType, columnName, local, relationName)));
    }
    // static System.Void Bind(System.Data.DataRelation relation, System.Collections.Generic.List`1<System.Data.DataColumn> list)
    // Offset: 0x14A1E74
    static void Bind(::System::Data::DataRelation* relation, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* list);
    // override System.Void Bind(System.Data.DataTable table, System.Collections.Generic.List`1<System.Data.DataColumn> list)
    // Offset: 0x14A1C3C
    // Implemented from: System.Data.ExpressionNode
    // Base method: System.Void ExpressionNode::Bind(System.Data.DataTable table, System.Collections.Generic.List`1<System.Data.DataColumn> list)
    void Bind(::System::Data::DataTable* table, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* list);
    // override System.Object Eval()
    // Offset: 0x14A1FEC
    // Implemented from: System.Data.ExpressionNode
    // Base method: System.Object ExpressionNode::Eval()
    ::Il2CppObject* Eval();
    // override System.Object Eval(System.Data.DataRow row, System.Data.DataRowVersion version)
    // Offset: 0x14A2000
    // Implemented from: System.Data.ExpressionNode
    // Base method: System.Object ExpressionNode::Eval(System.Data.DataRow row, System.Data.DataRowVersion version)
    ::Il2CppObject* Eval(::System::Data::DataRow* row, ::System::Data::DataRowVersion version);
    // override System.Object Eval(System.Int32[] records)
    // Offset: 0x14A2384
    // Implemented from: System.Data.ExpressionNode
    // Base method: System.Object ExpressionNode::Eval(System.Int32[] records)
    ::Il2CppObject* Eval(::ArrayW<int> records);
    // override System.Boolean IsConstant()
    // Offset: 0x14A2408
    // Implemented from: System.Data.ExpressionNode
    // Base method: System.Boolean ExpressionNode::IsConstant()
    bool IsConstant();
    // override System.Boolean IsTableConstant()
    // Offset: 0x14A2410
    // Implemented from: System.Data.ExpressionNode
    // Base method: System.Boolean ExpressionNode::IsTableConstant()
    bool IsTableConstant();
    // override System.Boolean HasLocalAggregate()
    // Offset: 0x14A2418
    // Implemented from: System.Data.ExpressionNode
    // Base method: System.Boolean ExpressionNode::HasLocalAggregate()
    bool HasLocalAggregate();
    // override System.Boolean HasRemoteAggregate()
    // Offset: 0x14A2420
    // Implemented from: System.Data.ExpressionNode
    // Base method: System.Boolean ExpressionNode::HasRemoteAggregate()
    bool HasRemoteAggregate();
    // override System.Boolean DependsOn(System.Data.DataColumn column)
    // Offset: 0x14A2430
    // Implemented from: System.Data.ExpressionNode
    // Base method: System.Boolean ExpressionNode::DependsOn(System.Data.DataColumn column)
    bool DependsOn(::System::Data::DataColumn* column);
    // override System.Data.ExpressionNode Optimize()
    // Offset: 0x14A2478
    // Implemented from: System.Data.ExpressionNode
    // Base method: System.Data.ExpressionNode ExpressionNode::Optimize()
    ::System::Data::ExpressionNode* Optimize();
  }; // System.Data.AggregateNode
  #pragma pack(pop)
  static check_size<sizeof(AggregateNode), 72 + sizeof(::System::Data::DataRelation*)> __System_Data_AggregateNodeSizeCheck;
  static_assert(sizeof(AggregateNode) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::AggregateNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::AggregateNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::AggregateNode::Bind
// Il2CppName: Bind
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Data::DataRelation*, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>*)>(&System::Data::AggregateNode::Bind)> {
  static const MethodInfo* get() {
    static auto* relation = &::il2cpp_utils::GetClassFromName("System.Data", "DataRelation")->byval_arg;
    static auto* list = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Data", "DataColumn")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::AggregateNode*), "Bind", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{relation, list});
  }
};
// Writing MetadataGetter for method: System::Data::AggregateNode::Bind
// Il2CppName: Bind
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::AggregateNode::*)(::System::Data::DataTable*, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>*)>(&System::Data::AggregateNode::Bind)> {
  static const MethodInfo* get() {
    static auto* table = &::il2cpp_utils::GetClassFromName("System.Data", "DataTable")->byval_arg;
    static auto* list = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Data", "DataColumn")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::AggregateNode*), "Bind", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{table, list});
  }
};
// Writing MetadataGetter for method: System::Data::AggregateNode::Eval
// Il2CppName: Eval
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::AggregateNode::*)()>(&System::Data::AggregateNode::Eval)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::AggregateNode*), "Eval", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::AggregateNode::Eval
// Il2CppName: Eval
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::AggregateNode::*)(::System::Data::DataRow*, ::System::Data::DataRowVersion)>(&System::Data::AggregateNode::Eval)> {
  static const MethodInfo* get() {
    static auto* row = &::il2cpp_utils::GetClassFromName("System.Data", "DataRow")->byval_arg;
    static auto* version = &::il2cpp_utils::GetClassFromName("System.Data", "DataRowVersion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::AggregateNode*), "Eval", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{row, version});
  }
};
// Writing MetadataGetter for method: System::Data::AggregateNode::Eval
// Il2CppName: Eval
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::AggregateNode::*)(::ArrayW<int>)>(&System::Data::AggregateNode::Eval)> {
  static const MethodInfo* get() {
    static auto* records = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::AggregateNode*), "Eval", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{records});
  }
};
// Writing MetadataGetter for method: System::Data::AggregateNode::IsConstant
// Il2CppName: IsConstant
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::AggregateNode::*)()>(&System::Data::AggregateNode::IsConstant)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::AggregateNode*), "IsConstant", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::AggregateNode::IsTableConstant
// Il2CppName: IsTableConstant
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::AggregateNode::*)()>(&System::Data::AggregateNode::IsTableConstant)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::AggregateNode*), "IsTableConstant", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::AggregateNode::HasLocalAggregate
// Il2CppName: HasLocalAggregate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::AggregateNode::*)()>(&System::Data::AggregateNode::HasLocalAggregate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::AggregateNode*), "HasLocalAggregate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::AggregateNode::HasRemoteAggregate
// Il2CppName: HasRemoteAggregate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::AggregateNode::*)()>(&System::Data::AggregateNode::HasRemoteAggregate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::AggregateNode*), "HasRemoteAggregate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::AggregateNode::DependsOn
// Il2CppName: DependsOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::AggregateNode::*)(::System::Data::DataColumn*)>(&System::Data::AggregateNode::DependsOn)> {
  static const MethodInfo* get() {
    static auto* column = &::il2cpp_utils::GetClassFromName("System.Data", "DataColumn")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::AggregateNode*), "DependsOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{column});
  }
};
// Writing MetadataGetter for method: System::Data::AggregateNode::Optimize
// Il2CppName: Optimize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::ExpressionNode* (System::Data::AggregateNode::*)()>(&System::Data::AggregateNode::Optimize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::AggregateNode*), "Optimize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
