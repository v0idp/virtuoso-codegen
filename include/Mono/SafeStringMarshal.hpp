// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Mono
namespace Mono {
  // Forward declaring type: SafeStringMarshal
  struct SafeStringMarshal;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Mono::SafeStringMarshal, "Mono", "SafeStringMarshal");
// Type namespace: Mono
namespace Mono {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Mono.SafeStringMarshal
  // [TokenAttribute] Offset: FFFFFFFF
  struct SafeStringMarshal/*, public ::System::ValueType, public ::System::IDisposable*/ {
    public:
    public:
    // private readonly System.String str
    // Size: 0x8
    // Offset: 0x0
    ::StringW str;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.IntPtr marshaled_string
    // Size: 0x8
    // Offset: 0x8
    ::System::IntPtr marshaled_string;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: SafeStringMarshal
    constexpr SafeStringMarshal(::StringW str_ = {}, ::System::IntPtr marshaled_string_ = {}) noexcept : str{str_}, marshaled_string{marshaled_string_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private readonly System.String str
    [[deprecated]] ::StringW& dyn_str();
    // Get instance field reference: private System.IntPtr marshaled_string
    [[deprecated]] ::System::IntPtr& dyn_marshaled_string();
    // public System.IntPtr get_Value()
    // Offset: 0x1172868
    ::System::IntPtr get_Value();
    // public System.Void .ctor(System.String str)
    // Offset: 0x117281C
    SafeStringMarshal(::StringW str);
    // static public System.IntPtr StringToUtf8(System.String str)
    // Offset: 0x1172814
    static ::System::IntPtr StringToUtf8(::StringW str);
    // static public System.Void GFree(System.IntPtr ptr)
    // Offset: 0x1172818
    static void GFree(::System::IntPtr ptr);
    // public System.Void Dispose()
    // Offset: 0x11728CC
    void Dispose();
  }; // Mono.SafeStringMarshal
  #pragma pack(pop)
  static check_size<sizeof(SafeStringMarshal), 8 + sizeof(::System::IntPtr)> __Mono_SafeStringMarshalSizeCheck;
  static_assert(sizeof(SafeStringMarshal) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::SafeStringMarshal::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (Mono::SafeStringMarshal::*)()>(&Mono::SafeStringMarshal::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::SafeStringMarshal), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::SafeStringMarshal::SafeStringMarshal
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::SafeStringMarshal::StringToUtf8
// Il2CppName: StringToUtf8
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::StringW)>(&Mono::SafeStringMarshal::StringToUtf8)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::SafeStringMarshal), "StringToUtf8", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: Mono::SafeStringMarshal::GFree
// Il2CppName: GFree
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&Mono::SafeStringMarshal::GFree)> {
  static const MethodInfo* get() {
    static auto* ptr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::SafeStringMarshal), "GFree", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ptr});
  }
};
// Writing MetadataGetter for method: Mono::SafeStringMarshal::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::SafeStringMarshal::*)()>(&Mono::SafeStringMarshal::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::SafeStringMarshal), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
