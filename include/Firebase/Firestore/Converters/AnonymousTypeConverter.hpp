// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Firebase.Firestore.Converters.MapConverterBase
#include "Firebase/Firestore/Converters/MapConverterBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: IDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IDictionary_2;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: PropertyInfo
  class PropertyInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: Firebase::Firestore
namespace Firebase::Firestore {
  // Forward declaring type: SerializationContext
  class SerializationContext;
  // Forward declaring type: FieldValueProxy
  class FieldValueProxy;
}
// Completed forward declares
// Type namespace: Firebase.Firestore.Converters
namespace Firebase::Firestore::Converters {
  // Forward declaring type: AnonymousTypeConverter
  class AnonymousTypeConverter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Firestore::Converters::AnonymousTypeConverter);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Converters::AnonymousTypeConverter*, "Firebase.Firestore.Converters", "AnonymousTypeConverter");
// Type namespace: Firebase.Firestore.Converters
namespace Firebase::Firestore::Converters {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Firestore.Converters.AnonymousTypeConverter
  // [TokenAttribute] Offset: FFFFFFFF
  class AnonymousTypeConverter : public ::Firebase::Firestore::Converters::MapConverterBase {
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
    // private readonly System.Collections.Generic.IList`1<System.Reflection.PropertyInfo> _properties
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::IList_1<::System::Reflection::PropertyInfo*>* properties;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IList_1<::System::Reflection::PropertyInfo*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::Type*
    constexpr operator ::System::Type*() const noexcept = delete;
    // Get instance field reference: private readonly System.Collections.Generic.IList`1<System.Reflection.PropertyInfo> _properties
    ::System::Collections::Generic::IList_1<::System::Reflection::PropertyInfo*>*& dyn__properties();
    // System.Void .ctor(System.Type targetType)
    // Offset: 0xC25058
    // Implemented from: Firebase.Firestore.Converters.MapConverterBase
    // Base method: System.Void MapConverterBase::.ctor(System.Type targetType)
    // Base method: System.Void ConverterBase::.ctor(System.Type targetType)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnonymousTypeConverter* New_ctor(::System::Type* targetType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::Converters::AnonymousTypeConverter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnonymousTypeConverter*, creationType>(targetType)));
    }
    // public override System.Void SerializeMap(Firebase.Firestore.SerializationContext context, System.Object value, System.Collections.Generic.IDictionary`2<System.String,Firebase.Firestore.FieldValueProxy> map)
    // Offset: 0xC25104
    // Implemented from: Firebase.Firestore.Converters.ConverterBase
    // Base method: System.Void ConverterBase::SerializeMap(Firebase.Firestore.SerializationContext context, System.Object value, System.Collections.Generic.IDictionary`2<System.String,Firebase.Firestore.FieldValueProxy> map)
    void SerializeMap(::Firebase::Firestore::SerializationContext* context, ::Il2CppObject* value, ::System::Collections::Generic::IDictionary_2<::StringW, ::Firebase::Firestore::FieldValueProxy*>* map);
  }; // Firebase.Firestore.Converters.AnonymousTypeConverter
  #pragma pack(pop)
  static check_size<sizeof(AnonymousTypeConverter), 24 + sizeof(::System::Collections::Generic::IList_1<::System::Reflection::PropertyInfo*>*)> __Firebase_Firestore_Converters_AnonymousTypeConverterSizeCheck;
  static_assert(sizeof(AnonymousTypeConverter) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Firestore::Converters::AnonymousTypeConverter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::Firestore::Converters::AnonymousTypeConverter::SerializeMap
// Il2CppName: SerializeMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Firestore::Converters::AnonymousTypeConverter::*)(::Firebase::Firestore::SerializationContext*, ::Il2CppObject*, ::System::Collections::Generic::IDictionary_2<::StringW, ::Firebase::Firestore::FieldValueProxy*>*)>(&Firebase::Firestore::Converters::AnonymousTypeConverter::SerializeMap)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Firebase.Firestore", "SerializationContext")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* map = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IDictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("Firebase.Firestore", "FieldValueProxy")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::Converters::AnonymousTypeConverter*), "SerializeMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, value, map});
  }
};