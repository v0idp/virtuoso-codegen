// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Text.Decoder
#include "System/Text/Decoder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: Ucs4Decoder
  class Ucs4Decoder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Ucs4Decoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Ucs4Decoder*, "System.Xml", "Ucs4Decoder");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Ucs4Decoder
  // [TokenAttribute] Offset: FFFFFFFF
  class Ucs4Decoder : public ::System::Text::Decoder {
    public:
    public:
    // System.Byte[] lastBytes
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<uint8_t> lastBytes;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // System.Int32 lastBytesCount
    // Size: 0x4
    // Offset: 0x28
    int lastBytesCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: System.Byte[] lastBytes
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_lastBytes();
    // Get instance field reference: System.Int32 lastBytesCount
    [[deprecated("Use field access instead!")]] int& dyn_lastBytesCount();
    // protected System.Void .ctor()
    // Offset: 0xF772D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Ucs4Decoder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Ucs4Decoder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Ucs4Decoder*, creationType>()));
    }
    // System.Int32 GetFullChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int GetFullChars(::ArrayW<uint8_t> bytes, int byteIndex, int byteCount, ::ArrayW<::Il2CppChar> chars, int charIndex);
    // System.Void Ucs4ToUTF16(System.UInt32 code, System.Char[] chars, System.Int32 charIndex)
    // Offset: 0xF7726C
    void Ucs4ToUTF16(uint code, ::ArrayW<::Il2CppChar> chars, int charIndex);
    // public override System.Int32 GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    // Offset: 0xF76EA0
    // Implemented from: System.Text.Decoder
    // Base method: System.Int32 Decoder::GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    int GetCharCount(::ArrayW<uint8_t> bytes, int index, int count);
    // public override System.Int32 GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex)
    // Offset: 0xF76EBC
    // Implemented from: System.Text.Decoder
    // Base method: System.Int32 Decoder::GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex)
    int GetChars(::ArrayW<uint8_t> bytes, int byteIndex, int byteCount, ::ArrayW<::Il2CppChar> chars, int charIndex);
    // public override System.Void Convert(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex, System.Int32 charCount, System.Boolean flush, out System.Int32 bytesUsed, out System.Int32 charsUsed, out System.Boolean completed)
    // Offset: 0xF77048
    // Implemented from: System.Text.Decoder
    // Base method: System.Void Decoder::Convert(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex, System.Int32 charCount, System.Boolean flush, out System.Int32 bytesUsed, out System.Int32 charsUsed, out System.Boolean completed)
    void Convert(::ArrayW<uint8_t> bytes, int byteIndex, int byteCount, ::ArrayW<::Il2CppChar> chars, int charIndex, int charCount, bool flush, ByRef<int> bytesUsed, ByRef<int> charsUsed, ByRef<bool> completed);
  }; // System.Xml.Ucs4Decoder
  #pragma pack(pop)
  static check_size<sizeof(Ucs4Decoder), 40 + sizeof(int)> __System_Xml_Ucs4DecoderSizeCheck;
  static_assert(sizeof(Ucs4Decoder) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Ucs4Decoder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Ucs4Decoder::GetFullChars
// Il2CppName: GetFullChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Ucs4Decoder::*)(::ArrayW<uint8_t>, int, int, ::ArrayW<::Il2CppChar>, int)>(&System::Xml::Ucs4Decoder::GetFullChars)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* byteIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* charIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Ucs4Decoder*), "GetFullChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, byteIndex, byteCount, chars, charIndex});
  }
};
// Writing MetadataGetter for method: System::Xml::Ucs4Decoder::Ucs4ToUTF16
// Il2CppName: Ucs4ToUTF16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Ucs4Decoder::*)(uint, ::ArrayW<::Il2CppChar>, int)>(&System::Xml::Ucs4Decoder::Ucs4ToUTF16)> {
  static const MethodInfo* get() {
    static auto* code = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* charIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Ucs4Decoder*), "Ucs4ToUTF16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{code, chars, charIndex});
  }
};
// Writing MetadataGetter for method: System::Xml::Ucs4Decoder::GetCharCount
// Il2CppName: GetCharCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Ucs4Decoder::*)(::ArrayW<uint8_t>, int, int)>(&System::Xml::Ucs4Decoder::GetCharCount)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Ucs4Decoder*), "GetCharCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, index, count});
  }
};
// Writing MetadataGetter for method: System::Xml::Ucs4Decoder::GetChars
// Il2CppName: GetChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Ucs4Decoder::*)(::ArrayW<uint8_t>, int, int, ::ArrayW<::Il2CppChar>, int)>(&System::Xml::Ucs4Decoder::GetChars)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* byteIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* charIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Ucs4Decoder*), "GetChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, byteIndex, byteCount, chars, charIndex});
  }
};
// Writing MetadataGetter for method: System::Xml::Ucs4Decoder::Convert
// Il2CppName: Convert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Ucs4Decoder::*)(::ArrayW<uint8_t>, int, int, ::ArrayW<::Il2CppChar>, int, int, bool, ByRef<int>, ByRef<int>, ByRef<bool>)>(&System::Xml::Ucs4Decoder::Convert)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* byteIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* charIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* flush = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* bytesUsed = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* charsUsed = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* completed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Ucs4Decoder*), "Convert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, byteIndex, byteCount, chars, charIndex, charCount, flush, bytesUsed, charsUsed, completed});
  }
};
