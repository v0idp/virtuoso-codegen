// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.NameTable
#include "System/Xml/NameTable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::NameTable::Entry);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::NameTable::Entry*, "System.Xml", "NameTable/Entry");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.NameTable/System.Xml.Entry
  // [TokenAttribute] Offset: FFFFFFFF
  class NameTable::Entry : public ::Il2CppObject {
    public:
    public:
    // System.String str
    // Size: 0x8
    // Offset: 0x10
    ::StringW str;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.Int32 hashCode
    // Size: 0x4
    // Offset: 0x18
    int hashCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: hashCode and: next
    char __padding1[0x4] = {};
    // System.Xml.NameTable/System.Xml.Entry next
    // Size: 0x8
    // Offset: 0x20
    ::System::Xml::NameTable::Entry* next;
    // Field size check
    static_assert(sizeof(::System::Xml::NameTable::Entry*) == 0x8);
    public:
    // Get instance field reference: System.String str
    [[deprecated("Use field access instead!")]] ::StringW& dyn_str();
    // Get instance field reference: System.Int32 hashCode
    [[deprecated("Use field access instead!")]] int& dyn_hashCode();
    // Get instance field reference: System.Xml.NameTable/System.Xml.Entry next
    [[deprecated("Use field access instead!")]] ::System::Xml::NameTable::Entry*& dyn_next();
    // System.Void .ctor(System.String str, System.Int32 hashCode, System.Xml.NameTable/System.Xml.Entry next)
    // Offset: 0xC1E7A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NameTable::Entry* New_ctor(::StringW str, int hashCode, ::System::Xml::NameTable::Entry* next) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::NameTable::Entry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NameTable::Entry*, creationType>(str, hashCode, next)));
    }
  }; // System.Xml.NameTable/System.Xml.Entry
  #pragma pack(pop)
  static check_size<sizeof(NameTable::Entry), 32 + sizeof(::System::Xml::NameTable::Entry*)> __System_Xml_NameTable_EntrySizeCheck;
  static_assert(sizeof(NameTable::Entry) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::NameTable::Entry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
