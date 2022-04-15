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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Text
  class Text;
}
// Forward declaring namespace: Oculus::Voice
namespace Oculus::Voice {
  // Forward declaring type: AppVoiceExperience
  class AppVoiceExperience;
}
// Forward declaring namespace: Facebook::WitAi
namespace Facebook::WitAi {
  // Forward declaring type: WitRequest
  class WitRequest;
}
// Forward declaring namespace: Facebook::WitAi::Lib
namespace Facebook::WitAi::Lib {
  // Forward declaring type: WitResponseNode
  class WitResponseNode;
}
// Completed forward declares
// Type namespace: Oculus.Voice.Demo.UIShapesDemo
namespace Oculus::Voice::Demo::UIShapesDemo {
  // Forward declaring type: InteractionHandler
  class InteractionHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Voice::Demo::UIShapesDemo::InteractionHandler);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Voice::Demo::UIShapesDemo::InteractionHandler*, "Oculus.Voice.Demo.UIShapesDemo", "InteractionHandler");
// Type namespace: Oculus.Voice.Demo.UIShapesDemo
namespace Oculus::Voice::Demo::UIShapesDemo {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Voice.Demo.UIShapesDemo.InteractionHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class InteractionHandler : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // [HeaderAttribute] Offset: 0x78E58C
    // [MultilineAttribute] Offset: 0x78E58C
    // private System.String freshStateText
    // Size: 0x8
    // Offset: 0x18
    ::StringW freshStateText;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [HeaderAttribute] Offset: 0x78E5E8
    // private UnityEngine.UI.Text textArea
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::UI::Text* textArea;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    // private System.Boolean showJson
    // Size: 0x1
    // Offset: 0x28
    bool showJson;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: showJson and: appVoiceExperience
    char __padding2[0x7] = {};
    // [HeaderAttribute] Offset: 0x78E644
    // private Oculus.Voice.AppVoiceExperience appVoiceExperience
    // Size: 0x8
    // Offset: 0x30
    ::Oculus::Voice::AppVoiceExperience* appVoiceExperience;
    // Field size check
    static_assert(sizeof(::Oculus::Voice::AppVoiceExperience*) == 0x8);
    // private System.String pendingText
    // Size: 0x8
    // Offset: 0x38
    ::StringW pendingText;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.String freshStateText
    [[deprecated("Use field access instead!")]] ::StringW& dyn_freshStateText();
    // Get instance field reference: private UnityEngine.UI.Text textArea
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Text*& dyn_textArea();
    // Get instance field reference: private System.Boolean showJson
    [[deprecated("Use field access instead!")]] bool& dyn_showJson();
    // Get instance field reference: private Oculus.Voice.AppVoiceExperience appVoiceExperience
    [[deprecated("Use field access instead!")]] ::Oculus::Voice::AppVoiceExperience*& dyn_appVoiceExperience();
    // Get instance field reference: private System.String pendingText
    [[deprecated("Use field access instead!")]] ::StringW& dyn_pendingText();
    // public System.Void .ctor()
    // Offset: 0x1949BC0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InteractionHandler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Voice::Demo::UIShapesDemo::InteractionHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InteractionHandler*, creationType>()));
    }
    // private System.Void OnEnable()
    // Offset: 0x194962C
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x19496F8
    void OnDisable();
    // private System.Void OnRequestStarted(Facebook.WitAi.WitRequest r)
    // Offset: 0x19497C4
    void OnRequestStarted(::Facebook::WitAi::WitRequest* r);
    // private System.Void Update()
    // Offset: 0x194986C
    void Update();
    // public System.Void OnResponse(Facebook.WitAi.Lib.WitResponseNode response)
    // Offset: 0x19498B0
    void OnResponse(::Facebook::WitAi::Lib::WitResponseNode* response);
    // public System.Void OnError(System.String error, System.String message)
    // Offset: 0x19499A0
    void OnError(::StringW error, ::StringW message);
    // public System.Void ToggleActivation()
    // Offset: 0x1949B60
    void ToggleActivation();
    // private System.Void <OnRequestStarted>b__7_0(System.String response)
    // Offset: 0x1949C14
    void $OnRequestStarted$b__7_0(::StringW response);
  }; // Oculus.Voice.Demo.UIShapesDemo.InteractionHandler
  #pragma pack(pop)
  static check_size<sizeof(InteractionHandler), 56 + sizeof(::StringW)> __Oculus_Voice_Demo_UIShapesDemo_InteractionHandlerSizeCheck;
  static_assert(sizeof(InteractionHandler) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Voice::Demo::UIShapesDemo::InteractionHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Voice::Demo::UIShapesDemo::InteractionHandler::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Demo::UIShapesDemo::InteractionHandler::*)()>(&Oculus::Voice::Demo::UIShapesDemo::InteractionHandler::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Demo::UIShapesDemo::InteractionHandler*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Demo::UIShapesDemo::InteractionHandler::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Demo::UIShapesDemo::InteractionHandler::*)()>(&Oculus::Voice::Demo::UIShapesDemo::InteractionHandler::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Demo::UIShapesDemo::InteractionHandler*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Demo::UIShapesDemo::InteractionHandler::OnRequestStarted
// Il2CppName: OnRequestStarted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Demo::UIShapesDemo::InteractionHandler::*)(::Facebook::WitAi::WitRequest*)>(&Oculus::Voice::Demo::UIShapesDemo::InteractionHandler::OnRequestStarted)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("Facebook.WitAi", "WitRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Demo::UIShapesDemo::InteractionHandler*), "OnRequestStarted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Demo::UIShapesDemo::InteractionHandler::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Demo::UIShapesDemo::InteractionHandler::*)()>(&Oculus::Voice::Demo::UIShapesDemo::InteractionHandler::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Demo::UIShapesDemo::InteractionHandler*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Demo::UIShapesDemo::InteractionHandler::OnResponse
// Il2CppName: OnResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Demo::UIShapesDemo::InteractionHandler::*)(::Facebook::WitAi::Lib::WitResponseNode*)>(&Oculus::Voice::Demo::UIShapesDemo::InteractionHandler::OnResponse)> {
  static const MethodInfo* get() {
    static auto* response = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Lib", "WitResponseNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Demo::UIShapesDemo::InteractionHandler*), "OnResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{response});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Demo::UIShapesDemo::InteractionHandler::OnError
// Il2CppName: OnError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Demo::UIShapesDemo::InteractionHandler::*)(::StringW, ::StringW)>(&Oculus::Voice::Demo::UIShapesDemo::InteractionHandler::OnError)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Demo::UIShapesDemo::InteractionHandler*), "OnError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error, message});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Demo::UIShapesDemo::InteractionHandler::ToggleActivation
// Il2CppName: ToggleActivation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Demo::UIShapesDemo::InteractionHandler::*)()>(&Oculus::Voice::Demo::UIShapesDemo::InteractionHandler::ToggleActivation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Demo::UIShapesDemo::InteractionHandler*), "ToggleActivation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Demo::UIShapesDemo::InteractionHandler::$OnRequestStarted$b__7_0
// Il2CppName: <OnRequestStarted>b__7_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Demo::UIShapesDemo::InteractionHandler::*)(::StringW)>(&Oculus::Voice::Demo::UIShapesDemo::InteractionHandler::$OnRequestStarted$b__7_0)> {
  static const MethodInfo* get() {
    static auto* response = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Demo::UIShapesDemo::InteractionHandler*), "<OnRequestStarted>b__7_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{response});
  }
};
