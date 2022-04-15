// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
  // Forward declaring type: BinaryReader
  class BinaryReader;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: System.IO.Compression
namespace System::IO::Compression {
  // Forward declaring type: ZipGenericExtraField
  struct ZipGenericExtraField;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::ZipGenericExtraField, "System.IO.Compression", "ZipGenericExtraField");
// Type namespace: System.IO.Compression
namespace System::IO::Compression {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.IO.Compression.ZipGenericExtraField
  // [TokenAttribute] Offset: FFFFFFFF
  struct ZipGenericExtraField/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.UInt16 _tag
    // Size: 0x2
    // Offset: 0x0
    uint16_t tag;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // private System.UInt16 _size
    // Size: 0x2
    // Offset: 0x2
    uint16_t size;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // Padding between fields: size and: data
    char __padding1[0x4] = {};
    // private System.Byte[] _data
    // Size: 0x8
    // Offset: 0x8
    ::ArrayW<uint8_t> data;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating value type constructor for type: ZipGenericExtraField
    constexpr ZipGenericExtraField(uint16_t tag_ = {}, uint16_t size_ = {}, ::ArrayW<uint8_t> data_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr))) noexcept : tag{tag_}, size{size_}, data{data_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.UInt16 _tag
    [[deprecated("Use field access instead!")]] uint16_t& dyn__tag();
    // Get instance field reference: private System.UInt16 _size
    [[deprecated("Use field access instead!")]] uint16_t& dyn__size();
    // Get instance field reference: private System.Byte[] _data
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__data();
    // public System.UInt16 get_Tag()
    // Offset: 0x16A1170
    uint16_t get_Tag();
    // public System.UInt16 get_Size()
    // Offset: 0x16A1178
    uint16_t get_Size();
    // public System.Byte[] get_Data()
    // Offset: 0x16A1180
    ::ArrayW<uint8_t> get_Data();
    // public System.Void WriteBlock(System.IO.Stream stream)
    // Offset: 0x16A1188
    void WriteBlock(::System::IO::Stream* stream);
    // static public System.Boolean TryReadBlock(System.IO.BinaryReader reader, System.Int64 endExtraField, out System.IO.Compression.ZipGenericExtraField field)
    // Offset: 0x169A790
    static bool TryReadBlock(::System::IO::BinaryReader* reader, int64_t endExtraField, ByRef<::System::IO::Compression::ZipGenericExtraField> field);
    // static public System.Collections.Generic.List`1<System.IO.Compression.ZipGenericExtraField> ParseExtraField(System.IO.Stream extraFieldData)
    // Offset: 0x16A0E70
    static ::System::Collections::Generic::List_1<::System::IO::Compression::ZipGenericExtraField>* ParseExtraField(::System::IO::Stream* extraFieldData);
    // static public System.Int32 TotalSize(System.Collections.Generic.List`1<System.IO.Compression.ZipGenericExtraField> fields)
    // Offset: 0x169F914
    static int TotalSize(::System::Collections::Generic::List_1<::System::IO::Compression::ZipGenericExtraField>* fields);
    // static public System.Void WriteAllBlocks(System.Collections.Generic.List`1<System.IO.Compression.ZipGenericExtraField> fields, System.IO.Stream stream)
    // Offset: 0x169FAE0
    static void WriteAllBlocks(::System::Collections::Generic::List_1<::System::IO::Compression::ZipGenericExtraField>* fields, ::System::IO::Stream* stream);
  }; // System.IO.Compression.ZipGenericExtraField
  #pragma pack(pop)
  static check_size<sizeof(ZipGenericExtraField), 8 + sizeof(::ArrayW<uint8_t>)> __System_IO_Compression_ZipGenericExtraFieldSizeCheck;
  static_assert(sizeof(ZipGenericExtraField) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::Compression::ZipGenericExtraField::get_Tag
// Il2CppName: get_Tag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (System::IO::Compression::ZipGenericExtraField::*)()>(&System::IO::Compression::ZipGenericExtraField::get_Tag)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipGenericExtraField), "get_Tag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipGenericExtraField::get_Size
// Il2CppName: get_Size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (System::IO::Compression::ZipGenericExtraField::*)()>(&System::IO::Compression::ZipGenericExtraField::get_Size)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipGenericExtraField), "get_Size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipGenericExtraField::get_Data
// Il2CppName: get_Data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::IO::Compression::ZipGenericExtraField::*)()>(&System::IO::Compression::ZipGenericExtraField::get_Data)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipGenericExtraField), "get_Data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipGenericExtraField::WriteBlock
// Il2CppName: WriteBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::ZipGenericExtraField::*)(::System::IO::Stream*)>(&System::IO::Compression::ZipGenericExtraField::WriteBlock)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipGenericExtraField), "WriteBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipGenericExtraField::TryReadBlock
// Il2CppName: TryReadBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IO::BinaryReader*, int64_t, ByRef<::System::IO::Compression::ZipGenericExtraField>)>(&System::IO::Compression::ZipGenericExtraField::TryReadBlock)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("System.IO", "BinaryReader")->byval_arg;
    static auto* endExtraField = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* field = &::il2cpp_utils::GetClassFromName("System.IO.Compression", "ZipGenericExtraField")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipGenericExtraField), "TryReadBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader, endExtraField, field});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipGenericExtraField::ParseExtraField
// Il2CppName: ParseExtraField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::IO::Compression::ZipGenericExtraField>* (*)(::System::IO::Stream*)>(&System::IO::Compression::ZipGenericExtraField::ParseExtraField)> {
  static const MethodInfo* get() {
    static auto* extraFieldData = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipGenericExtraField), "ParseExtraField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{extraFieldData});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipGenericExtraField::TotalSize
// Il2CppName: TotalSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::Collections::Generic::List_1<::System::IO::Compression::ZipGenericExtraField>*)>(&System::IO::Compression::ZipGenericExtraField::TotalSize)> {
  static const MethodInfo* get() {
    static auto* fields = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.IO.Compression", "ZipGenericExtraField")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipGenericExtraField), "TotalSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fields});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipGenericExtraField::WriteAllBlocks
// Il2CppName: WriteAllBlocks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::System::IO::Compression::ZipGenericExtraField>*, ::System::IO::Stream*)>(&System::IO::Compression::ZipGenericExtraField::WriteAllBlocks)> {
  static const MethodInfo* get() {
    static auto* fields = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.IO.Compression", "ZipGenericExtraField")})->byval_arg;
    static auto* stream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipGenericExtraField), "WriteAllBlocks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fields, stream});
  }
};
