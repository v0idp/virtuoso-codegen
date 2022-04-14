// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC::AudioReactive
namespace VROSC::AudioReactive {
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: Environment
  class Environment;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: VROSC.AudioReactive
namespace VROSC::AudioReactive {
  // Forward declaring type: AudioReactiveCore
  class AudioReactiveCore;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::AudioReactive::AudioReactiveCore);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::AudioReactiveCore*, "VROSC.AudioReactive", "AudioReactiveCore");
// Type namespace: VROSC.AudioReactive
namespace VROSC::AudioReactive {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.AudioReactive.AudioReactiveCore
  // [TokenAttribute] Offset: FFFFFFFF
  class AudioReactiveCore : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::VROSC::AudioReactive::AudioReactiveCore::BufferValue
    class BufferValue;
    public:
    // private System.Single _fallSpeed
    // Size: 0x4
    // Offset: 0x18
    float fallSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _coolDown
    // Size: 0x4
    // Offset: 0x1C
    float coolDown;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private VROSC.Environment _environmentSettings
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::Environment* environmentSettings;
    // Field size check
    static_assert(sizeof(::VROSC::Environment*) == 0x8);
    // private VROSC.AudioReactive.AudioReactiveCore/VROSC.AudioReactive.BufferValue _bass
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::AudioReactive::AudioReactiveCore::BufferValue* bass;
    // Field size check
    static_assert(sizeof(::VROSC::AudioReactive::AudioReactiveCore::BufferValue*) == 0x8);
    // private VROSC.AudioReactive.AudioReactiveCore/VROSC.AudioReactive.BufferValue _mid
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::AudioReactive::AudioReactiveCore::BufferValue* mid;
    // Field size check
    static_assert(sizeof(::VROSC::AudioReactive::AudioReactiveCore::BufferValue*) == 0x8);
    // private VROSC.AudioReactive.AudioReactiveCore/VROSC.AudioReactive.BufferValue _top
    // Size: 0x8
    // Offset: 0x38
    ::VROSC::AudioReactive::AudioReactiveCore::BufferValue* top;
    // Field size check
    static_assert(sizeof(::VROSC::AudioReactive::AudioReactiveCore::BufferValue*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static public System.Action`1<System.Int32> OnBeat
    static ::System::Action_1<int>* _get_OnBeat();
    // Set static field: static public System.Action`1<System.Int32> OnBeat
    static void _set_OnBeat(::System::Action_1<int>* value);
    // Get instance field reference: private System.Single _fallSpeed
    [[deprecated]] float& dyn__fallSpeed();
    // Get instance field reference: private System.Single _coolDown
    [[deprecated]] float& dyn__coolDown();
    // Get instance field reference: private VROSC.Environment _environmentSettings
    [[deprecated]] ::VROSC::Environment*& dyn__environmentSettings();
    // Get instance field reference: private VROSC.AudioReactive.AudioReactiveCore/VROSC.AudioReactive.BufferValue _bass
    [[deprecated]] ::VROSC::AudioReactive::AudioReactiveCore::BufferValue*& dyn__bass();
    // Get instance field reference: private VROSC.AudioReactive.AudioReactiveCore/VROSC.AudioReactive.BufferValue _mid
    [[deprecated]] ::VROSC::AudioReactive::AudioReactiveCore::BufferValue*& dyn__mid();
    // Get instance field reference: private VROSC.AudioReactive.AudioReactiveCore/VROSC.AudioReactive.BufferValue _top
    [[deprecated]] ::VROSC::AudioReactive::AudioReactiveCore::BufferValue*& dyn__top();
    // private System.Void Awake()
    // Offset: 0x970E40
    void Awake();
    // private System.Void Update()
    // Offset: 0x971180
    void Update();
    // private System.Void SetCurrentEnvironment(VROSC.Environment environmentSettings)
    // Offset: 0x971300
    void SetCurrentEnvironment(::VROSC::Environment* environmentSettings);
    // private System.Void SendBeat(System.Int32 beat)
    // Offset: 0x971308
    void SendBeat(int beat);
    // private System.Void SendPlayermadeSound(System.Int32 beat)
    // Offset: 0x971384
    void SendPlayermadeSound(int beat);
    // private System.Void OnDestroy()
    // Offset: 0x971400
    void OnDestroy();
    // private System.Void <Awake>b__8_0()
    // Offset: 0x971630
    void $Awake$b__8_0();
    // private System.Void <Awake>b__8_1()
    // Offset: 0x971638
    void $Awake$b__8_1();
    // private System.Void <Awake>b__8_2()
    // Offset: 0x971640
    void $Awake$b__8_2();
    // public System.Void .ctor()
    // Offset: 0x971594
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioReactiveCore* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::AudioReactive::AudioReactiveCore::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioReactiveCore*, creationType>()));
    }
  }; // VROSC.AudioReactive.AudioReactiveCore
  #pragma pack(pop)
  static check_size<sizeof(AudioReactiveCore), 56 + sizeof(::VROSC::AudioReactive::AudioReactiveCore::BufferValue*)> __VROSC_AudioReactive_AudioReactiveCoreSizeCheck;
  static_assert(sizeof(AudioReactiveCore) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::AudioReactive::AudioReactiveCore::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioReactive::AudioReactiveCore::*)()>(&VROSC::AudioReactive::AudioReactiveCore::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::AudioReactiveCore*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::AudioReactiveCore::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioReactive::AudioReactiveCore::*)()>(&VROSC::AudioReactive::AudioReactiveCore::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::AudioReactiveCore*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::AudioReactiveCore::SetCurrentEnvironment
// Il2CppName: SetCurrentEnvironment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioReactive::AudioReactiveCore::*)(::VROSC::Environment*)>(&VROSC::AudioReactive::AudioReactiveCore::SetCurrentEnvironment)> {
  static const MethodInfo* get() {
    static auto* environmentSettings = &::il2cpp_utils::GetClassFromName("VROSC", "Environment")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::AudioReactiveCore*), "SetCurrentEnvironment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{environmentSettings});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::AudioReactiveCore::SendBeat
// Il2CppName: SendBeat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioReactive::AudioReactiveCore::*)(int)>(&VROSC::AudioReactive::AudioReactiveCore::SendBeat)> {
  static const MethodInfo* get() {
    static auto* beat = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::AudioReactiveCore*), "SendBeat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beat});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::AudioReactiveCore::SendPlayermadeSound
// Il2CppName: SendPlayermadeSound
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioReactive::AudioReactiveCore::*)(int)>(&VROSC::AudioReactive::AudioReactiveCore::SendPlayermadeSound)> {
  static const MethodInfo* get() {
    static auto* beat = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::AudioReactiveCore*), "SendPlayermadeSound", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beat});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::AudioReactiveCore::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioReactive::AudioReactiveCore::*)()>(&VROSC::AudioReactive::AudioReactiveCore::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::AudioReactiveCore*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::AudioReactiveCore::$Awake$b__8_0
// Il2CppName: <Awake>b__8_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioReactive::AudioReactiveCore::*)()>(&VROSC::AudioReactive::AudioReactiveCore::$Awake$b__8_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::AudioReactiveCore*), "<Awake>b__8_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::AudioReactiveCore::$Awake$b__8_1
// Il2CppName: <Awake>b__8_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioReactive::AudioReactiveCore::*)()>(&VROSC::AudioReactive::AudioReactiveCore::$Awake$b__8_1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::AudioReactiveCore*), "<Awake>b__8_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::AudioReactiveCore::$Awake$b__8_2
// Il2CppName: <Awake>b__8_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioReactive::AudioReactiveCore::*)()>(&VROSC::AudioReactive::AudioReactiveCore::$Awake$b__8_2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::AudioReactiveCore*), "<Awake>b__8_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::AudioReactiveCore::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
