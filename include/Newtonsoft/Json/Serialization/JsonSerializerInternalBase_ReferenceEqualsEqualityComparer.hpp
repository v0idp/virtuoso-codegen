// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Serialization.JsonSerializerInternalBase
#include "Newtonsoft/Json/Serialization/JsonSerializerInternalBase.hpp"
// Including type: System.Collections.Generic.IEqualityComparer`1
#include "System/Collections/Generic/IEqualityComparer_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonSerializerInternalBase::ReferenceEqualsEqualityComparer);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonSerializerInternalBase::ReferenceEqualsEqualityComparer*, "Newtonsoft.Json.Serialization", "JsonSerializerInternalBase/ReferenceEqualsEqualityComparer");
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Serialization.JsonSerializerInternalBase/Newtonsoft.Json.Serialization.ReferenceEqualsEqualityComparer
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableAttribute] Offset: 673880
  class JsonSerializerInternalBase::ReferenceEqualsEqualityComparer : public ::Il2CppObject/*, public ::System::Collections::Generic::IEqualityComparer_1<::Il2CppObject*>*/ {
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEqualityComparer_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEqualityComparer_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEqualityComparer_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor()
    // Offset: 0x159F768
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonSerializerInternalBase::ReferenceEqualsEqualityComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Serialization::JsonSerializerInternalBase::ReferenceEqualsEqualityComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonSerializerInternalBase::ReferenceEqualsEqualityComparer*, creationType>()));
    }
    // private System.Boolean System.Collections.Generic.IEqualityComparer<System.Object>.Equals(System.Object x, System.Object y)
    // Offset: 0x159F750
    bool System_Collections_Generic_IEqualityComparer$System_Object$_Equals(::Il2CppObject* x, ::Il2CppObject* y);
    // private System.Int32 System.Collections.Generic.IEqualityComparer<System.Object>.GetHashCode(System.Object obj)
    // Offset: 0x159F75C
    int System_Collections_Generic_IEqualityComparer$System_Object$_GetHashCode(::Il2CppObject* obj);
  }; // Newtonsoft.Json.Serialization.JsonSerializerInternalBase/Newtonsoft.Json.Serialization.ReferenceEqualsEqualityComparer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonSerializerInternalBase::ReferenceEqualsEqualityComparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonSerializerInternalBase::ReferenceEqualsEqualityComparer::System_Collections_Generic_IEqualityComparer$System_Object$_Equals
// Il2CppName: System.Collections.Generic.IEqualityComparer<System.Object>.Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Serialization::JsonSerializerInternalBase::ReferenceEqualsEqualityComparer::*)(::Il2CppObject*, ::Il2CppObject*)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalBase::ReferenceEqualsEqualityComparer::System_Collections_Generic_IEqualityComparer$System_Object$_Equals)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonSerializerInternalBase::ReferenceEqualsEqualityComparer*), "System.Collections.Generic.IEqualityComparer<System.Object>.Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::JsonSerializerInternalBase::ReferenceEqualsEqualityComparer::System_Collections_Generic_IEqualityComparer$System_Object$_GetHashCode
// Il2CppName: System.Collections.Generic.IEqualityComparer<System.Object>.GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Newtonsoft::Json::Serialization::JsonSerializerInternalBase::ReferenceEqualsEqualityComparer::*)(::Il2CppObject*)>(&Newtonsoft::Json::Serialization::JsonSerializerInternalBase::ReferenceEqualsEqualityComparer::System_Collections_Generic_IEqualityComparer$System_Object$_GetHashCode)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::JsonSerializerInternalBase::ReferenceEqualsEqualityComparer*), "System.Collections.Generic.IEqualityComparer<System.Object>.GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
