// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Serialization.DefaultContractResolver
#include "Newtonsoft/Json/Serialization/DefaultContractResolver.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json::Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: ObjectConstructor`1<T>
  template<typename T>
  class ObjectConstructor_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Serialization::DefaultContractResolver::$$c__DisplayClass45_2);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::DefaultContractResolver::$$c__DisplayClass45_2*, "Newtonsoft.Json.Serialization", "DefaultContractResolver/<>c__DisplayClass45_2");
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Serialization.DefaultContractResolver/Newtonsoft.Json.Serialization.<>c__DisplayClass45_2
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class DefaultContractResolver::$$c__DisplayClass45_2 : public ::Il2CppObject {
    public:
    public:
    // [NullableAttribute] Offset: 0x6762E0
    // public Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> createEnumerableWrapper
    // Size: 0x8
    // Offset: 0x10
    ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>* createEnumerableWrapper;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>*) == 0x8);
    // [NullableAttribute] Offset: 0x676348
    // public Newtonsoft.Json.Serialization.DefaultContractResolver/Newtonsoft.Json.Serialization.<>c__DisplayClass45_0 CS$<>8__locals2
    // Size: 0x8
    // Offset: 0x18
    ::Newtonsoft::Json::Serialization::DefaultContractResolver::$$c__DisplayClass45_0* CS$$$8__locals2;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Serialization::DefaultContractResolver::$$c__DisplayClass45_0*) == 0x8);
    public:
    // Get instance field reference: public Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> createEnumerableWrapper
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>*& dyn_createEnumerableWrapper();
    // Get instance field reference: public Newtonsoft.Json.Serialization.DefaultContractResolver/Newtonsoft.Json.Serialization.<>c__DisplayClass45_0 CS$<>8__locals2
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Serialization::DefaultContractResolver::$$c__DisplayClass45_0*& dyn_CS$$$8__locals2();
    // public System.Void .ctor()
    // Offset: 0x159D55C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultContractResolver::$$c__DisplayClass45_2* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Serialization::DefaultContractResolver::$$c__DisplayClass45_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultContractResolver::$$c__DisplayClass45_2*, creationType>()));
    }
    // System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>> <SetExtensionDataDelegates>b__1(System.Object o)
    // Offset: 0x159D564
    ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::Il2CppObject*, ::Il2CppObject*>>* $SetExtensionDataDelegates$b__1(::Il2CppObject* o);
  }; // Newtonsoft.Json.Serialization.DefaultContractResolver/Newtonsoft.Json.Serialization.<>c__DisplayClass45_2
  #pragma pack(pop)
  static check_size<sizeof(DefaultContractResolver::$$c__DisplayClass45_2), 24 + sizeof(::Newtonsoft::Json::Serialization::DefaultContractResolver::$$c__DisplayClass45_0*)> __Newtonsoft_Json_Serialization_DefaultContractResolver_$$c__DisplayClass45_2SizeCheck;
  static_assert(sizeof(DefaultContractResolver::$$c__DisplayClass45_2) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::DefaultContractResolver::$$c__DisplayClass45_2::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::DefaultContractResolver::$$c__DisplayClass45_2::$SetExtensionDataDelegates$b__1
// Il2CppName: <SetExtensionDataDelegates>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::Il2CppObject*, ::Il2CppObject*>>* (Newtonsoft::Json::Serialization::DefaultContractResolver::$$c__DisplayClass45_2::*)(::Il2CppObject*)>(&Newtonsoft::Json::Serialization::DefaultContractResolver::$$c__DisplayClass45_2::$SetExtensionDataDelegates$b__1)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::DefaultContractResolver::$$c__DisplayClass45_2*), "<SetExtensionDataDelegates>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
