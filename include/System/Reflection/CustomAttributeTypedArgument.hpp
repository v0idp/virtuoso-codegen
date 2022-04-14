// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: CustomAttributeTypedArgument
  struct CustomAttributeTypedArgument;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::CustomAttributeTypedArgument, "System.Reflection", "CustomAttributeTypedArgument");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Reflection.CustomAttributeTypedArgument
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 682EEC
  struct CustomAttributeTypedArgument/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Type argumentType
    // Size: 0x8
    // Offset: 0x0
    ::System::Type* argumentType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private System.Object value
    // Size: 0x8
    // Offset: 0x8
    ::Il2CppObject* value;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Creating value type constructor for type: CustomAttributeTypedArgument
    constexpr CustomAttributeTypedArgument(::System::Type* argumentType_ = {}, ::Il2CppObject* value_ = {}) noexcept : argumentType{argumentType_}, value{value_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.Type argumentType
    [[deprecated]] ::System::Type*& dyn_argumentType();
    // Get instance field reference: private System.Object value
    [[deprecated]] ::Il2CppObject*& dyn_value();
    // public System.Void .ctor(System.Type argumentType, System.Object value)
    // Offset: 0x1403104
    // ABORTED: conflicts with another method.  CustomAttributeTypedArgument(::System::Type* argumentType, ::Il2CppObject* value);
    // public override System.String ToString()
    // Offset: 0x14020F8
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1402A7C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1402F5C
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // System.Reflection.CustomAttributeTypedArgument
  #pragma pack(pop)
  static check_size<sizeof(CustomAttributeTypedArgument), 8 + sizeof(::Il2CppObject*)> __System_Reflection_CustomAttributeTypedArgumentSizeCheck;
  static_assert(sizeof(CustomAttributeTypedArgument) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::CustomAttributeTypedArgument::CustomAttributeTypedArgument
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::CustomAttributeTypedArgument::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Reflection::CustomAttributeTypedArgument::*)()>(&System::Reflection::CustomAttributeTypedArgument::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::CustomAttributeTypedArgument), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::CustomAttributeTypedArgument::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::CustomAttributeTypedArgument::*)(::Il2CppObject*)>(&System::Reflection::CustomAttributeTypedArgument::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::CustomAttributeTypedArgument), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Reflection::CustomAttributeTypedArgument::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Reflection::CustomAttributeTypedArgument::*)()>(&System::Reflection::CustomAttributeTypedArgument::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::CustomAttributeTypedArgument), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
