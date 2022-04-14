// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Firebase.Firestore.LoadBundleTaskProgressProxy
#include "Firebase/Firestore/LoadBundleTaskProgressProxy.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::LoadBundleTaskProgressProxy::State, "Firebase.Firestore", "LoadBundleTaskProgressProxy/State");
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Firestore.LoadBundleTaskProgressProxy/Firebase.Firestore.State
  // [TokenAttribute] Offset: FFFFFFFF
  struct LoadBundleTaskProgressProxy::State/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: State
    constexpr State(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Firebase.Firestore.LoadBundleTaskProgressProxy/Firebase.Firestore.State Error
    static constexpr const int Error = 0;
    // Get static field: static public Firebase.Firestore.LoadBundleTaskProgressProxy/Firebase.Firestore.State Error
    static ::Firebase::Firestore::LoadBundleTaskProgressProxy::State _get_Error();
    // Set static field: static public Firebase.Firestore.LoadBundleTaskProgressProxy/Firebase.Firestore.State Error
    static void _set_Error(::Firebase::Firestore::LoadBundleTaskProgressProxy::State value);
    // static field const value: static public Firebase.Firestore.LoadBundleTaskProgressProxy/Firebase.Firestore.State InProgress
    static constexpr const int InProgress = 1;
    // Get static field: static public Firebase.Firestore.LoadBundleTaskProgressProxy/Firebase.Firestore.State InProgress
    static ::Firebase::Firestore::LoadBundleTaskProgressProxy::State _get_InProgress();
    // Set static field: static public Firebase.Firestore.LoadBundleTaskProgressProxy/Firebase.Firestore.State InProgress
    static void _set_InProgress(::Firebase::Firestore::LoadBundleTaskProgressProxy::State value);
    // static field const value: static public Firebase.Firestore.LoadBundleTaskProgressProxy/Firebase.Firestore.State Success
    static constexpr const int Success = 2;
    // Get static field: static public Firebase.Firestore.LoadBundleTaskProgressProxy/Firebase.Firestore.State Success
    static ::Firebase::Firestore::LoadBundleTaskProgressProxy::State _get_Success();
    // Set static field: static public Firebase.Firestore.LoadBundleTaskProgressProxy/Firebase.Firestore.State Success
    static void _set_Success(::Firebase::Firestore::LoadBundleTaskProgressProxy::State value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // Firebase.Firestore.LoadBundleTaskProgressProxy/Firebase.Firestore.State
  #pragma pack(pop)
  static check_size<sizeof(LoadBundleTaskProgressProxy::State), 0 + sizeof(int)> __Firebase_Firestore_LoadBundleTaskProgressProxy_StateSizeCheck;
  static_assert(sizeof(LoadBundleTaskProgressProxy::State) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"