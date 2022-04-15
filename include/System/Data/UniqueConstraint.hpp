// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Data.Constraint
#include "System/Data/Constraint.hpp"
// Including type: System.Data.DataKey
#include "System/Data/DataKey.hpp"
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
  // Forward declaring type: Index
  class Index;
  // Forward declaring type: DataColumn
  class DataColumn;
  // Forward declaring type: DataTable
  class DataTable;
  // Forward declaring type: ConstraintCollection
  class ConstraintCollection;
  // Forward declaring type: DataRow
  class DataRow;
  // Forward declaring type: DataRowAction
  struct DataRowAction;
  // Forward declaring type: DataSet
  class DataSet;
}
// Completed forward declares
// Type namespace: System.Data
namespace System::Data {
  // Forward declaring type: UniqueConstraint
  class UniqueConstraint;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::UniqueConstraint);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::UniqueConstraint*, "System.Data", "UniqueConstraint");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.UniqueConstraint
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultPropertyAttribute] Offset: 6BA538
  class UniqueConstraint : public ::System::Data::Constraint {
    public:
    public:
    // private System.Data.DataKey _key
    // Size: 0x8
    // Offset: 0x38
    ::System::Data::DataKey key;
    // Field size check
    static_assert(sizeof(::System::Data::DataKey) == 0x8);
    // private System.Data.Index _constraintIndex
    // Size: 0x8
    // Offset: 0x40
    ::System::Data::Index* constraintIndex;
    // Field size check
    static_assert(sizeof(::System::Data::Index*) == 0x8);
    // System.Boolean _bPrimaryKey
    // Size: 0x1
    // Offset: 0x48
    bool bPrimaryKey;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: bPrimaryKey and: constraintName
    char __padding2[0x7] = {};
    // System.String _constraintName
    // Size: 0x8
    // Offset: 0x50
    ::StringW constraintName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.String[] _columnNames
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<::StringW> columnNames;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    public:
    // Get instance field reference: private System.Data.DataKey _key
    [[deprecated("Use field access instead!")]] ::System::Data::DataKey& dyn__key();
    // Get instance field reference: private System.Data.Index _constraintIndex
    [[deprecated("Use field access instead!")]] ::System::Data::Index*& dyn__constraintIndex();
    // Get instance field reference: System.Boolean _bPrimaryKey
    [[deprecated("Use field access instead!")]] bool& dyn__bPrimaryKey();
    // Get instance field reference: System.String _constraintName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__constraintName();
    // Get instance field reference: System.String[] _columnNames
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn__columnNames();
    // System.String[] get_ColumnNames()
    // Offset: 0x11BD9A0
    ::ArrayW<::StringW> get_ColumnNames();
    // System.Data.Index get_ConstraintIndex()
    // Offset: 0x11BD9AC
    ::System::Data::Index* get_ConstraintIndex();
    // public System.Data.DataColumn[] get_Columns()
    // Offset: 0x11BE97C
    ::ArrayW<::System::Data::DataColumn*> get_Columns();
    // System.Data.DataColumn[] get_ColumnsReference()
    // Offset: 0x11BDFAC
    ::ArrayW<::System::Data::DataColumn*> get_ColumnsReference();
    // public System.Boolean get_IsPrimaryKey()
    // Offset: 0x11BE988
    bool get_IsPrimaryKey();
    // System.Data.DataKey get_Key()
    // Offset: 0x11BEAF0
    ::System::Data::DataKey get_Key();
    // public System.Void .ctor(System.Data.DataColumn column)
    // Offset: 0x11BD6D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UniqueConstraint* New_ctor(::System::Data::DataColumn* column) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::UniqueConstraint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UniqueConstraint*, creationType>(column)));
    }
    // public System.Void .ctor(System.String name, System.Data.DataColumn[] columns)
    // Offset: 0x11BD89C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UniqueConstraint* New_ctor(::StringW name, ::ArrayW<::System::Data::DataColumn*> columns) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::UniqueConstraint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UniqueConstraint*, creationType>(name, columns)));
    }
    // public System.Void .ctor(System.Data.DataColumn[] columns)
    // Offset: 0x11BD8DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UniqueConstraint* New_ctor(::ArrayW<::System::Data::DataColumn*> columns) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::UniqueConstraint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UniqueConstraint*, creationType>(columns)));
    }
    // public System.Void .ctor(System.String name, System.String[] columnNames, System.Boolean isPrimaryKey)
    // Offset: 0x11BD910
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UniqueConstraint* New_ctor(::StringW name, ::ArrayW<::StringW> columnNames, bool isPrimaryKey) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::UniqueConstraint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UniqueConstraint*, creationType>(name, columnNames, isPrimaryKey)));
    }
    // public System.Void .ctor(System.String name, System.Data.DataColumn[] columns, System.Boolean isPrimaryKey)
    // Offset: 0x11BD954
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UniqueConstraint* New_ctor(::StringW name, ::ArrayW<::System::Data::DataColumn*> columns, bool isPrimaryKey) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::UniqueConstraint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UniqueConstraint*, creationType>(name, columns, isPrimaryKey)));
    }
    // System.Void ConstraintIndexClear()
    // Offset: 0x11BD9B4
    void ConstraintIndexClear();
    // System.Void ConstraintIndexInitialize()
    // Offset: 0x11BD9E4
    void ConstraintIndexInitialize();
    // private System.Void NonVirtualCheckState()
    // Offset: 0x11BDA3C
    void NonVirtualCheckState();
    // System.Data.UniqueConstraint Clone(System.Data.DataTable table)
    // Offset: 0x11BE4F0
    ::System::Data::UniqueConstraint* Clone(::System::Data::DataTable* table);
    // private System.Void Create(System.String constraintName, System.Data.DataColumn[] columns)
    // Offset: 0x11BD794
    void Create(::StringW constraintName, ::ArrayW<::System::Data::DataColumn*> columns);
    // override System.Void set_InCollection(System.Boolean value)
    // Offset: 0x11BEA9C
    // Implemented from: System.Data.Constraint
    // Base method: System.Void Constraint::set_InCollection(System.Boolean value)
    void set_InCollection(bool value);
    // public override System.Data.DataTable get_Table()
    // Offset: 0x11BEAF8
    // Implemented from: System.Data.Constraint
    // Base method: System.Data.DataTable Constraint::get_Table()
    ::System::Data::DataTable* get_Table();
    // override System.Void CheckState()
    // Offset: 0x11BDA30
    // Implemented from: System.Data.Constraint
    // Base method: System.Void Constraint::CheckState()
    void CheckState();
    // override System.Void CheckCanAddToCollection(System.Data.ConstraintCollection constraints)
    // Offset: 0x11BDA48
    // Implemented from: System.Data.Constraint
    // Base method: System.Void Constraint::CheckCanAddToCollection(System.Data.ConstraintCollection constraints)
    void CheckCanAddToCollection(::System::Data::ConstraintCollection* constraints);
    // override System.Boolean CanBeRemovedFromCollection(System.Data.ConstraintCollection constraints, System.Boolean fThrowException)
    // Offset: 0x11BDA4C
    // Implemented from: System.Data.Constraint
    // Base method: System.Boolean Constraint::CanBeRemovedFromCollection(System.Data.ConstraintCollection constraints, System.Boolean fThrowException)
    bool CanBeRemovedFromCollection(::System::Data::ConstraintCollection* constraints, bool fThrowException);
    // override System.Boolean CanEnableConstraint()
    // Offset: 0x11BDBBC
    // Implemented from: System.Data.Constraint
    // Base method: System.Boolean Constraint::CanEnableConstraint()
    bool CanEnableConstraint();
    // override System.Boolean IsConstraintViolated()
    // Offset: 0x11BDC14
    // Implemented from: System.Data.Constraint
    // Base method: System.Boolean Constraint::IsConstraintViolated()
    bool IsConstraintViolated();
    // override System.Void CheckConstraint(System.Data.DataRow row, System.Data.DataRowAction action)
    // Offset: 0x11BDEA4
    // Implemented from: System.Data.Constraint
    // Base method: System.Void Constraint::CheckConstraint(System.Data.DataRow row, System.Data.DataRowAction action)
    void CheckConstraint(::System::Data::DataRow* row, ::System::Data::DataRowAction action);
    // override System.Boolean ContainsColumn(System.Data.DataColumn column)
    // Offset: 0x11BDFB4
    // Implemented from: System.Data.Constraint
    // Base method: System.Boolean Constraint::ContainsColumn(System.Data.DataColumn column)
    bool ContainsColumn(::System::Data::DataColumn* column);
    // override System.Data.Constraint Clone(System.Data.DataSet destination)
    // Offset: 0x11BDFC0
    // Implemented from: System.Data.Constraint
    // Base method: System.Data.Constraint Constraint::Clone(System.Data.DataSet destination)
    ::System::Data::Constraint* Clone(::System::Data::DataSet* destination);
    // override System.Data.Constraint Clone(System.Data.DataSet destination, System.Boolean ignorNSforTableLookup)
    // Offset: 0x11BDFD0
    // Implemented from: System.Data.Constraint
    // Base method: System.Data.Constraint Constraint::Clone(System.Data.DataSet destination, System.Boolean ignorNSforTableLookup)
    ::System::Data::Constraint* Clone(::System::Data::DataSet* destination, bool ignorNSforTableLookup);
    // public override System.Boolean Equals(System.Object key2)
    // Offset: 0x11BE9D8
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object key2)
    bool Equals(::Il2CppObject* key2);
    // public override System.Int32 GetHashCode()
    // Offset: 0x11BEA94
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Data.UniqueConstraint
  #pragma pack(pop)
  static check_size<sizeof(UniqueConstraint), 88 + sizeof(::ArrayW<::StringW>)> __System_Data_UniqueConstraintSizeCheck;
  static_assert(sizeof(UniqueConstraint) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::UniqueConstraint::get_ColumnNames
// Il2CppName: get_ColumnNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Data::UniqueConstraint::*)()>(&System::Data::UniqueConstraint::get_ColumnNames)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::UniqueConstraint*), "get_ColumnNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::UniqueConstraint::get_ConstraintIndex
// Il2CppName: get_ConstraintIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::Index* (System::Data::UniqueConstraint::*)()>(&System::Data::UniqueConstraint::get_ConstraintIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::UniqueConstraint*), "get_ConstraintIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::UniqueConstraint::get_Columns
// Il2CppName: get_Columns
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Data::DataColumn*> (System::Data::UniqueConstraint::*)()>(&System::Data::UniqueConstraint::get_Columns)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::UniqueConstraint*), "get_Columns", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::UniqueConstraint::get_ColumnsReference
// Il2CppName: get_ColumnsReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Data::DataColumn*> (System::Data::UniqueConstraint::*)()>(&System::Data::UniqueConstraint::get_ColumnsReference)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::UniqueConstraint*), "get_ColumnsReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::UniqueConstraint::get_IsPrimaryKey
// Il2CppName: get_IsPrimaryKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::UniqueConstraint::*)()>(&System::Data::UniqueConstraint::get_IsPrimaryKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::UniqueConstraint*), "get_IsPrimaryKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::UniqueConstraint::get_Key
// Il2CppName: get_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataKey (System::Data::UniqueConstraint::*)()>(&System::Data::UniqueConstraint::get_Key)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::UniqueConstraint*), "get_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::UniqueConstraint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::UniqueConstraint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::UniqueConstraint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::UniqueConstraint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::UniqueConstraint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::UniqueConstraint::ConstraintIndexClear
// Il2CppName: ConstraintIndexClear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::UniqueConstraint::*)()>(&System::Data::UniqueConstraint::ConstraintIndexClear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::UniqueConstraint*), "ConstraintIndexClear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::UniqueConstraint::ConstraintIndexInitialize
// Il2CppName: ConstraintIndexInitialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::UniqueConstraint::*)()>(&System::Data::UniqueConstraint::ConstraintIndexInitialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::UniqueConstraint*), "ConstraintIndexInitialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::UniqueConstraint::NonVirtualCheckState
// Il2CppName: NonVirtualCheckState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::UniqueConstraint::*)()>(&System::Data::UniqueConstraint::NonVirtualCheckState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::UniqueConstraint*), "NonVirtualCheckState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::UniqueConstraint::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::UniqueConstraint* (System::Data::UniqueConstraint::*)(::System::Data::DataTable*)>(&System::Data::UniqueConstraint::Clone)> {
  static const MethodInfo* get() {
    static auto* table = &::il2cpp_utils::GetClassFromName("System.Data", "DataTable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::UniqueConstraint*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{table});
  }
};
// Writing MetadataGetter for method: System::Data::UniqueConstraint::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::UniqueConstraint::*)(::StringW, ::ArrayW<::System::Data::DataColumn*>)>(&System::Data::UniqueConstraint::Create)> {
  static const MethodInfo* get() {
    static auto* constraintName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* columns = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Data", "DataColumn"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::UniqueConstraint*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{constraintName, columns});
  }
};
// Writing MetadataGetter for method: System::Data::UniqueConstraint::set_InCollection
// Il2CppName: set_InCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::UniqueConstraint::*)(bool)>(&System::Data::UniqueConstraint::set_InCollection)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::UniqueConstraint*), "set_InCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::UniqueConstraint::get_Table
// Il2CppName: get_Table
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataTable* (System::Data::UniqueConstraint::*)()>(&System::Data::UniqueConstraint::get_Table)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::UniqueConstraint*), "get_Table", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::UniqueConstraint::CheckState
// Il2CppName: CheckState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::UniqueConstraint::*)()>(&System::Data::UniqueConstraint::CheckState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::UniqueConstraint*), "CheckState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::UniqueConstraint::CheckCanAddToCollection
// Il2CppName: CheckCanAddToCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::UniqueConstraint::*)(::System::Data::ConstraintCollection*)>(&System::Data::UniqueConstraint::CheckCanAddToCollection)> {
  static const MethodInfo* get() {
    static auto* constraints = &::il2cpp_utils::GetClassFromName("System.Data", "ConstraintCollection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::UniqueConstraint*), "CheckCanAddToCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{constraints});
  }
};
// Writing MetadataGetter for method: System::Data::UniqueConstraint::CanBeRemovedFromCollection
// Il2CppName: CanBeRemovedFromCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::UniqueConstraint::*)(::System::Data::ConstraintCollection*, bool)>(&System::Data::UniqueConstraint::CanBeRemovedFromCollection)> {
  static const MethodInfo* get() {
    static auto* constraints = &::il2cpp_utils::GetClassFromName("System.Data", "ConstraintCollection")->byval_arg;
    static auto* fThrowException = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::UniqueConstraint*), "CanBeRemovedFromCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{constraints, fThrowException});
  }
};
// Writing MetadataGetter for method: System::Data::UniqueConstraint::CanEnableConstraint
// Il2CppName: CanEnableConstraint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::UniqueConstraint::*)()>(&System::Data::UniqueConstraint::CanEnableConstraint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::UniqueConstraint*), "CanEnableConstraint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::UniqueConstraint::IsConstraintViolated
// Il2CppName: IsConstraintViolated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::UniqueConstraint::*)()>(&System::Data::UniqueConstraint::IsConstraintViolated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::UniqueConstraint*), "IsConstraintViolated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::UniqueConstraint::CheckConstraint
// Il2CppName: CheckConstraint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::UniqueConstraint::*)(::System::Data::DataRow*, ::System::Data::DataRowAction)>(&System::Data::UniqueConstraint::CheckConstraint)> {
  static const MethodInfo* get() {
    static auto* row = &::il2cpp_utils::GetClassFromName("System.Data", "DataRow")->byval_arg;
    static auto* action = &::il2cpp_utils::GetClassFromName("System.Data", "DataRowAction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::UniqueConstraint*), "CheckConstraint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{row, action});
  }
};
// Writing MetadataGetter for method: System::Data::UniqueConstraint::ContainsColumn
// Il2CppName: ContainsColumn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::UniqueConstraint::*)(::System::Data::DataColumn*)>(&System::Data::UniqueConstraint::ContainsColumn)> {
  static const MethodInfo* get() {
    static auto* column = &::il2cpp_utils::GetClassFromName("System.Data", "DataColumn")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::UniqueConstraint*), "ContainsColumn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{column});
  }
};
// Writing MetadataGetter for method: System::Data::UniqueConstraint::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::Constraint* (System::Data::UniqueConstraint::*)(::System::Data::DataSet*)>(&System::Data::UniqueConstraint::Clone)> {
  static const MethodInfo* get() {
    static auto* destination = &::il2cpp_utils::GetClassFromName("System.Data", "DataSet")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::UniqueConstraint*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{destination});
  }
};
// Writing MetadataGetter for method: System::Data::UniqueConstraint::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::Constraint* (System::Data::UniqueConstraint::*)(::System::Data::DataSet*, bool)>(&System::Data::UniqueConstraint::Clone)> {
  static const MethodInfo* get() {
    static auto* destination = &::il2cpp_utils::GetClassFromName("System.Data", "DataSet")->byval_arg;
    static auto* ignorNSforTableLookup = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::UniqueConstraint*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{destination, ignorNSforTableLookup});
  }
};
// Writing MetadataGetter for method: System::Data::UniqueConstraint::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::UniqueConstraint::*)(::Il2CppObject*)>(&System::Data::UniqueConstraint::Equals)> {
  static const MethodInfo* get() {
    static auto* key2 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::UniqueConstraint*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key2});
  }
};
// Writing MetadataGetter for method: System::Data::UniqueConstraint::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::UniqueConstraint::*)()>(&System::Data::UniqueConstraint::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::UniqueConstraint*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
