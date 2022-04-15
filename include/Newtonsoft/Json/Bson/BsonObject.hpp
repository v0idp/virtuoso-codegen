// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Bson.BsonToken
#include "Newtonsoft/Json/Bson/BsonToken.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Newtonsoft::Json::Bson
namespace Newtonsoft::Json::Bson {
  // Forward declaring type: BsonProperty
  class BsonProperty;
  // Forward declaring type: BsonType
  struct BsonType;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Bson
namespace Newtonsoft::Json::Bson {
  // Forward declaring type: BsonObject
  class BsonObject;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Bson::BsonObject);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonObject*, "Newtonsoft.Json.Bson", "BsonObject");
// Type namespace: Newtonsoft.Json.Bson
namespace Newtonsoft::Json::Bson {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Bson.BsonObject
  // [TokenAttribute] Offset: FFFFFFFF
  class BsonObject : public ::Newtonsoft::Json::Bson::BsonToken {
    public:
    public:
    // private readonly System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonProperty> _children
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonProperty*>* children;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonProperty*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::Newtonsoft::Json::Bson::BsonToken*
    constexpr operator ::Newtonsoft::Json::Bson::BsonToken*() const noexcept = delete;
    // Get instance field reference: private readonly System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonProperty> _children
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonProperty*>*& dyn__children();
    // public System.Void Add(System.String name, Newtonsoft.Json.Bson.BsonToken token)
    // Offset: 0xDB7C40
    void Add(::StringW name, ::Newtonsoft::Json::Bson::BsonToken* token);
    // public override Newtonsoft.Json.Bson.BsonType get_Type()
    // Offset: 0xDB7D74
    // Implemented from: Newtonsoft.Json.Bson.BsonToken
    // Base method: Newtonsoft.Json.Bson.BsonType BsonToken::get_Type()
    ::Newtonsoft::Json::Bson::BsonType get_Type();
  }; // Newtonsoft.Json.Bson.BsonObject
  #pragma pack(pop)
  static check_size<sizeof(BsonObject), 24 + sizeof(::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonProperty*>*)> __Newtonsoft_Json_Bson_BsonObjectSizeCheck;
  static_assert(sizeof(BsonObject) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonObject::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Bson::BsonObject::*)(::StringW, ::Newtonsoft::Json::Bson::BsonToken*)>(&Newtonsoft::Json::Bson::BsonObject::Add)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* token = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Bson", "BsonToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonObject*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, token});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonObject::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Bson::BsonType (Newtonsoft::Json::Bson::BsonObject::*)()>(&Newtonsoft::Json::Bson::BsonObject::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonObject*), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
