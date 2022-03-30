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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: UnityEngine::Android
namespace UnityEngine::Android {
  // Forward declaring type: AndroidAssetPackState
  class AndroidAssetPackState;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Android::AndroidAssetPacks::AssetPackManagerStatusQueryCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::AndroidAssetPacks::AssetPackManagerStatusQueryCallback*, "UnityEngine.Android", "AndroidAssetPacks/AssetPackManagerStatusQueryCallback");
// Type namespace: UnityEngine.Android
namespace UnityEngine::Android {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Android.AndroidAssetPacks/UnityEngine.Android.AssetPackManagerStatusQueryCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class AndroidAssetPacks::AssetPackManagerStatusQueryCallback : public ::UnityEngine::AndroidJavaProxy {
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
    // private System.Action`2<System.UInt64,UnityEngine.Android.AndroidAssetPackState[]> m_Callback
    // Size: 0x8
    // Offset: 0x20
    ::System::Action_2<uint64_t, ::ArrayW<::UnityEngine::Android::AndroidAssetPackState*>>* m_Callback;
    // Field size check
    static_assert(sizeof(::System::Action_2<uint64_t, ::ArrayW<::UnityEngine::Android::AndroidAssetPackState*>>*) == 0x8);
    // private System.Collections.Generic.List`1<System.String> m_AssetPackNames
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::StringW>* m_AssetPackNames;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.Android.AndroidAssetPackState> m_States
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<::UnityEngine::Android::AndroidAssetPackState*>* m_States;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Android::AndroidAssetPackState*>*) == 0x8);
    // private System.Int64 m_Size
    // Size: 0x8
    // Offset: 0x38
    int64_t m_Size;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    public:
    // Get instance field reference: private System.Action`2<System.UInt64,UnityEngine.Android.AndroidAssetPackState[]> m_Callback
    ::System::Action_2<uint64_t, ::ArrayW<::UnityEngine::Android::AndroidAssetPackState*>>*& dyn_m_Callback();
    // Get instance field reference: private System.Collections.Generic.List`1<System.String> m_AssetPackNames
    ::System::Collections::Generic::List_1<::StringW>*& dyn_m_AssetPackNames();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.Android.AndroidAssetPackState> m_States
    ::System::Collections::Generic::List_1<::UnityEngine::Android::AndroidAssetPackState*>*& dyn_m_States();
    // Get instance field reference: private System.Int64 m_Size
    int64_t& dyn_m_Size();
    // private System.Void onStatusResult(System.Int64 totalBytes, System.String[] assetPackNames, System.Int32[] assetPackStatuses, System.Int32[] assetPackErrorCodes)
    // Offset: 0x127D460
    void onStatusResult(int64_t totalBytes, ::ArrayW<::StringW> assetPackNames, ::ArrayW<int> assetPackStatuses, ::ArrayW<int> assetPackErrorCodes);
  }; // UnityEngine.Android.AndroidAssetPacks/UnityEngine.Android.AssetPackManagerStatusQueryCallback
  #pragma pack(pop)
  static check_size<sizeof(AndroidAssetPacks::AssetPackManagerStatusQueryCallback), 56 + sizeof(int64_t)> __UnityEngine_Android_AndroidAssetPacks_AssetPackManagerStatusQueryCallbackSizeCheck;
  static_assert(sizeof(AndroidAssetPacks::AssetPackManagerStatusQueryCallback) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Android::AndroidAssetPacks::AssetPackManagerStatusQueryCallback::onStatusResult
// Il2CppName: onStatusResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Android::AndroidAssetPacks::AssetPackManagerStatusQueryCallback::*)(int64_t, ::ArrayW<::StringW>, ::ArrayW<int>, ::ArrayW<int>)>(&UnityEngine::Android::AndroidAssetPacks::AssetPackManagerStatusQueryCallback::onStatusResult)> {
  static const MethodInfo* get() {
    static auto* totalBytes = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* assetPackNames = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* assetPackStatuses = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* assetPackErrorCodes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Android::AndroidAssetPacks::AssetPackManagerStatusQueryCallback*), "onStatusResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{totalBytes, assetPackNames, assetPackStatuses, assetPackErrorCodes});
  }
};
