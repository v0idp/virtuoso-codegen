// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Data.DataViewRowState
#include "System/Data/DataViewRowState.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Data
namespace System::Data {
  // Forward declaring type: DataViewManager
  class DataViewManager;
  // Forward declaring type: DataTable
  class DataTable;
}
// Completed forward declares
// Type namespace: System.Data
namespace System::Data {
  // Forward declaring type: DataViewSetting
  class DataViewSetting;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::DataViewSetting);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataViewSetting*, "System.Data", "DataViewSetting");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x35
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.DataViewSetting
  // [TokenAttribute] Offset: FFFFFFFF
  // [TypeConverterAttribute] Offset: 6BA3D8
  class DataViewSetting : public ::Il2CppObject {
    public:
    public:
    // private System.Data.DataViewManager _dataViewManager
    // Size: 0x8
    // Offset: 0x10
    ::System::Data::DataViewManager* dataViewManager;
    // Field size check
    static_assert(sizeof(::System::Data::DataViewManager*) == 0x8);
    // private System.Data.DataTable _table
    // Size: 0x8
    // Offset: 0x18
    ::System::Data::DataTable* table;
    // Field size check
    static_assert(sizeof(::System::Data::DataTable*) == 0x8);
    // private System.String _sort
    // Size: 0x8
    // Offset: 0x20
    ::StringW sort;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _rowFilter
    // Size: 0x8
    // Offset: 0x28
    ::StringW rowFilter;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Data.DataViewRowState _rowStateFilter
    // Size: 0x4
    // Offset: 0x30
    ::System::Data::DataViewRowState rowStateFilter;
    // Field size check
    static_assert(sizeof(::System::Data::DataViewRowState) == 0x4);
    // private System.Boolean _applyDefaultSort
    // Size: 0x1
    // Offset: 0x34
    bool applyDefaultSort;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Data.DataViewManager _dataViewManager
    [[deprecated]] ::System::Data::DataViewManager*& dyn__dataViewManager();
    // Get instance field reference: private System.Data.DataTable _table
    [[deprecated]] ::System::Data::DataTable*& dyn__table();
    // Get instance field reference: private System.String _sort
    [[deprecated]] ::StringW& dyn__sort();
    // Get instance field reference: private System.String _rowFilter
    [[deprecated]] ::StringW& dyn__rowFilter();
    // Get instance field reference: private System.Data.DataViewRowState _rowStateFilter
    [[deprecated]] ::System::Data::DataViewRowState& dyn__rowStateFilter();
    // Get instance field reference: private System.Boolean _applyDefaultSort
    [[deprecated]] bool& dyn__applyDefaultSort();
    // public System.Boolean get_ApplyDefaultSort()
    // Offset: 0x12E7B20
    bool get_ApplyDefaultSort();
    // public System.String get_RowFilter()
    // Offset: 0x12E7B50
    ::StringW get_RowFilter();
    // public System.Data.DataViewRowState get_RowStateFilter()
    // Offset: 0x12E7B58
    ::System::Data::DataViewRowState get_RowStateFilter();
    // public System.String get_Sort()
    // Offset: 0x12E7B60
    ::StringW get_Sort();
    // System.Void SetDataViewManager(System.Data.DataViewManager dataViewManager)
    // Offset: 0x12E7B28
    void SetDataViewManager(::System::Data::DataViewManager* dataViewManager);
    // System.Void SetDataTable(System.Data.DataTable table)
    // Offset: 0x12E7B3C
    void SetDataTable(::System::Data::DataTable* table);
    // System.Void .ctor()
    // Offset: 0x12E7AB0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DataViewSetting* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::DataViewSetting::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DataViewSetting*, creationType>()));
    }
  }; // System.Data.DataViewSetting
  #pragma pack(pop)
  static check_size<sizeof(DataViewSetting), 52 + sizeof(bool)> __System_Data_DataViewSettingSizeCheck;
  static_assert(sizeof(DataViewSetting) == 0x35);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::DataViewSetting::get_ApplyDefaultSort
// Il2CppName: get_ApplyDefaultSort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::DataViewSetting::*)()>(&System::Data::DataViewSetting::get_ApplyDefaultSort)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataViewSetting*), "get_ApplyDefaultSort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataViewSetting::get_RowFilter
// Il2CppName: get_RowFilter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Data::DataViewSetting::*)()>(&System::Data::DataViewSetting::get_RowFilter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataViewSetting*), "get_RowFilter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataViewSetting::get_RowStateFilter
// Il2CppName: get_RowStateFilter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataViewRowState (System::Data::DataViewSetting::*)()>(&System::Data::DataViewSetting::get_RowStateFilter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataViewSetting*), "get_RowStateFilter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataViewSetting::get_Sort
// Il2CppName: get_Sort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Data::DataViewSetting::*)()>(&System::Data::DataViewSetting::get_Sort)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataViewSetting*), "get_Sort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataViewSetting::SetDataViewManager
// Il2CppName: SetDataViewManager
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataViewSetting::*)(::System::Data::DataViewManager*)>(&System::Data::DataViewSetting::SetDataViewManager)> {
  static const MethodInfo* get() {
    static auto* dataViewManager = &::il2cpp_utils::GetClassFromName("System.Data", "DataViewManager")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataViewSetting*), "SetDataViewManager", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dataViewManager});
  }
};
// Writing MetadataGetter for method: System::Data::DataViewSetting::SetDataTable
// Il2CppName: SetDataTable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataViewSetting::*)(::System::Data::DataTable*)>(&System::Data::DataViewSetting::SetDataTable)> {
  static const MethodInfo* get() {
    static auto* table = &::il2cpp_utils::GetClassFromName("System.Data", "DataTable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataViewSetting*), "SetDataTable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{table});
  }
};
// Writing MetadataGetter for method: System::Data::DataViewSetting::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!