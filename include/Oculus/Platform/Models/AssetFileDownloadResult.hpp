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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: AssetFileDownloadResult
  class AssetFileDownloadResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::AssetFileDownloadResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::AssetFileDownloadResult*, "Oculus.Platform.Models", "AssetFileDownloadResult");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.AssetFileDownloadResult
  // [TokenAttribute] Offset: FFFFFFFF
  class AssetFileDownloadResult : public ::Il2CppObject {
    public:
    public:
    // public readonly System.UInt64 AssetId
    // Size: 0x8
    // Offset: 0x10
    uint64_t AssetId;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly System.String Filepath
    // Size: 0x8
    // Offset: 0x18
    ::StringW Filepath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public readonly System.UInt64 AssetId
    [[deprecated("Use field access instead!")]] uint64_t& dyn_AssetId();
    // Get instance field reference: public readonly System.String Filepath
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Filepath();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x8FC2EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssetFileDownloadResult* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::AssetFileDownloadResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssetFileDownloadResult*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.AssetFileDownloadResult
  #pragma pack(pop)
  static check_size<sizeof(AssetFileDownloadResult), 24 + sizeof(::StringW)> __Oculus_Platform_Models_AssetFileDownloadResultSizeCheck;
  static_assert(sizeof(AssetFileDownloadResult) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::AssetFileDownloadResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
