// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Bson.BsonToken
#include "Newtonsoft/Json/Bson/BsonToken.hpp"
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
  // Forward declaring type: BsonType
  struct BsonType;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Bson
namespace Newtonsoft::Json::Bson {
  // Forward declaring type: BsonArray
  class BsonArray;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Bson::BsonArray);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonArray*, "Newtonsoft.Json.Bson", "BsonArray");
// Type namespace: Newtonsoft.Json.Bson
namespace Newtonsoft::Json::Bson {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Bson.BsonArray
  // [TokenAttribute] Offset: FFFFFFFF
  class BsonArray : public ::Newtonsoft::Json::Bson::BsonToken {
    public:
    public:
    // private readonly System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonToken> _children
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonToken*>* children;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonToken*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::Newtonsoft::Json::Bson::BsonToken*
    constexpr operator ::Newtonsoft::Json::Bson::BsonToken*() const noexcept = delete;
    // Get instance field reference: private readonly System.Collections.Generic.List`1<Newtonsoft.Json.Bson.BsonToken> _children
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonToken*>*& dyn__children();
    // public System.Void Add(Newtonsoft.Json.Bson.BsonToken token)
    // Offset: 0xDB7BC8
    void Add(::Newtonsoft::Json::Bson::BsonToken* token);
    // public override Newtonsoft.Json.Bson.BsonType get_Type()
    // Offset: 0xDB7C38
    // Implemented from: Newtonsoft.Json.Bson.BsonToken
    // Base method: Newtonsoft.Json.Bson.BsonType BsonToken::get_Type()
    ::Newtonsoft::Json::Bson::BsonType get_Type();
  }; // Newtonsoft.Json.Bson.BsonArray
  #pragma pack(pop)
  static check_size<sizeof(BsonArray), 24 + sizeof(::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonToken*>*)> __Newtonsoft_Json_Bson_BsonArraySizeCheck;
  static_assert(sizeof(BsonArray) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonArray::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Bson::BsonArray::*)(::Newtonsoft::Json::Bson::BsonToken*)>(&Newtonsoft::Json::Bson::BsonArray::Add)> {
  static const MethodInfo* get() {
    static auto* token = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Bson", "BsonToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonArray*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{token});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Bson::BsonArray::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Bson::BsonType (Newtonsoft::Json::Bson::BsonArray::*)()>(&Newtonsoft::Json::Bson::BsonArray::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Bson::BsonArray*), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
