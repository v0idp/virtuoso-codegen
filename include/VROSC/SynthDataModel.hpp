// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.InstrumentDataModel
#include "VROSC/InstrumentDataModel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: OctaveData
  class OctaveData;
  // Forward declaring type: ScaleData
  class ScaleData;
  // Forward declaring type: SynthData
  class SynthData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: SynthDataModel
  class SynthDataModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::SynthDataModel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SynthDataModel*, "VROSC", "SynthDataModel");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x62
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SynthDataModel
  // [TokenAttribute] Offset: FFFFFFFF
  class SynthDataModel : public ::VROSC::InstrumentDataModel {
    public:
    // Writing base type padding for base size: 0x3D to desired offset: 0x40
    char ___base_padding[0x3] = {};
    public:
    // public VROSC.OctaveData OctaveData
    // Size: 0x8
    // Offset: 0x40
    ::VROSC::OctaveData* OctaveData;
    // Field size check
    static_assert(sizeof(::VROSC::OctaveData*) == 0x8);
    // public System.Collections.Generic.List`1<VROSC.ScaleData> ScalesData
    // Size: 0x8
    // Offset: 0x48
    ::System::Collections::Generic::List_1<::VROSC::ScaleData*>* ScalesData;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::VROSC::ScaleData*>*) == 0x8);
    // public System.String SelectedPatchName
    // Size: 0x8
    // Offset: 0x50
    ::StringW SelectedPatchName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Collections.Generic.List`1<System.String> PatchesFilenames
    // Size: 0x8
    // Offset: 0x58
    ::System::Collections::Generic::List_1<::StringW>* PatchesFilenames;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    // public System.Boolean FrameIsActive
    // Size: 0x1
    // Offset: 0x60
    bool FrameIsActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean ArpeggiatorLinkHands
    // Size: 0x1
    // Offset: 0x61
    bool ArpeggiatorLinkHands;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public VROSC.OctaveData OctaveData
    [[deprecated("Use field access instead!")]] ::VROSC::OctaveData*& dyn_OctaveData();
    // Get instance field reference: public System.Collections.Generic.List`1<VROSC.ScaleData> ScalesData
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::VROSC::ScaleData*>*& dyn_ScalesData();
    // Get instance field reference: public System.String SelectedPatchName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_SelectedPatchName();
    // Get instance field reference: public System.Collections.Generic.List`1<System.String> PatchesFilenames
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::StringW>*& dyn_PatchesFilenames();
    // Get instance field reference: public System.Boolean FrameIsActive
    [[deprecated("Use field access instead!")]] bool& dyn_FrameIsActive();
    // Get instance field reference: public System.Boolean ArpeggiatorLinkHands
    [[deprecated("Use field access instead!")]] bool& dyn_ArpeggiatorLinkHands();
    // public System.Void CopyOldSynthData(VROSC.SynthData oldSynthData)
    // Offset: 0x19339AC
    void CopyOldSynthData(::VROSC::SynthData* oldSynthData);
    // public override System.String get_Key()
    // Offset: 0x193534C
    // Implemented from: VROSC.BaseDataModel
    // Base method: System.String BaseDataModel::get_Key()
    ::StringW get_Key();
    // public override System.Int32 get_Version()
    // Offset: 0x193539C
    // Implemented from: VROSC.BaseDataModel
    // Base method: System.Int32 BaseDataModel::get_Version()
    int get_Version();
    // public System.Void .ctor()
    // Offset: 0x19338A4
    // Implemented from: VROSC.InstrumentDataModel
    // Base method: System.Void InstrumentDataModel::.ctor()
    // Base method: System.Void BaseDataModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SynthDataModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SynthDataModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SynthDataModel*, creationType>()));
    }
  }; // VROSC.SynthDataModel
  #pragma pack(pop)
  static check_size<sizeof(SynthDataModel), 97 + sizeof(bool)> __VROSC_SynthDataModelSizeCheck;
  static_assert(sizeof(SynthDataModel) == 0x62);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SynthDataModel::CopyOldSynthData
// Il2CppName: CopyOldSynthData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SynthDataModel::*)(::VROSC::SynthData*)>(&VROSC::SynthDataModel::CopyOldSynthData)> {
  static const MethodInfo* get() {
    static auto* oldSynthData = &::il2cpp_utils::GetClassFromName("VROSC", "SynthData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataModel*), "CopyOldSynthData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{oldSynthData});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataModel::get_Key
// Il2CppName: get_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VROSC::SynthDataModel::*)()>(&VROSC::SynthDataModel::get_Key)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataModel*), "get_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataModel::get_Version
// Il2CppName: get_Version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::SynthDataModel::*)()>(&VROSC::SynthDataModel::get_Version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::SynthDataModel*), "get_Version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::SynthDataModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
