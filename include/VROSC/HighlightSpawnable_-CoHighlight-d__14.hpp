// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.HighlightSpawnable
#include "VROSC/HighlightSpawnable.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::HighlightSpawnable::$CoHighlight$d__14);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::HighlightSpawnable::$CoHighlight$d__14*, "VROSC", "HighlightSpawnable/<CoHighlight>d__14");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.HighlightSpawnable/VROSC.<CoHighlight>d__14
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class HighlightSpawnable::$CoHighlight$d__14 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public VROSC.HighlightSpawnable <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::HighlightSpawnable* $$4__this;
    // Field size check
    static_assert(sizeof(::VROSC::HighlightSpawnable*) == 0x8);
    // public System.Boolean highlight
    // Size: 0x1
    // Offset: 0x28
    bool highlight;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: highlight and: $_animationTimer$5__2
    char __padding3[0x3] = {};
    // private System.Single <_animationTimer>5__2
    // Size: 0x4
    // Offset: 0x2C
    float $_animationTimer$5__2;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 <startScale>5__3
    // Size: 0xC
    // Offset: 0x30
    ::UnityEngine::Vector3 $startScale$5__3;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 <targetScale>5__4
    // Size: 0xC
    // Offset: 0x3C
    ::UnityEngine::Vector3 $targetScale$5__4;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated]] ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public VROSC.HighlightSpawnable <>4__this
    [[deprecated]] ::VROSC::HighlightSpawnable*& dyn_$$4__this();
    // Get instance field reference: public System.Boolean highlight
    [[deprecated]] bool& dyn_highlight();
    // Get instance field reference: private System.Single <_animationTimer>5__2
    [[deprecated]] float& dyn_$_animationTimer$5__2();
    // Get instance field reference: private UnityEngine.Vector3 <startScale>5__3
    [[deprecated]] ::UnityEngine::Vector3& dyn_$startScale$5__3();
    // Get instance field reference: private UnityEngine.Vector3 <targetScale>5__4
    [[deprecated]] ::UnityEngine::Vector3& dyn_$targetScale$5__4();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x195804C
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1958094
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x1957E84
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HighlightSpawnable::$CoHighlight$d__14* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::HighlightSpawnable::$CoHighlight$d__14::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HighlightSpawnable::$CoHighlight$d__14*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1957EB0
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1957EB4
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1958054
    void System_Collections_IEnumerator_Reset();
  }; // VROSC.HighlightSpawnable/VROSC.<CoHighlight>d__14
  #pragma pack(pop)
  static check_size<sizeof(HighlightSpawnable::$CoHighlight$d__14), 60 + sizeof(::UnityEngine::Vector3)> __VROSC_HighlightSpawnable_$CoHighlight$d__14SizeCheck;
  static_assert(sizeof(HighlightSpawnable::$CoHighlight$d__14) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::HighlightSpawnable::$CoHighlight$d__14::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (VROSC::HighlightSpawnable::$CoHighlight$d__14::*)()>(&VROSC::HighlightSpawnable::$CoHighlight$d__14::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::HighlightSpawnable::$CoHighlight$d__14*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::HighlightSpawnable::$CoHighlight$d__14::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (VROSC::HighlightSpawnable::$CoHighlight$d__14::*)()>(&VROSC::HighlightSpawnable::$CoHighlight$d__14::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::HighlightSpawnable::$CoHighlight$d__14*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::HighlightSpawnable::$CoHighlight$d__14::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::HighlightSpawnable::$CoHighlight$d__14::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::HighlightSpawnable::$CoHighlight$d__14::*)()>(&VROSC::HighlightSpawnable::$CoHighlight$d__14::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::HighlightSpawnable::$CoHighlight$d__14*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::HighlightSpawnable::$CoHighlight$d__14::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::HighlightSpawnable::$CoHighlight$d__14::*)()>(&VROSC::HighlightSpawnable::$CoHighlight$d__14::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::HighlightSpawnable::$CoHighlight$d__14*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::HighlightSpawnable::$CoHighlight$d__14::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::HighlightSpawnable::$CoHighlight$d__14::*)()>(&VROSC::HighlightSpawnable::$CoHighlight$d__14::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::HighlightSpawnable::$CoHighlight$d__14*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
