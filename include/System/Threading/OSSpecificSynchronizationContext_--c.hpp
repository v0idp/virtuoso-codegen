// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.OSSpecificSynchronizationContext
#include "System/Threading/OSSpecificSynchronizationContext.hpp"
// Including type: System.Runtime.CompilerServices.ConditionalWeakTable`2
#include "System/Runtime/CompilerServices/ConditionalWeakTable_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Threading::OSSpecificSynchronizationContext::$$c);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::OSSpecificSynchronizationContext::$$c*, "System.Threading", "OSSpecificSynchronizationContext/<>c");
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.OSSpecificSynchronizationContext/System.Threading.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: 57AEBC
  class OSSpecificSynchronizationContext::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Threading.OSSpecificSynchronizationContext/System.Threading.<>c <>9
    static ::System::Threading::OSSpecificSynchronizationContext::$$c* _get_$$9();
    // Set static field: static public readonly System.Threading.OSSpecificSynchronizationContext/System.Threading.<>c <>9
    static void _set_$$9(::System::Threading::OSSpecificSynchronizationContext::$$c* value);
    // Get static field: static public System.Runtime.CompilerServices.ConditionalWeakTable`2/System.Runtime.CompilerServices.CreateValueCallback<System.Object,System.Threading.OSSpecificSynchronizationContext> <>9__3_0
    static typename ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::Il2CppObject*, ::System::Threading::OSSpecificSynchronizationContext*>::CreateValueCallback* _get_$$9__3_0();
    // Set static field: static public System.Runtime.CompilerServices.ConditionalWeakTable`2/System.Runtime.CompilerServices.CreateValueCallback<System.Object,System.Threading.OSSpecificSynchronizationContext> <>9__3_0
    static void _set_$$9__3_0(typename ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::Il2CppObject*, ::System::Threading::OSSpecificSynchronizationContext*>::CreateValueCallback* value);
    // static private System.Void .cctor()
    // Offset: 0xDD8B30
    static void _cctor();
    // System.Threading.OSSpecificSynchronizationContext <Get>b__3_0(System.Object _osContext)
    // Offset: 0xDD8B98
    ::System::Threading::OSSpecificSynchronizationContext* $Get$b__3_0(::Il2CppObject* _osContext);
    // public System.Void .ctor()
    // Offset: 0xDD8B90
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OSSpecificSynchronizationContext::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::OSSpecificSynchronizationContext::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OSSpecificSynchronizationContext::$$c*, creationType>()));
    }
  }; // System.Threading.OSSpecificSynchronizationContext/System.Threading.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::OSSpecificSynchronizationContext::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Threading::OSSpecificSynchronizationContext::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::OSSpecificSynchronizationContext::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::OSSpecificSynchronizationContext::$$c::$Get$b__3_0
// Il2CppName: <Get>b__3_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::OSSpecificSynchronizationContext* (System::Threading::OSSpecificSynchronizationContext::$$c::*)(::Il2CppObject*)>(&System::Threading::OSSpecificSynchronizationContext::$$c::$Get$b__3_0)> {
  static const MethodInfo* get() {
    static auto* _osContext = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::OSSpecificSynchronizationContext::$$c*), "<Get>b__3_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_osContext});
  }
};
// Writing MetadataGetter for method: System::Threading::OSSpecificSynchronizationContext::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
