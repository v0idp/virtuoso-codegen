// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Firebase.Unity.UnitySynchronizationContext
#include "Firebase/Unity/UnitySynchronizationContext.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Unity::UnitySynchronizationContext::$Send$c__AnonStorey4);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Unity::UnitySynchronizationContext::$Send$c__AnonStorey4*, "Firebase.Unity", "UnitySynchronizationContext/<Send>c__AnonStorey4");
// Type namespace: Firebase.Unity
namespace Firebase::Unity {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Unity.UnitySynchronizationContext/Firebase.Unity.<Send>c__AnonStorey4
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class UnitySynchronizationContext::$Send$c__AnonStorey4 : public ::Il2CppObject {
    public:
    public:
    // System.Threading.ManualResetEvent newSignal
    // Size: 0x8
    // Offset: 0x10
    ::System::Threading::ManualResetEvent* newSignal;
    // Field size check
    static_assert(sizeof(::System::Threading::ManualResetEvent*) == 0x8);
    // Firebase.Unity.UnitySynchronizationContext/Firebase.Unity.<Send>c__AnonStorey3 <>f__ref$3
    // Size: 0x8
    // Offset: 0x18
    ::Firebase::Unity::UnitySynchronizationContext::$Send$c__AnonStorey3* $$f__ref$3;
    // Field size check
    static_assert(sizeof(::Firebase::Unity::UnitySynchronizationContext::$Send$c__AnonStorey3*) == 0x8);
    public:
    // Get instance field reference: System.Threading.ManualResetEvent newSignal
    [[deprecated]] ::System::Threading::ManualResetEvent*& dyn_newSignal();
    // Get instance field reference: Firebase.Unity.UnitySynchronizationContext/Firebase.Unity.<Send>c__AnonStorey3 <>f__ref$3
    [[deprecated]] ::Firebase::Unity::UnitySynchronizationContext::$Send$c__AnonStorey3*& dyn_$$f__ref$3();
    // System.Void <>m__0(System.Object x)
    // Offset: 0x18CB6C8
    void $$m__0(::Il2CppObject* x);
    // public System.Void .ctor()
    // Offset: 0x18CB38C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnitySynchronizationContext::$Send$c__AnonStorey4* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Unity::UnitySynchronizationContext::$Send$c__AnonStorey4::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnitySynchronizationContext::$Send$c__AnonStorey4*, creationType>()));
    }
  }; // Firebase.Unity.UnitySynchronizationContext/Firebase.Unity.<Send>c__AnonStorey4
  #pragma pack(pop)
  static check_size<sizeof(UnitySynchronizationContext::$Send$c__AnonStorey4), 24 + sizeof(::Firebase::Unity::UnitySynchronizationContext::$Send$c__AnonStorey3*)> __Firebase_Unity_UnitySynchronizationContext_$Send$c__AnonStorey4SizeCheck;
  static_assert(sizeof(UnitySynchronizationContext::$Send$c__AnonStorey4) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Unity::UnitySynchronizationContext::$Send$c__AnonStorey4::$$m__0
// Il2CppName: <>m__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Unity::UnitySynchronizationContext::$Send$c__AnonStorey4::*)(::Il2CppObject*)>(&Firebase::Unity::UnitySynchronizationContext::$Send$c__AnonStorey4::$$m__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Unity::UnitySynchronizationContext::$Send$c__AnonStorey4*), "<>m__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Firebase::Unity::UnitySynchronizationContext::$Send$c__AnonStorey4::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
