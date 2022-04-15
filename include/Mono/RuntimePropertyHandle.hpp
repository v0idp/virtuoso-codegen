// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: Mono
namespace Mono {
  // Forward declaring type: RuntimePropertyHandle
  struct RuntimePropertyHandle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Mono::RuntimePropertyHandle, "Mono", "RuntimePropertyHandle");
// Type namespace: Mono
namespace Mono {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Mono.RuntimePropertyHandle
  // [TokenAttribute] Offset: FFFFFFFF
  struct RuntimePropertyHandle/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.IntPtr value
    // Size: 0x8
    // Offset: 0x0
    ::System::IntPtr value;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: RuntimePropertyHandle
    constexpr RuntimePropertyHandle(::System::IntPtr value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept {
      return value;
    }
    // Get instance field reference: private System.IntPtr value
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_value();
    // public System.IntPtr get_Value()
    // Offset: 0xCE5C8C
    ::System::IntPtr get_Value();
    // System.Void .ctor(System.IntPtr v)
    // Offset: 0xCE5C84
    // ABORTED: conflicts with another method.  RuntimePropertyHandle(::System::IntPtr v);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xCE5C94
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xCE5DB4
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // Mono.RuntimePropertyHandle
  #pragma pack(pop)
  static check_size<sizeof(RuntimePropertyHandle), 0 + sizeof(::System::IntPtr)> __Mono_RuntimePropertyHandleSizeCheck;
  static_assert(sizeof(RuntimePropertyHandle) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::RuntimePropertyHandle::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (Mono::RuntimePropertyHandle::*)()>(&Mono::RuntimePropertyHandle::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::RuntimePropertyHandle), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::RuntimePropertyHandle::RuntimePropertyHandle
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::RuntimePropertyHandle::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::RuntimePropertyHandle::*)(::Il2CppObject*)>(&Mono::RuntimePropertyHandle::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::RuntimePropertyHandle), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Mono::RuntimePropertyHandle::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::RuntimePropertyHandle::*)()>(&Mono::RuntimePropertyHandle::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::RuntimePropertyHandle), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
