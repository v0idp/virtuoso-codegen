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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: UriBuilder
  class UriBuilder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::UriBuilder);
DEFINE_IL2CPP_ARG_TYPE(::System::UriBuilder*, "System", "UriBuilder");
// Type namespace: System
namespace System {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: System.UriBuilder
  // [TokenAttribute] Offset: FFFFFFFF
  class UriBuilder : public ::Il2CppObject {
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
    // private System.Boolean _changed
    // Size: 0x1
    // Offset: 0x10
    bool changed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: changed and: fragment
    char __padding0[0x7] = {};
    // private System.String _fragment
    // Size: 0x8
    // Offset: 0x18
    ::StringW fragment;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _host
    // Size: 0x8
    // Offset: 0x20
    ::StringW host;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _password
    // Size: 0x8
    // Offset: 0x28
    ::StringW password;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _path
    // Size: 0x8
    // Offset: 0x30
    ::StringW path;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 _port
    // Size: 0x4
    // Offset: 0x38
    int port;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: port and: query
    char __padding5[0x4] = {};
    // private System.String _query
    // Size: 0x8
    // Offset: 0x40
    ::StringW query;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _scheme
    // Size: 0x8
    // Offset: 0x48
    ::StringW scheme;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _schemeDelimiter
    // Size: 0x8
    // Offset: 0x50
    ::StringW schemeDelimiter;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Uri _uri
    // Size: 0x8
    // Offset: 0x58
    ::System::Uri* uri;
    // Field size check
    static_assert(sizeof(::System::Uri*) == 0x8);
    // private System.String _username
    // Size: 0x8
    // Offset: 0x60
    ::StringW username;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.Boolean _changed
    bool& dyn__changed();
    // Get instance field reference: private System.String _fragment
    ::StringW& dyn__fragment();
    // Get instance field reference: private System.String _host
    ::StringW& dyn__host();
    // Get instance field reference: private System.String _password
    ::StringW& dyn__password();
    // Get instance field reference: private System.String _path
    ::StringW& dyn__path();
    // Get instance field reference: private System.Int32 _port
    int& dyn__port();
    // Get instance field reference: private System.String _query
    ::StringW& dyn__query();
    // Get instance field reference: private System.String _scheme
    ::StringW& dyn__scheme();
    // Get instance field reference: private System.String _schemeDelimiter
    ::StringW& dyn__schemeDelimiter();
    // Get instance field reference: private System.Uri _uri
    ::System::Uri*& dyn__uri();
    // Get instance field reference: private System.String _username
    ::StringW& dyn__username();
    // public System.Void set_Host(System.String value)
    // Offset: 0xAB1B98
    void set_Host(::StringW value);
    // public System.Void set_Path(System.String value)
    // Offset: 0xAB1C90
    void set_Path(::StringW value);
    // public System.String get_Query()
    // Offset: 0xAB1D58
    ::StringW get_Query();
    // public System.Void set_Query(System.String value)
    // Offset: 0xAB1D60
    void set_Query(::StringW value);
    // public System.Void set_Scheme(System.String value)
    // Offset: 0xAB1E24
    void set_Scheme(::StringW value);
    // public System.Uri get_Uri()
    // Offset: 0xAB1F7C
    ::System::Uri* get_Uri();
    // private System.Void SetFieldsFromUri(System.Uri uri)
    // Offset: 0xAB2024
    void SetFieldsFromUri(::System::Uri* uri);
    // public System.Void .ctor()
    // Offset: 0xAB1A68
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UriBuilder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::UriBuilder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UriBuilder*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object rparam)
    // Offset: 0xAB219C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object rparam)
    bool Equals(::Il2CppObject* rparam);
    // public override System.Int32 GetHashCode()
    // Offset: 0xAB21FC
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xAB2220
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.UriBuilder
  #pragma pack(pop)
  static check_size<sizeof(UriBuilder), 96 + sizeof(::StringW)> __System_UriBuilderSizeCheck;
  static_assert(sizeof(UriBuilder) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::UriBuilder::set_Host
// Il2CppName: set_Host
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::UriBuilder::*)(::StringW)>(&System::UriBuilder::set_Host)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UriBuilder*), "set_Host", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::UriBuilder::set_Path
// Il2CppName: set_Path
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::UriBuilder::*)(::StringW)>(&System::UriBuilder::set_Path)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UriBuilder*), "set_Path", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::UriBuilder::get_Query
// Il2CppName: get_Query
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::UriBuilder::*)()>(&System::UriBuilder::get_Query)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::UriBuilder*), "get_Query", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::UriBuilder::set_Query
// Il2CppName: set_Query
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::UriBuilder::*)(::StringW)>(&System::UriBuilder::set_Query)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UriBuilder*), "set_Query", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::UriBuilder::set_Scheme
// Il2CppName: set_Scheme
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::UriBuilder::*)(::StringW)>(&System::UriBuilder::set_Scheme)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UriBuilder*), "set_Scheme", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::UriBuilder::get_Uri
// Il2CppName: get_Uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (System::UriBuilder::*)()>(&System::UriBuilder::get_Uri)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::UriBuilder*), "get_Uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::UriBuilder::SetFieldsFromUri
// Il2CppName: SetFieldsFromUri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::UriBuilder::*)(::System::Uri*)>(&System::UriBuilder::SetFieldsFromUri)> {
  static const MethodInfo* get() {
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UriBuilder*), "SetFieldsFromUri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uri});
  }
};
// Writing MetadataGetter for method: System::UriBuilder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::UriBuilder::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::UriBuilder::*)(::Il2CppObject*)>(&System::UriBuilder::Equals)> {
  static const MethodInfo* get() {
    static auto* rparam = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UriBuilder*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rparam});
  }
};
// Writing MetadataGetter for method: System::UriBuilder::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::UriBuilder::*)()>(&System::UriBuilder::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::UriBuilder*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::UriBuilder::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::UriBuilder::*)()>(&System::UriBuilder::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::UriBuilder*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
