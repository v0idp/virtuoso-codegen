// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.AudioMixManager
#include "VROSC/AudioMixManager.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::AudioMixManager::$FadeCoroutine$d__15);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioMixManager::$FadeCoroutine$d__15*, "VROSC", "AudioMixManager/<FadeCoroutine>d__15");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.AudioMixManager/VROSC.<FadeCoroutine>d__15
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class AudioMixManager::$FadeCoroutine$d__15 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public VROSC.AudioMixManager <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::AudioMixManager* $$4__this;
    // Field size check
    static_assert(sizeof(::VROSC::AudioMixManager*) == 0x8);
    // public System.String parameterName
    // Size: 0x8
    // Offset: 0x28
    ::StringW parameterName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Single fadeTime
    // Size: 0x4
    // Offset: 0x30
    float fadeTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single unfadedVolume
    // Size: 0x4
    // Offset: 0x34
    float unfadedVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single targetVolumeFractionDb
    // Size: 0x4
    // Offset: 0x38
    float targetVolumeFractionDb;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <startVolume>5__2
    // Size: 0x4
    // Offset: 0x3C
    float $startVolume$5__2;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <progress>5__3
    // Size: 0x4
    // Offset: 0x40
    float $progress$5__3;
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
    // Get instance field reference: public VROSC.AudioMixManager <>4__this
    [[deprecated]] ::VROSC::AudioMixManager*& dyn_$$4__this();
    // Get instance field reference: public System.String parameterName
    [[deprecated]] ::StringW& dyn_parameterName();
    // Get instance field reference: public System.Single fadeTime
    [[deprecated]] float& dyn_fadeTime();
    // Get instance field reference: public System.Single unfadedVolume
    [[deprecated]] float& dyn_unfadedVolume();
    // Get instance field reference: public System.Single targetVolumeFractionDb
    [[deprecated]] float& dyn_targetVolumeFractionDb();
    // Get instance field reference: private System.Single <startVolume>5__2
    [[deprecated]] float& dyn_$startVolume$5__2();
    // Get instance field reference: private System.Single <progress>5__3
    [[deprecated]] float& dyn_$progress$5__3();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x956F64
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x956FAC
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x956DE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioMixManager::$FadeCoroutine$d__15* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::AudioMixManager::$FadeCoroutine$d__15::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioMixManager::$FadeCoroutine$d__15*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x956E14
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x956E18
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x956F6C
    void System_Collections_IEnumerator_Reset();
  }; // VROSC.AudioMixManager/VROSC.<FadeCoroutine>d__15
  #pragma pack(pop)
  static check_size<sizeof(AudioMixManager::$FadeCoroutine$d__15), 64 + sizeof(float)> __VROSC_AudioMixManager_$FadeCoroutine$d__15SizeCheck;
  static_assert(sizeof(AudioMixManager::$FadeCoroutine$d__15) == 0x44);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::AudioMixManager::$FadeCoroutine$d__15::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (VROSC::AudioMixManager::$FadeCoroutine$d__15::*)()>(&VROSC::AudioMixManager::$FadeCoroutine$d__15::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioMixManager::$FadeCoroutine$d__15*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioMixManager::$FadeCoroutine$d__15::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (VROSC::AudioMixManager::$FadeCoroutine$d__15::*)()>(&VROSC::AudioMixManager::$FadeCoroutine$d__15::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioMixManager::$FadeCoroutine$d__15*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioMixManager::$FadeCoroutine$d__15::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::AudioMixManager::$FadeCoroutine$d__15::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioMixManager::$FadeCoroutine$d__15::*)()>(&VROSC::AudioMixManager::$FadeCoroutine$d__15::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioMixManager::$FadeCoroutine$d__15*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioMixManager::$FadeCoroutine$d__15::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::AudioMixManager::$FadeCoroutine$d__15::*)()>(&VROSC::AudioMixManager::$FadeCoroutine$d__15::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioMixManager::$FadeCoroutine$d__15*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioMixManager::$FadeCoroutine$d__15::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioMixManager::$FadeCoroutine$d__15::*)()>(&VROSC::AudioMixManager::$FadeCoroutine$d__15::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioMixManager::$FadeCoroutine$d__15*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
