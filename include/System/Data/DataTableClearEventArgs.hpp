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
  // Forward declaring type: DataTable
  class DataTable;
}
// Completed forward declares
// Type namespace: System.Data
namespace System::Data {
  // Forward declaring type: DataTableClearEventArgs
  class DataTableClearEventArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::DataTableClearEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataTableClearEventArgs*, "System.Data", "DataTableClearEventArgs");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.DataTableClearEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  class DataTableClearEventArgs : public ::System::EventArgs {
    public:
    public:
    // private readonly System.Data.DataTable <Table>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::System::Data::DataTable* Table;
    // Field size check
    static_assert(sizeof(::System::Data::DataTable*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Data::DataTable*
    constexpr operator ::System::Data::DataTable*() const noexcept {
      return Table;
    }
    // Get instance field reference: private readonly System.Data.DataTable <Table>k__BackingField
    [[deprecated]] ::System::Data::DataTable*& dyn_$Table$k__BackingField();
    // public System.Void .ctor(System.Data.DataTable dataTable)
    // Offset: 0x12DFFB4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DataTableClearEventArgs* New_ctor(::System::Data::DataTable* dataTable) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::DataTableClearEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DataTableClearEventArgs*, creationType>(dataTable)));
    }
  }; // System.Data.DataTableClearEventArgs
  #pragma pack(pop)
  static check_size<sizeof(DataTableClearEventArgs), 16 + sizeof(::System::Data::DataTable*)> __System_Data_DataTableClearEventArgsSizeCheck;
  static_assert(sizeof(DataTableClearEventArgs) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::DataTableClearEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!