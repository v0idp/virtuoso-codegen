// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: ISerializationBinder
  class ISerializationBinder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Serialization::ISerializationBinder);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::ISerializationBinder*, "Newtonsoft.Json.Serialization", "ISerializationBinder");
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Serialization.ISerializationBinder
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableContextAttribute] Offset: 673520
  class ISerializationBinder {
    public:
    // public System.Type BindToType(System.String assemblyName, System.String typeName)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Type* BindToType(::StringW assemblyName, ::StringW typeName);
    // public System.Void BindToName(System.Type serializedType, out System.String assemblyName, out System.String typeName)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void BindToName(::System::Type* serializedType, ByRef<::StringW> assemblyName, ByRef<::StringW> typeName);
  }; // Newtonsoft.Json.Serialization.ISerializationBinder
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::ISerializationBinder::BindToType
// Il2CppName: BindToType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Newtonsoft::Json::Serialization::ISerializationBinder::*)(::StringW, ::StringW)>(&Newtonsoft::Json::Serialization::ISerializationBinder::BindToType)> {
  static const MethodInfo* get() {
    static auto* assemblyName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* typeName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::ISerializationBinder*), "BindToType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assemblyName, typeName});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::ISerializationBinder::BindToName
// Il2CppName: BindToName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::ISerializationBinder::*)(::System::Type*, ByRef<::StringW>, ByRef<::StringW>)>(&Newtonsoft::Json::Serialization::ISerializationBinder::BindToName)> {
  static const MethodInfo* get() {
    static auto* serializedType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* assemblyName = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* typeName = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::ISerializationBinder*), "BindToName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializedType, assemblyName, typeName});
  }
};
