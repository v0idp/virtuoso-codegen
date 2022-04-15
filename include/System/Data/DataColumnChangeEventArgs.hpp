// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.EventArgs
#include "System/EventArgs.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Data
namespace System::Data {
  // Forward declaring type: DataColumn
  class DataColumn;
  // Forward declaring type: DataRow
  class DataRow;
}
// Completed forward declares
// Type namespace: System.Data
namespace System::Data {
  // Forward declaring type: DataColumnChangeEventArgs
  class DataColumnChangeEventArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::DataColumnChangeEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataColumnChangeEventArgs*, "System.Data", "DataColumnChangeEventArgs");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.DataColumnChangeEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  class DataColumnChangeEventArgs : public ::System::EventArgs {
    public:
    public:
    // private System.Data.DataColumn _column
    // Size: 0x8
    // Offset: 0x10
    ::System::Data::DataColumn* column;
    // Field size check
    static_assert(sizeof(::System::Data::DataColumn*) == 0x8);
    // private readonly System.Data.DataRow <Row>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::System::Data::DataRow* Row;
    // Field size check
    static_assert(sizeof(::System::Data::DataRow*) == 0x8);
    // private System.Object <ProposedValue>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* ProposedValue;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Get instance field reference: private System.Data.DataColumn _column
    [[deprecated("Use field access instead!")]] ::System::Data::DataColumn*& dyn__column();
    // Get instance field reference: private readonly System.Data.DataRow <Row>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Data::DataRow*& dyn_$Row$k__BackingField();
    // Get instance field reference: private System.Object <ProposedValue>k__BackingField
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$ProposedValue$k__BackingField();
    // public System.Object get_ProposedValue()
    // Offset: 0xF94484
    ::Il2CppObject* get_ProposedValue();
    // public System.Void set_ProposedValue(System.Object value)
    // Offset: 0xF9448C
    void set_ProposedValue(::Il2CppObject* value);
    // System.Void .ctor(System.Data.DataRow row)
    // Offset: 0xF94380
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DataColumnChangeEventArgs* New_ctor(::System::Data::DataRow* row) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::DataColumnChangeEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DataColumnChangeEventArgs*, creationType>(row)));
    }
    // public System.Void .ctor(System.Data.DataRow row, System.Data.DataColumn column, System.Object value)
    // Offset: 0xF943F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DataColumnChangeEventArgs* New_ctor(::System::Data::DataRow* row, ::System::Data::DataColumn* column, ::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::DataColumnChangeEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DataColumnChangeEventArgs*, creationType>(row, column, value)));
    }
    // System.Void InitializeColumnChangeEvent(System.Data.DataColumn column, System.Object value)
    // Offset: 0xF94494
    void InitializeColumnChangeEvent(::System::Data::DataColumn* column, ::Il2CppObject* value);
  }; // System.Data.DataColumnChangeEventArgs
  #pragma pack(pop)
  static check_size<sizeof(DataColumnChangeEventArgs), 32 + sizeof(::Il2CppObject*)> __System_Data_DataColumnChangeEventArgsSizeCheck;
  static_assert(sizeof(DataColumnChangeEventArgs) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::DataColumnChangeEventArgs::get_ProposedValue
// Il2CppName: get_ProposedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::DataColumnChangeEventArgs::*)()>(&System::Data::DataColumnChangeEventArgs::get_ProposedValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataColumnChangeEventArgs*), "get_ProposedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataColumnChangeEventArgs::set_ProposedValue
// Il2CppName: set_ProposedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataColumnChangeEventArgs::*)(::Il2CppObject*)>(&System::Data::DataColumnChangeEventArgs::set_ProposedValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataColumnChangeEventArgs*), "set_ProposedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::DataColumnChangeEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::DataColumnChangeEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::DataColumnChangeEventArgs::InitializeColumnChangeEvent
// Il2CppName: InitializeColumnChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataColumnChangeEventArgs::*)(::System::Data::DataColumn*, ::Il2CppObject*)>(&System::Data::DataColumnChangeEventArgs::InitializeColumnChangeEvent)> {
  static const MethodInfo* get() {
    static auto* column = &::il2cpp_utils::GetClassFromName("System.Data", "DataColumn")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataColumnChangeEventArgs*), "InitializeColumnChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{column, value});
  }
};
