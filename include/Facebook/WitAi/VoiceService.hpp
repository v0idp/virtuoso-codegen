// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Facebook.WitAi.IVoiceService
#include "Facebook/WitAi/IVoiceService.hpp"
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
  // Forward declaring type: VoiceService
  class VoiceService;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Facebook::WitAi::VoiceService);
DEFINE_IL2CPP_ARG_TYPE(::Facebook::WitAi::VoiceService*, "Facebook.WitAi", "VoiceService");
// Type namespace: Facebook.WitAi
namespace Facebook::WitAi {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Facebook.WitAi.VoiceService
  // [TokenAttribute] Offset: FFFFFFFF
  class VoiceService : public ::UnityEngine::MonoBehaviour/*, public ::Facebook::WitAi::IVoiceService*/ {
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
    // [TooltipAttribute] Offset: 0x5B13F0
    // public Facebook.WitAi.Events.VoiceEvents events
    // Size: 0x8
    // Offset: 0x18
    ::Facebook::WitAi::Events::VoiceEvents* events;
    // Field size check
    static_assert(sizeof(::Facebook::WitAi::Events::VoiceEvents*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Facebook::WitAi::IVoiceService
    operator ::Facebook::WitAi::IVoiceService() noexcept {
      return *reinterpret_cast<::Facebook::WitAi::IVoiceService*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public Facebook.WitAi.Events.VoiceEvents events
    ::Facebook::WitAi::Events::VoiceEvents*& dyn_events();
    // public System.Boolean get_Active()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_Active();
    // public System.Boolean get_IsRequestActive()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_IsRequestActive();
    // public Facebook.WitAi.Interfaces.ITranscriptionProvider get_TranscriptionProvider()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Facebook::WitAi::Interfaces::ITranscriptionProvider* get_TranscriptionProvider();
    // public System.Void set_TranscriptionProvider(Facebook.WitAi.Interfaces.ITranscriptionProvider value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_TranscriptionProvider(::Facebook::WitAi::Interfaces::ITranscriptionProvider* value);
    // public System.Boolean get_MicActive()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_MicActive();
    // public Facebook.WitAi.Events.VoiceEvents get_VoiceEvents()
    // Offset: 0x10FA17C
    ::Facebook::WitAi::Events::VoiceEvents* get_VoiceEvents();
    // public System.Void set_VoiceEvents(Facebook.WitAi.Events.VoiceEvents value)
    // Offset: 0x10FA184
    void set_VoiceEvents(::Facebook::WitAi::Events::VoiceEvents* value);
    // public System.Boolean get_ShouldSendMicData()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_ShouldSendMicData();
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
    // public System.Void Activate(System.String text)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Activate(::StringW text);
    // public System.Void Activate(System.String text, Facebook.WitAi.Configuration.WitRequestOptions requestOptions)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Activate(::StringW text, ::Facebook::WitAi::Configuration::WitRequestOptions* requestOptions);
    // protected System.Void .ctor()
    // Offset: 0x10FA18C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VoiceService* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Facebook::WitAi::VoiceService::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VoiceService*, creationType>()));
    }
  }; // Facebook.WitAi.VoiceService
  #pragma pack(pop)
  static check_size<sizeof(VoiceService), 24 + sizeof(::Facebook::WitAi::Events::VoiceEvents*)> __Facebook_WitAi_VoiceServiceSizeCheck;
  static_assert(sizeof(VoiceService) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Facebook::WitAi::VoiceService::get_Active
// Il2CppName: get_Active
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Facebook::WitAi::VoiceService::*)()>(&Facebook::WitAi::VoiceService::get_Active)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::VoiceService*), "get_Active", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::VoiceService::get_IsRequestActive
// Il2CppName: get_IsRequestActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Facebook::WitAi::VoiceService::*)()>(&Facebook::WitAi::VoiceService::get_IsRequestActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::VoiceService*), "get_IsRequestActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::VoiceService::get_TranscriptionProvider
// Il2CppName: get_TranscriptionProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Facebook::WitAi::Interfaces::ITranscriptionProvider* (Facebook::WitAi::VoiceService::*)()>(&Facebook::WitAi::VoiceService::get_TranscriptionProvider)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::VoiceService*), "get_TranscriptionProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::VoiceService::set_TranscriptionProvider
// Il2CppName: set_TranscriptionProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::VoiceService::*)(::Facebook::WitAi::Interfaces::ITranscriptionProvider*)>(&Facebook::WitAi::VoiceService::set_TranscriptionProvider)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Interfaces", "ITranscriptionProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::VoiceService*), "set_TranscriptionProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::VoiceService::get_MicActive
// Il2CppName: get_MicActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Facebook::WitAi::VoiceService::*)()>(&Facebook::WitAi::VoiceService::get_MicActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::VoiceService*), "get_MicActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::VoiceService::get_VoiceEvents
// Il2CppName: get_VoiceEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Facebook::WitAi::Events::VoiceEvents* (Facebook::WitAi::VoiceService::*)()>(&Facebook::WitAi::VoiceService::get_VoiceEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::VoiceService*), "get_VoiceEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::VoiceService::set_VoiceEvents
// Il2CppName: set_VoiceEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::VoiceService::*)(::Facebook::WitAi::Events::VoiceEvents*)>(&Facebook::WitAi::VoiceService::set_VoiceEvents)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Events", "VoiceEvents")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::VoiceService*), "set_VoiceEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::VoiceService::get_ShouldSendMicData
// Il2CppName: get_ShouldSendMicData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Facebook::WitAi::VoiceService::*)()>(&Facebook::WitAi::VoiceService::get_ShouldSendMicData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::VoiceService*), "get_ShouldSendMicData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::VoiceService::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::VoiceService::*)()>(&Facebook::WitAi::VoiceService::Activate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::VoiceService*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::VoiceService::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::VoiceService::*)(::Facebook::WitAi::Configuration::WitRequestOptions*)>(&Facebook::WitAi::VoiceService::Activate)> {
  static const MethodInfo* get() {
    static auto* requestOptions = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Configuration", "WitRequestOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::VoiceService*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requestOptions});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::VoiceService::ActivateImmediately
// Il2CppName: ActivateImmediately
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::VoiceService::*)()>(&Facebook::WitAi::VoiceService::ActivateImmediately)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::VoiceService*), "ActivateImmediately", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::VoiceService::ActivateImmediately
// Il2CppName: ActivateImmediately
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::VoiceService::*)(::Facebook::WitAi::Configuration::WitRequestOptions*)>(&Facebook::WitAi::VoiceService::ActivateImmediately)> {
  static const MethodInfo* get() {
    static auto* requestOptions = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Configuration", "WitRequestOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::VoiceService*), "ActivateImmediately", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requestOptions});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::VoiceService::Deactivate
// Il2CppName: Deactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::VoiceService::*)()>(&Facebook::WitAi::VoiceService::Deactivate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::VoiceService*), "Deactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::VoiceService::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::VoiceService::*)(::StringW)>(&Facebook::WitAi::VoiceService::Activate)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::VoiceService*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::VoiceService::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::VoiceService::*)(::StringW, ::Facebook::WitAi::Configuration::WitRequestOptions*)>(&Facebook::WitAi::VoiceService::Activate)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* requestOptions = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Configuration", "WitRequestOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::VoiceService*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, requestOptions});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::VoiceService::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!