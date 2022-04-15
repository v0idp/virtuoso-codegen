// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.DtdValidator
#include "System/Xml/Schema/DtdValidator.hpp"
// Including type: System.Xml.XmlNamespaceManager
#include "System/Xml/XmlNamespaceManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::DtdValidator::NamespaceManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::DtdValidator::NamespaceManager*, "System.Xml.Schema", "DtdValidator/NamespaceManager");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.DtdValidator/System.Xml.Schema.NamespaceManager
  // [TokenAttribute] Offset: FFFFFFFF
  class DtdValidator::NamespaceManager : public ::System::Xml::XmlNamespaceManager {
    public:
    // public System.Void .ctor()
    // Offset: 0xC1B52C
    // Implemented from: System.Xml.XmlNamespaceManager
    // Base method: System.Void XmlNamespaceManager::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DtdValidator::NamespaceManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::DtdValidator::NamespaceManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DtdValidator::NamespaceManager*, creationType>()));
    }
    // public override System.String LookupNamespace(System.String prefix)
    // Offset: 0xC1B524
    // Implemented from: System.Xml.XmlNamespaceManager
    // Base method: System.String XmlNamespaceManager::LookupNamespace(System.String prefix)
    ::StringW LookupNamespace(::StringW prefix);
  }; // System.Xml.Schema.DtdValidator/System.Xml.Schema.NamespaceManager
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::DtdValidator::NamespaceManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::DtdValidator::NamespaceManager::LookupNamespace
// Il2CppName: LookupNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::DtdValidator::NamespaceManager::*)(::StringW)>(&System::Xml::Schema::DtdValidator::NamespaceManager::LookupNamespace)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::DtdValidator::NamespaceManager*), "LookupNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix});
  }
};
