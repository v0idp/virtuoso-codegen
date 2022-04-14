// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.MainState
#include "VROSC/MainState.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::MainState::$StopMenuMusicCoroutine$d__9);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MainState::$StopMenuMusicCoroutine$d__9*, "VROSC", "MainState/<StopMenuMusicCoroutine>d__9");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.MainState/VROSC.<StopMenuMusicCoroutine>d__9
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MainState::$StopMenuMusicCoroutine$d__9 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public VROSC.MainState <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::MainState* $$4__this;
    // Field size check
    static_assert(sizeof(::VROSC::MainState*) == 0x8);
    // private System.Single <fadeoutTime>5__2
    // Size: 0x4
    // Offset: 0x28
    float $fadeoutTime$5__2;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <progress>5__3
    // Size: 0x4
    // Offset: 0x2C
    float $progress$5__3;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <startVolume>5__4
    // Size: 0x4
    // Offset: 0x30
    float $startVolume$5__4;
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
    // Get instance field reference: public VROSC.MainState <>4__this
    [[deprecated]] ::VROSC::MainState*& dyn_$$4__this();
    // Get instance field reference: private System.Single <fadeoutTime>5__2
    [[deprecated]] float& dyn_$fadeoutTime$5__2();
    // Get instance field reference: private System.Single <progress>5__3
    [[deprecated]] float& dyn_$progress$5__3();
    // Get instance field reference: private System.Single <startVolume>5__4
    [[deprecated]] float& dyn_$startVolume$5__4();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x19611A8
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x19611F0
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x1961040
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MainState::$StopMenuMusicCoroutine$d__9* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::MainState::$StopMenuMusicCoroutine$d__9::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MainState::$StopMenuMusicCoroutine$d__9*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x196106C
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1961070
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x19611B0
    void System_Collections_IEnumerator_Reset();
  }; // VROSC.MainState/VROSC.<StopMenuMusicCoroutine>d__9
  #pragma pack(pop)
  static check_size<sizeof(MainState::$StopMenuMusicCoroutine$d__9), 48 + sizeof(float)> __VROSC_MainState_$StopMenuMusicCoroutine$d__9SizeCheck;
  static_assert(sizeof(MainState::$StopMenuMusicCoroutine$d__9) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::MainState::$StopMenuMusicCoroutine$d__9::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (VROSC::MainState::$StopMenuMusicCoroutine$d__9::*)()>(&VROSC::MainState::$StopMenuMusicCoroutine$d__9::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MainState::$StopMenuMusicCoroutine$d__9*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MainState::$StopMenuMusicCoroutine$d__9::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (VROSC::MainState::$StopMenuMusicCoroutine$d__9::*)()>(&VROSC::MainState::$StopMenuMusicCoroutine$d__9::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MainState::$StopMenuMusicCoroutine$d__9*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MainState::$StopMenuMusicCoroutine$d__9::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::MainState::$StopMenuMusicCoroutine$d__9::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MainState::$StopMenuMusicCoroutine$d__9::*)()>(&VROSC::MainState::$StopMenuMusicCoroutine$d__9::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MainState::$StopMenuMusicCoroutine$d__9*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MainState::$StopMenuMusicCoroutine$d__9::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::MainState::$StopMenuMusicCoroutine$d__9::*)()>(&VROSC::MainState::$StopMenuMusicCoroutine$d__9::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MainState::$StopMenuMusicCoroutine$d__9*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MainState::$StopMenuMusicCoroutine$d__9::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MainState::$StopMenuMusicCoroutine$d__9::*)()>(&VROSC::MainState::$StopMenuMusicCoroutine$d__9::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MainState::$StopMenuMusicCoroutine$d__9*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
