// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OggVorbisEncoder::Setup
namespace OggVorbisEncoder::Setup {
  // Forward declaring type: Mapping
  class Mapping;
  // Forward declaring type: IResidueTemplate
  class IResidueTemplate;
}
// Completed forward declares
// Type namespace: OggVorbisEncoder.Setup
namespace OggVorbisEncoder::Setup {
  // Forward declaring type: IMappingTemplate
  class IMappingTemplate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OggVorbisEncoder::Setup::IMappingTemplate);
DEFINE_IL2CPP_ARG_TYPE(::OggVorbisEncoder::Setup::IMappingTemplate*, "OggVorbisEncoder.Setup", "IMappingTemplate");
// Type namespace: OggVorbisEncoder.Setup
namespace OggVorbisEncoder::Setup {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OggVorbisEncoder.Setup.IMappingTemplate
  // [TokenAttribute] Offset: FFFFFFFF
  class IMappingTemplate {
    public:
    // public OggVorbisEncoder.Setup.Mapping[] get_Mapping()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<::OggVorbisEncoder::Setup::Mapping*> get_Mapping();
    // public OggVorbisEncoder.Setup.IResidueTemplate[] get_ResidueTemplate()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<::OggVorbisEncoder::Setup::IResidueTemplate*> get_ResidueTemplate();
  }; // OggVorbisEncoder.Setup.IMappingTemplate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::IMappingTemplate::get_Mapping
// Il2CppName: get_Mapping
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::OggVorbisEncoder::Setup::Mapping*> (OggVorbisEncoder::Setup::IMappingTemplate::*)()>(&OggVorbisEncoder::Setup::IMappingTemplate::get_Mapping)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Setup::IMappingTemplate*), "get_Mapping", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::IMappingTemplate::get_ResidueTemplate
// Il2CppName: get_ResidueTemplate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::OggVorbisEncoder::Setup::IResidueTemplate*> (OggVorbisEncoder::Setup::IMappingTemplate::*)()>(&OggVorbisEncoder::Setup::IMappingTemplate::get_ResidueTemplate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Setup::IMappingTemplate*), "get_ResidueTemplate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};