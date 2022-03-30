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
// Begin forward declares
// Forward declaring namespace: OggVorbisEncoder::Lookups
namespace OggVorbisEncoder::Lookups {
  // Forward declaring type: EnvelopeLookup
  class EnvelopeLookup;
  // Forward declaring type: MdctLookup
  class MdctLookup;
  // Forward declaring type: PsyGlobalLookup
  class PsyGlobalLookup;
  // Forward declaring type: PsyLookup
  class PsyLookup;
  // Forward declaring type: DrftLookup
  class DrftLookup;
  // Forward declaring type: FloorLookup
  class FloorLookup;
  // Forward declaring type: ResidueLookup
  class ResidueLookup;
}
// Forward declaring namespace: OggVorbisEncoder
namespace OggVorbisEncoder {
  // Forward declaring type: VorbisInfo
  class VorbisInfo;
}
// Completed forward declares
// Type namespace: OggVorbisEncoder
namespace OggVorbisEncoder {
  // Forward declaring type: LookupCollection
  class LookupCollection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OggVorbisEncoder::LookupCollection);
DEFINE_IL2CPP_ARG_TYPE(::OggVorbisEncoder::LookupCollection*, "OggVorbisEncoder", "LookupCollection");
// Type namespace: OggVorbisEncoder
namespace OggVorbisEncoder {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: OggVorbisEncoder.LookupCollection
  // [TokenAttribute] Offset: FFFFFFFF
  class LookupCollection : public ::Il2CppObject {
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
    // private readonly OggVorbisEncoder.Lookups.EnvelopeLookup <EnvelopeLookup>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::OggVorbisEncoder::Lookups::EnvelopeLookup* EnvelopeLookup;
    // Field size check
    static_assert(sizeof(::OggVorbisEncoder::Lookups::EnvelopeLookup*) == 0x8);
    // private readonly OggVorbisEncoder.Lookups.MdctLookup[] <TransformLookup>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::OggVorbisEncoder::Lookups::MdctLookup*> TransformLookup;
    // Field size check
    static_assert(sizeof(::ArrayW<::OggVorbisEncoder::Lookups::MdctLookup*>) == 0x8);
    // private readonly OggVorbisEncoder.Lookups.PsyGlobalLookup <PsyGlobalLookup>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::OggVorbisEncoder::Lookups::PsyGlobalLookup* PsyGlobalLookup;
    // Field size check
    static_assert(sizeof(::OggVorbisEncoder::Lookups::PsyGlobalLookup*) == 0x8);
    // private readonly OggVorbisEncoder.Lookups.PsyLookup[] <PsyLookup>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::OggVorbisEncoder::Lookups::PsyLookup*> PsyLookup;
    // Field size check
    static_assert(sizeof(::ArrayW<::OggVorbisEncoder::Lookups::PsyLookup*>) == 0x8);
    // private readonly OggVorbisEncoder.Lookups.DrftLookup[] <FftLookup>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::OggVorbisEncoder::Lookups::DrftLookup*> FftLookup;
    // Field size check
    static_assert(sizeof(::ArrayW<::OggVorbisEncoder::Lookups::DrftLookup*>) == 0x8);
    // private readonly OggVorbisEncoder.Lookups.FloorLookup[] <FloorLookup>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::OggVorbisEncoder::Lookups::FloorLookup*> FloorLookup;
    // Field size check
    static_assert(sizeof(::ArrayW<::OggVorbisEncoder::Lookups::FloorLookup*>) == 0x8);
    // private readonly OggVorbisEncoder.Lookups.ResidueLookup[] <ResidueLookup>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::OggVorbisEncoder::Lookups::ResidueLookup*> ResidueLookup;
    // Field size check
    static_assert(sizeof(::ArrayW<::OggVorbisEncoder::Lookups::ResidueLookup*>) == 0x8);
    public:
    // Get instance field reference: private readonly OggVorbisEncoder.Lookups.EnvelopeLookup <EnvelopeLookup>k__BackingField
    ::OggVorbisEncoder::Lookups::EnvelopeLookup*& dyn_$EnvelopeLookup$k__BackingField();
    // Get instance field reference: private readonly OggVorbisEncoder.Lookups.MdctLookup[] <TransformLookup>k__BackingField
    ::ArrayW<::OggVorbisEncoder::Lookups::MdctLookup*>& dyn_$TransformLookup$k__BackingField();
    // Get instance field reference: private readonly OggVorbisEncoder.Lookups.PsyGlobalLookup <PsyGlobalLookup>k__BackingField
    ::OggVorbisEncoder::Lookups::PsyGlobalLookup*& dyn_$PsyGlobalLookup$k__BackingField();
    // Get instance field reference: private readonly OggVorbisEncoder.Lookups.PsyLookup[] <PsyLookup>k__BackingField
    ::ArrayW<::OggVorbisEncoder::Lookups::PsyLookup*>& dyn_$PsyLookup$k__BackingField();
    // Get instance field reference: private readonly OggVorbisEncoder.Lookups.DrftLookup[] <FftLookup>k__BackingField
    ::ArrayW<::OggVorbisEncoder::Lookups::DrftLookup*>& dyn_$FftLookup$k__BackingField();
    // Get instance field reference: private readonly OggVorbisEncoder.Lookups.FloorLookup[] <FloorLookup>k__BackingField
    ::ArrayW<::OggVorbisEncoder::Lookups::FloorLookup*>& dyn_$FloorLookup$k__BackingField();
    // Get instance field reference: private readonly OggVorbisEncoder.Lookups.ResidueLookup[] <ResidueLookup>k__BackingField
    ::ArrayW<::OggVorbisEncoder::Lookups::ResidueLookup*>& dyn_$ResidueLookup$k__BackingField();
    // public OggVorbisEncoder.Lookups.EnvelopeLookup get_EnvelopeLookup()
    // Offset: 0x768CD8
    ::OggVorbisEncoder::Lookups::EnvelopeLookup* get_EnvelopeLookup();
    // public OggVorbisEncoder.Lookups.MdctLookup[] get_TransformLookup()
    // Offset: 0x768CE0
    ::ArrayW<::OggVorbisEncoder::Lookups::MdctLookup*> get_TransformLookup();
    // public OggVorbisEncoder.Lookups.PsyGlobalLookup get_PsyGlobalLookup()
    // Offset: 0x768CE8
    ::OggVorbisEncoder::Lookups::PsyGlobalLookup* get_PsyGlobalLookup();
    // public OggVorbisEncoder.Lookups.PsyLookup[] get_PsyLookup()
    // Offset: 0x768CF0
    ::ArrayW<::OggVorbisEncoder::Lookups::PsyLookup*> get_PsyLookup();
    // public OggVorbisEncoder.Lookups.DrftLookup[] get_FftLookup()
    // Offset: 0x768CF8
    ::ArrayW<::OggVorbisEncoder::Lookups::DrftLookup*> get_FftLookup();
    // public OggVorbisEncoder.Lookups.FloorLookup[] get_FloorLookup()
    // Offset: 0x768D00
    ::ArrayW<::OggVorbisEncoder::Lookups::FloorLookup*> get_FloorLookup();
    // public OggVorbisEncoder.Lookups.ResidueLookup[] get_ResidueLookup()
    // Offset: 0x768D08
    ::ArrayW<::OggVorbisEncoder::Lookups::ResidueLookup*> get_ResidueLookup();
    // private System.Void .ctor(OggVorbisEncoder.Lookups.EnvelopeLookup envelopeLookup, OggVorbisEncoder.Lookups.MdctLookup[] transformLookup, OggVorbisEncoder.Lookups.PsyGlobalLookup psyGlobalLookup, OggVorbisEncoder.Lookups.PsyLookup[] psyLookup, OggVorbisEncoder.Lookups.DrftLookup[] fftLookup, OggVorbisEncoder.Lookups.FloorLookup[] floorLookup, OggVorbisEncoder.Lookups.ResidueLookup[] residueLookup)
    // Offset: 0x768C70
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LookupCollection* New_ctor(::OggVorbisEncoder::Lookups::EnvelopeLookup* envelopeLookup, ::ArrayW<::OggVorbisEncoder::Lookups::MdctLookup*> transformLookup, ::OggVorbisEncoder::Lookups::PsyGlobalLookup* psyGlobalLookup, ::ArrayW<::OggVorbisEncoder::Lookups::PsyLookup*> psyLookup, ::ArrayW<::OggVorbisEncoder::Lookups::DrftLookup*> fftLookup, ::ArrayW<::OggVorbisEncoder::Lookups::FloorLookup*> floorLookup, ::ArrayW<::OggVorbisEncoder::Lookups::ResidueLookup*> residueLookup) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OggVorbisEncoder::LookupCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LookupCollection*, creationType>(envelopeLookup, transformLookup, psyGlobalLookup, psyLookup, fftLookup, floorLookup, residueLookup)));
    }
    // static public OggVorbisEncoder.LookupCollection Create(OggVorbisEncoder.VorbisInfo info)
    // Offset: 0x768D10
    static ::OggVorbisEncoder::LookupCollection* Create(::OggVorbisEncoder::VorbisInfo* info);
  }; // OggVorbisEncoder.LookupCollection
  #pragma pack(pop)
  static check_size<sizeof(LookupCollection), 64 + sizeof(::ArrayW<::OggVorbisEncoder::Lookups::ResidueLookup*>)> __OggVorbisEncoder_LookupCollectionSizeCheck;
  static_assert(sizeof(LookupCollection) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OggVorbisEncoder::LookupCollection::get_EnvelopeLookup
// Il2CppName: get_EnvelopeLookup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OggVorbisEncoder::Lookups::EnvelopeLookup* (OggVorbisEncoder::LookupCollection::*)()>(&OggVorbisEncoder::LookupCollection::get_EnvelopeLookup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::LookupCollection*), "get_EnvelopeLookup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::LookupCollection::get_TransformLookup
// Il2CppName: get_TransformLookup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::OggVorbisEncoder::Lookups::MdctLookup*> (OggVorbisEncoder::LookupCollection::*)()>(&OggVorbisEncoder::LookupCollection::get_TransformLookup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::LookupCollection*), "get_TransformLookup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::LookupCollection::get_PsyGlobalLookup
// Il2CppName: get_PsyGlobalLookup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OggVorbisEncoder::Lookups::PsyGlobalLookup* (OggVorbisEncoder::LookupCollection::*)()>(&OggVorbisEncoder::LookupCollection::get_PsyGlobalLookup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::LookupCollection*), "get_PsyGlobalLookup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::LookupCollection::get_PsyLookup
// Il2CppName: get_PsyLookup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::OggVorbisEncoder::Lookups::PsyLookup*> (OggVorbisEncoder::LookupCollection::*)()>(&OggVorbisEncoder::LookupCollection::get_PsyLookup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::LookupCollection*), "get_PsyLookup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::LookupCollection::get_FftLookup
// Il2CppName: get_FftLookup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::OggVorbisEncoder::Lookups::DrftLookup*> (OggVorbisEncoder::LookupCollection::*)()>(&OggVorbisEncoder::LookupCollection::get_FftLookup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::LookupCollection*), "get_FftLookup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::LookupCollection::get_FloorLookup
// Il2CppName: get_FloorLookup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::OggVorbisEncoder::Lookups::FloorLookup*> (OggVorbisEncoder::LookupCollection::*)()>(&OggVorbisEncoder::LookupCollection::get_FloorLookup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::LookupCollection*), "get_FloorLookup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::LookupCollection::get_ResidueLookup
// Il2CppName: get_ResidueLookup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::OggVorbisEncoder::Lookups::ResidueLookup*> (OggVorbisEncoder::LookupCollection::*)()>(&OggVorbisEncoder::LookupCollection::get_ResidueLookup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::LookupCollection*), "get_ResidueLookup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::LookupCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OggVorbisEncoder::LookupCollection::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OggVorbisEncoder::LookupCollection* (*)(::OggVorbisEncoder::VorbisInfo*)>(&OggVorbisEncoder::LookupCollection::Create)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("OggVorbisEncoder", "VorbisInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::LookupCollection*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info});
  }
};
