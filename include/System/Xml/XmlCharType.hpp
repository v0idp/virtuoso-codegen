// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: XmlCharType
  struct XmlCharType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlCharType, "System.Xml", "XmlCharType");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Xml.XmlCharType
  // [TokenAttribute] Offset: FFFFFFFF
  struct XmlCharType/*, public ::System::ValueType*/ {
    public:
    public:
    // System.Byte[] charProperties
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<uint8_t> charProperties;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating value type constructor for type: XmlCharType
    constexpr XmlCharType(::ArrayW<uint8_t> charProperties_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr))) noexcept : charProperties{charProperties_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::ArrayW<uint8_t>
    constexpr operator ::ArrayW<uint8_t>() const noexcept {
      return charProperties;
    }
    // Get static field: static private System.Object s_Lock
    static ::Il2CppObject* _get_s_Lock();
    // Set static field: static private System.Object s_Lock
    static void _set_s_Lock(::Il2CppObject* value);
    // Get static field: static private System.Byte[] s_CharProperties
    static ::ArrayW<uint8_t> _get_s_CharProperties();
    // Set static field: static private System.Byte[] s_CharProperties
    static void _set_s_CharProperties(::ArrayW<uint8_t> value);
    // Get instance field reference: System.Byte[] charProperties
    [[deprecated]] ::ArrayW<uint8_t>& dyn_charProperties();
    // static private System.Object get_StaticLock()
    // Offset: 0x118FBB8
    static ::Il2CppObject* get_StaticLock();
    // static public System.Xml.XmlCharType get_Instance()
    // Offset: 0x1187B44
    static ::System::Xml::XmlCharType get_Instance();
    // private System.Void .ctor(System.Byte[] charProperties)
    // Offset: 0x118FF74
    // ABORTED: conflicts with another method.  XmlCharType(::ArrayW<uint8_t> charProperties);
    // static private System.Void InitInstance()
    // Offset: 0x118FC50
    static void InitInstance();
    // static private System.Void SetProperties(System.String ranges, System.Byte value)
    // Offset: 0x118FE6C
    static void SetProperties(::StringW ranges, uint8_t value);
    // public System.Boolean IsWhiteSpace(System.Char ch)
    // Offset: 0x118FF7C
    bool IsWhiteSpace(::Il2CppChar ch);
    // public System.Boolean IsNCNameSingleChar(System.Char ch)
    // Offset: 0x118FFC0
    bool IsNCNameSingleChar(::Il2CppChar ch);
    // public System.Boolean IsStartNCNameSingleChar(System.Char ch)
    // Offset: 0x1190004
    bool IsStartNCNameSingleChar(::Il2CppChar ch);
    // public System.Boolean IsNameSingleChar(System.Char ch)
    // Offset: 0x1190048
    bool IsNameSingleChar(::Il2CppChar ch);
    // public System.Boolean IsCharData(System.Char ch)
    // Offset: 0x1190078
    bool IsCharData(::Il2CppChar ch);
    // public System.Boolean IsPubidChar(System.Char ch)
    // Offset: 0x11900BC
    bool IsPubidChar(::Il2CppChar ch);
    // System.Boolean IsTextChar(System.Char ch)
    // Offset: 0x1190144
    bool IsTextChar(::Il2CppChar ch);
    // public System.Boolean IsLetter(System.Char ch)
    // Offset: 0x1190188
    bool IsLetter(::Il2CppChar ch);
    // public System.Boolean IsNCNameCharXml4e(System.Char ch)
    // Offset: 0x11901CC
    bool IsNCNameCharXml4e(::Il2CppChar ch);
    // public System.Boolean IsStartNCNameCharXml4e(System.Char ch)
    // Offset: 0x1190210
    bool IsStartNCNameCharXml4e(::Il2CppChar ch);
    // public System.Boolean IsNameCharXml4e(System.Char ch)
    // Offset: 0x1190240
    bool IsNameCharXml4e(::Il2CppChar ch);
    // static public System.Boolean IsDigit(System.Char ch)
    // Offset: 0x1190270
    static bool IsDigit(::Il2CppChar ch);
    // static System.Boolean IsHighSurrogate(System.Int32 ch)
    // Offset: 0x1190298
    static bool IsHighSurrogate(int ch);
    // static System.Boolean IsLowSurrogate(System.Int32 ch)
    // Offset: 0x11902A8
    static bool IsLowSurrogate(int ch);
    // static System.Boolean IsSurrogate(System.Int32 ch)
    // Offset: 0x11902B8
    static bool IsSurrogate(int ch);
    // static System.Int32 CombineSurrogateChar(System.Int32 lowChar, System.Int32 highChar)
    // Offset: 0x11902C8
    static int CombineSurrogateChar(int lowChar, int highChar);
    // static System.Void SplitSurrogateChar(System.Int32 combinedChar, out System.Char lowChar, out System.Char highChar)
    // Offset: 0x11902E0
    static void SplitSurrogateChar(int combinedChar, ByRef<::Il2CppChar> lowChar, ByRef<::Il2CppChar> highChar);
    // System.Boolean IsOnlyWhitespace(System.String str)
    // Offset: 0x1187BB0
    bool IsOnlyWhitespace(::StringW str);
    // System.Int32 IsOnlyWhitespaceWithPos(System.String str)
    // Offset: 0x1190318
    int IsOnlyWhitespaceWithPos(::StringW str);
    // System.Int32 IsOnlyCharData(System.String str)
    // Offset: 0x11903B0
    int IsOnlyCharData(::StringW str);
    // static System.Boolean IsOnlyDigits(System.String str, System.Int32 startPos, System.Int32 len)
    // Offset: 0x1190498
    static bool IsOnlyDigits(::StringW str, int startPos, int len);
    // System.Int32 IsPublicId(System.String str)
    // Offset: 0x119050C
    int IsPublicId(::StringW str);
    // static private System.Boolean InRange(System.Int32 value, System.Int32 start, System.Int32 end)
    // Offset: 0x1190284
    static bool InRange(int value, int start, int end);
  }; // System.Xml.XmlCharType
  #pragma pack(pop)
  static check_size<sizeof(XmlCharType), 0 + sizeof(::ArrayW<uint8_t>)> __System_Xml_XmlCharTypeSizeCheck;
  static_assert(sizeof(XmlCharType) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::XmlCharType::get_StaticLock
// Il2CppName: get_StaticLock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)()>(&System::Xml::XmlCharType::get_StaticLock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharType), "get_StaticLock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharType::get_Instance
// Il2CppName: get_Instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlCharType (*)()>(&System::Xml::XmlCharType::get_Instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharType), "get_Instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharType::XmlCharType
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::XmlCharType::InitInstance
// Il2CppName: InitInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Xml::XmlCharType::InitInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharType), "InitInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharType::SetProperties
// Il2CppName: SetProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, uint8_t)>(&System::Xml::XmlCharType::SetProperties)> {
  static const MethodInfo* get() {
    static auto* ranges = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharType), "SetProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ranges, value});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharType::IsWhiteSpace
// Il2CppName: IsWhiteSpace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlCharType::*)(::Il2CppChar)>(&System::Xml::XmlCharType::IsWhiteSpace)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharType), "IsWhiteSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharType::IsNCNameSingleChar
// Il2CppName: IsNCNameSingleChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlCharType::*)(::Il2CppChar)>(&System::Xml::XmlCharType::IsNCNameSingleChar)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharType), "IsNCNameSingleChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharType::IsStartNCNameSingleChar
// Il2CppName: IsStartNCNameSingleChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlCharType::*)(::Il2CppChar)>(&System::Xml::XmlCharType::IsStartNCNameSingleChar)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharType), "IsStartNCNameSingleChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharType::IsNameSingleChar
// Il2CppName: IsNameSingleChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlCharType::*)(::Il2CppChar)>(&System::Xml::XmlCharType::IsNameSingleChar)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharType), "IsNameSingleChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharType::IsCharData
// Il2CppName: IsCharData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlCharType::*)(::Il2CppChar)>(&System::Xml::XmlCharType::IsCharData)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharType), "IsCharData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharType::IsPubidChar
// Il2CppName: IsPubidChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlCharType::*)(::Il2CppChar)>(&System::Xml::XmlCharType::IsPubidChar)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharType), "IsPubidChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharType::IsTextChar
// Il2CppName: IsTextChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlCharType::*)(::Il2CppChar)>(&System::Xml::XmlCharType::IsTextChar)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharType), "IsTextChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharType::IsLetter
// Il2CppName: IsLetter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlCharType::*)(::Il2CppChar)>(&System::Xml::XmlCharType::IsLetter)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharType), "IsLetter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharType::IsNCNameCharXml4e
// Il2CppName: IsNCNameCharXml4e
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlCharType::*)(::Il2CppChar)>(&System::Xml::XmlCharType::IsNCNameCharXml4e)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharType), "IsNCNameCharXml4e", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharType::IsStartNCNameCharXml4e
// Il2CppName: IsStartNCNameCharXml4e
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlCharType::*)(::Il2CppChar)>(&System::Xml::XmlCharType::IsStartNCNameCharXml4e)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharType), "IsStartNCNameCharXml4e", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharType::IsNameCharXml4e
// Il2CppName: IsNameCharXml4e
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlCharType::*)(::Il2CppChar)>(&System::Xml::XmlCharType::IsNameCharXml4e)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharType), "IsNameCharXml4e", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharType::IsDigit
// Il2CppName: IsDigit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppChar)>(&System::Xml::XmlCharType::IsDigit)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharType), "IsDigit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharType::IsHighSurrogate
// Il2CppName: IsHighSurrogate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&System::Xml::XmlCharType::IsHighSurrogate)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharType), "IsHighSurrogate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharType::IsLowSurrogate
// Il2CppName: IsLowSurrogate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&System::Xml::XmlCharType::IsLowSurrogate)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharType), "IsLowSurrogate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharType::IsSurrogate
// Il2CppName: IsSurrogate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&System::Xml::XmlCharType::IsSurrogate)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharType), "IsSurrogate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharType::CombineSurrogateChar
// Il2CppName: CombineSurrogateChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int)>(&System::Xml::XmlCharType::CombineSurrogateChar)> {
  static const MethodInfo* get() {
    static auto* lowChar = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* highChar = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharType), "CombineSurrogateChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lowChar, highChar});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharType::SplitSurrogateChar
// Il2CppName: SplitSurrogateChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ByRef<::Il2CppChar>, ByRef<::Il2CppChar>)>(&System::Xml::XmlCharType::SplitSurrogateChar)> {
  static const MethodInfo* get() {
    static auto* combinedChar = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* lowChar = &::il2cpp_utils::GetClassFromName("System", "Char")->this_arg;
    static auto* highChar = &::il2cpp_utils::GetClassFromName("System", "Char")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharType), "SplitSurrogateChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{combinedChar, lowChar, highChar});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharType::IsOnlyWhitespace
// Il2CppName: IsOnlyWhitespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlCharType::*)(::StringW)>(&System::Xml::XmlCharType::IsOnlyWhitespace)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharType), "IsOnlyWhitespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharType::IsOnlyWhitespaceWithPos
// Il2CppName: IsOnlyWhitespaceWithPos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::XmlCharType::*)(::StringW)>(&System::Xml::XmlCharType::IsOnlyWhitespaceWithPos)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharType), "IsOnlyWhitespaceWithPos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharType::IsOnlyCharData
// Il2CppName: IsOnlyCharData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::XmlCharType::*)(::StringW)>(&System::Xml::XmlCharType::IsOnlyCharData)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharType), "IsOnlyCharData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharType::IsOnlyDigits
// Il2CppName: IsOnlyDigits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, int, int)>(&System::Xml::XmlCharType::IsOnlyDigits)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* startPos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharType), "IsOnlyDigits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str, startPos, len});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharType::IsPublicId
// Il2CppName: IsPublicId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::XmlCharType::*)(::StringW)>(&System::Xml::XmlCharType::IsPublicId)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharType), "IsPublicId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: System::Xml::XmlCharType::InRange
// Il2CppName: InRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int, int, int)>(&System::Xml::XmlCharType::InRange)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::XmlCharType), "InRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, start, end});
  }
};