// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Mono.RuntimeStructs
#include "Mono/RuntimeStructs.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
  // Forward declaring type: RuntimeTypeHandle
  struct RuntimeTypeHandle;
}
// Completed forward declares
// Type namespace: Mono
namespace Mono {
  // Forward declaring type: RuntimeClassHandle
  struct RuntimeClassHandle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Mono::RuntimeClassHandle, "Mono", "RuntimeClassHandle");
// Type namespace: Mono
namespace Mono {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Mono.RuntimeClassHandle
  // [TokenAttribute] Offset: FFFFFFFF
  struct RuntimeClassHandle/*, public ::System::ValueType*/ {
    public:
    public:
    // private Mono.RuntimeStructs/Mono.MonoClass* value
    // Size: 0x8
    // Offset: 0x0
    ::Mono::RuntimeStructs::MonoClass* value;
    // Field size check
    static_assert(sizeof(::Mono::RuntimeStructs::MonoClass*) == 0x8);
    public:
    // Creating value type constructor for type: RuntimeClassHandle
    constexpr RuntimeClassHandle(::Mono::RuntimeStructs::MonoClass* value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::Mono::RuntimeStructs::MonoClass*
    constexpr operator ::Mono::RuntimeStructs::MonoClass*() const noexcept {
      return value;
    }
    // Get instance field reference: private Mono.RuntimeStructs/Mono.MonoClass* value
    ::Mono::RuntimeStructs::MonoClass*& dyn_value();
    // Mono.RuntimeStructs/Mono.MonoClass* get_Value()
    // Offset: 0xEDD6B8
    ::Mono::RuntimeStructs::MonoClass* get_Value();
    // System.Void .ctor(Mono.RuntimeStructs/Mono.MonoClass* value)
    // Offset: 0xEDD684
    // ABORTED: conflicts with another method.  RuntimeClassHandle(::Mono::RuntimeStructs::MonoClass* value);
    // System.Void .ctor(System.IntPtr ptr)
    // Offset: 0xEDD68C
    RuntimeClassHandle(::System::IntPtr ptr);
    // static System.IntPtr GetTypeFromClass(Mono.RuntimeStructs/Mono.MonoClass* klass)
    // Offset: 0xEDD80C
    static ::System::IntPtr GetTypeFromClass(::Mono::RuntimeStructs::MonoClass* klass);
    // System.RuntimeTypeHandle GetTypeHandle()
    // Offset: 0xEDD810
    ::System::RuntimeTypeHandle GetTypeHandle();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xEDD6C0
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xEDD7D8
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // Mono.RuntimeClassHandle
  #pragma pack(pop)
  static check_size<sizeof(RuntimeClassHandle), 0 + sizeof(::Mono::RuntimeStructs::MonoClass*)> __Mono_RuntimeClassHandleSizeCheck;
  static_assert(sizeof(RuntimeClassHandle) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::RuntimeClassHandle::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::RuntimeStructs::MonoClass* (Mono::RuntimeClassHandle::*)()>(&Mono::RuntimeClassHandle::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::RuntimeClassHandle), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::RuntimeClassHandle::RuntimeClassHandle
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::RuntimeClassHandle::RuntimeClassHandle
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::RuntimeClassHandle::GetTypeFromClass
// Il2CppName: GetTypeFromClass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::Mono::RuntimeStructs::MonoClass*)>(&Mono::RuntimeClassHandle::GetTypeFromClass)> {
  static const MethodInfo* get() {
    static auto* klass = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Mono", "RuntimeStructs/MonoClass"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::RuntimeClassHandle), "GetTypeFromClass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{klass});
  }
};
// Writing MetadataGetter for method: Mono::RuntimeClassHandle::GetTypeHandle
// Il2CppName: GetTypeHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::RuntimeTypeHandle (Mono::RuntimeClassHandle::*)()>(&Mono::RuntimeClassHandle::GetTypeHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::RuntimeClassHandle), "GetTypeHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::RuntimeClassHandle::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::RuntimeClassHandle::*)(::Il2CppObject*)>(&Mono::RuntimeClassHandle::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::RuntimeClassHandle), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Mono::RuntimeClassHandle::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::RuntimeClassHandle::*)()>(&Mono::RuntimeClassHandle::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::RuntimeClassHandle), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
