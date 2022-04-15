// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TermInfoNumbers
  struct TermInfoNumbers;
  // Forward declaring type: TermInfoStrings
  struct TermInfoStrings;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: TermInfoReader
  class TermInfoReader;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::TermInfoReader);
DEFINE_IL2CPP_ARG_TYPE(::System::TermInfoReader*, "System", "TermInfoReader");
// Type namespace: System
namespace System {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.TermInfoReader
  // [TokenAttribute] Offset: FFFFFFFF
  class TermInfoReader : public ::Il2CppObject {
    public:
    public:
    // private System.Int32 boolSize
    // Size: 0x4
    // Offset: 0x10
    int boolSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 numSize
    // Size: 0x4
    // Offset: 0x14
    int numSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 strOffsets
    // Size: 0x4
    // Offset: 0x18
    int strOffsets;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: strOffsets and: buffer
    char __padding2[0x4] = {};
    // private System.Byte[] buffer
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<uint8_t> buffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Int32 booleansOffset
    // Size: 0x4
    // Offset: 0x28
    int booleansOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 intOffset
    // Size: 0x4
    // Offset: 0x2C
    int intOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Int32 boolSize
    [[deprecated("Use field access instead!")]] int& dyn_boolSize();
    // Get instance field reference: private System.Int32 numSize
    [[deprecated("Use field access instead!")]] int& dyn_numSize();
    // Get instance field reference: private System.Int32 strOffsets
    [[deprecated("Use field access instead!")]] int& dyn_strOffsets();
    // Get instance field reference: private System.Byte[] buffer
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_buffer();
    // Get instance field reference: private System.Int32 booleansOffset
    [[deprecated("Use field access instead!")]] int& dyn_booleansOffset();
    // Get instance field reference: private System.Int32 intOffset
    [[deprecated("Use field access instead!")]] int& dyn_intOffset();
    // public System.Void .ctor(System.String term, System.String filename)
    // Offset: 0x11D62F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TermInfoReader* New_ctor(::StringW term, ::StringW filename) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::TermInfoReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TermInfoReader*, creationType>(term, filename)));
    }
    // public System.Void .ctor(System.String term, System.Byte[] buffer)
    // Offset: 0x11D6690
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TermInfoReader* New_ctor(::StringW term, ::ArrayW<uint8_t> buffer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::TermInfoReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TermInfoReader*, creationType>(term, buffer)));
    }
    // private System.Void DetermineVersion(System.Int16 magic)
    // Offset: 0x11D6730
    void DetermineVersion(int16_t magic);
    // private System.Void ReadHeader(System.Byte[] buffer, ref System.Int32 position)
    // Offset: 0x11D6584
    void ReadHeader(::ArrayW<uint8_t> buffer, ByRef<int> position);
    // private System.Void ReadNames(System.Byte[] buffer, ref System.Int32 position)
    // Offset: 0x11D6650
    void ReadNames(::ArrayW<uint8_t> buffer, ByRef<int> position);
    // public System.Int32 Get(System.TermInfoNumbers number)
    // Offset: 0x11D68C4
    int Get(::System::TermInfoNumbers number);
    // public System.String Get(System.TermInfoStrings tstr)
    // Offset: 0x11D693C
    ::StringW Get(::System::TermInfoStrings tstr);
    // public System.Byte[] GetStringBytes(System.TermInfoStrings tstr)
    // Offset: 0x11D69D0
    ::ArrayW<uint8_t> GetStringBytes(::System::TermInfoStrings tstr);
    // private System.Int16 GetInt16(System.Byte[] buffer, System.Int32 offset)
    // Offset: 0x11D67D8
    int16_t GetInt16(::ArrayW<uint8_t> buffer, int offset);
    // private System.Int32 GetInt32(System.Byte[] buffer, System.Int32 offset)
    // Offset: 0x11D6B28
    int GetInt32(::ArrayW<uint8_t> buffer, int offset);
    // private System.Int32 GetInteger(System.Byte[] buffer, System.Int32 offset)
    // Offset: 0x11D6914
    int GetInteger(::ArrayW<uint8_t> buffer, int offset);
    // private System.String GetString(System.Byte[] buffer, System.Int32 offset)
    // Offset: 0x11D6834
    ::StringW GetString(::ArrayW<uint8_t> buffer, int offset);
    // private System.Byte[] GetStringBytes(System.Byte[] buffer, System.Int32 offset)
    // Offset: 0x11D6A64
    ::ArrayW<uint8_t> GetStringBytes(::ArrayW<uint8_t> buffer, int offset);
  }; // System.TermInfoReader
  #pragma pack(pop)
  static check_size<sizeof(TermInfoReader), 44 + sizeof(int)> __System_TermInfoReaderSizeCheck;
  static_assert(sizeof(TermInfoReader) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::TermInfoReader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::TermInfoReader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::TermInfoReader::DetermineVersion
// Il2CppName: DetermineVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::TermInfoReader::*)(int16_t)>(&System::TermInfoReader::DetermineVersion)> {
  static const MethodInfo* get() {
    static auto* magic = &::il2cpp_utils::GetClassFromName("System", "Int16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TermInfoReader*), "DetermineVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{magic});
  }
};
// Writing MetadataGetter for method: System::TermInfoReader::ReadHeader
// Il2CppName: ReadHeader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::TermInfoReader::*)(::ArrayW<uint8_t>, ByRef<int>)>(&System::TermInfoReader::ReadHeader)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TermInfoReader*), "ReadHeader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, position});
  }
};
// Writing MetadataGetter for method: System::TermInfoReader::ReadNames
// Il2CppName: ReadNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::TermInfoReader::*)(::ArrayW<uint8_t>, ByRef<int>)>(&System::TermInfoReader::ReadNames)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TermInfoReader*), "ReadNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, position});
  }
};
// Writing MetadataGetter for method: System::TermInfoReader::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::TermInfoReader::*)(::System::TermInfoNumbers)>(&System::TermInfoReader::Get)> {
  static const MethodInfo* get() {
    static auto* number = &::il2cpp_utils::GetClassFromName("System", "TermInfoNumbers")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TermInfoReader*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{number});
  }
};
// Writing MetadataGetter for method: System::TermInfoReader::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::TermInfoReader::*)(::System::TermInfoStrings)>(&System::TermInfoReader::Get)> {
  static const MethodInfo* get() {
    static auto* tstr = &::il2cpp_utils::GetClassFromName("System", "TermInfoStrings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TermInfoReader*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tstr});
  }
};
// Writing MetadataGetter for method: System::TermInfoReader::GetStringBytes
// Il2CppName: GetStringBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::TermInfoReader::*)(::System::TermInfoStrings)>(&System::TermInfoReader::GetStringBytes)> {
  static const MethodInfo* get() {
    static auto* tstr = &::il2cpp_utils::GetClassFromName("System", "TermInfoStrings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TermInfoReader*), "GetStringBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tstr});
  }
};
// Writing MetadataGetter for method: System::TermInfoReader::GetInt16
// Il2CppName: GetInt16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (System::TermInfoReader::*)(::ArrayW<uint8_t>, int)>(&System::TermInfoReader::GetInt16)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TermInfoReader*), "GetInt16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset});
  }
};
// Writing MetadataGetter for method: System::TermInfoReader::GetInt32
// Il2CppName: GetInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::TermInfoReader::*)(::ArrayW<uint8_t>, int)>(&System::TermInfoReader::GetInt32)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TermInfoReader*), "GetInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset});
  }
};
// Writing MetadataGetter for method: System::TermInfoReader::GetInteger
// Il2CppName: GetInteger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::TermInfoReader::*)(::ArrayW<uint8_t>, int)>(&System::TermInfoReader::GetInteger)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TermInfoReader*), "GetInteger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset});
  }
};
// Writing MetadataGetter for method: System::TermInfoReader::GetString
// Il2CppName: GetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::TermInfoReader::*)(::ArrayW<uint8_t>, int)>(&System::TermInfoReader::GetString)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TermInfoReader*), "GetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset});
  }
};
// Writing MetadataGetter for method: System::TermInfoReader::GetStringBytes
// Il2CppName: GetStringBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::TermInfoReader::*)(::ArrayW<uint8_t>, int)>(&System::TermInfoReader::GetStringBytes)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TermInfoReader*), "GetStringBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset});
  }
};
