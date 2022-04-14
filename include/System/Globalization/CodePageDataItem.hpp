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
// Type namespace: System.Globalization
namespace System::Globalization {
  // Forward declaring type: CodePageDataItem
  class CodePageDataItem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Globalization::CodePageDataItem);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::CodePageDataItem*, "System.Globalization", "CodePageDataItem");
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.CodePageDataItem
  // [TokenAttribute] Offset: FFFFFFFF
  class CodePageDataItem : public ::Il2CppObject {
    public:
    public:
    // System.Int32 m_dataIndex
    // Size: 0x4
    // Offset: 0x10
    int m_dataIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 m_uiFamilyCodePage
    // Size: 0x4
    // Offset: 0x14
    int m_uiFamilyCodePage;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.String m_webName
    // Size: 0x8
    // Offset: 0x18
    ::StringW m_webName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.String m_headerName
    // Size: 0x8
    // Offset: 0x20
    ::StringW m_headerName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.UInt32 m_flags
    // Size: 0x4
    // Offset: 0x28
    uint m_flags;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Get static field: static private readonly System.Char[] sep
    static ::ArrayW<::Il2CppChar> _get_sep();
    // Set static field: static private readonly System.Char[] sep
    static void _set_sep(::ArrayW<::Il2CppChar> value);
    // Get instance field reference: System.Int32 m_dataIndex
    [[deprecated]] int& dyn_m_dataIndex();
    // Get instance field reference: System.Int32 m_uiFamilyCodePage
    [[deprecated]] int& dyn_m_uiFamilyCodePage();
    // Get instance field reference: System.String m_webName
    [[deprecated]] ::StringW& dyn_m_webName();
    // Get instance field reference: System.String m_headerName
    [[deprecated]] ::StringW& dyn_m_headerName();
    // Get instance field reference: System.UInt32 m_flags
    [[deprecated]] uint& dyn_m_flags();
    // public System.String get_WebName()
    // Offset: 0xE38DC4
    ::StringW get_WebName();
    // public System.String get_HeaderName()
    // Offset: 0xE38E9C
    ::StringW get_HeaderName();
    // System.Void .ctor(System.Int32 dataIndex)
    // Offset: 0xE38C1C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CodePageDataItem* New_ctor(int dataIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Globalization::CodePageDataItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CodePageDataItem*, creationType>(dataIndex)));
    }
    // static private System.Void .cctor()
    // Offset: 0xE38F74
    static void _cctor();
    // static System.String CreateString(System.String pStrings, System.UInt32 index)
    // Offset: 0xE38CF4
    static ::StringW CreateString(::StringW pStrings, uint index);
  }; // System.Globalization.CodePageDataItem
  #pragma pack(pop)
  static check_size<sizeof(CodePageDataItem), 40 + sizeof(uint)> __System_Globalization_CodePageDataItemSizeCheck;
  static_assert(sizeof(CodePageDataItem) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Globalization::CodePageDataItem::get_WebName
// Il2CppName: get_WebName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::CodePageDataItem::*)()>(&System::Globalization::CodePageDataItem::get_WebName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::CodePageDataItem*), "get_WebName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::CodePageDataItem::get_HeaderName
// Il2CppName: get_HeaderName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::CodePageDataItem::*)()>(&System::Globalization::CodePageDataItem::get_HeaderName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::CodePageDataItem*), "get_HeaderName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::CodePageDataItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Globalization::CodePageDataItem::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Globalization::CodePageDataItem::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::CodePageDataItem*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Globalization::CodePageDataItem::CreateString
// Il2CppName: CreateString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, uint)>(&System::Globalization::CodePageDataItem::CreateString)> {
  static const MethodInfo* get() {
    static auto* pStrings = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::CodePageDataItem*), "CreateString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pStrings, index});
  }
};
