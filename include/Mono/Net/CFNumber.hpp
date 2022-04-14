// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Net.CFObject
#include "Mono/Net/CFObject.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: Mono.Net
namespace Mono::Net {
  // Forward declaring type: CFNumber
  class CFNumber;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Net::CFNumber);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::CFNumber*, "Mono.Net", "CFNumber");
// Type namespace: Mono.Net
namespace Mono::Net {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.CFNumber
  // [TokenAttribute] Offset: FFFFFFFF
  class CFNumber : public ::Mono::Net::CFObject {
    public:
    // static private System.Boolean CFNumberGetValue(System.IntPtr handle, System.IntPtr type, out System.Int32 value)
    // Offset: 0x10DED08
    static bool CFNumberGetValue(::System::IntPtr handle, ::System::IntPtr type, ByRef<int> value);
    // static public System.Int32 AsInt32(System.IntPtr handle)
    // Offset: 0x10DEDA8
    static int AsInt32(::System::IntPtr handle);
  }; // Mono.Net.CFNumber
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Net::CFNumber::CFNumberGetValue
// Il2CppName: CFNumberGetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr, ByRef<int>)>(&Mono::Net::CFNumber::CFNumberGetValue)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFNumber*), "CFNumberGetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle, type, value});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFNumber::AsInt32
// Il2CppName: AsInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::IntPtr)>(&Mono::Net::CFNumber::AsInt32)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFNumber*), "AsInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
