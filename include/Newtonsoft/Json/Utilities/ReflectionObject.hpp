// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json::Utilities
namespace Newtonsoft::Json::Utilities {
  // Forward declaring type: ReflectionMember
  class ReflectionMember;
}
// Forward declaring namespace: Newtonsoft::Json::Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: ObjectConstructor`1<T>
  template<typename T>
  class ObjectConstructor_1;
}
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
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodBase
  class MethodBase;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Forward declaring type: ReflectionObject
  class ReflectionObject;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Utilities::ReflectionObject);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::ReflectionObject*, "Newtonsoft.Json.Utilities", "ReflectionObject");
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Utilities.ReflectionObject
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableAttribute] Offset: 672F9C
  // [NullableContextAttribute] Offset: 672F9C
  class ReflectionObject : public ::Il2CppObject {
    public:
    // Nested type: ::Newtonsoft::Json::Utilities::ReflectionObject::$$c__DisplayClass11_0
    class $$c__DisplayClass11_0;
    // Nested type: ::Newtonsoft::Json::Utilities::ReflectionObject::$$c__DisplayClass11_1
    class $$c__DisplayClass11_1;
    // Nested type: ::Newtonsoft::Json::Utilities::ReflectionObject::$$c__DisplayClass11_2
    class $$c__DisplayClass11_2;
    public:
    // [NullableAttribute] Offset: 0x675AE4
    // private readonly Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> <Creator>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>* Creator;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>*) == 0x8);
    // private readonly System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Utilities.ReflectionMember> <Members>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Utilities::ReflectionMember*>* Members;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Utilities::ReflectionMember*>*) == 0x8);
    public:
    // Get instance field reference: private readonly Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> <Creator>k__BackingField
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>*& dyn_$Creator$k__BackingField();
    // Get instance field reference: private readonly System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Utilities.ReflectionMember> <Members>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Utilities::ReflectionMember*>*& dyn_$Members$k__BackingField();
    // public Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> get_Creator()
    // Offset: 0x1348B7C
    ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>* get_Creator();
    // public System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Utilities.ReflectionMember> get_Members()
    // Offset: 0x1348B84
    ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Utilities::ReflectionMember*>* get_Members();
    // private System.Void .ctor(Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> creator)
    // Offset: 0x1348B8C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionObject* New_ctor(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>* creator) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::ReflectionObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionObject*, creationType>(creator)));
    }
    // public System.Object GetValue(System.Object target, System.String member)
    // Offset: 0x1341890
    ::Il2CppObject* GetValue(::Il2CppObject* target, ::StringW member);
    // public System.Void SetValue(System.Object target, System.String member, System.Object value)
    // Offset: 0x1348C14
    void SetValue(::Il2CppObject* target, ::StringW member, ::Il2CppObject* value);
    // public System.Type GetType(System.String member)
    // Offset: 0x1347038
    ::System::Type* GetType(::StringW member);
    // static public Newtonsoft.Json.Utilities.ReflectionObject Create(System.Type t, params System.String[] memberNames)
    // Offset: 0x1341884
    static ::Newtonsoft::Json::Utilities::ReflectionObject* Create(::System::Type* t, ::ArrayW<::StringW> memberNames);
    // static public Newtonsoft.Json.Utilities.ReflectionObject Create(System.Type t, System.Reflection.MethodBase creator, params System.String[] memberNames)
    // Offset: 0x13464E4
    static ::Newtonsoft::Json::Utilities::ReflectionObject* Create(::System::Type* t, ::System::Reflection::MethodBase* creator, ::ArrayW<::StringW> memberNames);
  }; // Newtonsoft.Json.Utilities.ReflectionObject
  #pragma pack(pop)
  static check_size<sizeof(ReflectionObject), 24 + sizeof(::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Utilities::ReflectionMember*>*)> __Newtonsoft_Json_Utilities_ReflectionObjectSizeCheck;
  static_assert(sizeof(ReflectionObject) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ReflectionObject::get_Creator
// Il2CppName: get_Creator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::Il2CppObject*>* (Newtonsoft::Json::Utilities::ReflectionObject::*)()>(&Newtonsoft::Json::Utilities::ReflectionObject::get_Creator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ReflectionObject*), "get_Creator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ReflectionObject::get_Members
// Il2CppName: get_Members
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Utilities::ReflectionMember*>* (Newtonsoft::Json::Utilities::ReflectionObject::*)()>(&Newtonsoft::Json::Utilities::ReflectionObject::get_Members)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ReflectionObject*), "get_Members", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ReflectionObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ReflectionObject::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Newtonsoft::Json::Utilities::ReflectionObject::*)(::Il2CppObject*, ::StringW)>(&Newtonsoft::Json::Utilities::ReflectionObject::GetValue)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* member = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ReflectionObject*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, member});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ReflectionObject::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Utilities::ReflectionObject::*)(::Il2CppObject*, ::StringW, ::Il2CppObject*)>(&Newtonsoft::Json::Utilities::ReflectionObject::SetValue)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* member = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ReflectionObject*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, member, value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ReflectionObject::GetType
// Il2CppName: GetType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Newtonsoft::Json::Utilities::ReflectionObject::*)(::StringW)>(&Newtonsoft::Json::Utilities::ReflectionObject::GetType)> {
  static const MethodInfo* get() {
    static auto* member = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ReflectionObject*), "GetType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{member});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ReflectionObject::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Utilities::ReflectionObject* (*)(::System::Type*, ::ArrayW<::StringW>)>(&Newtonsoft::Json::Utilities::ReflectionObject::Create)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* memberNames = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ReflectionObject*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, memberNames});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ReflectionObject::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Utilities::ReflectionObject* (*)(::System::Type*, ::System::Reflection::MethodBase*, ::ArrayW<::StringW>)>(&Newtonsoft::Json::Utilities::ReflectionObject::Create)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* creator = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodBase")->byval_arg;
    static auto* memberNames = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ReflectionObject*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, creator, memberNames});
  }
};
