// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.LoopPlayerAutoMover
#include "VROSC/LoopPlayerAutoMover.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: LoopStationGroup
  class LoopStationGroup;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::LoopPlayerAutoMover::$MovePlayerFlow$d__7);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlayerAutoMover::$MovePlayerFlow$d__7*, "VROSC", "LoopPlayerAutoMover/<MovePlayerFlow>d__7");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.LoopPlayerAutoMover/VROSC.<MovePlayerFlow>d__7
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class LoopPlayerAutoMover::$MovePlayerFlow$d__7 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
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
    // public VROSC.LoopPlayerAutoMover <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::LoopPlayerAutoMover* $$4__this;
    // Field size check
    static_assert(sizeof(::VROSC::LoopPlayerAutoMover*) == 0x8);
    // public VROSC.LoopStationGroup from
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::LoopStationGroup* from;
    // Field size check
    static_assert(sizeof(::VROSC::LoopStationGroup*) == 0x8);
    // public VROSC.LoopStationGroup to
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::LoopStationGroup* to;
    // Field size check
    static_assert(sizeof(::VROSC::LoopStationGroup*) == 0x8);
    // public System.Single zmultiplier
    // Size: 0x4
    // Offset: 0x38
    float zmultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <time>5__2
    // Size: 0x4
    // Offset: 0x3C
    float $time$5__2;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 <startPosition>5__3
    // Size: 0xC
    // Offset: 0x40
    ::UnityEngine::Vector3 $startPosition$5__3;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public VROSC.LoopPlayerAutoMover <>4__this
    ::VROSC::LoopPlayerAutoMover*& dyn_$$4__this();
    // Get instance field reference: public VROSC.LoopStationGroup from
    ::VROSC::LoopStationGroup*& dyn_from();
    // Get instance field reference: public VROSC.LoopStationGroup to
    ::VROSC::LoopStationGroup*& dyn_to();
    // Get instance field reference: public System.Single zmultiplier
    float& dyn_zmultiplier();
    // Get instance field reference: private System.Single <time>5__2
    float& dyn_$time$5__2();
    // Get instance field reference: private UnityEngine.Vector3 <startPosition>5__3
    ::UnityEngine::Vector3& dyn_$startPosition$5__3();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x13D5D20
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x13D5D68
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x13D5A90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoopPlayerAutoMover::$MovePlayerFlow$d__7* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::LoopPlayerAutoMover::$MovePlayerFlow$d__7::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoopPlayerAutoMover::$MovePlayerFlow$d__7*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x13D5ABC
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x13D5AC0
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x13D5D28
    void System_Collections_IEnumerator_Reset();
  }; // VROSC.LoopPlayerAutoMover/VROSC.<MovePlayerFlow>d__7
  #pragma pack(pop)
  static check_size<sizeof(LoopPlayerAutoMover::$MovePlayerFlow$d__7), 64 + sizeof(::UnityEngine::Vector3)> __VROSC_LoopPlayerAutoMover_$MovePlayerFlow$d__7SizeCheck;
  static_assert(sizeof(LoopPlayerAutoMover::$MovePlayerFlow$d__7) == 0x4C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::LoopPlayerAutoMover::$MovePlayerFlow$d__7::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (VROSC::LoopPlayerAutoMover::$MovePlayerFlow$d__7::*)()>(&VROSC::LoopPlayerAutoMover::$MovePlayerFlow$d__7::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerAutoMover::$MovePlayerFlow$d__7*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerAutoMover::$MovePlayerFlow$d__7::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (VROSC::LoopPlayerAutoMover::$MovePlayerFlow$d__7::*)()>(&VROSC::LoopPlayerAutoMover::$MovePlayerFlow$d__7::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerAutoMover::$MovePlayerFlow$d__7*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerAutoMover::$MovePlayerFlow$d__7::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::LoopPlayerAutoMover::$MovePlayerFlow$d__7::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerAutoMover::$MovePlayerFlow$d__7::*)()>(&VROSC::LoopPlayerAutoMover::$MovePlayerFlow$d__7::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerAutoMover::$MovePlayerFlow$d__7*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerAutoMover::$MovePlayerFlow$d__7::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::LoopPlayerAutoMover::$MovePlayerFlow$d__7::*)()>(&VROSC::LoopPlayerAutoMover::$MovePlayerFlow$d__7::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerAutoMover::$MovePlayerFlow$d__7*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlayerAutoMover::$MovePlayerFlow$d__7::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlayerAutoMover::$MovePlayerFlow$d__7::*)()>(&VROSC::LoopPlayerAutoMover::$MovePlayerFlow$d__7::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlayerAutoMover::$MovePlayerFlow$d__7*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};