// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Facebook::WitAi::Configuration
namespace Facebook::WitAi::Configuration {
  // Forward declaring type: WitRuntimeConfiguration
  class WitRuntimeConfiguration;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AndroidJavaObject
  class AndroidJavaObject;
}
// Completed forward declares
// Type namespace: Oculus.Voice.Bindings.Android
namespace Oculus::Voice::Bindings::Android {
  // Forward declaring type: VoiceSDKConfigBinding
  class VoiceSDKConfigBinding;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Voice::Bindings::Android::VoiceSDKConfigBinding);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Voice::Bindings::Android::VoiceSDKConfigBinding*, "Oculus.Voice.Bindings.Android", "VoiceSDKConfigBinding");
// Type namespace: Oculus.Voice.Bindings.Android
namespace Oculus::Voice::Bindings::Android {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Voice.Bindings.Android.VoiceSDKConfigBinding
  // [TokenAttribute] Offset: FFFFFFFF
  class VoiceSDKConfigBinding : public ::Il2CppObject {
    public:
    public:
    // private Facebook.WitAi.Configuration.WitRuntimeConfiguration configuration
    // Size: 0x8
    // Offset: 0x10
    ::Facebook::WitAi::Configuration::WitRuntimeConfiguration* configuration;
    // Field size check
    static_assert(sizeof(::Facebook::WitAi::Configuration::WitRuntimeConfiguration*) == 0x8);
    public:
    // Creating conversion operator: operator ::Facebook::WitAi::Configuration::WitRuntimeConfiguration*
    constexpr operator ::Facebook::WitAi::Configuration::WitRuntimeConfiguration*() const noexcept {
      return configuration;
    }
    // Get instance field reference: private Facebook.WitAi.Configuration.WitRuntimeConfiguration configuration
    [[deprecated]] ::Facebook::WitAi::Configuration::WitRuntimeConfiguration*& dyn_configuration();
    // public System.Void .ctor(Facebook.WitAi.Configuration.WitRuntimeConfiguration config)
    // Offset: 0x18E9EA8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VoiceSDKConfigBinding* New_ctor(::Facebook::WitAi::Configuration::WitRuntimeConfiguration* config) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Voice::Bindings::Android::VoiceSDKConfigBinding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VoiceSDKConfigBinding*, creationType>(config)));
    }
    // public UnityEngine.AndroidJavaObject ToJavaObject()
    // Offset: 0x18E9ED4
    ::UnityEngine::AndroidJavaObject* ToJavaObject();
  }; // Oculus.Voice.Bindings.Android.VoiceSDKConfigBinding
  #pragma pack(pop)
  static check_size<sizeof(VoiceSDKConfigBinding), 16 + sizeof(::Facebook::WitAi::Configuration::WitRuntimeConfiguration*)> __Oculus_Voice_Bindings_Android_VoiceSDKConfigBindingSizeCheck;
  static_assert(sizeof(VoiceSDKConfigBinding) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKConfigBinding::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Voice::Bindings::Android::VoiceSDKConfigBinding::ToJavaObject
// Il2CppName: ToJavaObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AndroidJavaObject* (Oculus::Voice::Bindings::Android::VoiceSDKConfigBinding::*)()>(&Oculus::Voice::Bindings::Android::VoiceSDKConfigBinding::ToJavaObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Bindings::Android::VoiceSDKConfigBinding*), "ToJavaObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
