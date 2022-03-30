// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeautifyEffect.Beautify
#include "BeautifyEffect/Beautify.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: WaitForEndOfFrame
  class WaitForEndOfFrame;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BeautifyEffect::Beautify::$DoBlink$d__712);
DEFINE_IL2CPP_ARG_TYPE(::BeautifyEffect::Beautify::$DoBlink$d__712*, "BeautifyEffect", "Beautify/<DoBlink>d__712");
// Type namespace: BeautifyEffect
namespace BeautifyEffect {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: BeautifyEffect.Beautify/BeautifyEffect.<DoBlink>d__712
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class Beautify::$DoBlink$d__712 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public System.Single duration
    // Size: 0x4
    // Offset: 0x20
    float duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: duration and: $$4__this
    char __padding2[0x4] = {};
    // public BeautifyEffect.Beautify <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::BeautifyEffect::Beautify* $$4__this;
    // Field size check
    static_assert(sizeof(::BeautifyEffect::Beautify*) == 0x8);
    // public System.Single maxValue
    // Size: 0x4
    // Offset: 0x30
    float maxValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <start>5__2
    // Size: 0x4
    // Offset: 0x34
    float $start$5__2;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <t>5__3
    // Size: 0x4
    // Offset: 0x38
    float $t$5__3;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: $t$5__3 and: $w$5__4
    char __padding6[0x4] = {};
    // private UnityEngine.WaitForEndOfFrame <w>5__4
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::WaitForEndOfFrame* $w$5__4;
    // Field size check
    static_assert(sizeof(::UnityEngine::WaitForEndOfFrame*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public System.Single duration
    float& dyn_duration();
    // Get instance field reference: public BeautifyEffect.Beautify <>4__this
    ::BeautifyEffect::Beautify*& dyn_$$4__this();
    // Get instance field reference: public System.Single maxValue
    float& dyn_maxValue();
    // Get instance field reference: private System.Single <start>5__2
    float& dyn_$start$5__2();
    // Get instance field reference: private System.Single <t>5__3
    float& dyn_$t$5__3();
    // Get instance field reference: private UnityEngine.WaitForEndOfFrame <w>5__4
    ::UnityEngine::WaitForEndOfFrame*& dyn_$w$5__4();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x135B920
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x135B968
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x135B758
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Beautify::$DoBlink$d__712* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::BeautifyEffect::Beautify::$DoBlink$d__712::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Beautify::$DoBlink$d__712*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x135B784
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x135B788
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x135B928
    void System_Collections_IEnumerator_Reset();
  }; // BeautifyEffect.Beautify/BeautifyEffect.<DoBlink>d__712
  #pragma pack(pop)
  static check_size<sizeof(Beautify::$DoBlink$d__712), 64 + sizeof(::UnityEngine::WaitForEndOfFrame*)> __BeautifyEffect_Beautify_$DoBlink$d__712SizeCheck;
  static_assert(sizeof(Beautify::$DoBlink$d__712) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BeautifyEffect::Beautify::$DoBlink$d__712::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (BeautifyEffect::Beautify::$DoBlink$d__712::*)()>(&BeautifyEffect::Beautify::$DoBlink$d__712::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeautifyEffect::Beautify::$DoBlink$d__712*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeautifyEffect::Beautify::$DoBlink$d__712::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (BeautifyEffect::Beautify::$DoBlink$d__712::*)()>(&BeautifyEffect::Beautify::$DoBlink$d__712::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeautifyEffect::Beautify::$DoBlink$d__712*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeautifyEffect::Beautify::$DoBlink$d__712::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: BeautifyEffect::Beautify::$DoBlink$d__712::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeautifyEffect::Beautify::$DoBlink$d__712::*)()>(&BeautifyEffect::Beautify::$DoBlink$d__712::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeautifyEffect::Beautify::$DoBlink$d__712*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeautifyEffect::Beautify::$DoBlink$d__712::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BeautifyEffect::Beautify::$DoBlink$d__712::*)()>(&BeautifyEffect::Beautify::$DoBlink$d__712::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeautifyEffect::Beautify::$DoBlink$d__712*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeautifyEffect::Beautify::$DoBlink$d__712::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeautifyEffect::Beautify::$DoBlink$d__712::*)()>(&BeautifyEffect::Beautify::$DoBlink$d__712::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeautifyEffect::Beautify::$DoBlink$d__712*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};