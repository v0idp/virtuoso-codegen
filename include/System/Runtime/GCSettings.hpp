// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.GCLargeObjectHeapCompactionMode
#include "System/Runtime/GCLargeObjectHeapCompactionMode.hpp"
// Completed includes
// Type namespace: System.Runtime
namespace System::Runtime {
  // Forward declaring type: GCSettings
  class GCSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::GCSettings);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::GCSettings*, "System.Runtime", "GCSettings");
// Type namespace: System.Runtime
namespace System::Runtime {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.GCSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class GCSettings : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0x57FE6C
    // Get static field: static private System.Runtime.GCLargeObjectHeapCompactionMode <LargeObjectHeapCompactionMode>k__BackingField
    static ::System::Runtime::GCLargeObjectHeapCompactionMode _get_$LargeObjectHeapCompactionMode$k__BackingField();
    // Set static field: static private System.Runtime.GCLargeObjectHeapCompactionMode <LargeObjectHeapCompactionMode>k__BackingField
    static void _set_$LargeObjectHeapCompactionMode$k__BackingField(::System::Runtime::GCLargeObjectHeapCompactionMode value);
    // static public System.Void set_LargeObjectHeapCompactionMode(System.Runtime.GCLargeObjectHeapCompactionMode value)
    // Offset: 0xC1E778
    static void set_LargeObjectHeapCompactionMode(::System::Runtime::GCLargeObjectHeapCompactionMode value);
  }; // System.Runtime.GCSettings
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::GCSettings::set_LargeObjectHeapCompactionMode
// Il2CppName: set_LargeObjectHeapCompactionMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::GCLargeObjectHeapCompactionMode)>(&System::Runtime::GCSettings::set_LargeObjectHeapCompactionMode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Runtime", "GCLargeObjectHeapCompactionMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::GCSettings*), "set_LargeObjectHeapCompactionMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
