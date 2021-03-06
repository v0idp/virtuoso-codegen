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
// Forward declaring namespace: Firebase::Storage::Internal
namespace Firebase::Storage::Internal {
  // Forward declaring type: TransferState
  class TransferState;
}
// Forward declaring namespace: Firebase::Storage
namespace Firebase::Storage {
  // Forward declaring type: StorageReference
  class StorageReference;
}
// Completed forward declares
// Type namespace: Firebase.Storage
namespace Firebase::Storage {
  // Forward declaring type: DownloadState
  class DownloadState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Storage::DownloadState);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Storage::DownloadState*, "Firebase.Storage", "DownloadState");
// Type namespace: Firebase.Storage
namespace Firebase::Storage {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Storage.DownloadState
  // [TokenAttribute] Offset: FFFFFFFF
  class DownloadState : public ::Il2CppObject {
    public:
    public:
    // [DebuggerBrowsableAttribute] Offset: 0x6E378C
    // private Firebase.Storage.Internal.TransferState <State>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Firebase::Storage::Internal::TransferState* State;
    // Field size check
    static_assert(sizeof(::Firebase::Storage::Internal::TransferState*) == 0x8);
    public:
    // Creating conversion operator: operator ::Firebase::Storage::Internal::TransferState*
    constexpr operator ::Firebase::Storage::Internal::TransferState*() const noexcept {
      return State;
    }
    // Get instance field reference: private Firebase.Storage.Internal.TransferState <State>k__BackingField
    [[deprecated("Use field access instead!")]] ::Firebase::Storage::Internal::TransferState*& dyn_$State$k__BackingField();
    // public System.Int64 get_BytesTransferred()
    // Offset: 0x18307F8
    int64_t get_BytesTransferred();
    // public System.Int64 get_TotalByteCount()
    // Offset: 0x1830814
    int64_t get_TotalByteCount();
    // Firebase.Storage.Internal.TransferState get_State()
    // Offset: 0x1830830
    ::Firebase::Storage::Internal::TransferState* get_State();
    // private System.Void set_State(Firebase.Storage.Internal.TransferState value)
    // Offset: 0x1830838
    void set_State(::Firebase::Storage::Internal::TransferState* value);
    // System.Void .ctor(Firebase.Storage.StorageReference reference, System.Int64 totalByteCount)
    // Offset: 0x1830744
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DownloadState* New_ctor(::Firebase::Storage::StorageReference* reference, int64_t totalByteCount) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Storage::DownloadState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DownloadState*, creationType>(reference, totalByteCount)));
    }
  }; // Firebase.Storage.DownloadState
  #pragma pack(pop)
  static check_size<sizeof(DownloadState), 16 + sizeof(::Firebase::Storage::Internal::TransferState*)> __Firebase_Storage_DownloadStateSizeCheck;
  static_assert(sizeof(DownloadState) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Storage::DownloadState::get_BytesTransferred
// Il2CppName: get_BytesTransferred
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Firebase::Storage::DownloadState::*)()>(&Firebase::Storage::DownloadState::get_BytesTransferred)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Storage::DownloadState*), "get_BytesTransferred", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Storage::DownloadState::get_TotalByteCount
// Il2CppName: get_TotalByteCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Firebase::Storage::DownloadState::*)()>(&Firebase::Storage::DownloadState::get_TotalByteCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Storage::DownloadState*), "get_TotalByteCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Storage::DownloadState::get_State
// Il2CppName: get_State
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Storage::Internal::TransferState* (Firebase::Storage::DownloadState::*)()>(&Firebase::Storage::DownloadState::get_State)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Storage::DownloadState*), "get_State", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Storage::DownloadState::set_State
// Il2CppName: set_State
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Storage::DownloadState::*)(::Firebase::Storage::Internal::TransferState*)>(&Firebase::Storage::DownloadState::set_State)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Firebase.Storage.Internal", "TransferState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Storage::DownloadState*), "set_State", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Firebase::Storage::DownloadState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
