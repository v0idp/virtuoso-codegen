// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PunchKeyboard
#include "GlobalNamespace/PunchKeyboard.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PunchKeyboard::$Animate$d__35);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PunchKeyboard::$Animate$d__35*, "", "PunchKeyboard/<Animate>d__35");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: PunchKeyboard/<Animate>d__35
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class PunchKeyboard::$Animate$d__35 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Boolean open
    // Size: 0x1
    // Offset: 0x20
    bool open;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: open and: $$4__this
    char __padding2[0x7] = {};
    // public PunchKeyboard <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::PunchKeyboard* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PunchKeyboard*) == 0x8);
    // public System.Action callback
    // Size: 0x8
    // Offset: 0x30
    ::System::Action* callback;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Single <t>5__2
    // Size: 0x4
    // Offset: 0x38
    float $t$5__2;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public System.Boolean open
    [[deprecated("Use field access instead!")]] bool& dyn_open();
    // Get instance field reference: public PunchKeyboard <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PunchKeyboard*& dyn_$$4__this();
    // Get instance field reference: public System.Action callback
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_callback();
    // Get instance field reference: private System.Single <t>5__2
    [[deprecated("Use field access instead!")]] float& dyn_$t$5__2();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x8CF9E0
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x8CFA28
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x8CF850
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PunchKeyboard::$Animate$d__35* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PunchKeyboard::$Animate$d__35::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PunchKeyboard::$Animate$d__35*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x8CF87C
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x8CF880
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x8CF9E8
    void System_Collections_IEnumerator_Reset();
  }; // PunchKeyboard/<Animate>d__35
  #pragma pack(pop)
  static check_size<sizeof(PunchKeyboard::$Animate$d__35), 56 + sizeof(float)> __GlobalNamespace_PunchKeyboard_$Animate$d__35SizeCheck;
  static_assert(sizeof(PunchKeyboard::$Animate$d__35) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PunchKeyboard::$Animate$d__35::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::PunchKeyboard::$Animate$d__35::*)()>(&GlobalNamespace::PunchKeyboard::$Animate$d__35::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PunchKeyboard::$Animate$d__35*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PunchKeyboard::$Animate$d__35::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::PunchKeyboard::$Animate$d__35::*)()>(&GlobalNamespace::PunchKeyboard::$Animate$d__35::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PunchKeyboard::$Animate$d__35*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PunchKeyboard::$Animate$d__35::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PunchKeyboard::$Animate$d__35::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PunchKeyboard::$Animate$d__35::*)()>(&GlobalNamespace::PunchKeyboard::$Animate$d__35::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PunchKeyboard::$Animate$d__35*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PunchKeyboard::$Animate$d__35::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PunchKeyboard::$Animate$d__35::*)()>(&GlobalNamespace::PunchKeyboard::$Animate$d__35::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PunchKeyboard::$Animate$d__35*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PunchKeyboard::$Animate$d__35::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PunchKeyboard::$Animate$d__35::*)()>(&GlobalNamespace::PunchKeyboard::$Animate$d__35::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PunchKeyboard::$Animate$d__35*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
