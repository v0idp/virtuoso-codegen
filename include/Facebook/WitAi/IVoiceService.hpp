// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Facebook::WitAi::Events
namespace Facebook::WitAi::Events {
  // Forward declaring type: VoiceEvents
  class VoiceEvents;
}
// Forward declaring namespace: Facebook::WitAi::Interfaces
namespace Facebook::WitAi::Interfaces {
  // Forward declaring type: ITranscriptionProvider
  class ITranscriptionProvider;
}
// Forward declaring namespace: Facebook::WitAi::Configuration
namespace Facebook::WitAi::Configuration {
  // Forward declaring type: WitRequestOptions
  class WitRequestOptions;
}
// Completed forward declares
// Type namespace: Facebook.WitAi
namespace Facebook::WitAi {
  // Forward declaring type: IVoiceService
  class IVoiceService;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Facebook::WitAi::IVoiceService);
DEFINE_IL2CPP_ARG_TYPE(::Facebook::WitAi::IVoiceService*, "Facebook.WitAi", "IVoiceService");
// Type namespace: Facebook.WitAi
namespace Facebook::WitAi {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Facebook.WitAi.IVoiceService
  // [TokenAttribute] Offset: FFFFFFFF
  class IVoiceService {
    public:
    // public System.Boolean get_Active()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_Active();
    // public System.Boolean get_IsRequestActive()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_IsRequestActive();
    // public System.Boolean get_MicActive()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_MicActive();
    // public Facebook.WitAi.Events.VoiceEvents get_VoiceEvents()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Facebook::WitAi::Events::VoiceEvents* get_VoiceEvents();
    // public System.Void set_VoiceEvents(Facebook.WitAi.Events.VoiceEvents value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_VoiceEvents(::Facebook::WitAi::Events::VoiceEvents* value);
    // public Facebook.WitAi.Interfaces.ITranscriptionProvider get_TranscriptionProvider()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Facebook::WitAi::Interfaces::ITranscriptionProvider* get_TranscriptionProvider();
    // public System.Void set_TranscriptionProvider(Facebook.WitAi.Interfaces.ITranscriptionProvider value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_TranscriptionProvider(::Facebook::WitAi::Interfaces::ITranscriptionProvider* value);
    // public System.Void Activate()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Activate();
    // public System.Void Activate(Facebook.WitAi.Configuration.WitRequestOptions requestOptions)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Activate(::Facebook::WitAi::Configuration::WitRequestOptions* requestOptions);
    // public System.Void ActivateImmediately()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ActivateImmediately();
    // public System.Void ActivateImmediately(Facebook.WitAi.Configuration.WitRequestOptions requestOptions)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ActivateImmediately(::Facebook::WitAi::Configuration::WitRequestOptions* requestOptions);
    // public System.Void Deactivate()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Deactivate();
    // public System.Void Activate(System.String transcription)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Activate(::StringW transcription);
    // public System.Void Activate(System.String text, Facebook.WitAi.Configuration.WitRequestOptions requestOptions)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Activate(::StringW text, ::Facebook::WitAi::Configuration::WitRequestOptions* requestOptions);
  }; // Facebook.WitAi.IVoiceService
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Facebook::WitAi::IVoiceService::get_Active
// Il2CppName: get_Active
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Facebook::WitAi::IVoiceService::*)()>(&Facebook::WitAi::IVoiceService::get_Active)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::IVoiceService*), "get_Active", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::IVoiceService::get_IsRequestActive
// Il2CppName: get_IsRequestActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Facebook::WitAi::IVoiceService::*)()>(&Facebook::WitAi::IVoiceService::get_IsRequestActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::IVoiceService*), "get_IsRequestActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::IVoiceService::get_MicActive
// Il2CppName: get_MicActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Facebook::WitAi::IVoiceService::*)()>(&Facebook::WitAi::IVoiceService::get_MicActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::IVoiceService*), "get_MicActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::IVoiceService::get_VoiceEvents
// Il2CppName: get_VoiceEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Facebook::WitAi::Events::VoiceEvents* (Facebook::WitAi::IVoiceService::*)()>(&Facebook::WitAi::IVoiceService::get_VoiceEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::IVoiceService*), "get_VoiceEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::IVoiceService::set_VoiceEvents
// Il2CppName: set_VoiceEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::IVoiceService::*)(::Facebook::WitAi::Events::VoiceEvents*)>(&Facebook::WitAi::IVoiceService::set_VoiceEvents)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Events", "VoiceEvents")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::IVoiceService*), "set_VoiceEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::IVoiceService::get_TranscriptionProvider
// Il2CppName: get_TranscriptionProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Facebook::WitAi::Interfaces::ITranscriptionProvider* (Facebook::WitAi::IVoiceService::*)()>(&Facebook::WitAi::IVoiceService::get_TranscriptionProvider)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::IVoiceService*), "get_TranscriptionProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::IVoiceService::set_TranscriptionProvider
// Il2CppName: set_TranscriptionProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::IVoiceService::*)(::Facebook::WitAi::Interfaces::ITranscriptionProvider*)>(&Facebook::WitAi::IVoiceService::set_TranscriptionProvider)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Interfaces", "ITranscriptionProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::IVoiceService*), "set_TranscriptionProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::IVoiceService::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::IVoiceService::*)()>(&Facebook::WitAi::IVoiceService::Activate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::IVoiceService*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::IVoiceService::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::IVoiceService::*)(::Facebook::WitAi::Configuration::WitRequestOptions*)>(&Facebook::WitAi::IVoiceService::Activate)> {
  static const MethodInfo* get() {
    static auto* requestOptions = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Configuration", "WitRequestOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::IVoiceService*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requestOptions});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::IVoiceService::ActivateImmediately
// Il2CppName: ActivateImmediately
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::IVoiceService::*)()>(&Facebook::WitAi::IVoiceService::ActivateImmediately)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::IVoiceService*), "ActivateImmediately", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::IVoiceService::ActivateImmediately
// Il2CppName: ActivateImmediately
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::IVoiceService::*)(::Facebook::WitAi::Configuration::WitRequestOptions*)>(&Facebook::WitAi::IVoiceService::ActivateImmediately)> {
  static const MethodInfo* get() {
    static auto* requestOptions = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Configuration", "WitRequestOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::IVoiceService*), "ActivateImmediately", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requestOptions});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::IVoiceService::Deactivate
// Il2CppName: Deactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::IVoiceService::*)()>(&Facebook::WitAi::IVoiceService::Deactivate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::IVoiceService*), "Deactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::IVoiceService::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::IVoiceService::*)(::StringW)>(&Facebook::WitAi::IVoiceService::Activate)> {
  static const MethodInfo* get() {
    static auto* transcription = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::IVoiceService*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transcription});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::IVoiceService::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::IVoiceService::*)(::StringW, ::Facebook::WitAi::Configuration::WitRequestOptions*)>(&Facebook::WitAi::IVoiceService::Activate)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* requestOptions = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Configuration", "WitRequestOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::IVoiceService*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, requestOptions});
  }
};