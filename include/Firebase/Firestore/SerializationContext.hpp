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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IDictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: Firebase::Firestore::Converters
namespace Firebase::Firestore::Converters {
  // Forward declaring type: IFirestoreInternalConverter
  class IFirestoreInternalConverter;
}
// Forward declaring namespace: Firebase::Firestore
namespace Firebase::Firestore {
  // Forward declaring type: ConverterRegistry
  class ConverterRegistry;
}
// Completed forward declares
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Forward declaring type: SerializationContext
  class SerializationContext;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Firestore::SerializationContext);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::SerializationContext*, "Firebase.Firestore", "SerializationContext");
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Firestore.SerializationContext
  // [TokenAttribute] Offset: FFFFFFFF
  class SerializationContext : public ::Il2CppObject {
    public:
    public:
    // private readonly System.Collections.Generic.IDictionary`2<System.Type,Firebase.Firestore.Converters.IFirestoreInternalConverter> _customConverters
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::IDictionary_2<::System::Type*, ::Firebase::Firestore::Converters::IFirestoreInternalConverter*>* customConverters;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IDictionary_2<::System::Type*, ::Firebase::Firestore::Converters::IFirestoreInternalConverter*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::IDictionary_2<::System::Type*, ::Firebase::Firestore::Converters::IFirestoreInternalConverter*>*
    constexpr operator ::System::Collections::Generic::IDictionary_2<::System::Type*, ::Firebase::Firestore::Converters::IFirestoreInternalConverter*>*() const noexcept {
      return customConverters;
    }
    // [DebuggerBrowsableAttribute] Offset: 0x6D835C
    // Get static field: static private readonly Firebase.Firestore.SerializationContext <Default>k__BackingField
    static ::Firebase::Firestore::SerializationContext* _get_$Default$k__BackingField();
    // Set static field: static private readonly Firebase.Firestore.SerializationContext <Default>k__BackingField
    static void _set_$Default$k__BackingField(::Firebase::Firestore::SerializationContext* value);
    // Get instance field reference: private readonly System.Collections.Generic.IDictionary`2<System.Type,Firebase.Firestore.Converters.IFirestoreInternalConverter> _customConverters
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IDictionary_2<::System::Type*, ::Firebase::Firestore::Converters::IFirestoreInternalConverter*>*& dyn__customConverters();
    // static Firebase.Firestore.SerializationContext get_Default()
    // Offset: 0xD63A04
    static ::Firebase::Firestore::SerializationContext* get_Default();
    // System.Void .ctor(Firebase.Firestore.ConverterRegistry converterRegistry)
    // Offset: 0xD639BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SerializationContext* New_ctor(::Firebase::Firestore::ConverterRegistry* converterRegistry) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::SerializationContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SerializationContext*, creationType>(converterRegistry)));
    }
    // static private System.Void .cctor()
    // Offset: 0xD63A68
    static void _cctor();
    // Firebase.Firestore.Converters.IFirestoreInternalConverter GetConverter(System.Type targetType)
    // Offset: 0xD51890
    ::Firebase::Firestore::Converters::IFirestoreInternalConverter* GetConverter(::System::Type* targetType);
  }; // Firebase.Firestore.SerializationContext
  #pragma pack(pop)
  static check_size<sizeof(SerializationContext), 16 + sizeof(::System::Collections::Generic::IDictionary_2<::System::Type*, ::Firebase::Firestore::Converters::IFirestoreInternalConverter*>*)> __Firebase_Firestore_SerializationContextSizeCheck;
  static_assert(sizeof(SerializationContext) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Firestore::SerializationContext::get_Default
// Il2CppName: get_Default
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::SerializationContext* (*)()>(&Firebase::Firestore::SerializationContext::get_Default)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::SerializationContext*), "get_Default", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::SerializationContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::Firestore::SerializationContext::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Firebase::Firestore::SerializationContext::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::SerializationContext*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::SerializationContext::GetConverter
// Il2CppName: GetConverter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::Converters::IFirestoreInternalConverter* (Firebase::Firestore::SerializationContext::*)(::System::Type*)>(&Firebase::Firestore::SerializationContext::GetConverter)> {
  static const MethodInfo* get() {
    static auto* targetType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::SerializationContext*), "GetConverter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetType});
  }
};
