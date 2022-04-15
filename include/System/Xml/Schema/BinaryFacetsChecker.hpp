// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.FacetsChecker
#include "System/Xml/Schema/FacetsChecker.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaDatatype
  class XmlSchemaDatatype;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: BinaryFacetsChecker
  class BinaryFacetsChecker;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::BinaryFacetsChecker);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::BinaryFacetsChecker*, "System.Xml.Schema", "BinaryFacetsChecker");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.BinaryFacetsChecker
  // [TokenAttribute] Offset: FFFFFFFF
  class BinaryFacetsChecker : public ::System::Xml::Schema::FacetsChecker {
    public:
    // private System.Boolean MatchEnumeration(System.Byte[] value, System.Collections.ArrayList enumeration, System.Xml.Schema.XmlSchemaDatatype datatype)
    // Offset: 0xB62D58
    bool MatchEnumeration(::ArrayW<uint8_t> value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlSchemaDatatype* datatype);
    // public System.Void .ctor()
    // Offset: 0xB62F04
    // Implemented from: System.Xml.Schema.FacetsChecker
    // Base method: System.Void FacetsChecker::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryFacetsChecker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::BinaryFacetsChecker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryFacetsChecker*, creationType>()));
    }
    // override System.Exception CheckValueFacets(System.Object value, System.Xml.Schema.XmlSchemaDatatype datatype)
    // Offset: 0xB62AEC
    // Implemented from: System.Xml.Schema.FacetsChecker
    // Base method: System.Exception FacetsChecker::CheckValueFacets(System.Object value, System.Xml.Schema.XmlSchemaDatatype datatype)
    ::System::Exception* CheckValueFacets(::Il2CppObject* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);
    // override System.Exception CheckValueFacets(System.Byte[] value, System.Xml.Schema.XmlSchemaDatatype datatype)
    // Offset: 0xB62B80
    // Implemented from: System.Xml.Schema.FacetsChecker
    // Base method: System.Exception FacetsChecker::CheckValueFacets(System.Byte[] value, System.Xml.Schema.XmlSchemaDatatype datatype)
    ::System::Exception* CheckValueFacets(::ArrayW<uint8_t> value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);
    // override System.Boolean MatchEnumeration(System.Object value, System.Collections.ArrayList enumeration, System.Xml.Schema.XmlSchemaDatatype datatype)
    // Offset: 0xB62E7C
    // Implemented from: System.Xml.Schema.FacetsChecker
    // Base method: System.Boolean FacetsChecker::MatchEnumeration(System.Object value, System.Collections.ArrayList enumeration, System.Xml.Schema.XmlSchemaDatatype datatype)
    bool MatchEnumeration(::Il2CppObject* value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlSchemaDatatype* datatype);
  }; // System.Xml.Schema.BinaryFacetsChecker
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::BinaryFacetsChecker::MatchEnumeration
// Il2CppName: MatchEnumeration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::BinaryFacetsChecker::*)(::ArrayW<uint8_t>, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*)>(&System::Xml::Schema::BinaryFacetsChecker::MatchEnumeration)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* enumeration = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    static auto* datatype = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaDatatype")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::BinaryFacetsChecker*), "MatchEnumeration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, enumeration, datatype});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::BinaryFacetsChecker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::BinaryFacetsChecker::CheckValueFacets
// Il2CppName: CheckValueFacets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (System::Xml::Schema::BinaryFacetsChecker::*)(::Il2CppObject*, ::System::Xml::Schema::XmlSchemaDatatype*)>(&System::Xml::Schema::BinaryFacetsChecker::CheckValueFacets)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* datatype = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaDatatype")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::BinaryFacetsChecker*), "CheckValueFacets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, datatype});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::BinaryFacetsChecker::CheckValueFacets
// Il2CppName: CheckValueFacets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (System::Xml::Schema::BinaryFacetsChecker::*)(::ArrayW<uint8_t>, ::System::Xml::Schema::XmlSchemaDatatype*)>(&System::Xml::Schema::BinaryFacetsChecker::CheckValueFacets)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* datatype = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaDatatype")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::BinaryFacetsChecker*), "CheckValueFacets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, datatype});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::BinaryFacetsChecker::MatchEnumeration
// Il2CppName: MatchEnumeration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::BinaryFacetsChecker::*)(::Il2CppObject*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaDatatype*)>(&System::Xml::Schema::BinaryFacetsChecker::MatchEnumeration)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* enumeration = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    static auto* datatype = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaDatatype")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::BinaryFacetsChecker*), "MatchEnumeration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, enumeration, datatype});
  }
};
