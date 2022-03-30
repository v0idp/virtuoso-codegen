// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Enum/System.ParseFailureKind
#include "System/Enum_ParseFailureKind.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Enum::EnumResult, "System", "Enum/EnumResult");
// Type namespace: System
namespace System {
  // Size: 0x30
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Enum/System.EnumResult
  // [TokenAttribute] Offset: FFFFFFFF
  struct Enum::EnumResult/*, public ::System::ValueType*/ {
    public:
    public:
    // System.Object parsedEnum
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppObject* parsedEnum;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // System.Boolean canThrow
    // Size: 0x1
    // Offset: 0x8
    bool canThrow;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: canThrow and: m_failure
    char __padding1[0x3] = {};
    // System.Enum/System.ParseFailureKind m_failure
    // Size: 0x14
    // Offset: 0xC
    ::System::Enum::ParseFailureKind m_failure;
    // Field size check
    static_assert(sizeof(::System::Enum::ParseFailureKind) == 0x14);
    // System.String m_failureMessageID
    // Size: 0x8
    // Offset: 0x10
    ::StringW m_failureMessageID;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.String m_failureParameter
    // Size: 0x8
    // Offset: 0x18
    ::StringW m_failureParameter;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.Object m_failureMessageFormatArgument
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* m_failureMessageFormatArgument;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // System.Exception m_innerException
    // Size: 0x8
    // Offset: 0x28
    ::System::Exception* m_innerException;
    // Field size check
    static_assert(sizeof(::System::Exception*) == 0x8);
    public:
    // Creating value type constructor for type: EnumResult
    constexpr EnumResult(::Il2CppObject* parsedEnum_ = {}, bool canThrow_ = {}, ::System::Enum::ParseFailureKind m_failure_ = {}, ::StringW m_failureMessageID_ = {}, ::StringW m_failureParameter_ = {}, ::Il2CppObject* m_failureMessageFormatArgument_ = {}, ::System::Exception* m_innerException_ = {}) noexcept : parsedEnum{parsedEnum_}, canThrow{canThrow_}, m_failure{m_failure_}, m_failureMessageID{m_failureMessageID_}, m_failureParameter{m_failureParameter_}, m_failureMessageFormatArgument{m_failureMessageFormatArgument_}, m_innerException{m_innerException_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: System.Object parsedEnum
    ::Il2CppObject*& dyn_parsedEnum();
    // Get instance field reference: System.Boolean canThrow
    bool& dyn_canThrow();
    // Get instance field reference: System.Enum/System.ParseFailureKind m_failure
    ::System::Enum::ParseFailureKind& dyn_m_failure();
    // Get instance field reference: System.String m_failureMessageID
    ::StringW& dyn_m_failureMessageID();
    // Get instance field reference: System.String m_failureParameter
    ::StringW& dyn_m_failureParameter();
    // Get instance field reference: System.Object m_failureMessageFormatArgument
    ::Il2CppObject*& dyn_m_failureMessageFormatArgument();
    // Get instance field reference: System.Exception m_innerException
    ::System::Exception*& dyn_m_innerException();
    // System.Void Init(System.Boolean canMethodThrow)
    // Offset: 0xDD3BB8
    void Init(bool canMethodThrow);
    // System.Void SetFailure(System.Exception unhandledException)
    // Offset: 0xDD3C24
    void SetFailure(::System::Exception* unhandledException);
    // System.Void SetFailure(System.Enum/System.ParseFailureKind failure, System.String failureParameter)
    // Offset: 0xDD3C34
    void SetFailure(::System::Enum::ParseFailureKind failure, ::StringW failureParameter);
    // System.Void SetFailure(System.Enum/System.ParseFailureKind failure, System.String failureMessageID, System.Object failureMessageFormatArgument)
    // Offset: 0xDD3DF0
    void SetFailure(::System::Enum::ParseFailureKind failure, ::StringW failureMessageID, ::Il2CppObject* failureMessageFormatArgument);
    // System.Exception GetEnumParseException()
    // Offset: 0xDD3C74
    ::System::Exception* GetEnumParseException();
  }; // System.Enum/System.EnumResult
  #pragma pack(pop)
  static check_size<sizeof(Enum::EnumResult), 40 + sizeof(::System::Exception*)> __System_Enum_EnumResultSizeCheck;
  static_assert(sizeof(Enum::EnumResult) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Enum::EnumResult::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Enum::EnumResult::*)(bool)>(&System::Enum::EnumResult::Init)> {
  static const MethodInfo* get() {
    static auto* canMethodThrow = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Enum::EnumResult), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{canMethodThrow});
  }
};
// Writing MetadataGetter for method: System::Enum::EnumResult::SetFailure
// Il2CppName: SetFailure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Enum::EnumResult::*)(::System::Exception*)>(&System::Enum::EnumResult::SetFailure)> {
  static const MethodInfo* get() {
    static auto* unhandledException = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Enum::EnumResult), "SetFailure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unhandledException});
  }
};
// Writing MetadataGetter for method: System::Enum::EnumResult::SetFailure
// Il2CppName: SetFailure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Enum::EnumResult::*)(::System::Enum::ParseFailureKind, ::StringW)>(&System::Enum::EnumResult::SetFailure)> {
  static const MethodInfo* get() {
    static auto* failure = &::il2cpp_utils::GetClassFromName("System", "Enum/ParseFailureKind")->byval_arg;
    static auto* failureParameter = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Enum::EnumResult), "SetFailure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{failure, failureParameter});
  }
};
// Writing MetadataGetter for method: System::Enum::EnumResult::SetFailure
// Il2CppName: SetFailure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Enum::EnumResult::*)(::System::Enum::ParseFailureKind, ::StringW, ::Il2CppObject*)>(&System::Enum::EnumResult::SetFailure)> {
  static const MethodInfo* get() {
    static auto* failure = &::il2cpp_utils::GetClassFromName("System", "Enum/ParseFailureKind")->byval_arg;
    static auto* failureMessageID = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* failureMessageFormatArgument = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Enum::EnumResult), "SetFailure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{failure, failureMessageID, failureMessageFormatArgument});
  }
};
// Writing MetadataGetter for method: System::Enum::EnumResult::GetEnumParseException
// Il2CppName: GetEnumParseException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (System::Enum::EnumResult::*)()>(&System::Enum::EnumResult::GetEnumParseException)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Enum::EnumResult), "GetEnumParseException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
