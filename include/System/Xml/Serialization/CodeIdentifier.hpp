// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Microsoft::CSharp
namespace Microsoft::CSharp {
  // Forward declaring type: CodeDomProvider
  class CodeDomProvider;
}
// Completed forward declares
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: CodeIdentifier
  class CodeIdentifier;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Serialization::CodeIdentifier);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::CodeIdentifier*, "System.Xml.Serialization", "CodeIdentifier");
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Serialization.CodeIdentifier
  // [TokenAttribute] Offset: FFFFFFFF
  class CodeIdentifier : public ::Il2CppObject {
    public:
    // Get static field: static Microsoft.CSharp.CodeDomProvider csharp
    static ::Microsoft::CSharp::CodeDomProvider* _get_csharp();
    // Set static field: static Microsoft.CSharp.CodeDomProvider csharp
    static void _set_csharp(::Microsoft::CSharp::CodeDomProvider* value);
    // static private System.Void .cctor()
    // Offset: 0xB66FDC
    static void _cctor();
    // static public System.String MakePascal(System.String identifier)
    // Offset: 0xB66B68
    static ::StringW MakePascal(::StringW identifier);
    // static public System.String MakeValid(System.String identifier)
    // Offset: 0xB66D44
    static ::StringW MakeValid(::StringW identifier);
    // static private System.Boolean IsValidStart(System.Char c)
    // Offset: 0xB66F6C
    static bool IsValidStart(::Il2CppChar c);
    // static private System.Boolean IsValid(System.Char c)
    // Offset: 0xB66EE4
    static bool IsValid(::Il2CppChar c);
  }; // System.Xml.Serialization.CodeIdentifier
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Serialization::CodeIdentifier::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Xml::Serialization::CodeIdentifier::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::CodeIdentifier*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::CodeIdentifier::MakePascal
// Il2CppName: MakePascal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::Xml::Serialization::CodeIdentifier::MakePascal)> {
  static const MethodInfo* get() {
    static auto* identifier = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::CodeIdentifier*), "MakePascal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{identifier});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::CodeIdentifier::MakeValid
// Il2CppName: MakeValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::Xml::Serialization::CodeIdentifier::MakeValid)> {
  static const MethodInfo* get() {
    static auto* identifier = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::CodeIdentifier*), "MakeValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{identifier});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::CodeIdentifier::IsValidStart
// Il2CppName: IsValidStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppChar)>(&System::Xml::Serialization::CodeIdentifier::IsValidStart)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::CodeIdentifier*), "IsValidStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::CodeIdentifier::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppChar)>(&System::Xml::Serialization::CodeIdentifier::IsValid)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::CodeIdentifier*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};