// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Data.Common.DataStorage
#include "System/Data/Common/DataStorage.hpp"
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
  // Forward declaring type: AggregateType
  struct AggregateType;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: BitArray
  class BitArray;
}
// Completed forward declares
// Type namespace: System.Data.Common
namespace System::Data::Common {
  // Forward declaring type: Int32Storage
  class Int32Storage;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::Common::Int32Storage);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Common::Int32Storage*, "System.Data.Common", "Int32Storage");
// Type namespace: System.Data.Common
namespace System::Data::Common {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.Common.Int32Storage
  // [TokenAttribute] Offset: FFFFFFFF
  class Int32Storage : public ::System::Data::Common::DataStorage {
    public:
    // Writing base type padding for base size: 0x4C to desired offset: 0x50
    char ___base_padding[0x4] = {};
    public:
    // private System.Int32[] _values
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<int> values;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    public:
    // Creating conversion operator: operator ::ArrayW<int>
    constexpr operator ::ArrayW<int>() const noexcept {
      return values;
    }
    // Get instance field reference: private System.Int32[] _values
    [[deprecated]] ::ArrayW<int>& dyn__values();
    // System.Void .ctor(System.Data.DataColumn column)
    // Offset: 0x13B4354
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Int32Storage* New_ctor(::System::Data::DataColumn* column) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::Common::Int32Storage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Int32Storage*, creationType>(column)));
    }
    // public override System.Object Aggregate(System.Int32[] records, System.Data.AggregateType kind)
    // Offset: 0x13B4460
    // Implemented from: System.Data.Common.DataStorage
    // Base method: System.Object DataStorage::Aggregate(System.Int32[] records, System.Data.AggregateType kind)
    ::Il2CppObject* Aggregate(::ArrayW<int> records, ::System::Data::AggregateType kind);
    // public override System.Int32 Compare(System.Int32 recordNo1, System.Int32 recordNo2)
    // Offset: 0x13B4D78
    // Implemented from: System.Data.Common.DataStorage
    // Base method: System.Int32 DataStorage::Compare(System.Int32 recordNo1, System.Int32 recordNo2)
    int Compare(int recordNo1, int recordNo2);
    // public override System.Int32 CompareValueTo(System.Int32 recordNo, System.Object value)
    // Offset: 0x13B4DF4
    // Implemented from: System.Data.Common.DataStorage
    // Base method: System.Int32 DataStorage::CompareValueTo(System.Int32 recordNo, System.Object value)
    int CompareValueTo(int recordNo, ::Il2CppObject* value);
    // public override System.Object ConvertValue(System.Object value)
    // Offset: 0x13B4F00
    // Implemented from: System.Data.Common.DataStorage
    // Base method: System.Object DataStorage::ConvertValue(System.Object value)
    ::Il2CppObject* ConvertValue(::Il2CppObject* value);
    // public override System.Void Copy(System.Int32 recordNo1, System.Int32 recordNo2)
    // Offset: 0x13B505C
    // Implemented from: System.Data.Common.DataStorage
    // Base method: System.Void DataStorage::Copy(System.Int32 recordNo1, System.Int32 recordNo2)
    void Copy(int recordNo1, int recordNo2);
    // public override System.Object Get(System.Int32 record)
    // Offset: 0x13B50C8
    // Implemented from: System.Data.Common.DataStorage
    // Base method: System.Object DataStorage::Get(System.Int32 record)
    ::Il2CppObject* Get(int record);
    // public override System.Void Set(System.Int32 record, System.Object value)
    // Offset: 0x13B5174
    // Implemented from: System.Data.Common.DataStorage
    // Base method: System.Void DataStorage::Set(System.Int32 record, System.Object value)
    void Set(int record, ::Il2CppObject* value);
    // public override System.Void SetCapacity(System.Int32 capacity)
    // Offset: 0x13B5308
    // Implemented from: System.Data.Common.DataStorage
    // Base method: System.Void DataStorage::SetCapacity(System.Int32 capacity)
    void SetCapacity(int capacity);
    // public override System.Object ConvertXmlToObject(System.String s)
    // Offset: 0x13B53D8
    // Implemented from: System.Data.Common.DataStorage
    // Base method: System.Object DataStorage::ConvertXmlToObject(System.String s)
    ::Il2CppObject* ConvertXmlToObject(::StringW s);
    // public override System.String ConvertObjectToXml(System.Object value)
    // Offset: 0x13B5470
    // Implemented from: System.Data.Common.DataStorage
    // Base method: System.String DataStorage::ConvertObjectToXml(System.Object value)
    ::StringW ConvertObjectToXml(::Il2CppObject* value);
    // protected override System.Object GetEmptyStorage(System.Int32 recordCount)
    // Offset: 0x13B5514
    // Implemented from: System.Data.Common.DataStorage
    // Base method: System.Object DataStorage::GetEmptyStorage(System.Int32 recordCount)
    ::Il2CppObject* GetEmptyStorage(int recordCount);
    // protected override System.Void CopyValue(System.Int32 record, System.Object store, System.Collections.BitArray nullbits, System.Int32 storeIndex)
    // Offset: 0x13B5560
    // Implemented from: System.Data.Common.DataStorage
    // Base method: System.Void DataStorage::CopyValue(System.Int32 record, System.Object store, System.Collections.BitArray nullbits, System.Int32 storeIndex)
    void CopyValue(int record, ::Il2CppObject* store, ::System::Collections::BitArray* nullbits, int storeIndex);
    // protected override System.Void SetStorage(System.Object store, System.Collections.BitArray nullbits)
    // Offset: 0x13B566C
    // Implemented from: System.Data.Common.DataStorage
    // Base method: System.Void DataStorage::SetStorage(System.Object store, System.Collections.BitArray nullbits)
    void SetStorage(::Il2CppObject* store, ::System::Collections::BitArray* nullbits);
  }; // System.Data.Common.Int32Storage
  #pragma pack(pop)
  static check_size<sizeof(Int32Storage), 80 + sizeof(::ArrayW<int>)> __System_Data_Common_Int32StorageSizeCheck;
  static_assert(sizeof(Int32Storage) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::Common::Int32Storage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::Common::Int32Storage::Aggregate
// Il2CppName: Aggregate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::Common::Int32Storage::*)(::ArrayW<int>, ::System::Data::AggregateType)>(&System::Data::Common::Int32Storage::Aggregate)> {
  static const MethodInfo* get() {
    static auto* records = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* kind = &::il2cpp_utils::GetClassFromName("System.Data", "AggregateType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::Int32Storage*), "Aggregate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{records, kind});
  }
};
// Writing MetadataGetter for method: System::Data::Common::Int32Storage::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::Common::Int32Storage::*)(int, int)>(&System::Data::Common::Int32Storage::Compare)> {
  static const MethodInfo* get() {
    static auto* recordNo1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* recordNo2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::Int32Storage*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{recordNo1, recordNo2});
  }
};
// Writing MetadataGetter for method: System::Data::Common::Int32Storage::CompareValueTo
// Il2CppName: CompareValueTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::Common::Int32Storage::*)(int, ::Il2CppObject*)>(&System::Data::Common::Int32Storage::CompareValueTo)> {
  static const MethodInfo* get() {
    static auto* recordNo = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::Int32Storage*), "CompareValueTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{recordNo, value});
  }
};
// Writing MetadataGetter for method: System::Data::Common::Int32Storage::ConvertValue
// Il2CppName: ConvertValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::Common::Int32Storage::*)(::Il2CppObject*)>(&System::Data::Common::Int32Storage::ConvertValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::Int32Storage*), "ConvertValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::Common::Int32Storage::Copy
// Il2CppName: Copy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::Common::Int32Storage::*)(int, int)>(&System::Data::Common::Int32Storage::Copy)> {
  static const MethodInfo* get() {
    static auto* recordNo1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* recordNo2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::Int32Storage*), "Copy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{recordNo1, recordNo2});
  }
};
// Writing MetadataGetter for method: System::Data::Common::Int32Storage::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::Common::Int32Storage::*)(int)>(&System::Data::Common::Int32Storage::Get)> {
  static const MethodInfo* get() {
    static auto* record = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::Int32Storage*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{record});
  }
};
// Writing MetadataGetter for method: System::Data::Common::Int32Storage::Set
// Il2CppName: Set
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::Common::Int32Storage::*)(int, ::Il2CppObject*)>(&System::Data::Common::Int32Storage::Set)> {
  static const MethodInfo* get() {
    static auto* record = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::Int32Storage*), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{record, value});
  }
};
// Writing MetadataGetter for method: System::Data::Common::Int32Storage::SetCapacity
// Il2CppName: SetCapacity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::Common::Int32Storage::*)(int)>(&System::Data::Common::Int32Storage::SetCapacity)> {
  static const MethodInfo* get() {
    static auto* capacity = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::Int32Storage*), "SetCapacity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{capacity});
  }
};
// Writing MetadataGetter for method: System::Data::Common::Int32Storage::ConvertXmlToObject
// Il2CppName: ConvertXmlToObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::Common::Int32Storage::*)(::StringW)>(&System::Data::Common::Int32Storage::ConvertXmlToObject)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::Int32Storage*), "ConvertXmlToObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: System::Data::Common::Int32Storage::ConvertObjectToXml
// Il2CppName: ConvertObjectToXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Data::Common::Int32Storage::*)(::Il2CppObject*)>(&System::Data::Common::Int32Storage::ConvertObjectToXml)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::Int32Storage*), "ConvertObjectToXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::Common::Int32Storage::GetEmptyStorage
// Il2CppName: GetEmptyStorage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::Common::Int32Storage::*)(int)>(&System::Data::Common::Int32Storage::GetEmptyStorage)> {
  static const MethodInfo* get() {
    static auto* recordCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::Int32Storage*), "GetEmptyStorage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{recordCount});
  }
};
// Writing MetadataGetter for method: System::Data::Common::Int32Storage::CopyValue
// Il2CppName: CopyValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::Common::Int32Storage::*)(int, ::Il2CppObject*, ::System::Collections::BitArray*, int)>(&System::Data::Common::Int32Storage::CopyValue)> {
  static const MethodInfo* get() {
    static auto* record = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* store = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* nullbits = &::il2cpp_utils::GetClassFromName("System.Collections", "BitArray")->byval_arg;
    static auto* storeIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::Int32Storage*), "CopyValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{record, store, nullbits, storeIndex});
  }
};
// Writing MetadataGetter for method: System::Data::Common::Int32Storage::SetStorage
// Il2CppName: SetStorage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::Common::Int32Storage::*)(::Il2CppObject*, ::System::Collections::BitArray*)>(&System::Data::Common::Int32Storage::SetStorage)> {
  static const MethodInfo* get() {
    static auto* store = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* nullbits = &::il2cpp_utils::GetClassFromName("System.Collections", "BitArray")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::Int32Storage*), "SetStorage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{store, nullbits});
  }
};
