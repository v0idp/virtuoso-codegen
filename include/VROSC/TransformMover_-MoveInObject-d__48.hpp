// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.TransformMover
#include "VROSC/TransformMover.hpp"
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
  // Forward declaring type: GrabbingDevice
  class GrabbingDevice;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::TransformMover::$MoveInObject$d__48);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TransformMover::$MoveInObject$d__48*, "VROSC", "TransformMover/<MoveInObject>d__48");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x54
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.TransformMover/VROSC.<MoveInObject>d__48
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TransformMover::$MoveInObject$d__48 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public VROSC.GrabbingDevice device
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::GrabbingDevice* device;
    // Field size check
    static_assert(sizeof(::VROSC::GrabbingDevice*) == 0x8);
    // public VROSC.TransformMover <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::TransformMover* $$4__this;
    // Field size check
    static_assert(sizeof(::VROSC::TransformMover*) == 0x8);
    // private UnityEngine.Transform <controller>5__2
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Transform* $controller$5__2;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Vector3 <_moverStartPosition>5__3
    // Size: 0xC
    // Offset: 0x38
    ::UnityEngine::Vector3 $_moverStartPosition$5__3;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 <_moverEndPosition>5__4
    // Size: 0xC
    // Offset: 0x44
    ::UnityEngine::Vector3 $_moverEndPosition$5__4;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single <time>5__5
    // Size: 0x4
    // Offset: 0x50
    float $time$5__5;
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
    // Get instance field reference: public VROSC.GrabbingDevice device
    [[deprecated]] ::VROSC::GrabbingDevice*& dyn_device();
    // Get instance field reference: public VROSC.TransformMover <>4__this
    [[deprecated]] ::VROSC::TransformMover*& dyn_$$4__this();
    // Get instance field reference: private UnityEngine.Transform <controller>5__2
    [[deprecated]] ::UnityEngine::Transform*& dyn_$controller$5__2();
    // Get instance field reference: private UnityEngine.Vector3 <_moverStartPosition>5__3
    [[deprecated]] ::UnityEngine::Vector3& dyn_$_moverStartPosition$5__3();
    // Get instance field reference: private UnityEngine.Vector3 <_moverEndPosition>5__4
    [[deprecated]] ::UnityEngine::Vector3& dyn_$_moverEndPosition$5__4();
    // Get instance field reference: private System.Single <time>5__5
    [[deprecated]] float& dyn_$time$5__5();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x8DD918
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x8DD960
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x8DD5D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TransformMover::$MoveInObject$d__48* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::TransformMover::$MoveInObject$d__48::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TransformMover::$MoveInObject$d__48*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x8DD5FC
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x8DD600
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x8DD920
    void System_Collections_IEnumerator_Reset();
  }; // VROSC.TransformMover/VROSC.<MoveInObject>d__48
  #pragma pack(pop)
  static check_size<sizeof(TransformMover::$MoveInObject$d__48), 80 + sizeof(float)> __VROSC_TransformMover_$MoveInObject$d__48SizeCheck;
  static_assert(sizeof(TransformMover::$MoveInObject$d__48) == 0x54);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::TransformMover::$MoveInObject$d__48::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (VROSC::TransformMover::$MoveInObject$d__48::*)()>(&VROSC::TransformMover::$MoveInObject$d__48::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TransformMover::$MoveInObject$d__48*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TransformMover::$MoveInObject$d__48::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (VROSC::TransformMover::$MoveInObject$d__48::*)()>(&VROSC::TransformMover::$MoveInObject$d__48::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TransformMover::$MoveInObject$d__48*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TransformMover::$MoveInObject$d__48::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::TransformMover::$MoveInObject$d__48::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TransformMover::$MoveInObject$d__48::*)()>(&VROSC::TransformMover::$MoveInObject$d__48::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TransformMover::$MoveInObject$d__48*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TransformMover::$MoveInObject$d__48::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::TransformMover::$MoveInObject$d__48::*)()>(&VROSC::TransformMover::$MoveInObject$d__48::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TransformMover::$MoveInObject$d__48*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TransformMover::$MoveInObject$d__48::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TransformMover::$MoveInObject$d__48::*)()>(&VROSC::TransformMover::$MoveInObject$d__48::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TransformMover::$MoveInObject$d__48*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
