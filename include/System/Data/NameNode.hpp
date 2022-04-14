// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Data.ExpressionNode
#include "System/Data/ExpressionNode.hpp"
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
  // Forward declaring type: DataColumn
  class DataColumn;
  // Forward declaring type: DataTable
  class DataTable;
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
  // Forward declaring type: NameNode
  class NameNode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::NameNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::NameNode*, "System.Data", "NameNode");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.NameNode
  // [TokenAttribute] Offset: FFFFFFFF
  class NameNode : public ::System::Data::ExpressionNode {
    public:
    public:
    // System.String _name
    // Size: 0x8
    // Offset: 0x18
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.Boolean _found
    // Size: 0x1
    // Offset: 0x20
    bool found;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: found and: column
    char __padding1[0x7] = {};
    // System.Data.DataColumn _column
    // Size: 0x8
    // Offset: 0x28
    ::System::Data::DataColumn* column;
    // Field size check
    static_assert(sizeof(::System::Data::DataColumn*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::Data::DataTable*
    constexpr operator ::System::Data::DataTable*() const noexcept = delete;
    // Get instance field reference: System.String _name
    [[deprecated]] ::StringW& dyn__name();
    // Get instance field reference: System.Boolean _found
    [[deprecated]] bool& dyn__found();
    // Get instance field reference: System.Data.DataColumn _column
    [[deprecated]] ::System::Data::DataColumn*& dyn__column();
    // System.Void .ctor(System.Data.DataTable table, System.Char[] text, System.Int32 start, System.Int32 pos)
    // Offset: 0x13BABC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NameNode* New_ctor(::System::Data::DataTable* table, ::ArrayW<::Il2CppChar> text, int start, int pos) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::NameNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NameNode*, creationType>(table, text, start, pos)));
    }
    // System.Void .ctor(System.Data.DataTable table, System.String name)
    // Offset: 0x13BAE2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NameNode* New_ctor(::System::Data::DataTable* table, ::StringW name) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::NameNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NameNode*, creationType>(table, name)));
    }
    // static System.String ParseName(System.Char[] text, System.Int32 start, System.Int32 pos)
    // Offset: 0x13BAC10
    static ::StringW ParseName(::ArrayW<::Il2CppChar> text, int start, int pos);
    // override System.Boolean get_IsSqlColumn()
    // Offset: 0x13BAE58
    // Implemented from: System.Data.ExpressionNode
    // Base method: System.Boolean ExpressionNode::get_IsSqlColumn()
    bool get_IsSqlColumn();
    // override System.Void Bind(System.Data.DataTable table, System.Collections.Generic.List`1<System.Data.DataColumn> list)
    // Offset: 0x13BAE74
    // Implemented from: System.Data.ExpressionNode
    // Base method: System.Void ExpressionNode::Bind(System.Data.DataTable table, System.Collections.Generic.List`1<System.Data.DataColumn> list)
    void Bind(::System::Data::DataTable* table, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* list);
    // override System.Object Eval()
    // Offset: 0x13BB0A4
    // Implemented from: System.Data.ExpressionNode
    // Base method: System.Object ExpressionNode::Eval()
    ::Il2CppObject* Eval();
    // override System.Object Eval(System.Data.DataRow row, System.Data.DataRowVersion version)
    // Offset: 0x13BB0D4
    // Implemented from: System.Data.ExpressionNode
    // Base method: System.Object ExpressionNode::Eval(System.Data.DataRow row, System.Data.DataRowVersion version)
    ::Il2CppObject* Eval(::System::Data::DataRow* row, ::System::Data::DataRowVersion version);
    // override System.Object Eval(System.Int32[] records)
    // Offset: 0x13BB180
    // Implemented from: System.Data.ExpressionNode
    // Base method: System.Object ExpressionNode::Eval(System.Int32[] records)
    ::Il2CppObject* Eval(::ArrayW<int> records);
    // override System.Boolean IsConstant()
    // Offset: 0x13BB1BC
    // Implemented from: System.Data.ExpressionNode
    // Base method: System.Boolean ExpressionNode::IsConstant()
    bool IsConstant();
    // override System.Boolean IsTableConstant()
    // Offset: 0x13BB1C4
    // Implemented from: System.Data.ExpressionNode
    // Base method: System.Boolean ExpressionNode::IsTableConstant()
    bool IsTableConstant();
    // override System.Boolean HasLocalAggregate()
    // Offset: 0x13BB21C
    // Implemented from: System.Data.ExpressionNode
    // Base method: System.Boolean ExpressionNode::HasLocalAggregate()
    bool HasLocalAggregate();
    // override System.Boolean HasRemoteAggregate()
    // Offset: 0x13BB274
    // Implemented from: System.Data.ExpressionNode
    // Base method: System.Boolean ExpressionNode::HasRemoteAggregate()
    bool HasRemoteAggregate();
    // override System.Boolean DependsOn(System.Data.DataColumn column)
    // Offset: 0x13BB2CC
    // Implemented from: System.Data.ExpressionNode
    // Base method: System.Boolean ExpressionNode::DependsOn(System.Data.DataColumn column)
    bool DependsOn(::System::Data::DataColumn* column);
    // override System.Data.ExpressionNode Optimize()
    // Offset: 0x13BB33C
    // Implemented from: System.Data.ExpressionNode
    // Base method: System.Data.ExpressionNode ExpressionNode::Optimize()
    ::System::Data::ExpressionNode* Optimize();
  }; // System.Data.NameNode
  #pragma pack(pop)
  static check_size<sizeof(NameNode), 40 + sizeof(::System::Data::DataColumn*)> __System_Data_NameNodeSizeCheck;
  static_assert(sizeof(NameNode) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::NameNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::NameNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::NameNode::ParseName
// Il2CppName: ParseName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<::Il2CppChar>, int, int)>(&System::Data::NameNode::ParseName)> {
  static const MethodInfo* get() {
    static auto* text = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::NameNode*), "ParseName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, start, pos});
  }
};
// Writing MetadataGetter for method: System::Data::NameNode::get_IsSqlColumn
// Il2CppName: get_IsSqlColumn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::NameNode::*)()>(&System::Data::NameNode::get_IsSqlColumn)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::NameNode*), "get_IsSqlColumn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::NameNode::Bind
// Il2CppName: Bind
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::NameNode::*)(::System::Data::DataTable*, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>*)>(&System::Data::NameNode::Bind)> {
  static const MethodInfo* get() {
    static auto* table = &::il2cpp_utils::GetClassFromName("System.Data", "DataTable")->byval_arg;
    static auto* list = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Data", "DataColumn")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::NameNode*), "Bind", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{table, list});
  }
};
// Writing MetadataGetter for method: System::Data::NameNode::Eval
// Il2CppName: Eval
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::NameNode::*)()>(&System::Data::NameNode::Eval)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::NameNode*), "Eval", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::NameNode::Eval
// Il2CppName: Eval
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::NameNode::*)(::System::Data::DataRow*, ::System::Data::DataRowVersion)>(&System::Data::NameNode::Eval)> {
  static const MethodInfo* get() {
    static auto* row = &::il2cpp_utils::GetClassFromName("System.Data", "DataRow")->byval_arg;
    static auto* version = &::il2cpp_utils::GetClassFromName("System.Data", "DataRowVersion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::NameNode*), "Eval", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{row, version});
  }
};
// Writing MetadataGetter for method: System::Data::NameNode::Eval
// Il2CppName: Eval
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::NameNode::*)(::ArrayW<int>)>(&System::Data::NameNode::Eval)> {
  static const MethodInfo* get() {
    static auto* records = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::NameNode*), "Eval", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{records});
  }
};
// Writing MetadataGetter for method: System::Data::NameNode::IsConstant
// Il2CppName: IsConstant
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::NameNode::*)()>(&System::Data::NameNode::IsConstant)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::NameNode*), "IsConstant", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::NameNode::IsTableConstant
// Il2CppName: IsTableConstant
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::NameNode::*)()>(&System::Data::NameNode::IsTableConstant)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::NameNode*), "IsTableConstant", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::NameNode::HasLocalAggregate
// Il2CppName: HasLocalAggregate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::NameNode::*)()>(&System::Data::NameNode::HasLocalAggregate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::NameNode*), "HasLocalAggregate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::NameNode::HasRemoteAggregate
// Il2CppName: HasRemoteAggregate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::NameNode::*)()>(&System::Data::NameNode::HasRemoteAggregate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::NameNode*), "HasRemoteAggregate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::NameNode::DependsOn
// Il2CppName: DependsOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::NameNode::*)(::System::Data::DataColumn*)>(&System::Data::NameNode::DependsOn)> {
  static const MethodInfo* get() {
    static auto* column = &::il2cpp_utils::GetClassFromName("System.Data", "DataColumn")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::NameNode*), "DependsOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{column});
  }
};
// Writing MetadataGetter for method: System::Data::NameNode::Optimize
// Il2CppName: Optimize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::ExpressionNode* (System::Data::NameNode::*)()>(&System::Data::NameNode::Optimize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::NameNode*), "Optimize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
