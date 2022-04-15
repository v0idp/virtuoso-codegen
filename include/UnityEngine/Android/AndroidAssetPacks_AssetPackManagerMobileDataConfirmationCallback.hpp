// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Android.AndroidAssetPacks
#include "UnityEngine/Android/AndroidAssetPacks.hpp"
// Including type: UnityEngine.AndroidJavaProxy
#include "UnityEngine/AndroidJavaProxy.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine::Android
namespace UnityEngine::Android {
  // Forward declaring type: AndroidAssetPackUseMobileDataRequestResult
  class AndroidAssetPackUseMobileDataRequestResult;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Android::AndroidAssetPacks::AssetPackManagerMobileDataConfirmationCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::AndroidAssetPacks::AssetPackManagerMobileDataConfirmationCallback*, "UnityEngine.Android", "AndroidAssetPacks/AssetPackManagerMobileDataConfirmationCallback");
// Type namespace: UnityEngine.Android
namespace UnityEngine::Android {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Android.AndroidAssetPacks/UnityEngine.Android.AssetPackManagerMobileDataConfirmationCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class AndroidAssetPacks::AssetPackManagerMobileDataConfirmationCallback : public ::UnityEngine::AndroidJavaProxy {
    public:
    public:
    // private System.Action`1<UnityEngine.Android.AndroidAssetPackUseMobileDataRequestResult> m_Callback
    // Size: 0x8
    // Offset: 0x20
    ::System::Action_1<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>* m_Callback;
    // Field size check
    static_assert(sizeof(::System::Action_1<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Action_1<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>*
    constexpr operator ::System::Action_1<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>*() const noexcept {
      return m_Callback;
    }
    // Get instance field reference: private System.Action`1<UnityEngine.Android.AndroidAssetPackUseMobileDataRequestResult> m_Callback
    [[deprecated("Use field access instead!")]] ::System::Action_1<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>*& dyn_m_Callback();
    // private System.Void onMobileDataConfirmationResult(System.Boolean allowed)
    // Offset: 0x1875760
    void onMobileDataConfirmationResult(bool allowed);
  }; // UnityEngine.Android.AndroidAssetPacks/UnityEngine.Android.AssetPackManagerMobileDataConfirmationCallback
  #pragma pack(pop)
  static check_size<sizeof(AndroidAssetPacks::AssetPackManagerMobileDataConfirmationCallback), 32 + sizeof(::System::Action_1<::UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult*>*)> __UnityEngine_Android_AndroidAssetPacks_AssetPackManagerMobileDataConfirmationCallbackSizeCheck;
  static_assert(sizeof(AndroidAssetPacks::AssetPackManagerMobileDataConfirmationCallback) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Android::AndroidAssetPacks::AssetPackManagerMobileDataConfirmationCallback::onMobileDataConfirmationResult
// Il2CppName: onMobileDataConfirmationResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Android::AndroidAssetPacks::AssetPackManagerMobileDataConfirmationCallback::*)(bool)>(&UnityEngine::Android::AndroidAssetPacks::AssetPackManagerMobileDataConfirmationCallback::onMobileDataConfirmationResult)> {
  static const MethodInfo* get() {
    static auto* allowed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Android::AndroidAssetPacks::AssetPackManagerMobileDataConfirmationCallback*), "onMobileDataConfirmationResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{allowed});
  }
};
