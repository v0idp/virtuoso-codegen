// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: LocalDataStore
  class LocalDataStore;
  // Forward declaring type: LocalDataStoreSlot
  class LocalDataStoreSlot;
  // Forward declaring type: LocalDataStoreHolder
  class LocalDataStoreHolder;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: LocalDataStoreMgr
  class LocalDataStoreMgr;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::LocalDataStoreMgr);
DEFINE_IL2CPP_ARG_TYPE(::System::LocalDataStoreMgr*, "System", "LocalDataStoreMgr");
// Type namespace: System
namespace System {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.LocalDataStoreMgr
  // [TokenAttribute] Offset: FFFFFFFF
  class LocalDataStoreMgr : public ::Il2CppObject {
    public:
    public:
    // private System.Boolean[] m_SlotInfoTable
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<bool> m_SlotInfoTable;
    // Field size check
    static_assert(sizeof(::ArrayW<bool>) == 0x8);
    // private System.Int32 m_FirstAvailableSlot
    // Size: 0x4
    // Offset: 0x18
    int m_FirstAvailableSlot;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_FirstAvailableSlot and: m_ManagedLocalDataStores
    char __padding1[0x4] = {};
    // private System.Collections.Generic.List`1<System.LocalDataStore> m_ManagedLocalDataStores
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::System::LocalDataStore*>* m_ManagedLocalDataStores;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::LocalDataStore*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,System.LocalDataStoreSlot> m_KeyToSlotMap
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::LocalDataStoreSlot*>* m_KeyToSlotMap;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::System::LocalDataStoreSlot*>*) == 0x8);
    // private System.Int64 m_CookieGenerator
    // Size: 0x8
    // Offset: 0x30
    int64_t m_CookieGenerator;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    public:
    // static field const value: static private System.Int32 InitialSlotTableSize
    static constexpr const int InitialSlotTableSize = 64;
    // Get static field: static private System.Int32 InitialSlotTableSize
    static int _get_InitialSlotTableSize();
    // Set static field: static private System.Int32 InitialSlotTableSize
    static void _set_InitialSlotTableSize(int value);
    // static field const value: static private System.Int32 SlotTableDoubleThreshold
    static constexpr const int SlotTableDoubleThreshold = 512;
    // Get static field: static private System.Int32 SlotTableDoubleThreshold
    static int _get_SlotTableDoubleThreshold();
    // Set static field: static private System.Int32 SlotTableDoubleThreshold
    static void _set_SlotTableDoubleThreshold(int value);
    // static field const value: static private System.Int32 LargeSlotTableSizeIncrease
    static constexpr const int LargeSlotTableSizeIncrease = 128;
    // Get static field: static private System.Int32 LargeSlotTableSizeIncrease
    static int _get_LargeSlotTableSizeIncrease();
    // Set static field: static private System.Int32 LargeSlotTableSizeIncrease
    static void _set_LargeSlotTableSizeIncrease(int value);
    // Get instance field reference: private System.Boolean[] m_SlotInfoTable
    [[deprecated("Use field access instead!")]] ::ArrayW<bool>& dyn_m_SlotInfoTable();
    // Get instance field reference: private System.Int32 m_FirstAvailableSlot
    [[deprecated("Use field access instead!")]] int& dyn_m_FirstAvailableSlot();
    // Get instance field reference: private System.Collections.Generic.List`1<System.LocalDataStore> m_ManagedLocalDataStores
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::System::LocalDataStore*>*& dyn_m_ManagedLocalDataStores();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,System.LocalDataStoreSlot> m_KeyToSlotMap
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::System::LocalDataStoreSlot*>*& dyn_m_KeyToSlotMap();
    // Get instance field reference: private System.Int64 m_CookieGenerator
    [[deprecated("Use field access instead!")]] int64_t& dyn_m_CookieGenerator();
    // public System.LocalDataStoreHolder CreateLocalDataStore()
    // Offset: 0x1079934
    ::System::LocalDataStoreHolder* CreateLocalDataStore();
    // public System.Void DeleteLocalDataStore(System.LocalDataStore store)
    // Offset: 0x10791D0
    void DeleteLocalDataStore(::System::LocalDataStore* store);
    // public System.LocalDataStoreSlot AllocateDataSlot()
    // Offset: 0x1079AA4
    ::System::LocalDataStoreSlot* AllocateDataSlot();
    // public System.LocalDataStoreSlot AllocateNamedDataSlot(System.String name)
    // Offset: 0x1079D38
    ::System::LocalDataStoreSlot* AllocateNamedDataSlot(::StringW name);
    // public System.LocalDataStoreSlot GetNamedDataSlot(System.String name)
    // Offset: 0x1079E5C
    ::System::LocalDataStoreSlot* GetNamedDataSlot(::StringW name);
    // public System.Void FreeNamedDataSlot(System.String name)
    // Offset: 0x1079F80
    void FreeNamedDataSlot(::StringW name);
    // System.Void FreeDataSlot(System.Int32 slot, System.Int64 cookie)
    // Offset: 0x107A08C
    void FreeDataSlot(int slot, int64_t cookie);
    // public System.Void ValidateSlot(System.LocalDataStoreSlot slot)
    // Offset: 0x10793B4
    void ValidateSlot(::System::LocalDataStoreSlot* slot);
    // System.Int32 GetSlotTableLength()
    // Offset: 0x1079830
    int GetSlotTableLength();
    // public System.Void .ctor()
    // Offset: 0x107A230
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalDataStoreMgr* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::LocalDataStoreMgr::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalDataStoreMgr*, creationType>()));
    }
  }; // System.LocalDataStoreMgr
  #pragma pack(pop)
  static check_size<sizeof(LocalDataStoreMgr), 48 + sizeof(int64_t)> __System_LocalDataStoreMgrSizeCheck;
  static_assert(sizeof(LocalDataStoreMgr) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::LocalDataStoreMgr::CreateLocalDataStore
// Il2CppName: CreateLocalDataStore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::LocalDataStoreHolder* (System::LocalDataStoreMgr::*)()>(&System::LocalDataStoreMgr::CreateLocalDataStore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::LocalDataStoreMgr*), "CreateLocalDataStore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::LocalDataStoreMgr::DeleteLocalDataStore
// Il2CppName: DeleteLocalDataStore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::LocalDataStoreMgr::*)(::System::LocalDataStore*)>(&System::LocalDataStoreMgr::DeleteLocalDataStore)> {
  static const MethodInfo* get() {
    static auto* store = &::il2cpp_utils::GetClassFromName("System", "LocalDataStore")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::LocalDataStoreMgr*), "DeleteLocalDataStore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{store});
  }
};
// Writing MetadataGetter for method: System::LocalDataStoreMgr::AllocateDataSlot
// Il2CppName: AllocateDataSlot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::LocalDataStoreSlot* (System::LocalDataStoreMgr::*)()>(&System::LocalDataStoreMgr::AllocateDataSlot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::LocalDataStoreMgr*), "AllocateDataSlot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::LocalDataStoreMgr::AllocateNamedDataSlot
// Il2CppName: AllocateNamedDataSlot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::LocalDataStoreSlot* (System::LocalDataStoreMgr::*)(::StringW)>(&System::LocalDataStoreMgr::AllocateNamedDataSlot)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::LocalDataStoreMgr*), "AllocateNamedDataSlot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::LocalDataStoreMgr::GetNamedDataSlot
// Il2CppName: GetNamedDataSlot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::LocalDataStoreSlot* (System::LocalDataStoreMgr::*)(::StringW)>(&System::LocalDataStoreMgr::GetNamedDataSlot)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::LocalDataStoreMgr*), "GetNamedDataSlot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::LocalDataStoreMgr::FreeNamedDataSlot
// Il2CppName: FreeNamedDataSlot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::LocalDataStoreMgr::*)(::StringW)>(&System::LocalDataStoreMgr::FreeNamedDataSlot)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::LocalDataStoreMgr*), "FreeNamedDataSlot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::LocalDataStoreMgr::FreeDataSlot
// Il2CppName: FreeDataSlot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::LocalDataStoreMgr::*)(int, int64_t)>(&System::LocalDataStoreMgr::FreeDataSlot)> {
  static const MethodInfo* get() {
    static auto* slot = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cookie = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::LocalDataStoreMgr*), "FreeDataSlot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{slot, cookie});
  }
};
// Writing MetadataGetter for method: System::LocalDataStoreMgr::ValidateSlot
// Il2CppName: ValidateSlot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::LocalDataStoreMgr::*)(::System::LocalDataStoreSlot*)>(&System::LocalDataStoreMgr::ValidateSlot)> {
  static const MethodInfo* get() {
    static auto* slot = &::il2cpp_utils::GetClassFromName("System", "LocalDataStoreSlot")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::LocalDataStoreMgr*), "ValidateSlot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{slot});
  }
};
// Writing MetadataGetter for method: System::LocalDataStoreMgr::GetSlotTableLength
// Il2CppName: GetSlotTableLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::LocalDataStoreMgr::*)()>(&System::LocalDataStoreMgr::GetSlotTableLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::LocalDataStoreMgr*), "GetSlotTableLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::LocalDataStoreMgr::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
