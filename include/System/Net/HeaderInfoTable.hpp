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
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: HeaderInfo
  class HeaderInfo;
  // Forward declaring type: HeaderParser
  class HeaderParser;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: HeaderInfoTable
  class HeaderInfoTable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::HeaderInfoTable);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HeaderInfoTable*, "System.Net", "HeaderInfoTable");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.HeaderInfoTable
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 69DBD8
  class HeaderInfoTable : public ::Il2CppObject {
    public:
    // Get static field: static private System.Collections.Hashtable HeaderHashTable
    static ::System::Collections::Hashtable* _get_HeaderHashTable();
    // Set static field: static private System.Collections.Hashtable HeaderHashTable
    static void _set_HeaderHashTable(::System::Collections::Hashtable* value);
    // Get static field: static private System.Net.HeaderInfo UnknownHeaderInfo
    static ::System::Net::HeaderInfo* _get_UnknownHeaderInfo();
    // Set static field: static private System.Net.HeaderInfo UnknownHeaderInfo
    static void _set_UnknownHeaderInfo(::System::Net::HeaderInfo* value);
    // Get static field: static private System.Net.HeaderParser SingleParser
    static ::System::Net::HeaderParser* _get_SingleParser();
    // Set static field: static private System.Net.HeaderParser SingleParser
    static void _set_SingleParser(::System::Net::HeaderParser* value);
    // Get static field: static private System.Net.HeaderParser MultiParser
    static ::System::Net::HeaderParser* _get_MultiParser();
    // Set static field: static private System.Net.HeaderParser MultiParser
    static void _set_MultiParser(::System::Net::HeaderParser* value);
    // System.Net.HeaderInfo get_Item(System.String name)
    // Offset: 0xF0D9B8
    ::System::Net::HeaderInfo* get_Item(::StringW name);
    // static private System.Void .cctor()
    // Offset: 0xF0C0B8
    static void _cctor();
    // static private System.String[] ParseSingleValue(System.String value)
    // Offset: 0xF0BE0C
    static ::ArrayW<::StringW> ParseSingleValue(::StringW value);
    // static private System.String[] ParseMultiValue(System.String value)
    // Offset: 0xF0BEA8
    static ::ArrayW<::StringW> ParseMultiValue(::StringW value);
    // public System.Void .ctor()
    // Offset: 0xF0DAA8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HeaderInfoTable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::HeaderInfoTable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HeaderInfoTable*, creationType>()));
    }
  }; // System.Net.HeaderInfoTable
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::HeaderInfoTable::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::HeaderInfo* (System::Net::HeaderInfoTable::*)(::StringW)>(&System::Net::HeaderInfoTable::get_Item)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HeaderInfoTable*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Net::HeaderInfoTable::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::HeaderInfoTable::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HeaderInfoTable*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HeaderInfoTable::ParseSingleValue
// Il2CppName: ParseSingleValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)(::StringW)>(&System::Net::HeaderInfoTable::ParseSingleValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HeaderInfoTable*), "ParseSingleValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::HeaderInfoTable::ParseMultiValue
// Il2CppName: ParseMultiValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)(::StringW)>(&System::Net::HeaderInfoTable::ParseMultiValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HeaderInfoTable*), "ParseMultiValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::HeaderInfoTable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
