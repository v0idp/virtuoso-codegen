// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Data
namespace System::Data {
  // Forward declaring type: DataRowAction
  struct DataRowAction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataRowAction, "System.Data", "DataRowAction");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.DataRowAction
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct DataRowAction/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DataRowAction
    constexpr DataRowAction(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Data.DataRowAction Nothing
    static constexpr const int Nothing = 0;
    // Get static field: static public System.Data.DataRowAction Nothing
    static ::System::Data::DataRowAction _get_Nothing();
    // Set static field: static public System.Data.DataRowAction Nothing
    static void _set_Nothing(::System::Data::DataRowAction value);
    // static field const value: static public System.Data.DataRowAction Delete
    static constexpr const int Delete = 1;
    // Get static field: static public System.Data.DataRowAction Delete
    static ::System::Data::DataRowAction _get_Delete();
    // Set static field: static public System.Data.DataRowAction Delete
    static void _set_Delete(::System::Data::DataRowAction value);
    // static field const value: static public System.Data.DataRowAction Change
    static constexpr const int Change = 2;
    // Get static field: static public System.Data.DataRowAction Change
    static ::System::Data::DataRowAction _get_Change();
    // Set static field: static public System.Data.DataRowAction Change
    static void _set_Change(::System::Data::DataRowAction value);
    // static field const value: static public System.Data.DataRowAction Rollback
    static constexpr const int Rollback = 4;
    // Get static field: static public System.Data.DataRowAction Rollback
    static ::System::Data::DataRowAction _get_Rollback();
    // Set static field: static public System.Data.DataRowAction Rollback
    static void _set_Rollback(::System::Data::DataRowAction value);
    // static field const value: static public System.Data.DataRowAction Commit
    static constexpr const int Commit = 8;
    // Get static field: static public System.Data.DataRowAction Commit
    static ::System::Data::DataRowAction _get_Commit();
    // Set static field: static public System.Data.DataRowAction Commit
    static void _set_Commit(::System::Data::DataRowAction value);
    // static field const value: static public System.Data.DataRowAction Add
    static constexpr const int Add = 16;
    // Get static field: static public System.Data.DataRowAction Add
    static ::System::Data::DataRowAction _get_Add();
    // Set static field: static public System.Data.DataRowAction Add
    static void _set_Add(::System::Data::DataRowAction value);
    // static field const value: static public System.Data.DataRowAction ChangeOriginal
    static constexpr const int ChangeOriginal = 32;
    // Get static field: static public System.Data.DataRowAction ChangeOriginal
    static ::System::Data::DataRowAction _get_ChangeOriginal();
    // Set static field: static public System.Data.DataRowAction ChangeOriginal
    static void _set_ChangeOriginal(::System::Data::DataRowAction value);
    // static field const value: static public System.Data.DataRowAction ChangeCurrentAndOriginal
    static constexpr const int ChangeCurrentAndOriginal = 64;
    // Get static field: static public System.Data.DataRowAction ChangeCurrentAndOriginal
    static ::System::Data::DataRowAction _get_ChangeCurrentAndOriginal();
    // Set static field: static public System.Data.DataRowAction ChangeCurrentAndOriginal
    static void _set_ChangeCurrentAndOriginal(::System::Data::DataRowAction value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // System.Data.DataRowAction
  #pragma pack(pop)
  static check_size<sizeof(DataRowAction), 0 + sizeof(int)> __System_Data_DataRowActionSizeCheck;
  static_assert(sizeof(DataRowAction) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
