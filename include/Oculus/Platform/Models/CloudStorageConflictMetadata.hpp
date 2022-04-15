// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: CloudStorageMetadata
  class CloudStorageMetadata;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: CloudStorageConflictMetadata
  class CloudStorageConflictMetadata;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::CloudStorageConflictMetadata);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::CloudStorageConflictMetadata*, "Oculus.Platform.Models", "CloudStorageConflictMetadata");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.CloudStorageConflictMetadata
  // [TokenAttribute] Offset: FFFFFFFF
  class CloudStorageConflictMetadata : public ::Il2CppObject {
    public:
    public:
    // public readonly Oculus.Platform.Models.CloudStorageMetadata Local
    // Size: 0x8
    // Offset: 0x10
    ::Oculus::Platform::Models::CloudStorageMetadata* Local;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Models::CloudStorageMetadata*) == 0x8);
    // public readonly Oculus.Platform.Models.CloudStorageMetadata Remote
    // Size: 0x8
    // Offset: 0x18
    ::Oculus::Platform::Models::CloudStorageMetadata* Remote;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Models::CloudStorageMetadata*) == 0x8);
    public:
    // Get instance field reference: public readonly Oculus.Platform.Models.CloudStorageMetadata Local
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::Models::CloudStorageMetadata*& dyn_Local();
    // Get instance field reference: public readonly Oculus.Platform.Models.CloudStorageMetadata Remote
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::Models::CloudStorageMetadata*& dyn_Remote();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x925124
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CloudStorageConflictMetadata* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::CloudStorageConflictMetadata::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CloudStorageConflictMetadata*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.CloudStorageConflictMetadata
  #pragma pack(pop)
  static check_size<sizeof(CloudStorageConflictMetadata), 24 + sizeof(::Oculus::Platform::Models::CloudStorageMetadata*)> __Oculus_Platform_Models_CloudStorageConflictMetadataSizeCheck;
  static_assert(sizeof(CloudStorageConflictMetadata) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::CloudStorageConflictMetadata::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
