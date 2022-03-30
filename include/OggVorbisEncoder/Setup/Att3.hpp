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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: OggVorbisEncoder.Setup
namespace OggVorbisEncoder::Setup {
  // Forward declaring type: Att3
  class Att3;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OggVorbisEncoder::Setup::Att3);
DEFINE_IL2CPP_ARG_TYPE(::OggVorbisEncoder::Setup::Att3*, "OggVorbisEncoder.Setup", "Att3");
// Type namespace: OggVorbisEncoder.Setup
namespace OggVorbisEncoder::Setup {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: OggVorbisEncoder.Setup.Att3
  // [TokenAttribute] Offset: FFFFFFFF
  class Att3 : public ::Il2CppObject {
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
    // private readonly System.Int32[] <Att>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<int> Att;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private readonly System.Single <Boost>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    float Boost;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly System.Single <Decay>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    float Decay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private readonly System.Int32[] <Att>k__BackingField
    ::ArrayW<int>& dyn_$Att$k__BackingField();
    // Get instance field reference: private readonly System.Single <Boost>k__BackingField
    float& dyn_$Boost$k__BackingField();
    // Get instance field reference: private readonly System.Single <Decay>k__BackingField
    float& dyn_$Decay$k__BackingField();
    // public System.Int32[] get_Att()
    // Offset: 0x7436A0
    ::ArrayW<int> get_Att();
    // public System.Single get_Boost()
    // Offset: 0x7436A8
    float get_Boost();
    // public System.Single get_Decay()
    // Offset: 0x7436B0
    float get_Decay();
    // public System.Void .ctor(System.Int32[] att, System.Single boost, System.Single decay)
    // Offset: 0x743660
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Att3* New_ctor(::ArrayW<int> att, float boost, float decay) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OggVorbisEncoder::Setup::Att3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Att3*, creationType>(att, boost, decay)));
    }
  }; // OggVorbisEncoder.Setup.Att3
  #pragma pack(pop)
  static check_size<sizeof(Att3), 28 + sizeof(float)> __OggVorbisEncoder_Setup_Att3SizeCheck;
  static_assert(sizeof(Att3) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::Att3::get_Att
// Il2CppName: get_Att
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int> (OggVorbisEncoder::Setup::Att3::*)()>(&OggVorbisEncoder::Setup::Att3::get_Att)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Setup::Att3*), "get_Att", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::Att3::get_Boost
// Il2CppName: get_Boost
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (OggVorbisEncoder::Setup::Att3::*)()>(&OggVorbisEncoder::Setup::Att3::get_Boost)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Setup::Att3*), "get_Boost", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::Att3::get_Decay
// Il2CppName: get_Decay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (OggVorbisEncoder::Setup::Att3::*)()>(&OggVorbisEncoder::Setup::Att3::get_Decay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Setup::Att3*), "get_Decay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::Att3::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
