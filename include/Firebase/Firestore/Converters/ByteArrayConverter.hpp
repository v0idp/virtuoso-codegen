// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Firebase.Firestore.Converters.ConverterBase
#include "Firebase/Firestore/Converters/ConverterBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Firebase::Firestore
namespace Firebase::Firestore {
  // Forward declaring type: FieldValueProxy
  class FieldValueProxy;
  // Forward declaring type: SerializationContext
  class SerializationContext;
  // Forward declaring type: DeserializationContext
  class DeserializationContext;
}
// Completed forward declares
// Type namespace: Firebase.Firestore.Converters
namespace Firebase::Firestore::Converters {
  // Forward declaring type: ByteArrayConverter
  class ByteArrayConverter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Firestore::Converters::ByteArrayConverter);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Converters::ByteArrayConverter*, "Firebase.Firestore.Converters", "ByteArrayConverter");
// Type namespace: Firebase.Firestore.Converters
namespace Firebase::Firestore::Converters {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Firestore.Converters.ByteArrayConverter
  // [TokenAttribute] Offset: FFFFFFFF
  class ByteArrayConverter : public ::Firebase::Firestore::Converters::ConverterBase {
    public:
    // System.Void .ctor()
    // Offset: 0xD4B260
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ByteArrayConverter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::Converters::ByteArrayConverter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ByteArrayConverter*, creationType>()));
    }
    // public override Firebase.Firestore.FieldValueProxy Serialize(Firebase.Firestore.SerializationContext context, System.Object value)
    // Offset: 0xD4B2F4
    // Implemented from: Firebase.Firestore.Converters.ConverterBase
    // Base method: Firebase.Firestore.FieldValueProxy ConverterBase::Serialize(Firebase.Firestore.SerializationContext context, System.Object value)
    ::Firebase::Firestore::FieldValueProxy* Serialize(::Firebase::Firestore::SerializationContext* context, ::Il2CppObject* value);
    // protected override System.Object DeserializeBytes(Firebase.Firestore.DeserializationContext context, System.Byte[] value)
    // Offset: 0xD4B360
    // Implemented from: Firebase.Firestore.Converters.ConverterBase
    // Base method: System.Object ConverterBase::DeserializeBytes(Firebase.Firestore.DeserializationContext context, System.Byte[] value)
    ::Il2CppObject* DeserializeBytes(::Firebase::Firestore::DeserializationContext* context, ::ArrayW<uint8_t> value);
  }; // Firebase.Firestore.Converters.ByteArrayConverter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Firestore::Converters::ByteArrayConverter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::Firestore::Converters::ByteArrayConverter::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::FieldValueProxy* (Firebase::Firestore::Converters::ByteArrayConverter::*)(::Firebase::Firestore::SerializationContext*, ::Il2CppObject*)>(&Firebase::Firestore::Converters::ByteArrayConverter::Serialize)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Firebase.Firestore", "SerializationContext")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::Converters::ByteArrayConverter*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, value});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::Converters::ByteArrayConverter::DeserializeBytes
// Il2CppName: DeserializeBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Firebase::Firestore::Converters::ByteArrayConverter::*)(::Firebase::Firestore::DeserializationContext*, ::ArrayW<uint8_t>)>(&Firebase::Firestore::Converters::ByteArrayConverter::DeserializeBytes)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Firebase.Firestore", "DeserializationContext")->byval_arg;
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::Converters::ByteArrayConverter*), "DeserializeBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, value});
  }
};
