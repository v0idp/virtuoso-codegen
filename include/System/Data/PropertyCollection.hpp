// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Hashtable
#include "System/Collections/Hashtable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Data
namespace System::Data {
  // Forward declaring type: PropertyCollection
  class PropertyCollection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::PropertyCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::PropertyCollection*, "System.Data", "PropertyCollection");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.PropertyCollection
  // [TokenAttribute] Offset: FFFFFFFF
  class PropertyCollection : public ::System::Collections::Hashtable {
    public:
    // public System.Void .ctor()
    // Offset: 0x13C23EC
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Void Hashtable::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PropertyCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::PropertyCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PropertyCollection*, creationType>()));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x13C23F4
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Void Hashtable::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PropertyCollection* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::PropertyCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PropertyCollection*, creationType>(info, context)));
    }
    // public override System.Object Clone()
    // Offset: 0x13C23FC
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Object Hashtable::Clone()
    ::Il2CppObject* Clone();
  }; // System.Data.PropertyCollection
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::PropertyCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::PropertyCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::PropertyCollection::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::PropertyCollection::*)()>(&System::Data::PropertyCollection::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::PropertyCollection*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
