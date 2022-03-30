// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Firebase::Firestore
namespace Firebase::Firestore {
  // Forward declaring type: FieldValueProxy
  class FieldValueProxy;
  // Forward declaring type: SerializationContext
  class SerializationContext;
}
// Completed forward declares
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Forward declaring type: ValueSerializer
  class ValueSerializer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Firestore::ValueSerializer);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::ValueSerializer*, "Firebase.Firestore", "ValueSerializer");
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Firestore.ValueSerializer
  // [TokenAttribute] Offset: FFFFFFFF
  class ValueSerializer : public ::Il2CppObject {
    public:
    // static Firebase.Firestore.FieldValueProxy Serialize(Firebase.Firestore.SerializationContext context, System.Object value)
    // Offset: 0xC254AC
    static ::Firebase::Firestore::FieldValueProxy* Serialize(::Firebase::Firestore::SerializationContext* context, ::Il2CppObject* value);
  }; // Firebase.Firestore.ValueSerializer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Firestore::ValueSerializer::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::FieldValueProxy* (*)(::Firebase::Firestore::SerializationContext*, ::Il2CppObject*)>(&Firebase::Firestore::ValueSerializer::Serialize)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Firebase.Firestore", "SerializationContext")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::ValueSerializer*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, value});
  }
};
