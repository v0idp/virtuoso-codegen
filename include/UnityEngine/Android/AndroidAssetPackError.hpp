// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.Android
namespace UnityEngine::Android {
  // Forward declaring type: AndroidAssetPackError
  struct AndroidAssetPackError;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::AndroidAssetPackError, "UnityEngine.Android", "AndroidAssetPackError");
// Type namespace: UnityEngine.Android
namespace UnityEngine::Android {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Android.AndroidAssetPackError
  // [TokenAttribute] Offset: FFFFFFFF
  struct AndroidAssetPackError/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: AndroidAssetPackError
    constexpr AndroidAssetPackError(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Android.AndroidAssetPackError NoError
    static constexpr const int NoError = 0;
    // Get static field: static public UnityEngine.Android.AndroidAssetPackError NoError
    static ::UnityEngine::Android::AndroidAssetPackError _get_NoError();
    // Set static field: static public UnityEngine.Android.AndroidAssetPackError NoError
    static void _set_NoError(::UnityEngine::Android::AndroidAssetPackError value);
    // static field const value: static public UnityEngine.Android.AndroidAssetPackError AppUnavailable
    static constexpr const int AppUnavailable = -1;
    // Get static field: static public UnityEngine.Android.AndroidAssetPackError AppUnavailable
    static ::UnityEngine::Android::AndroidAssetPackError _get_AppUnavailable();
    // Set static field: static public UnityEngine.Android.AndroidAssetPackError AppUnavailable
    static void _set_AppUnavailable(::UnityEngine::Android::AndroidAssetPackError value);
    // static field const value: static public UnityEngine.Android.AndroidAssetPackError PackUnavailable
    static constexpr const int PackUnavailable = -2;
    // Get static field: static public UnityEngine.Android.AndroidAssetPackError PackUnavailable
    static ::UnityEngine::Android::AndroidAssetPackError _get_PackUnavailable();
    // Set static field: static public UnityEngine.Android.AndroidAssetPackError PackUnavailable
    static void _set_PackUnavailable(::UnityEngine::Android::AndroidAssetPackError value);
    // static field const value: static public UnityEngine.Android.AndroidAssetPackError InvalidRequest
    static constexpr const int InvalidRequest = -3;
    // Get static field: static public UnityEngine.Android.AndroidAssetPackError InvalidRequest
    static ::UnityEngine::Android::AndroidAssetPackError _get_InvalidRequest();
    // Set static field: static public UnityEngine.Android.AndroidAssetPackError InvalidRequest
    static void _set_InvalidRequest(::UnityEngine::Android::AndroidAssetPackError value);
    // static field const value: static public UnityEngine.Android.AndroidAssetPackError DownloadNotFound
    static constexpr const int DownloadNotFound = -4;
    // Get static field: static public UnityEngine.Android.AndroidAssetPackError DownloadNotFound
    static ::UnityEngine::Android::AndroidAssetPackError _get_DownloadNotFound();
    // Set static field: static public UnityEngine.Android.AndroidAssetPackError DownloadNotFound
    static void _set_DownloadNotFound(::UnityEngine::Android::AndroidAssetPackError value);
    // static field const value: static public UnityEngine.Android.AndroidAssetPackError ApiNotAvailable
    static constexpr const int ApiNotAvailable = -5;
    // Get static field: static public UnityEngine.Android.AndroidAssetPackError ApiNotAvailable
    static ::UnityEngine::Android::AndroidAssetPackError _get_ApiNotAvailable();
    // Set static field: static public UnityEngine.Android.AndroidAssetPackError ApiNotAvailable
    static void _set_ApiNotAvailable(::UnityEngine::Android::AndroidAssetPackError value);
    // static field const value: static public UnityEngine.Android.AndroidAssetPackError NetworkError
    static constexpr const int NetworkError = -6;
    // Get static field: static public UnityEngine.Android.AndroidAssetPackError NetworkError
    static ::UnityEngine::Android::AndroidAssetPackError _get_NetworkError();
    // Set static field: static public UnityEngine.Android.AndroidAssetPackError NetworkError
    static void _set_NetworkError(::UnityEngine::Android::AndroidAssetPackError value);
    // static field const value: static public UnityEngine.Android.AndroidAssetPackError AccessDenied
    static constexpr const int AccessDenied = -7;
    // Get static field: static public UnityEngine.Android.AndroidAssetPackError AccessDenied
    static ::UnityEngine::Android::AndroidAssetPackError _get_AccessDenied();
    // Set static field: static public UnityEngine.Android.AndroidAssetPackError AccessDenied
    static void _set_AccessDenied(::UnityEngine::Android::AndroidAssetPackError value);
    // static field const value: static public UnityEngine.Android.AndroidAssetPackError InsufficientStorage
    static constexpr const int InsufficientStorage = -10;
    // Get static field: static public UnityEngine.Android.AndroidAssetPackError InsufficientStorage
    static ::UnityEngine::Android::AndroidAssetPackError _get_InsufficientStorage();
    // Set static field: static public UnityEngine.Android.AndroidAssetPackError InsufficientStorage
    static void _set_InsufficientStorage(::UnityEngine::Android::AndroidAssetPackError value);
    // static field const value: static public UnityEngine.Android.AndroidAssetPackError PlayStoreNotFound
    static constexpr const int PlayStoreNotFound = -11;
    // Get static field: static public UnityEngine.Android.AndroidAssetPackError PlayStoreNotFound
    static ::UnityEngine::Android::AndroidAssetPackError _get_PlayStoreNotFound();
    // Set static field: static public UnityEngine.Android.AndroidAssetPackError PlayStoreNotFound
    static void _set_PlayStoreNotFound(::UnityEngine::Android::AndroidAssetPackError value);
    // static field const value: static public UnityEngine.Android.AndroidAssetPackError NetworkUnrestricted
    static constexpr const int NetworkUnrestricted = -12;
    // Get static field: static public UnityEngine.Android.AndroidAssetPackError NetworkUnrestricted
    static ::UnityEngine::Android::AndroidAssetPackError _get_NetworkUnrestricted();
    // Set static field: static public UnityEngine.Android.AndroidAssetPackError NetworkUnrestricted
    static void _set_NetworkUnrestricted(::UnityEngine::Android::AndroidAssetPackError value);
    // static field const value: static public UnityEngine.Android.AndroidAssetPackError AppNotOwned
    static constexpr const int AppNotOwned = -13;
    // Get static field: static public UnityEngine.Android.AndroidAssetPackError AppNotOwned
    static ::UnityEngine::Android::AndroidAssetPackError _get_AppNotOwned();
    // Set static field: static public UnityEngine.Android.AndroidAssetPackError AppNotOwned
    static void _set_AppNotOwned(::UnityEngine::Android::AndroidAssetPackError value);
    // static field const value: static public UnityEngine.Android.AndroidAssetPackError InternalError
    static constexpr const int InternalError = -100;
    // Get static field: static public UnityEngine.Android.AndroidAssetPackError InternalError
    static ::UnityEngine::Android::AndroidAssetPackError _get_InternalError();
    // Set static field: static public UnityEngine.Android.AndroidAssetPackError InternalError
    static void _set_InternalError(::UnityEngine::Android::AndroidAssetPackError value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Android.AndroidAssetPackError
  #pragma pack(pop)
  static check_size<sizeof(AndroidAssetPackError), 0 + sizeof(int)> __UnityEngine_Android_AndroidAssetPackErrorSizeCheck;
  static_assert(sizeof(AndroidAssetPackError) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
