// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json::Utilities
namespace Newtonsoft::Json::Utilities {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: Newtonsoft::Json::Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: ObjectConstructor`1<T>
  template<typename T>
  class ObjectConstructor_1;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Forward declaring type: ImmutableCollectionsUtils
  class ImmutableCollectionsUtils;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils*, "Newtonsoft.Json.Utilities", "ImmutableCollectionsUtils");
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Utilities.ImmutableCollectionsUtils
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableAttribute] Offset: 672D28
  // [NullableContextAttribute] Offset: 672D28
  class ImmutableCollectionsUtils : public ::Il2CppObject {
    public:
    // Nested type: ::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils::ImmutableCollectionTypeInfo
    class ImmutableCollectionTypeInfo;
    // Nested type: ::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils::$$c__DisplayClass24_0
    class $$c__DisplayClass24_0;
    // Nested type: ::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils::$$c
    class $$c;
    // Nested type: ::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils::$$c__DisplayClass25_0
    class $$c__DisplayClass25_0;
    // Get static field: static private readonly System.Collections.Generic.IList`1<Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/Newtonsoft.Json.Utilities.ImmutableCollectionTypeInfo> ArrayContractImmutableCollectionDefinitions
    static ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils::ImmutableCollectionTypeInfo*>* _get_ArrayContractImmutableCollectionDefinitions();
    // Set static field: static private readonly System.Collections.Generic.IList`1<Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/Newtonsoft.Json.Utilities.ImmutableCollectionTypeInfo> ArrayContractImmutableCollectionDefinitions
    static void _set_ArrayContractImmutableCollectionDefinitions(::System::Collections::Generic::IList_1<::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils::ImmutableCollectionTypeInfo*>* value);
    // Get static field: static private readonly System.Collections.Generic.IList`1<Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/Newtonsoft.Json.Utilities.ImmutableCollectionTypeInfo> DictionaryContractImmutableCollectionDefinitions
    static ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils::ImmutableCollectionTypeInfo*>* _get_DictionaryContractImmutableCollectionDefinitions();
    // Set static field: static private readonly System.Collections.Generic.IList`1<Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/Newtonsoft.Json.Utilities.ImmutableCollectionTypeInfo> DictionaryContractImmutableCollectionDefinitions
    static void _set_DictionaryContractImmutableCollectionDefinitions(::System::Collections::Generic::IList_1<::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils::ImmutableCollectionTypeInfo*>* value);
    // static private System.Void .cctor()
    // Offset: 0xED9AC0
    static void _cctor();
    // static System.Boolean TryBuildImmutableForArrayContract(System.Type underlyingType, System.Type collectionItemType, out System.Type createdType, out Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> parameterizedCreator)
    // Offset: 0xED912C
    static bool TryBuildImmutableForArrayContract(::System::Type* underlyingType, ::System::Type* collectionItemType, ByRef<::System::Type*> createdType, ByRef<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>*> parameterizedCreator);
    // static System.Boolean TryBuildImmutableForDictionaryContract(System.Type underlyingType, System.Type keyItemType, System.Type valueItemType, out System.Type createdType, out Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> parameterizedCreator)
    // Offset: 0xED95C8
    static bool TryBuildImmutableForDictionaryContract(::System::Type* underlyingType, ::System::Type* keyItemType, ::System::Type* valueItemType, ByRef<::System::Type*> createdType, ByRef<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>*> parameterizedCreator);
  }; // Newtonsoft.Json.Utilities.ImmutableCollectionsUtils
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ImmutableCollectionsUtils::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Newtonsoft::Json::Utilities::ImmutableCollectionsUtils::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ImmutableCollectionsUtils*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ImmutableCollectionsUtils::TryBuildImmutableForArrayContract
// Il2CppName: TryBuildImmutableForArrayContract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ::System::Type*, ByRef<::System::Type*>, ByRef<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>*>)>(&Newtonsoft::Json::Utilities::ImmutableCollectionsUtils::TryBuildImmutableForArrayContract)> {
  static const MethodInfo* get() {
    static auto* underlyingType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* collectionItemType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* createdType = &::il2cpp_utils::GetClassFromName("System", "Type")->this_arg;
    static auto* parameterizedCreator = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Serialization", "ObjectConstructor`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ImmutableCollectionsUtils*), "TryBuildImmutableForArrayContract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{underlyingType, collectionItemType, createdType, parameterizedCreator});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ImmutableCollectionsUtils::TryBuildImmutableForDictionaryContract
// Il2CppName: TryBuildImmutableForDictionaryContract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ::System::Type*, ::System::Type*, ByRef<::System::Type*>, ByRef<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>*>)>(&Newtonsoft::Json::Utilities::ImmutableCollectionsUtils::TryBuildImmutableForDictionaryContract)> {
  static const MethodInfo* get() {
    static auto* underlyingType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* keyItemType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* valueItemType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* createdType = &::il2cpp_utils::GetClassFromName("System", "Type")->this_arg;
    static auto* parameterizedCreator = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Serialization", "ObjectConstructor`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ImmutableCollectionsUtils*), "TryBuildImmutableForDictionaryContract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{underlyingType, keyItemType, valueItemType, createdType, parameterizedCreator});
  }
};
