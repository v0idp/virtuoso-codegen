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
// Forward declaring namespace: System::Security
namespace System::Security {
  // Forward declaring type: SecurityElement
  class SecurityElement;
}
// Completed forward declares
// Type namespace: System.Security
namespace System::Security {
  // Forward declaring type: SecurityDocument
  class SecurityDocument;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::SecurityDocument);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::SecurityDocument*, "System.Security", "SecurityDocument");
// Type namespace: System.Security
namespace System::Security {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.SecurityDocument
  // [TokenAttribute] Offset: FFFFFFFF
  class SecurityDocument : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // System.Byte[] m_data
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> m_data;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating conversion operator: operator ::ArrayW<uint8_t>
    constexpr operator ::ArrayW<uint8_t>() const noexcept {
      return m_data;
    }
    // Get instance field reference: System.Byte[] m_data
    ::ArrayW<uint8_t>& dyn_m_data();
    // public System.Void .ctor(System.Int32 numData)
    // Offset: 0xF461E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecurityDocument* New_ctor(int numData) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::SecurityDocument::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecurityDocument*, creationType>(numData)));
    }
    // public System.Void GuaranteeSize(System.Int32 size)
    // Offset: 0xF46250
    void GuaranteeSize(int size);
    // public System.Void AddString(System.String str, ref System.Int32 position)
    // Offset: 0xF46300
    void AddString(::StringW str, ByRef<int> position);
    // public System.Void AppendString(System.String str, ref System.Int32 position)
    // Offset: 0xF46460
    void AppendString(::StringW str, ByRef<int> position);
    // static public System.Int32 EncodedStringSize(System.String str)
    // Offset: 0xF46504
    static int EncodedStringSize(::StringW str);
    // public System.String GetString(ref System.Int32 position, System.Boolean bCreate)
    // Offset: 0xF46524
    ::StringW GetString(ByRef<int> position, bool bCreate);
    // public System.Void AddToken(System.Byte b, ref System.Int32 position)
    // Offset: 0xF46B4C
    void AddToken(uint8_t b, ByRef<int> position);
    // public System.Security.SecurityElement GetRootElement()
    // Offset: 0xF46BBC
    ::System::Security::SecurityElement* GetRootElement();
    // public System.Security.SecurityElement GetElement(System.Int32 position, System.Boolean bCreate)
    // Offset: 0xF46BE4
    ::System::Security::SecurityElement* GetElement(int position, bool bCreate);
    // System.Security.SecurityElement InternalGetElement(ref System.Int32 position, System.Boolean bCreate)
    // Offset: 0xF46C0C
    ::System::Security::SecurityElement* InternalGetElement(ByRef<int> position, bool bCreate);
  }; // System.Security.SecurityDocument
  #pragma pack(pop)
  static check_size<sizeof(SecurityDocument), 16 + sizeof(::ArrayW<uint8_t>)> __System_Security_SecurityDocumentSizeCheck;
  static_assert(sizeof(SecurityDocument) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::SecurityDocument::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::SecurityDocument::GuaranteeSize
// Il2CppName: GuaranteeSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::SecurityDocument::*)(int)>(&System::Security::SecurityDocument::GuaranteeSize)> {
  static const MethodInfo* get() {
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecurityDocument*), "GuaranteeSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{size});
  }
};
// Writing MetadataGetter for method: System::Security::SecurityDocument::AddString
// Il2CppName: AddString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::SecurityDocument::*)(::StringW, ByRef<int>)>(&System::Security::SecurityDocument::AddString)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecurityDocument*), "AddString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str, position});
  }
};
// Writing MetadataGetter for method: System::Security::SecurityDocument::AppendString
// Il2CppName: AppendString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::SecurityDocument::*)(::StringW, ByRef<int>)>(&System::Security::SecurityDocument::AppendString)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecurityDocument*), "AppendString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str, position});
  }
};
// Writing MetadataGetter for method: System::Security::SecurityDocument::EncodedStringSize
// Il2CppName: EncodedStringSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW)>(&System::Security::SecurityDocument::EncodedStringSize)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecurityDocument*), "EncodedStringSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: System::Security::SecurityDocument::GetString
// Il2CppName: GetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::SecurityDocument::*)(ByRef<int>, bool)>(&System::Security::SecurityDocument::GetString)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* bCreate = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecurityDocument*), "GetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, bCreate});
  }
};
// Writing MetadataGetter for method: System::Security::SecurityDocument::AddToken
// Il2CppName: AddToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::SecurityDocument::*)(uint8_t, ByRef<int>)>(&System::Security::SecurityDocument::AddToken)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecurityDocument*), "AddToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b, position});
  }
};
// Writing MetadataGetter for method: System::Security::SecurityDocument::GetRootElement
// Il2CppName: GetRootElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::SecurityElement* (System::Security::SecurityDocument::*)()>(&System::Security::SecurityDocument::GetRootElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecurityDocument*), "GetRootElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::SecurityDocument::GetElement
// Il2CppName: GetElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::SecurityElement* (System::Security::SecurityDocument::*)(int, bool)>(&System::Security::SecurityDocument::GetElement)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bCreate = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecurityDocument*), "GetElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, bCreate});
  }
};
// Writing MetadataGetter for method: System::Security::SecurityDocument::InternalGetElement
// Il2CppName: InternalGetElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::SecurityElement* (System::Security::SecurityDocument::*)(ByRef<int>, bool)>(&System::Security::SecurityDocument::InternalGetElement)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* bCreate = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecurityDocument*), "InternalGetElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, bCreate});
  }
};
