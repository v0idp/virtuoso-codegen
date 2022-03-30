// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1
#include "Oculus/Voice/Core/Bindings/Android/BaseAndroidConnectionImpl_1.hpp"
// Including type: Oculus.Voice.Interfaces.IPlatformVoiceService
#include "Oculus/Voice/Interfaces/IPlatformVoiceService.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Voice::Bindings::Android
namespace Oculus::Voice::Bindings::Android {
  // Forward declaring type: VoiceSDKBinding
  class VoiceSDKBinding;
  // Forward declaring type: VoiceSDKListenerBinding
  class VoiceSDKListenerBinding;
}
// Forward declaring namespace: Facebook::WitAi::Interfaces
namespace Facebook::WitAi::Interfaces {
  // Forward declaring type: ITranscriptionProvider
  class ITranscriptionProvider;
}
// Forward declaring namespace: Facebook::WitAi::Events
namespace Facebook::WitAi::Events {
  // Forward declaring type: VoiceEvents
  class VoiceEvents;
}
// Forward declaring namespace: Facebook::WitAi::Configuration
namespace Facebook::WitAi::Configuration {
  // Forward declaring type: WitRuntimeConfiguration
  class WitRuntimeConfiguration;
  // Forward declaring type: WitRequestOptions
  class WitRequestOptions;
}
// Completed forward declares
// Type namespace: Oculus.Voice.Bindings.Android
namespace Oculus::Voice::Bindings::Android {
  // Forward declaring type: VoiceSDKImpl
  class VoiceSDKImpl;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Voice::Bindings::Android::VoiceSDKImpl);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Voice::Bindings::Android::VoiceSDKImpl*, "Oculus.Voice.Bindings.Android", "VoiceSDKImpl");
// Type namespace: Oculus.Voice.Bindings.Android
namespace Oculus::Voice::Bindings::Android {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Voice.Bindings.Android.VoiceSDKImpl
  // [TokenAttribute] Offset: FFFFFFFF
  class VoiceSDKImpl : public ::Oculus::Voice::Core::Bindings::Android::BaseAndroidConnectionImpl_1<::Oculus::Voice::Bindings::Android::VoiceSDKBinding*>/*, public ::Oculus::Voice::Interfaces::IPlatformVoiceService*/ {
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
    // private Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding eventBinding
    // Size: 0x8
    // Offset: 0x28
    ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding* eventBinding;
    // Field size check
    static_assert(sizeof(::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*) == 0x8);
    // private Facebook.WitAi.Interfaces.ITranscriptionProvider <TranscriptionProvider>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::Facebook::WitAi::Interfaces::ITranscriptionProvider* TranscriptionProvider;
    // Field size check
    static_assert(sizeof(::Facebook::WitAi::Interfaces::ITranscriptionProvider*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Oculus::Voice::Interfaces::IPlatformVoiceService
    operator ::Oculus::Voice::Interfaces::IPlatformVoiceService() noexcept {
      return *reinterpret_cast<::Oculus::Voice::Interfaces::IPlatformVoiceService*>(this);
    }
    // Get instance field reference: private Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding eventBinding
    ::Oculus::Voice::Bindings::Android::VoiceSDKListenerBinding*& dyn_eventBinding();
    // Get instance field reference: private Facebook.WitAi.Interfaces.ITranscriptionProvider <TranscriptionProvider>k__BackingField
    ::Facebook::WitAi::Interfaces::ITranscriptionProvider*& dyn_$TranscriptionProvider$k__BackingField();
    // public System.Boolean get_PlatformSupportsWit()
    // Offset: 0x12E6154
    bool get_PlatformSupportsWit();
    // public System.Boolean get_Active()
    // Offset: 0x12E616C
    bool get_Active();
    // public System.Boolean get_IsRequestActive()
    // Offset: 0x12E6184
    bool get_IsRequestActive();
    // public System.Boolean get_MicActive()
    // Offset: 0x12E619C
    bool get_MicActive();
    // public Facebook.WitAi.Events.VoiceEvents get_VoiceEvents()
    // Offset: 0x12E61CC
    ::Facebook::WitAi::Events::VoiceEvents* get_VoiceEvents();
    // public System.Void set_VoiceEvents(Facebook.WitAi.Events.VoiceEvents value)
    // Offset: 0x12E61E8
    void set_VoiceEvents(::Facebook::WitAi::Events::VoiceEvents* value);
    // public Facebook.WitAi.Interfaces.ITranscriptionProvider get_TranscriptionProvider()
    // Offset: 0x12E62F0
    ::Facebook::WitAi::Interfaces::ITranscriptionProvider* get_TranscriptionProvider();
    // public System.Void set_TranscriptionProvider(Facebook.WitAi.Interfaces.ITranscriptionProvider value)
    // Offset: 0x12E62F8
    void set_TranscriptionProvider(::Facebook::WitAi::Interfaces::ITranscriptionProvider* value);
    // public System.Void SetRuntimeConfiguration(Facebook.WitAi.Configuration.WitRuntimeConfiguration configuration)
    // Offset: 0x12E61B4
    void SetRuntimeConfiguration(::Facebook::WitAi::Configuration::WitRuntimeConfiguration* configuration);
    // public System.Void Activate(System.String text)
    // Offset: 0x12E6300
    void Activate(::StringW text);
    // public System.Void Activate(System.String text, Facebook.WitAi.Configuration.WitRequestOptions requestOptions)
    // Offset: 0x12E6318
    void Activate(::StringW text, ::Facebook::WitAi::Configuration::WitRequestOptions* requestOptions);
    // public System.Void Activate()
    // Offset: 0x12E6330
    void Activate();
    // public System.Void Activate(Facebook.WitAi.Configuration.WitRequestOptions requestOptions)
    // Offset: 0x12E6348
    void Activate(::Facebook::WitAi::Configuration::WitRequestOptions* requestOptions);
    // public System.Void ActivateImmediately()
    // Offset: 0x12E6360
    void ActivateImmediately();
    // public System.Void ActivateImmediately(Facebook.WitAi.Configuration.WitRequestOptions requestOptions)
    // Offset: 0x12E6378
    void ActivateImmediately(::Facebook::WitAi::Configuration::WitRequestOptions* requestOptions);
    // public System.Void Deactivate()
    // Offset: 0x12E6390
    void Deactivate();
    // public System.Void .ctor()
    // Offset: 0x12E4E88
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VoiceSDKImpl* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Voice::Bindings::Android::VoiceSDKImpl::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VoiceSDKImpl*, creationType>()));
    }
  }; // Oculus.Voice.Bindings.Android.VoiceSDKImpl
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKImpl::get_PlatformSupportsWit
// Il2CppName: get_PlatformSupportsWit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Voice::Bindings::Android::VoiceSDKImpl::*)()>(&Oculus::Voice::Bindings::Android::VoiceSDKImpl::get_PlatformSupportsWit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKImpl*), "get_PlatformSupportsWit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKImpl::get_Active
// Il2CppName: get_Active
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Voice::Bindings::Android::VoiceSDKImpl::*)()>(&Oculus::Voice::Bindings::Android::VoiceSDKImpl::get_Active)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKImpl*), "get_Active", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKImpl::get_IsRequestActive
// Il2CppName: get_IsRequestActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Voice::Bindings::Android::VoiceSDKImpl::*)()>(&Oculus::Voice::Bindings::Android::VoiceSDKImpl::get_IsRequestActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKImpl*), "get_IsRequestActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKImpl::get_MicActive
// Il2CppName: get_MicActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Voice::Bindings::Android::VoiceSDKImpl::*)()>(&Oculus::Voice::Bindings::Android::VoiceSDKImpl::get_MicActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKImpl*), "get_MicActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKImpl::get_VoiceEvents
// Il2CppName: get_VoiceEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Facebook::WitAi::Events::VoiceEvents* (Oculus::Voice::Bindings::Android::VoiceSDKImpl::*)()>(&Oculus::Voice::Bindings::Android::VoiceSDKImpl::get_VoiceEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKImpl*), "get_VoiceEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKImpl::set_VoiceEvents
// Il2CppName: set_VoiceEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKImpl::*)(::Facebook::WitAi::Events::VoiceEvents*)>(&Oculus::Voice::Bindings::Android::VoiceSDKImpl::set_VoiceEvents)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Events", "VoiceEvents")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKImpl*), "set_VoiceEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKImpl::get_TranscriptionProvider
// Il2CppName: get_TranscriptionProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Facebook::WitAi::Interfaces::ITranscriptionProvider* (Oculus::Voice::Bindings::Android::VoiceSDKImpl::*)()>(&Oculus::Voice::Bindings::Android::VoiceSDKImpl::get_TranscriptionProvider)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKImpl*), "get_TranscriptionProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKImpl::set_TranscriptionProvider
// Il2CppName: set_TranscriptionProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKImpl::*)(::Facebook::WitAi::Interfaces::ITranscriptionProvider*)>(&Oculus::Voice::Bindings::Android::VoiceSDKImpl::set_TranscriptionProvider)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Interfaces", "ITranscriptionProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKImpl*), "set_TranscriptionProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKImpl::SetRuntimeConfiguration
// Il2CppName: SetRuntimeConfiguration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKImpl::*)(::Facebook::WitAi::Configuration::WitRuntimeConfiguration*)>(&Oculus::Voice::Bindings::Android::VoiceSDKImpl::SetRuntimeConfiguration)> {
  static const MethodInfo* get() {
    static auto* configuration = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Configuration", "WitRuntimeConfiguration")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKImpl*), "SetRuntimeConfiguration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{configuration});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKImpl::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKImpl::*)(::StringW)>(&Oculus::Voice::Bindings::Android::VoiceSDKImpl::Activate)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKImpl*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKImpl::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKImpl::*)(::StringW, ::Facebook::WitAi::Configuration::WitRequestOptions*)>(&Oculus::Voice::Bindings::Android::VoiceSDKImpl::Activate)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* requestOptions = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Configuration", "WitRequestOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKImpl*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, requestOptions});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKImpl::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKImpl::*)()>(&Oculus::Voice::Bindings::Android::VoiceSDKImpl::Activate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKImpl*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKImpl::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKImpl::*)(::Facebook::WitAi::Configuration::WitRequestOptions*)>(&Oculus::Voice::Bindings::Android::VoiceSDKImpl::Activate)> {
  static const MethodInfo* get() {
    static auto* requestOptions = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Configuration", "WitRequestOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKImpl*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requestOptions});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKImpl::ActivateImmediately
// Il2CppName: ActivateImmediately
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKImpl::*)()>(&Oculus::Voice::Bindings::Android::VoiceSDKImpl::ActivateImmediately)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKImpl*), "ActivateImmediately", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKImpl::ActivateImmediately
// Il2CppName: ActivateImmediately
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKImpl::*)(::Facebook::WitAi::Configuration::WitRequestOptions*)>(&Oculus::Voice::Bindings::Android::VoiceSDKImpl::ActivateImmediately)> {
  static const MethodInfo* get() {
    static auto* requestOptions = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Configuration", "WitRequestOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKImpl*), "ActivateImmediately", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requestOptions});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKImpl::Deactivate
// Il2CppName: Deactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Bindings::Android::VoiceSDKImpl::*)()>(&Oculus::Voice::Bindings::Android::VoiceSDKImpl::Deactivate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKImpl*), "Deactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKImpl::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
