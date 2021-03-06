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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Forward declaring namespace: Firebase::Storage
namespace Firebase::Storage {
  // Forward declaring type: StorageMetadata
  class StorageMetadata;
  // Forward declaring type: StorageReference
  class StorageReference;
}
// Completed forward declares
// Type namespace: Firebase.Storage.Internal
namespace Firebase::Storage::Internal {
  // Forward declaring type: TransferState
  class TransferState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Storage::Internal::TransferState);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Storage::Internal::TransferState*, "Firebase.Storage.Internal", "TransferState");
// Type namespace: Firebase.Storage.Internal
namespace Firebase::Storage::Internal {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Storage.Internal.TransferState
  // [TokenAttribute] Offset: FFFFFFFF
  class TransferState : public ::Il2CppObject {
    public:
    public:
    // [DebuggerBrowsableAttribute] Offset: 0x6E3624
    // private System.Int64 <BytesTransferred>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    int64_t BytesTransferred;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0x6E3660
    // private System.Int64 <TotalByteCount>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    int64_t TotalByteCount;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0x6E369C
    // private System.Uri <UploadSessionUri>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::System::Uri* UploadSessionUri;
    // Field size check
    static_assert(sizeof(::System::Uri*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0x6E36D8
    // private Firebase.Storage.StorageMetadata <Metadata>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::Firebase::Storage::StorageMetadata* Metadata;
    // Field size check
    static_assert(sizeof(::Firebase::Storage::StorageMetadata*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0x6E3714
    // private Firebase.Storage.StorageReference <Reference>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::Firebase::Storage::StorageReference* Reference;
    // Field size check
    static_assert(sizeof(::Firebase::Storage::StorageReference*) == 0x8);
    public:
    // Get instance field reference: private System.Int64 <BytesTransferred>k__BackingField
    [[deprecated("Use field access instead!")]] int64_t& dyn_$BytesTransferred$k__BackingField();
    // Get instance field reference: private System.Int64 <TotalByteCount>k__BackingField
    [[deprecated("Use field access instead!")]] int64_t& dyn_$TotalByteCount$k__BackingField();
    // Get instance field reference: private System.Uri <UploadSessionUri>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Uri*& dyn_$UploadSessionUri$k__BackingField();
    // Get instance field reference: private Firebase.Storage.StorageMetadata <Metadata>k__BackingField
    [[deprecated("Use field access instead!")]] ::Firebase::Storage::StorageMetadata*& dyn_$Metadata$k__BackingField();
    // Get instance field reference: private Firebase.Storage.StorageReference <Reference>k__BackingField
    [[deprecated("Use field access instead!")]] ::Firebase::Storage::StorageReference*& dyn_$Reference$k__BackingField();
    // public System.Int64 get_BytesTransferred()
    // Offset: 0x1839778
    int64_t get_BytesTransferred();
    // System.Void set_BytesTransferred(System.Int64 value)
    // Offset: 0x1839780
    void set_BytesTransferred(int64_t value);
    // public System.Int64 get_TotalByteCount()
    // Offset: 0x1839788
    int64_t get_TotalByteCount();
    // System.Void set_TotalByteCount(System.Int64 value)
    // Offset: 0x1839790
    void set_TotalByteCount(int64_t value);
    // System.Void set_UploadSessionUri(System.Uri value)
    // Offset: 0x1839798
    void set_UploadSessionUri(::System::Uri* value);
    // System.Void set_Metadata(Firebase.Storage.StorageMetadata value)
    // Offset: 0x18397A0
    void set_Metadata(::Firebase::Storage::StorageMetadata* value);
    // System.Void set_Reference(Firebase.Storage.StorageReference value)
    // Offset: 0x18397A8
    void set_Reference(::Firebase::Storage::StorageReference* value);
    // System.Void .ctor(Firebase.Storage.StorageReference reference)
    // Offset: 0x18307CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TransferState* New_ctor(::Firebase::Storage::StorageReference* reference) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Storage::Internal::TransferState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TransferState*, creationType>(reference)));
    }
  }; // Firebase.Storage.Internal.TransferState
  #pragma pack(pop)
  static check_size<sizeof(TransferState), 48 + sizeof(::Firebase::Storage::StorageReference*)> __Firebase_Storage_Internal_TransferStateSizeCheck;
  static_assert(sizeof(TransferState) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Storage::Internal::TransferState::get_BytesTransferred
// Il2CppName: get_BytesTransferred
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Firebase::Storage::Internal::TransferState::*)()>(&Firebase::Storage::Internal::TransferState::get_BytesTransferred)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Storage::Internal::TransferState*), "get_BytesTransferred", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Storage::Internal::TransferState::set_BytesTransferred
// Il2CppName: set_BytesTransferred
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Storage::Internal::TransferState::*)(int64_t)>(&Firebase::Storage::Internal::TransferState::set_BytesTransferred)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Storage::Internal::TransferState*), "set_BytesTransferred", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Firebase::Storage::Internal::TransferState::get_TotalByteCount
// Il2CppName: get_TotalByteCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Firebase::Storage::Internal::TransferState::*)()>(&Firebase::Storage::Internal::TransferState::get_TotalByteCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Storage::Internal::TransferState*), "get_TotalByteCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Storage::Internal::TransferState::set_TotalByteCount
// Il2CppName: set_TotalByteCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Storage::Internal::TransferState::*)(int64_t)>(&Firebase::Storage::Internal::TransferState::set_TotalByteCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Storage::Internal::TransferState*), "set_TotalByteCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Firebase::Storage::Internal::TransferState::set_UploadSessionUri
// Il2CppName: set_UploadSessionUri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Storage::Internal::TransferState::*)(::System::Uri*)>(&Firebase::Storage::Internal::TransferState::set_UploadSessionUri)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Storage::Internal::TransferState*), "set_UploadSessionUri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Firebase::Storage::Internal::TransferState::set_Metadata
// Il2CppName: set_Metadata
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Storage::Internal::TransferState::*)(::Firebase::Storage::StorageMetadata*)>(&Firebase::Storage::Internal::TransferState::set_Metadata)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Firebase.Storage", "StorageMetadata")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Storage::Internal::TransferState*), "set_Metadata", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Firebase::Storage::Internal::TransferState::set_Reference
// Il2CppName: set_Reference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Storage::Internal::TransferState::*)(::Firebase::Storage::StorageReference*)>(&Firebase::Storage::Internal::TransferState::set_Reference)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Firebase.Storage", "StorageReference")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Storage::Internal::TransferState*), "set_Reference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Firebase::Storage::Internal::TransferState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
