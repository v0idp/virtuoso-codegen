// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.ExpandableObjectConverter
#include "System/ComponentModel/ExpandableObjectConverter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ITypeDescriptorContext
  class ITypeDescriptorContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System.Data
namespace System::Data {
  // Forward declaring type: RelationshipConverter
  class RelationshipConverter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::RelationshipConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::RelationshipConverter*, "System.Data", "RelationshipConverter");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.RelationshipConverter
  // [TokenAttribute] Offset: FFFFFFFF
  class RelationshipConverter : public ::System::ComponentModel::ExpandableObjectConverter {
    public:
    // public System.Void .ctor()
    // Offset: 0x1219D6C
    // Implemented from: System.ComponentModel.ExpandableObjectConverter
    // Base method: System.Void ExpandableObjectConverter::.ctor()
    // Base method: System.Void TypeConverter::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RelationshipConverter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::RelationshipConverter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RelationshipConverter*, creationType>()));
    }
    // public override System.Boolean CanConvertTo(System.ComponentModel.ITypeDescriptorContext context, System.Type destinationType)
    // Offset: 0x1219D74
    // Implemented from: System.ComponentModel.TypeConverter
    // Base method: System.Boolean TypeConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext context, System.Type destinationType)
    bool CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType);
    // public override System.Object ConvertTo(System.ComponentModel.ITypeDescriptorContext context, System.Globalization.CultureInfo culture, System.Object value, System.Type destinationType)
    // Offset: 0x1219E3C
    // Implemented from: System.ComponentModel.TypeConverter
    // Base method: System.Object TypeConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext context, System.Globalization.CultureInfo culture, System.Object value, System.Type destinationType)
    ::Il2CppObject* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::Il2CppObject* value, ::System::Type* destinationType);
  }; // System.Data.RelationshipConverter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::RelationshipConverter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::RelationshipConverter::CanConvertTo
// Il2CppName: CanConvertTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::RelationshipConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*)>(&System::Data::RelationshipConverter::CanConvertTo)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::RelationshipConverter*), "CanConvertTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, destinationType});
  }
};
// Writing MetadataGetter for method: System::Data::RelationshipConverter::ConvertTo
// Il2CppName: ConvertTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::RelationshipConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::Il2CppObject*, ::System::Type*)>(&System::Data::RelationshipConverter::ConvertTo)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::RelationshipConverter*), "ConvertTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, culture, value, destinationType});
  }
};
