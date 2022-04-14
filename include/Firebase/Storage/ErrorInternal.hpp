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
// Type namespace: Firebase.Storage
namespace Firebase::Storage {
  // Forward declaring type: ErrorInternal
  struct ErrorInternal;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Storage::ErrorInternal, "Firebase.Storage", "ErrorInternal");
// Type namespace: Firebase.Storage
namespace Firebase::Storage {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Storage.ErrorInternal
  // [TokenAttribute] Offset: FFFFFFFF
  struct ErrorInternal/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ErrorInternal
    constexpr ErrorInternal(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Firebase.Storage.ErrorInternal ErrorNone
    static constexpr const int ErrorNone = 0;
    // Get static field: static public Firebase.Storage.ErrorInternal ErrorNone
    static ::Firebase::Storage::ErrorInternal _get_ErrorNone();
    // Set static field: static public Firebase.Storage.ErrorInternal ErrorNone
    static void _set_ErrorNone(::Firebase::Storage::ErrorInternal value);
    // static field const value: static public Firebase.Storage.ErrorInternal ErrorUnknown
    static constexpr const int ErrorUnknown = 1;
    // Get static field: static public Firebase.Storage.ErrorInternal ErrorUnknown
    static ::Firebase::Storage::ErrorInternal _get_ErrorUnknown();
    // Set static field: static public Firebase.Storage.ErrorInternal ErrorUnknown
    static void _set_ErrorUnknown(::Firebase::Storage::ErrorInternal value);
    // static field const value: static public Firebase.Storage.ErrorInternal ErrorObjectNotFound
    static constexpr const int ErrorObjectNotFound = 2;
    // Get static field: static public Firebase.Storage.ErrorInternal ErrorObjectNotFound
    static ::Firebase::Storage::ErrorInternal _get_ErrorObjectNotFound();
    // Set static field: static public Firebase.Storage.ErrorInternal ErrorObjectNotFound
    static void _set_ErrorObjectNotFound(::Firebase::Storage::ErrorInternal value);
    // static field const value: static public Firebase.Storage.ErrorInternal ErrorBucketNotFound
    static constexpr const int ErrorBucketNotFound = 3;
    // Get static field: static public Firebase.Storage.ErrorInternal ErrorBucketNotFound
    static ::Firebase::Storage::ErrorInternal _get_ErrorBucketNotFound();
    // Set static field: static public Firebase.Storage.ErrorInternal ErrorBucketNotFound
    static void _set_ErrorBucketNotFound(::Firebase::Storage::ErrorInternal value);
    // static field const value: static public Firebase.Storage.ErrorInternal ErrorProjectNotFound
    static constexpr const int ErrorProjectNotFound = 4;
    // Get static field: static public Firebase.Storage.ErrorInternal ErrorProjectNotFound
    static ::Firebase::Storage::ErrorInternal _get_ErrorProjectNotFound();
    // Set static field: static public Firebase.Storage.ErrorInternal ErrorProjectNotFound
    static void _set_ErrorProjectNotFound(::Firebase::Storage::ErrorInternal value);
    // static field const value: static public Firebase.Storage.ErrorInternal ErrorQuotaExceeded
    static constexpr const int ErrorQuotaExceeded = 5;
    // Get static field: static public Firebase.Storage.ErrorInternal ErrorQuotaExceeded
    static ::Firebase::Storage::ErrorInternal _get_ErrorQuotaExceeded();
    // Set static field: static public Firebase.Storage.ErrorInternal ErrorQuotaExceeded
    static void _set_ErrorQuotaExceeded(::Firebase::Storage::ErrorInternal value);
    // static field const value: static public Firebase.Storage.ErrorInternal ErrorUnauthenticated
    static constexpr const int ErrorUnauthenticated = 6;
    // Get static field: static public Firebase.Storage.ErrorInternal ErrorUnauthenticated
    static ::Firebase::Storage::ErrorInternal _get_ErrorUnauthenticated();
    // Set static field: static public Firebase.Storage.ErrorInternal ErrorUnauthenticated
    static void _set_ErrorUnauthenticated(::Firebase::Storage::ErrorInternal value);
    // static field const value: static public Firebase.Storage.ErrorInternal ErrorUnauthorized
    static constexpr const int ErrorUnauthorized = 7;
    // Get static field: static public Firebase.Storage.ErrorInternal ErrorUnauthorized
    static ::Firebase::Storage::ErrorInternal _get_ErrorUnauthorized();
    // Set static field: static public Firebase.Storage.ErrorInternal ErrorUnauthorized
    static void _set_ErrorUnauthorized(::Firebase::Storage::ErrorInternal value);
    // static field const value: static public Firebase.Storage.ErrorInternal ErrorRetryLimitExceeded
    static constexpr const int ErrorRetryLimitExceeded = 8;
    // Get static field: static public Firebase.Storage.ErrorInternal ErrorRetryLimitExceeded
    static ::Firebase::Storage::ErrorInternal _get_ErrorRetryLimitExceeded();
    // Set static field: static public Firebase.Storage.ErrorInternal ErrorRetryLimitExceeded
    static void _set_ErrorRetryLimitExceeded(::Firebase::Storage::ErrorInternal value);
    // static field const value: static public Firebase.Storage.ErrorInternal ErrorNonMatchingChecksum
    static constexpr const int ErrorNonMatchingChecksum = 9;
    // Get static field: static public Firebase.Storage.ErrorInternal ErrorNonMatchingChecksum
    static ::Firebase::Storage::ErrorInternal _get_ErrorNonMatchingChecksum();
    // Set static field: static public Firebase.Storage.ErrorInternal ErrorNonMatchingChecksum
    static void _set_ErrorNonMatchingChecksum(::Firebase::Storage::ErrorInternal value);
    // static field const value: static public Firebase.Storage.ErrorInternal ErrorDownloadSizeExceeded
    static constexpr const int ErrorDownloadSizeExceeded = 10;
    // Get static field: static public Firebase.Storage.ErrorInternal ErrorDownloadSizeExceeded
    static ::Firebase::Storage::ErrorInternal _get_ErrorDownloadSizeExceeded();
    // Set static field: static public Firebase.Storage.ErrorInternal ErrorDownloadSizeExceeded
    static void _set_ErrorDownloadSizeExceeded(::Firebase::Storage::ErrorInternal value);
    // static field const value: static public Firebase.Storage.ErrorInternal ErrorCancelled
    static constexpr const int ErrorCancelled = 11;
    // Get static field: static public Firebase.Storage.ErrorInternal ErrorCancelled
    static ::Firebase::Storage::ErrorInternal _get_ErrorCancelled();
    // Set static field: static public Firebase.Storage.ErrorInternal ErrorCancelled
    static void _set_ErrorCancelled(::Firebase::Storage::ErrorInternal value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // Firebase.Storage.ErrorInternal
  #pragma pack(pop)
  static check_size<sizeof(ErrorInternal), 0 + sizeof(int)> __Firebase_Storage_ErrorInternalSizeCheck;
  static_assert(sizeof(ErrorInternal) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
