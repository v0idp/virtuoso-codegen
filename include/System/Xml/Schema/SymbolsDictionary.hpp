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
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
  // Forward declaring type: ArrayList
  class ArrayList;
  // Forward declaring type: ICollection
  class ICollection;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlQualifiedName
  class XmlQualifiedName;
}
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: NamespaceList
  class NamespaceList;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: SymbolsDictionary
  class SymbolsDictionary;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::SymbolsDictionary);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::SymbolsDictionary*, "System.Xml.Schema", "SymbolsDictionary");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.SymbolsDictionary
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 6A4760
  class SymbolsDictionary : public ::Il2CppObject {
    public:
    public:
    // private System.Int32 last
    // Size: 0x4
    // Offset: 0x10
    int last;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: last and: names
    char __padding0[0x4] = {};
    // private System.Collections.Hashtable names
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Hashtable* names;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    // private System.Collections.Hashtable wildcards
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Hashtable* wildcards;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    // private System.Collections.ArrayList particles
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::ArrayList* particles;
    // Field size check
    static_assert(sizeof(::System::Collections::ArrayList*) == 0x8);
    // private System.Object particleLast
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppObject* particleLast;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Boolean isUpaEnforced
    // Size: 0x1
    // Offset: 0x38
    bool isUpaEnforced;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Int32 last
    [[deprecated]] int& dyn_last();
    // Get instance field reference: private System.Collections.Hashtable names
    [[deprecated]] ::System::Collections::Hashtable*& dyn_names();
    // Get instance field reference: private System.Collections.Hashtable wildcards
    [[deprecated]] ::System::Collections::Hashtable*& dyn_wildcards();
    // Get instance field reference: private System.Collections.ArrayList particles
    [[deprecated]] ::System::Collections::ArrayList*& dyn_particles();
    // Get instance field reference: private System.Object particleLast
    [[deprecated]] ::Il2CppObject*& dyn_particleLast();
    // Get instance field reference: private System.Boolean isUpaEnforced
    [[deprecated]] bool& dyn_isUpaEnforced();
    // public System.Int32 get_Count()
    // Offset: 0xF6E6C4
    int get_Count();
    // public System.Boolean get_IsUpaEnforced()
    // Offset: 0xF6E6D0
    bool get_IsUpaEnforced();
    // public System.Void set_IsUpaEnforced(System.Boolean value)
    // Offset: 0xF6E6D8
    void set_IsUpaEnforced(bool value);
    // public System.Int32 get_Item(System.Xml.XmlQualifiedName name)
    // Offset: 0xF6F438
    int get_Item(::System::Xml::XmlQualifiedName* name);
    // public System.Int32 AddName(System.Xml.XmlQualifiedName name, System.Object particle)
    // Offset: 0xF6E6E4
    int AddName(::System::Xml::XmlQualifiedName* name, ::Il2CppObject* particle);
    // public System.Void AddNamespaceList(System.Xml.Schema.NamespaceList list, System.Object particle, System.Boolean allowLocal)
    // Offset: 0xF6E824
    void AddNamespaceList(::System::Xml::Schema::NamespaceList* list, ::Il2CppObject* particle, bool allowLocal);
    // private System.Void AddWildcard(System.String wildcard, System.Object particle)
    // Offset: 0xF6EB84
    void AddWildcard(::StringW wildcard, ::Il2CppObject* particle);
    // public System.Collections.ICollection GetNamespaceListSymbols(System.Xml.Schema.NamespaceList list)
    // Offset: 0xF6ECF8
    ::System::Collections::ICollection* GetNamespaceListSymbols(::System::Xml::Schema::NamespaceList* list);
    // public System.Boolean Exists(System.Xml.XmlQualifiedName name)
    // Offset: 0xF6F4FC
    bool Exists(::System::Xml::XmlQualifiedName* name);
    // public System.Object GetParticle(System.Int32 symbol)
    // Offset: 0xF6F530
    ::Il2CppObject* GetParticle(int symbol);
    // public System.String NameOf(System.Int32 symbol)
    // Offset: 0xF6F568
    ::StringW NameOf(int symbol);
    // public System.Void .ctor()
    // Offset: 0xF6E628
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SymbolsDictionary* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::SymbolsDictionary::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SymbolsDictionary*, creationType>()));
    }
  }; // System.Xml.Schema.SymbolsDictionary
  #pragma pack(pop)
  static check_size<sizeof(SymbolsDictionary), 56 + sizeof(bool)> __System_Xml_Schema_SymbolsDictionarySizeCheck;
  static_assert(sizeof(SymbolsDictionary) == 0x39);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::SymbolsDictionary::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::SymbolsDictionary::*)()>(&System::Xml::Schema::SymbolsDictionary::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SymbolsDictionary*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SymbolsDictionary::get_IsUpaEnforced
// Il2CppName: get_IsUpaEnforced
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::SymbolsDictionary::*)()>(&System::Xml::Schema::SymbolsDictionary::get_IsUpaEnforced)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SymbolsDictionary*), "get_IsUpaEnforced", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SymbolsDictionary::set_IsUpaEnforced
// Il2CppName: set_IsUpaEnforced
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SymbolsDictionary::*)(bool)>(&System::Xml::Schema::SymbolsDictionary::set_IsUpaEnforced)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SymbolsDictionary*), "set_IsUpaEnforced", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SymbolsDictionary::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::SymbolsDictionary::*)(::System::Xml::XmlQualifiedName*)>(&System::Xml::Schema::SymbolsDictionary::get_Item)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlQualifiedName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SymbolsDictionary*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SymbolsDictionary::AddName
// Il2CppName: AddName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::SymbolsDictionary::*)(::System::Xml::XmlQualifiedName*, ::Il2CppObject*)>(&System::Xml::Schema::SymbolsDictionary::AddName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlQualifiedName")->byval_arg;
    static auto* particle = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SymbolsDictionary*), "AddName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, particle});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SymbolsDictionary::AddNamespaceList
// Il2CppName: AddNamespaceList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SymbolsDictionary::*)(::System::Xml::Schema::NamespaceList*, ::Il2CppObject*, bool)>(&System::Xml::Schema::SymbolsDictionary::AddNamespaceList)> {
  static const MethodInfo* get() {
    static auto* list = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "NamespaceList")->byval_arg;
    static auto* particle = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* allowLocal = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SymbolsDictionary*), "AddNamespaceList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{list, particle, allowLocal});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SymbolsDictionary::AddWildcard
// Il2CppName: AddWildcard
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::SymbolsDictionary::*)(::StringW, ::Il2CppObject*)>(&System::Xml::Schema::SymbolsDictionary::AddWildcard)> {
  static const MethodInfo* get() {
    static auto* wildcard = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* particle = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SymbolsDictionary*), "AddWildcard", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{wildcard, particle});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SymbolsDictionary::GetNamespaceListSymbols
// Il2CppName: GetNamespaceListSymbols
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ICollection* (System::Xml::Schema::SymbolsDictionary::*)(::System::Xml::Schema::NamespaceList*)>(&System::Xml::Schema::SymbolsDictionary::GetNamespaceListSymbols)> {
  static const MethodInfo* get() {
    static auto* list = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "NamespaceList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SymbolsDictionary*), "GetNamespaceListSymbols", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{list});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SymbolsDictionary::Exists
// Il2CppName: Exists
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::SymbolsDictionary::*)(::System::Xml::XmlQualifiedName*)>(&System::Xml::Schema::SymbolsDictionary::Exists)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlQualifiedName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SymbolsDictionary*), "Exists", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SymbolsDictionary::GetParticle
// Il2CppName: GetParticle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::SymbolsDictionary::*)(int)>(&System::Xml::Schema::SymbolsDictionary::GetParticle)> {
  static const MethodInfo* get() {
    static auto* symbol = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SymbolsDictionary*), "GetParticle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{symbol});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SymbolsDictionary::NameOf
// Il2CppName: NameOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::SymbolsDictionary::*)(int)>(&System::Xml::Schema::SymbolsDictionary::NameOf)> {
  static const MethodInfo* get() {
    static auto* symbol = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::SymbolsDictionary*), "NameOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{symbol});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::SymbolsDictionary::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
