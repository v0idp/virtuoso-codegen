// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.PaginatedListItemData
#include "VROSC/PaginatedListItemData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture
  class Texture;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: VideoInfo
  class VideoInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::VideoInfo);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::VideoInfo*, "VROSC", "VideoInfo");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.VideoInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class VideoInfo : public ::VROSC::PaginatedListItemData {
    public:
    public:
    // public System.String VideoId
    // Size: 0x8
    // Offset: 0x10
    ::StringW VideoId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String VideoPath
    // Size: 0x8
    // Offset: 0x18
    ::StringW VideoPath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String Title
    // Size: 0x8
    // Offset: 0x20
    ::StringW Title;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String RequiredVersion
    // Size: 0x8
    // Offset: 0x28
    ::StringW RequiredVersion;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private UnityEngine.Texture <Thumbnail>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Texture* Thumbnail;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture*) == 0x8);
    public:
    // Get instance field reference: public System.String VideoId
    [[deprecated]] ::StringW& dyn_VideoId();
    // Get instance field reference: public System.String VideoPath
    [[deprecated]] ::StringW& dyn_VideoPath();
    // Get instance field reference: public System.String Title
    [[deprecated]] ::StringW& dyn_Title();
    // Get instance field reference: public System.String RequiredVersion
    [[deprecated]] ::StringW& dyn_RequiredVersion();
    // Get instance field reference: private UnityEngine.Texture <Thumbnail>k__BackingField
    [[deprecated]] ::UnityEngine::Texture*& dyn_$Thumbnail$k__BackingField();
    // public UnityEngine.Texture get_Thumbnail()
    // Offset: 0x1922638
    ::UnityEngine::Texture* get_Thumbnail();
    // public System.Void set_Thumbnail(UnityEngine.Texture value)
    // Offset: 0x1922640
    void set_Thumbnail(::UnityEngine::Texture* value);
    // public System.Void .ctor()
    // Offset: 0x1922648
    // Implemented from: VROSC.PaginatedListItemData
    // Base method: System.Void PaginatedListItemData::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VideoInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::VideoInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VideoInfo*, creationType>()));
    }
  }; // VROSC.VideoInfo
  #pragma pack(pop)
  static check_size<sizeof(VideoInfo), 48 + sizeof(::UnityEngine::Texture*)> __VROSC_VideoInfoSizeCheck;
  static_assert(sizeof(VideoInfo) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::VideoInfo::get_Thumbnail
// Il2CppName: get_Thumbnail
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture* (VROSC::VideoInfo::*)()>(&VROSC::VideoInfo::get_Thumbnail)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::VideoInfo*), "get_Thumbnail", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::VideoInfo::set_Thumbnail
// Il2CppName: set_Thumbnail
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::VideoInfo::*)(::UnityEngine::Texture*)>(&VROSC::VideoInfo::set_Thumbnail)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::VideoInfo*), "set_Thumbnail", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::VideoInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
