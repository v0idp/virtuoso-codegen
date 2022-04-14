// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Utilities.ReflectionUtils
#include "Newtonsoft/Json/Utilities/ReflectionUtils.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: ConstructorInfo
  class ConstructorInfo;
  // Forward declaring type: MemberInfo
  class MemberInfo;
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
  // Forward declaring type: FieldInfo
  class FieldInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Utilities::ReflectionUtils::$$c);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::ReflectionUtils::$$c*, "Newtonsoft.Json.Utilities", "ReflectionUtils/<>c");
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Utilities.ReflectionUtils/Newtonsoft.Json.Utilities.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ReflectionUtils::$$c : public ::Il2CppObject {
    public:
    // [NullableAttribute] Offset: 0x675CB4
    // Get static field: static public readonly Newtonsoft.Json.Utilities.ReflectionUtils/Newtonsoft.Json.Utilities.<>c <>9
    static ::Newtonsoft::Json::Utilities::ReflectionUtils::$$c* _get_$$9();
    // Set static field: static public readonly Newtonsoft.Json.Utilities.ReflectionUtils/Newtonsoft.Json.Utilities.<>c <>9
    static void _set_$$9(::Newtonsoft::Json::Utilities::ReflectionUtils::$$c* value);
    // [NullableAttribute] Offset: 0x675CC8
    // Get static field: static public System.Func`2<System.Reflection.ConstructorInfo,System.Boolean> <>9__11_0
    static ::System::Func_2<::System::Reflection::ConstructorInfo*, bool>* _get_$$9__11_0();
    // Set static field: static public System.Func`2<System.Reflection.ConstructorInfo,System.Boolean> <>9__11_0
    static void _set_$$9__11_0(::System::Func_2<::System::Reflection::ConstructorInfo*, bool>* value);
    // [NullableAttribute] Offset: 0x675CDC
    // Get static field: static public System.Func`2<System.Reflection.MemberInfo,System.String> <>9__31_0
    static ::System::Func_2<::System::Reflection::MemberInfo*, ::StringW>* _get_$$9__31_0();
    // Set static field: static public System.Func`2<System.Reflection.MemberInfo,System.String> <>9__31_0
    static void _set_$$9__31_0(::System::Func_2<::System::Reflection::MemberInfo*, ::StringW>* value);
    // [NullableAttribute] Offset: 0x675CF0
    // Get static field: static public System.Func`2<System.Reflection.ParameterInfo,System.Type> <>9__39_0
    static ::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>* _get_$$9__39_0();
    // Set static field: static public System.Func`2<System.Reflection.ParameterInfo,System.Type> <>9__39_0
    static void _set_$$9__39_0(::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>* value);
    // [NullableAttribute] Offset: 0x675D04
    // Get static field: static public System.Func`2<System.Reflection.FieldInfo,System.Boolean> <>9__41_0
    static ::System::Func_2<::System::Reflection::FieldInfo*, bool>* _get_$$9__41_0();
    // Set static field: static public System.Func`2<System.Reflection.FieldInfo,System.Boolean> <>9__41_0
    static void _set_$$9__41_0(::System::Func_2<::System::Reflection::FieldInfo*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x15A00A4
    static void _cctor();
    // System.Boolean <GetDefaultConstructor>b__11_0(System.Reflection.ConstructorInfo c)
    // Offset: 0x15A010C
    bool $GetDefaultConstructor$b__11_0(::System::Reflection::ConstructorInfo* c);
    // System.String <GetFieldsAndProperties>b__31_0(System.Reflection.MemberInfo m)
    // Offset: 0x15A017C
    ::StringW $GetFieldsAndProperties$b__31_0(::System::Reflection::MemberInfo* m);
    // System.Type <GetMemberInfoFromType>b__39_0(System.Reflection.ParameterInfo p)
    // Offset: 0x15A019C
    ::System::Type* $GetMemberInfoFromType$b__39_0(::System::Reflection::ParameterInfo* p);
    // System.Boolean <GetChildPrivateFields>b__41_0(System.Reflection.FieldInfo f)
    // Offset: 0x15A01BC
    bool $GetChildPrivateFields$b__41_0(::System::Reflection::FieldInfo* f);
    // public System.Void .ctor()
    // Offset: 0x15A0104
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionUtils::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::ReflectionUtils::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionUtils::$$c*, creationType>()));
    }
  }; // Newtonsoft.Json.Utilities.ReflectionUtils/Newtonsoft.Json.Utilities.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ReflectionUtils::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Newtonsoft::Json::Utilities::ReflectionUtils::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ReflectionUtils::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ReflectionUtils::$$c::$GetDefaultConstructor$b__11_0
// Il2CppName: <GetDefaultConstructor>b__11_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Utilities::ReflectionUtils::$$c::*)(::System::Reflection::ConstructorInfo*)>(&Newtonsoft::Json::Utilities::ReflectionUtils::$$c::$GetDefaultConstructor$b__11_0)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System.Reflection", "ConstructorInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ReflectionUtils::$$c*), "<GetDefaultConstructor>b__11_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ReflectionUtils::$$c::$GetFieldsAndProperties$b__31_0
// Il2CppName: <GetFieldsAndProperties>b__31_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Utilities::ReflectionUtils::$$c::*)(::System::Reflection::MemberInfo*)>(&Newtonsoft::Json::Utilities::ReflectionUtils::$$c::$GetFieldsAndProperties$b__31_0)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("System.Reflection", "MemberInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ReflectionUtils::$$c*), "<GetFieldsAndProperties>b__31_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ReflectionUtils::$$c::$GetMemberInfoFromType$b__39_0
// Il2CppName: <GetMemberInfoFromType>b__39_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Newtonsoft::Json::Utilities::ReflectionUtils::$$c::*)(::System::Reflection::ParameterInfo*)>(&Newtonsoft::Json::Utilities::ReflectionUtils::$$c::$GetMemberInfoFromType$b__39_0)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("System.Reflection", "ParameterInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ReflectionUtils::$$c*), "<GetMemberInfoFromType>b__39_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ReflectionUtils::$$c::$GetChildPrivateFields$b__41_0
// Il2CppName: <GetChildPrivateFields>b__41_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Utilities::ReflectionUtils::$$c::*)(::System::Reflection::FieldInfo*)>(&Newtonsoft::Json::Utilities::ReflectionUtils::$$c::$GetChildPrivateFields$b__41_0)> {
  static const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System.Reflection", "FieldInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ReflectionUtils::$$c*), "<GetChildPrivateFields>b__41_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ReflectionUtils::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
