// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.AndroidJavaProxy
#include "UnityEngine/AndroidJavaProxy.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Facebook::WitAi::Events
namespace Facebook::WitAi::Events {
  // Forward declaring type: VoiceEvents
  class VoiceEvents;
}
// Completed forward declares
// Type namespace: Oculus.Voice.Bindings.Android
namespace Oculus::Voice::Bindings::Android {
  // Forward declaring type: VoiceSDKListenerBinding
  class VoiceSDKListenerBinding;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*, "Oculus.Voice.Bindings.Android", "VoiceSDKListenerBinding");
// Type namespace: Oculus.Voice.Bindings.Android
namespace Oculus::Voice::Bindings::Android {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding
  // [TokenAttribute] Offset: FFFFFFFF
  class VoiceSDKListenerBinding : public ::UnityEngine::AndroidJavaProxy {
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
    // private Facebook.WitAi.Events.VoiceEvents voiceEvents
    // Size: 0x8
    // Offset: 0x20
    ::Facebook::WitAi::Events::VoiceEvents* voiceEvents;
    // Field size check
    static_assert(sizeof(::Facebook::WitAi::Events::VoiceEvents*) == 0x8);
    public:
    // Creating conversion operator: operator ::Facebook::WitAi::Events::VoiceEvents*
    constexpr operator ::Facebook::WitAi::Events::VoiceEvents*() const noexcept {
      return voiceEvents;
    }
    // Get instance field reference: private Facebook.WitAi.Events.VoiceEvents voiceEvents
    ::Facebook::WitAi::Events::VoiceEvents*& dyn_voiceEvents();
    // public Facebook.WitAi.Events.VoiceEvents get_VoiceEvents()
    // Offset: 0x12E63A8
    ::Facebook::WitAi::Events::VoiceEvents* get_VoiceEvents();
    // public System.Void .ctor(Facebook.WitAi.Events.VoiceEvents voiceEvents)
    // Offset: 0x12E6260
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VoiceSDKListenerBinding* New_ctor(::Facebook::WitAi::Events::VoiceEvents* voiceEvents) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VoiceSDKListenerBinding*, creationType>(voiceEvents)));
    }
    // public System.Void onResponse(System.String response)
    // Offset: 0x12E63B0
    void onResponse(::StringW response);
    // public System.Void onError(System.String error, System.String message)
    // Offset: 0x12E643C
    void onError(::StringW error, ::StringW message);
    // public System.Void onMicLevelChanged(System.Single level)
    // Offset: 0x12E64C0
    void onMicLevelChanged(float level);
    // public System.Void onRequestCreated()
    // Offset: 0x12E653C
    void onRequestCreated();
    // public System.Void onStartListening()
    // Offset: 0x12E65A8
    void onStartListening();
    // public System.Void onStoppedListening()
    // Offset: 0x12E65D0
    void onStoppedListening();
    // public System.Void onStoppedListeningDueToInactivity()
    // Offset: 0x12E65F8
    void onStoppedListeningDueToInactivity();
    // public System.Void onStoppedListeningDueToTimeout()
    // Offset: 0x12E6620
    void onStoppedListeningDueToTimeout();
    // public System.Void onStoppedListeningDueToDeactivation()
    // Offset: 0x12E6648
    void onStoppedListeningDueToDeactivation();
    // public System.Void onMicDataSent()
    // Offset: 0x12E6670
    void onMicDataSent();
    // public System.Void onMinimumWakeThresholdHit()
    // Offset: 0x12E6698
    void onMinimumWakeThresholdHit();
    // public System.Void onPartialTranscription(System.String transcription)
    // Offset: 0x12E66C0
    void onPartialTranscription(::StringW transcription);
    // public System.Void onFullTranscription(System.String transcription)
    // Offset: 0x12E673C
    void onFullTranscription(::StringW transcription);
  }; // Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding
  #pragma pack(pop)
  static check_size<sizeof(VoiceSDKListenerBinding), 32 + sizeof(::Facebook::WitAi::Events::VoiceEvents*)> __Oculus_Voice_Bindings_Android_VoiceSDKListenerBindingSizeCheck;
  static_assert(sizeof(VoiceSDKListenerBinding) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::get_VoiceEvents
// Il2CppName: get_VoiceEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Facebook::WitAi::Events::VoiceEvents* (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)()>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::get_VoiceEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "get_VoiceEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onResponse
// Il2CppName: onResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(::StringW)>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onResponse)> {
  static const MethodInfo* get() {
    static auto* response = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "onResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{response});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onError
// Il2CppName: onError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(::StringW, ::StringW)>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onError)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "onError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error, message});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onMicLevelChanged
// Il2CppName: onMicLevelChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(float)>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onMicLevelChanged)> {
  static const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "onMicLevelChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onRequestCreated
// Il2CppName: onRequestCreated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)()>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onRequestCreated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "onRequestCreated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onStartListening
// Il2CppName: onStartListening
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)()>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onStartListening)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "onStartListening", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onStoppedListening
// Il2CppName: onStoppedListening
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)()>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onStoppedListening)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "onStoppedListening", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onStoppedListeningDueToInactivity
// Il2CppName: onStoppedListeningDueToInactivity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)()>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onStoppedListeningDueToInactivity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "onStoppedListeningDueToInactivity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onStoppedListeningDueToTimeout
// Il2CppName: onStoppedListeningDueToTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)()>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onStoppedListeningDueToTimeout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "onStoppedListeningDueToTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onStoppedListeningDueToDeactivation
// Il2CppName: onStoppedListeningDueToDeactivation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)()>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onStoppedListeningDueToDeactivation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "onStoppedListeningDueToDeactivation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onMicDataSent
// Il2CppName: onMicDataSent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)()>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onMicDataSent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "onMicDataSent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onMinimumWakeThresholdHit
// Il2CppName: onMinimumWakeThresholdHit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)()>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onMinimumWakeThresholdHit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "onMinimumWakeThresholdHit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onPartialTranscription
// Il2CppName: onPartialTranscription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(::StringW)>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onPartialTranscription)> {
  static const MethodInfo* get() {
    static auto* transcription = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "onPartialTranscription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transcription});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onFullTranscription
// Il2CppName: onFullTranscription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::*)(::StringW)>(&Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding::onFullTranscription)> {
  static const MethodInfo* get() {
    static auto* transcription = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*), "onFullTranscription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transcription});
  }
};