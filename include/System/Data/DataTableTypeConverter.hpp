// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.ReferenceConverter
#include "System/ComponentModel/ReferenceConverter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Data
namespace System::Data {
  // Forward declaring type: DataTableTypeConverter
  class DataTableTypeConverter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::DataTableTypeConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataTableTypeConverter*, "System.Data", "DataTableTypeConverter");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.DataTableTypeConverter
  // [TokenAttribute] Offset: FFFFFFFF
  class DataTableTypeConverter : public ::System::ComponentModel::ReferenceConverter {
    public:
    // public System.Void .ctor()
    // Offset: 0x12E30E8
    // Implemented from: System.ComponentModel.TypeConverter
    // Base method: System.Void TypeConverter::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DataTableTypeConverter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::DataTableTypeConverter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DataTableTypeConverter*, creationType>()));
    }
  }; // System.Data.DataTableTypeConverter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::DataTableTypeConverter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
