// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.LoopStationGroupMover
#include "VROSC/LoopStationGroupMover.hpp"
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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::LoopStationGroupMover::$MoveGroupFlow$d__10);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationGroupMover::$MoveGroupFlow$d__10*, "VROSC", "LoopStationGroupMover/<MoveGroupFlow>d__10");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x6C
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.LoopStationGroupMover/VROSC.<MoveGroupFlow>d__10
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class LoopStationGroupMover::$MoveGroupFlow$d__10 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public VROSC.LoopStationGroupMover <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::LoopStationGroupMover* $$4__this;
    // Field size check
    static_assert(sizeof(::VROSC::LoopStationGroupMover*) == 0x8);
    // public UnityEngine.Vector3 from
    // Size: 0xC
    // Offset: 0x28
    ::UnityEngine::Vector3 from;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 to
    // Size: 0xC
    // Offset: 0x34
    ::UnityEngine::Vector3 to;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Single zmultiplier
    // Size: 0x4
    // Offset: 0x40
    float zmultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <time>5__2
    // Size: 0x4
    // Offset: 0x44
    float $time$5__2;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Transform <parent>5__3
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Transform* $parent$5__3;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Vector3 <localStartPosition>5__4
    // Size: 0xC
    // Offset: 0x50
    ::UnityEngine::Vector3 $localStartPosition$5__4;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 <localEndPosition>5__5
    // Size: 0xC
    // Offset: 0x5C
    ::UnityEngine::Vector3 $localEndPosition$5__5;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single <duration>5__6
    // Size: 0x4
    // Offset: 0x68
    float $duration$5__6;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated]] ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public VROSC.LoopStationGroupMover <>4__this
    [[deprecated]] ::VROSC::LoopStationGroupMover*& dyn_$$4__this();
    // Get instance field reference: public UnityEngine.Vector3 from
    [[deprecated]] ::UnityEngine::Vector3& dyn_from();
    // Get instance field reference: public UnityEngine.Vector3 to
    [[deprecated]] ::UnityEngine::Vector3& dyn_to();
    // Get instance field reference: public System.Single zmultiplier
    [[deprecated]] float& dyn_zmultiplier();
    // Get instance field reference: private System.Single <time>5__2
    [[deprecated]] float& dyn_$time$5__2();
    // Get instance field reference: private UnityEngine.Transform <parent>5__3
    [[deprecated]] ::UnityEngine::Transform*& dyn_$parent$5__3();
    // Get instance field reference: private UnityEngine.Vector3 <localStartPosition>5__4
    [[deprecated]] ::UnityEngine::Vector3& dyn_$localStartPosition$5__4();
    // Get instance field reference: private UnityEngine.Vector3 <localEndPosition>5__5
    [[deprecated]] ::UnityEngine::Vector3& dyn_$localEndPosition$5__5();
    // Get instance field reference: private System.Single <duration>5__6
    [[deprecated]] float& dyn_$duration$5__6();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x195F464
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x195F4AC
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x195F0F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoopStationGroupMover::$MoveGroupFlow$d__10* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::LoopStationGroupMover::$MoveGroupFlow$d__10::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoopStationGroupMover::$MoveGroupFlow$d__10*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x195F124
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x195F128
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x195F46C
    void System_Collections_IEnumerator_Reset();
  }; // VROSC.LoopStationGroupMover/VROSC.<MoveGroupFlow>d__10
  #pragma pack(pop)
  static check_size<sizeof(LoopStationGroupMover::$MoveGroupFlow$d__10), 104 + sizeof(float)> __VROSC_LoopStationGroupMover_$MoveGroupFlow$d__10SizeCheck;
  static_assert(sizeof(LoopStationGroupMover::$MoveGroupFlow$d__10) == 0x6C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::LoopStationGroupMover::$MoveGroupFlow$d__10::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (VROSC::LoopStationGroupMover::$MoveGroupFlow$d__10::*)()>(&VROSC::LoopStationGroupMover::$MoveGroupFlow$d__10::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationGroupMover::$MoveGroupFlow$d__10*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationGroupMover::$MoveGroupFlow$d__10::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (VROSC::LoopStationGroupMover::$MoveGroupFlow$d__10::*)()>(&VROSC::LoopStationGroupMover::$MoveGroupFlow$d__10::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationGroupMover::$MoveGroupFlow$d__10*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationGroupMover::$MoveGroupFlow$d__10::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::LoopStationGroupMover::$MoveGroupFlow$d__10::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationGroupMover::$MoveGroupFlow$d__10::*)()>(&VROSC::LoopStationGroupMover::$MoveGroupFlow$d__10::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationGroupMover::$MoveGroupFlow$d__10*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationGroupMover::$MoveGroupFlow$d__10::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::LoopStationGroupMover::$MoveGroupFlow$d__10::*)()>(&VROSC::LoopStationGroupMover::$MoveGroupFlow$d__10::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationGroupMover::$MoveGroupFlow$d__10*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationGroupMover::$MoveGroupFlow$d__10::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationGroupMover::$MoveGroupFlow$d__10::*)()>(&VROSC::LoopStationGroupMover::$MoveGroupFlow$d__10::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationGroupMover::$MoveGroupFlow$d__10*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
