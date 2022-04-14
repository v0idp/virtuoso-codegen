// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json::Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: JsonContract
  class JsonContract;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: IContractResolver
  class IContractResolver;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Serialization::IContractResolver);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::IContractResolver*, "Newtonsoft.Json.Serialization", "IContractResolver");
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Serialization.IContractResolver
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableContextAttribute] Offset: 6734F8
  class IContractResolver {
    public:
    // public Newtonsoft.Json.Serialization.JsonContract ResolveContract(System.Type type)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Newtonsoft::Json::Serialization::JsonContract* ResolveContract(::System::Type* type);
  }; // Newtonsoft.Json.Serialization.IContractResolver
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::IContractResolver::ResolveContract
// Il2CppName: ResolveContract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::JsonContract* (Newtonsoft::Json::Serialization::IContractResolver::*)(::System::Type*)>(&Newtonsoft::Json::Serialization::IContractResolver::ResolveContract)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::IContractResolver*), "ResolveContract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
