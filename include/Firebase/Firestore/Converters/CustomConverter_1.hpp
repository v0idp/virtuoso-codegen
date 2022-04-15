// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Firebase.Firestore.Converters.IFirestoreInternalConverter
#include "Firebase/Firestore/Converters/IFirestoreInternalConverter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Firebase::Firestore
namespace Firebase::Firestore {
  // Forward declaring type: FirestoreConverter`1<T>
  template<typename T>
  class FirestoreConverter_1;
  // Forward declaring type: DeserializationContext
  class DeserializationContext;
  // Forward declaring type: FieldValueProxy
  class FieldValueProxy;
  // Forward declaring type: SerializationContext
  class SerializationContext;
}
// Completed forward declares
// Type namespace: Firebase.Firestore.Converters
namespace Firebase::Firestore::Converters {
  // Forward declaring type: CustomConverter`1<T>
  template<typename T>
  class CustomConverter_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Firebase::Firestore::Converters::CustomConverter_1, "Firebase.Firestore.Converters", "CustomConverter`1");
// Type namespace: Firebase.Firestore.Converters
namespace Firebase::Firestore::Converters {
  // WARNING Size may be invalid!
  // Autogenerated type: Firebase.Firestore.Converters.CustomConverter`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class CustomConverter_1 : public ::Il2CppObject/*, public ::Firebase::Firestore::Converters::IFirestoreInternalConverter*/ {
    public:
    public:
    // private readonly Firebase.Firestore.FirestoreConverter`1<T> _wrappedConverter
    // Size: 0x8
    // Offset: 0x0
    ::Firebase::Firestore::FirestoreConverter_1<T>* wrappedConverter;
    // Field size check
    static_assert(sizeof(::Firebase::Firestore::FirestoreConverter_1<T>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Firebase::Firestore::Converters::IFirestoreInternalConverter
    operator ::Firebase::Firestore::Converters::IFirestoreInternalConverter() noexcept {
      return *reinterpret_cast<::Firebase::Firestore::Converters::IFirestoreInternalConverter*>(this);
    }
    // Creating conversion operator: operator ::Firebase::Firestore::FirestoreConverter_1<T>*
    constexpr operator ::Firebase::Firestore::FirestoreConverter_1<T>*() const noexcept {
      return wrappedConverter;
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly Firebase.Firestore.FirestoreConverter`1<T> _wrappedConverter
    [[deprecated("Use field access instead!")]] ::Firebase::Firestore::FirestoreConverter_1<T>*& dyn__wrappedConverter() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::Converters::CustomConverter_1::dyn__wrappedConverter");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_wrappedConverter"))->offset;
      return *reinterpret_cast<::Firebase::Firestore::FirestoreConverter_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // System.Void .ctor(Firebase.Firestore.FirestoreConverter`1<T> wrappedConverter)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomConverter_1<T>* New_ctor(::Firebase::Firestore::FirestoreConverter_1<T>* wrappedConverter) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::Converters::CustomConverter_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomConverter_1<T>*, creationType>(wrappedConverter)));
    }
    // public System.Object DeserializeValue(Firebase.Firestore.DeserializationContext context, Firebase.Firestore.FieldValueProxy value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* DeserializeValue(::Firebase::Firestore::DeserializationContext* context, ::Firebase::Firestore::FieldValueProxy* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::Converters::CustomConverter_1::DeserializeValue");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Firebase::Firestore::Converters::CustomConverter_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(this, ___internal__method, context, value);
    }
    // public Firebase.Firestore.FieldValueProxy Serialize(Firebase.Firestore.SerializationContext context, System.Object value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Firebase::Firestore::FieldValueProxy* Serialize(::Firebase::Firestore::SerializationContext* context, ::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::Converters::CustomConverter_1::Serialize");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Firebase::Firestore::Converters::CustomConverter_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::Firebase::Firestore::FieldValueProxy*, false>(this, ___internal__method, context, value);
    }
  }; // Firebase.Firestore.Converters.CustomConverter`1
  // Could not write size check! Type: Firebase.Firestore.Converters.CustomConverter`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
