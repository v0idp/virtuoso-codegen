// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OggVorbisEncoder.Setup.Mode
#include "OggVorbisEncoder/Setup/Mode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OggVorbisEncoder
namespace OggVorbisEncoder {
  // Forward declaring type: CodecSetup
  class CodecSetup;
  // Forward declaring type: EncodeSetup
  class EncodeSetup;
}
// Forward declaring namespace: OggVorbisEncoder::Setup
namespace OggVorbisEncoder::Setup {
  // Forward declaring type: IStaticCodeBook
  class IStaticCodeBook;
  // Forward declaring type: Floor
  class Floor;
  // Forward declaring type: IMappingTemplate
  class IMappingTemplate;
  // Forward declaring type: IResidueTemplate
  class IResidueTemplate;
  // Forward declaring type: Residue
  class Residue;
  // Forward declaring type: IStaticBookBlock
  class IStaticBookBlock;
  // Forward declaring type: PsyGlobal
  class PsyGlobal;
  // Forward declaring type: AdjStereo
  class AdjStereo;
  // Forward declaring type: Att3
  class Att3;
  // Forward declaring type: AdjBlock
  class AdjBlock;
  // Forward declaring type: CompandBlock
  class CompandBlock;
  // Forward declaring type: Noise3
  class Noise3;
  // Forward declaring type: NoiseGuard
  class NoiseGuard;
}
// Completed forward declares
// Type namespace: OggVorbisEncoder
namespace OggVorbisEncoder {
  // Forward declaring type: VorbisInfo
  class VorbisInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OggVorbisEncoder::VorbisInfo);
DEFINE_IL2CPP_ARG_TYPE(::OggVorbisEncoder::VorbisInfo*, "OggVorbisEncoder", "VorbisInfo");
// Type namespace: OggVorbisEncoder
namespace OggVorbisEncoder {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: OggVorbisEncoder.VorbisInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class VorbisInfo : public ::Il2CppObject {
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
    // private readonly System.Int32 <Channels>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    int Channels;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Int32 <SampleRate>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    int SampleRate;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Int32 <BitRateNominal>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    int BitRateNominal;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: BitRateNominal and: CodecSetup
    char __padding2[0x4] = {};
    // private readonly OggVorbisEncoder.CodecSetup <CodecSetup>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::OggVorbisEncoder::CodecSetup* CodecSetup;
    // Field size check
    static_assert(sizeof(::OggVorbisEncoder::CodecSetup*) == 0x8);
    public:
    // Get static field: static private readonly OggVorbisEncoder.Setup.Mode[] ModeTemplate
    static ::ArrayW<::OggVorbisEncoder::Setup::Mode> _get_ModeTemplate();
    // Set static field: static private readonly OggVorbisEncoder.Setup.Mode[] ModeTemplate
    static void _set_ModeTemplate(::ArrayW<::OggVorbisEncoder::Setup::Mode> value);
    // Get instance field reference: private readonly System.Int32 <Channels>k__BackingField
    int& dyn_$Channels$k__BackingField();
    // Get instance field reference: private readonly System.Int32 <SampleRate>k__BackingField
    int& dyn_$SampleRate$k__BackingField();
    // Get instance field reference: private readonly System.Int32 <BitRateNominal>k__BackingField
    int& dyn_$BitRateNominal$k__BackingField();
    // Get instance field reference: private readonly OggVorbisEncoder.CodecSetup <CodecSetup>k__BackingField
    ::OggVorbisEncoder::CodecSetup*& dyn_$CodecSetup$k__BackingField();
    // public System.Int32 get_Channels()
    // Offset: 0x125F200
    int get_Channels();
    // public System.Int32 get_SampleRate()
    // Offset: 0x125F208
    int get_SampleRate();
    // public System.Int32 get_BitRateNominal()
    // Offset: 0x125F210
    int get_BitRateNominal();
    // public OggVorbisEncoder.CodecSetup get_CodecSetup()
    // Offset: 0x125F218
    ::OggVorbisEncoder::CodecSetup* get_CodecSetup();
    // private System.Void .ctor(OggVorbisEncoder.CodecSetup codecSetup, System.Int32 channels, System.Int32 sampleRate, System.Int32 bitRateNominal)
    // Offset: 0x125F1B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VorbisInfo* New_ctor(::OggVorbisEncoder::CodecSetup* codecSetup, int channels, int sampleRate, int bitRateNominal) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OggVorbisEncoder::VorbisInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VorbisInfo*, creationType>(codecSetup, channels, sampleRate, bitRateNominal)));
    }
    // static private System.Void .cctor()
    // Offset: 0x126403C
    static void _cctor();
    // static public OggVorbisEncoder.VorbisInfo InitVariableBitRate(System.Int32 channels, System.Int32 sampleRate, System.Single baseQuality)
    // Offset: 0x125F220
    static ::OggVorbisEncoder::VorbisInfo* InitVariableBitRate(int channels, int sampleRate, float baseQuality);
    // static private System.Void PsyParamSetup(OggVorbisEncoder.CodecSetup codecSetup, System.Int32 encodeSetupBaseSetting, System.Int32[] noiseNormalStart, System.Int32[] noiseNormalPartition, System.Double[] noiseNormalThreshold)
    // Offset: 0x1261CA8
    static void PsyParamSetup(::OggVorbisEncoder::CodecSetup* codecSetup, int encodeSetupBaseSetting, ::ArrayW<int> noiseNormalStart, ::ArrayW<int> noiseNormalPartition, ::ArrayW<double> noiseNormalThreshold);
    // static private System.Void FloorSetup(OggVorbisEncoder.CodecSetup codecSetup, System.Int32 encodeSetupBaseSetting, OggVorbisEncoder.Setup.IStaticCodeBook[][] templateFloorBooks, OggVorbisEncoder.Setup.Floor[] templateFloorParams, System.Int32[] templateFloorMappings)
    // Offset: 0x12611B8
    static void FloorSetup(::OggVorbisEncoder::CodecSetup* codecSetup, int encodeSetupBaseSetting, ::ArrayW<::ArrayW<::OggVorbisEncoder::Setup::IStaticCodeBook*>> templateFloorBooks, ::ArrayW<::OggVorbisEncoder::Setup::Floor*> templateFloorParams, ::ArrayW<int> templateFloorMappings);
    // static private System.Void MapAndResSetup(OggVorbisEncoder.CodecSetup codecSetup, System.Int32 sampleRate, System.Int32 channels, OggVorbisEncoder.Setup.IMappingTemplate[] templateMaps)
    // Offset: 0x1262AEC
    static void MapAndResSetup(::OggVorbisEncoder::CodecSetup* codecSetup, int sampleRate, int channels, ::ArrayW<::OggVorbisEncoder::Setup::IMappingTemplate*> templateMaps);
    // static private System.Void ResidueSetup(OggVorbisEncoder.CodecSetup codecSetup, System.Int32 sampleRate, System.Int32 channels, System.Int32 number, System.Int32 block, OggVorbisEncoder.Setup.IResidueTemplate residueTemplate)
    // Offset: 0x1263160
    static void ResidueSetup(::OggVorbisEncoder::CodecSetup* codecSetup, int sampleRate, int channels, int number, int block, ::OggVorbisEncoder::Setup::IResidueTemplate* residueTemplate);
    // static private System.Void FillBooks(OggVorbisEncoder.CodecSetup codecSetup, OggVorbisEncoder.Setup.Residue r, OggVorbisEncoder.Setup.IStaticCodeBook bookAux, OggVorbisEncoder.Setup.IStaticBookBlock bookBlock)
    // Offset: 0x126393C
    static void FillBooks(::OggVorbisEncoder::CodecSetup* codecSetup, ::OggVorbisEncoder::Setup::Residue* r, ::OggVorbisEncoder::Setup::IStaticCodeBook* bookAux, ::OggVorbisEncoder::Setup::IStaticBookBlock* bookBlock);
    // static private System.Int32 GetOrAddBook(OggVorbisEncoder.CodecSetup codecSetup, OggVorbisEncoder.Setup.IStaticCodeBook codeBook)
    // Offset: 0x1263DF8
    static int GetOrAddBook(::OggVorbisEncoder::CodecSetup* codecSetup, ::OggVorbisEncoder::Setup::IStaticCodeBook* codeBook);
    // static private System.Void GlobalPsychSetup(OggVorbisEncoder.CodecSetup codecSetup, System.Double encodeSetupTriggerSetting, OggVorbisEncoder.Setup.PsyGlobal[] templateGlobalParams, System.Double[] templateGlobalMapping)
    // Offset: 0x12615DC
    static void GlobalPsychSetup(::OggVorbisEncoder::CodecSetup* codecSetup, double encodeSetupTriggerSetting, ::ArrayW<::OggVorbisEncoder::Setup::PsyGlobal*> templateGlobalParams, ::ArrayW<double> templateGlobalMapping);
    // static private System.Void GlobalStereo(OggVorbisEncoder.CodecSetup codecSetup, System.Int32 sampleRate, OggVorbisEncoder.Setup.AdjStereo[] templateStereoModes)
    // Offset: 0x126185C
    static void GlobalStereo(::OggVorbisEncoder::CodecSetup* codecSetup, int sampleRate, ::ArrayW<::OggVorbisEncoder::Setup::AdjStereo*> templateStereoModes);
    // static private System.Void BlockSizeSetup(OggVorbisEncoder.CodecSetup codecSetup, System.Int32 index, System.Int32[] templateBlockSizeShort, System.Int32[] templateBlockSizeLong)
    // Offset: 0x1261134
    static void BlockSizeSetup(::OggVorbisEncoder::CodecSetup* codecSetup, int index, ::ArrayW<int> templateBlockSizeShort, ::ArrayW<int> templateBlockSizeLong);
    // static private System.Void ToneMaskSetup(OggVorbisEncoder.CodecSetup codecSetup, System.Double toneMaskSetting, System.Int32 block, OggVorbisEncoder.Setup.Att3[] templatePsyToneMasterAtt, System.Int32[] templatePsyTone0Decibel, OggVorbisEncoder.Setup.AdjBlock[] templatePsyToneAdjLong)
    // Offset: 0x1261EBC
    static void ToneMaskSetup(::OggVorbisEncoder::CodecSetup* codecSetup, double toneMaskSetting, int block, ::ArrayW<::OggVorbisEncoder::Setup::Att3*> templatePsyToneMasterAtt, ::ArrayW<int> templatePsyTone0Decibel, ::ArrayW<::OggVorbisEncoder::Setup::AdjBlock*> templatePsyToneAdjLong);
    // static private System.Void CompandSetup(OggVorbisEncoder.CodecSetup codecSetup, System.Double noiseCompandSetting, System.Int32 block, OggVorbisEncoder.Setup.CompandBlock[] templatePsyNoiseCompand, System.Double[] templatePsyNoiseCompandShortMapping)
    // Offset: 0x12622F0
    static void CompandSetup(::OggVorbisEncoder::CodecSetup* codecSetup, double noiseCompandSetting, int block, ::ArrayW<::OggVorbisEncoder::Setup::CompandBlock*> templatePsyNoiseCompand, ::ArrayW<double> templatePsyNoiseCompandShortMapping);
    // static private System.Void PeakSetup(OggVorbisEncoder.CodecSetup codecSetup, System.Double tonePeakLimitSetting, System.Int32 block, System.Int32[] templatePsyToneDecibelSuppress)
    // Offset: 0x1262538
    static void PeakSetup(::OggVorbisEncoder::CodecSetup* codecSetup, double tonePeakLimitSetting, int block, ::ArrayW<int> templatePsyToneDecibelSuppress);
    // static private System.Void NoiseBiasSetup(OggVorbisEncoder.CodecSetup codecSetup, System.Double noiseBiasSetting, System.Int32 block, System.Int32[] templatePsyNoiseDecibelSuppress, OggVorbisEncoder.Setup.Noise3[] templatePsyNoiseBiasLong, OggVorbisEncoder.Setup.NoiseGuard[] templatePsyNoiseGuards)
    // Offset: 0x126268C
    static void NoiseBiasSetup(::OggVorbisEncoder::CodecSetup* codecSetup, double noiseBiasSetting, int block, ::ArrayW<int> templatePsyNoiseDecibelSuppress, ::ArrayW<::OggVorbisEncoder::Setup::Noise3*> templatePsyNoiseBiasLong, ::ArrayW<::OggVorbisEncoder::Setup::NoiseGuard*> templatePsyNoiseGuards);
    // static private System.Void AthSetup(OggVorbisEncoder.CodecSetup codecSetup, System.Int32 block)
    // Offset: 0x12629FC
    static void AthSetup(::OggVorbisEncoder::CodecSetup* codecSetup, int block);
    // static private OggVorbisEncoder.EncodeSetup GetEncodeSetup(System.Int32 channels, System.Int32 sampleRate, System.Single quality)
    // Offset: 0x1261090
    static ::OggVorbisEncoder::EncodeSetup* GetEncodeSetup(int channels, int sampleRate, float quality);
    // static private System.Int32 GetApproxBitRate(OggVorbisEncoder.EncodeSetup encodeSetup, System.Int32 channels)
    // Offset: 0x1262F28
    static int GetApproxBitRate(::OggVorbisEncoder::EncodeSetup* encodeSetup, int channels);
  }; // OggVorbisEncoder.VorbisInfo
  #pragma pack(pop)
  static check_size<sizeof(VorbisInfo), 32 + sizeof(::OggVorbisEncoder::CodecSetup*)> __OggVorbisEncoder_VorbisInfoSizeCheck;
  static_assert(sizeof(VorbisInfo) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OggVorbisEncoder::VorbisInfo::get_Channels
// Il2CppName: get_Channels
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (OggVorbisEncoder::VorbisInfo::*)()>(&OggVorbisEncoder::VorbisInfo::get_Channels)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::VorbisInfo*), "get_Channels", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::VorbisInfo::get_SampleRate
// Il2CppName: get_SampleRate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (OggVorbisEncoder::VorbisInfo::*)()>(&OggVorbisEncoder::VorbisInfo::get_SampleRate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::VorbisInfo*), "get_SampleRate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::VorbisInfo::get_BitRateNominal
// Il2CppName: get_BitRateNominal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (OggVorbisEncoder::VorbisInfo::*)()>(&OggVorbisEncoder::VorbisInfo::get_BitRateNominal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::VorbisInfo*), "get_BitRateNominal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::VorbisInfo::get_CodecSetup
// Il2CppName: get_CodecSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OggVorbisEncoder::CodecSetup* (OggVorbisEncoder::VorbisInfo::*)()>(&OggVorbisEncoder::VorbisInfo::get_CodecSetup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::VorbisInfo*), "get_CodecSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::VorbisInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OggVorbisEncoder::VorbisInfo::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&OggVorbisEncoder::VorbisInfo::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::VorbisInfo*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::VorbisInfo::InitVariableBitRate
// Il2CppName: InitVariableBitRate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OggVorbisEncoder::VorbisInfo* (*)(int, int, float)>(&OggVorbisEncoder::VorbisInfo::InitVariableBitRate)> {
  static const MethodInfo* get() {
    static auto* channels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* sampleRate = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* baseQuality = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::VorbisInfo*), "InitVariableBitRate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{channels, sampleRate, baseQuality});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::VorbisInfo::PsyParamSetup
// Il2CppName: PsyParamSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::OggVorbisEncoder::CodecSetup*, int, ::ArrayW<int>, ::ArrayW<int>, ::ArrayW<double>)>(&OggVorbisEncoder::VorbisInfo::PsyParamSetup)> {
  static const MethodInfo* get() {
    static auto* codecSetup = &::il2cpp_utils::GetClassFromName("OggVorbisEncoder", "CodecSetup")->byval_arg;
    static auto* encodeSetupBaseSetting = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* noiseNormalStart = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* noiseNormalPartition = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* noiseNormalThreshold = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Double"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::VorbisInfo*), "PsyParamSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{codecSetup, encodeSetupBaseSetting, noiseNormalStart, noiseNormalPartition, noiseNormalThreshold});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::VorbisInfo::FloorSetup
// Il2CppName: FloorSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::OggVorbisEncoder::CodecSetup*, int, ::ArrayW<::ArrayW<::OggVorbisEncoder::Setup::IStaticCodeBook*>>, ::ArrayW<::OggVorbisEncoder::Setup::Floor*>, ::ArrayW<int>)>(&OggVorbisEncoder::VorbisInfo::FloorSetup)> {
  static const MethodInfo* get() {
    static auto* codecSetup = &::il2cpp_utils::GetClassFromName("OggVorbisEncoder", "CodecSetup")->byval_arg;
    static auto* encodeSetupBaseSetting = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* templateFloorBooks = &il2cpp_functions::array_class_get(il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("OggVorbisEncoder.Setup", "IStaticCodeBook"), 1), 1)->byval_arg;
    static auto* templateFloorParams = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("OggVorbisEncoder.Setup", "Floor"), 1)->byval_arg;
    static auto* templateFloorMappings = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::VorbisInfo*), "FloorSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{codecSetup, encodeSetupBaseSetting, templateFloorBooks, templateFloorParams, templateFloorMappings});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::VorbisInfo::MapAndResSetup
// Il2CppName: MapAndResSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::OggVorbisEncoder::CodecSetup*, int, int, ::ArrayW<::OggVorbisEncoder::Setup::IMappingTemplate*>)>(&OggVorbisEncoder::VorbisInfo::MapAndResSetup)> {
  static const MethodInfo* get() {
    static auto* codecSetup = &::il2cpp_utils::GetClassFromName("OggVorbisEncoder", "CodecSetup")->byval_arg;
    static auto* sampleRate = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* channels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* templateMaps = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("OggVorbisEncoder.Setup", "IMappingTemplate"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::VorbisInfo*), "MapAndResSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{codecSetup, sampleRate, channels, templateMaps});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::VorbisInfo::ResidueSetup
// Il2CppName: ResidueSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::OggVorbisEncoder::CodecSetup*, int, int, int, int, ::OggVorbisEncoder::Setup::IResidueTemplate*)>(&OggVorbisEncoder::VorbisInfo::ResidueSetup)> {
  static const MethodInfo* get() {
    static auto* codecSetup = &::il2cpp_utils::GetClassFromName("OggVorbisEncoder", "CodecSetup")->byval_arg;
    static auto* sampleRate = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* channels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* number = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* block = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* residueTemplate = &::il2cpp_utils::GetClassFromName("OggVorbisEncoder.Setup", "IResidueTemplate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::VorbisInfo*), "ResidueSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{codecSetup, sampleRate, channels, number, block, residueTemplate});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::VorbisInfo::FillBooks
// Il2CppName: FillBooks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::OggVorbisEncoder::CodecSetup*, ::OggVorbisEncoder::Setup::Residue*, ::OggVorbisEncoder::Setup::IStaticCodeBook*, ::OggVorbisEncoder::Setup::IStaticBookBlock*)>(&OggVorbisEncoder::VorbisInfo::FillBooks)> {
  static const MethodInfo* get() {
    static auto* codecSetup = &::il2cpp_utils::GetClassFromName("OggVorbisEncoder", "CodecSetup")->byval_arg;
    static auto* r = &::il2cpp_utils::GetClassFromName("OggVorbisEncoder.Setup", "Residue")->byval_arg;
    static auto* bookAux = &::il2cpp_utils::GetClassFromName("OggVorbisEncoder.Setup", "IStaticCodeBook")->byval_arg;
    static auto* bookBlock = &::il2cpp_utils::GetClassFromName("OggVorbisEncoder.Setup", "IStaticBookBlock")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::VorbisInfo*), "FillBooks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{codecSetup, r, bookAux, bookBlock});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::VorbisInfo::GetOrAddBook
// Il2CppName: GetOrAddBook
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::OggVorbisEncoder::CodecSetup*, ::OggVorbisEncoder::Setup::IStaticCodeBook*)>(&OggVorbisEncoder::VorbisInfo::GetOrAddBook)> {
  static const MethodInfo* get() {
    static auto* codecSetup = &::il2cpp_utils::GetClassFromName("OggVorbisEncoder", "CodecSetup")->byval_arg;
    static auto* codeBook = &::il2cpp_utils::GetClassFromName("OggVorbisEncoder.Setup", "IStaticCodeBook")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::VorbisInfo*), "GetOrAddBook", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{codecSetup, codeBook});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::VorbisInfo::GlobalPsychSetup
// Il2CppName: GlobalPsychSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::OggVorbisEncoder::CodecSetup*, double, ::ArrayW<::OggVorbisEncoder::Setup::PsyGlobal*>, ::ArrayW<double>)>(&OggVorbisEncoder::VorbisInfo::GlobalPsychSetup)> {
  static const MethodInfo* get() {
    static auto* codecSetup = &::il2cpp_utils::GetClassFromName("OggVorbisEncoder", "CodecSetup")->byval_arg;
    static auto* encodeSetupTriggerSetting = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* templateGlobalParams = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("OggVorbisEncoder.Setup", "PsyGlobal"), 1)->byval_arg;
    static auto* templateGlobalMapping = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Double"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::VorbisInfo*), "GlobalPsychSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{codecSetup, encodeSetupTriggerSetting, templateGlobalParams, templateGlobalMapping});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::VorbisInfo::GlobalStereo
// Il2CppName: GlobalStereo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::OggVorbisEncoder::CodecSetup*, int, ::ArrayW<::OggVorbisEncoder::Setup::AdjStereo*>)>(&OggVorbisEncoder::VorbisInfo::GlobalStereo)> {
  static const MethodInfo* get() {
    static auto* codecSetup = &::il2cpp_utils::GetClassFromName("OggVorbisEncoder", "CodecSetup")->byval_arg;
    static auto* sampleRate = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* templateStereoModes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("OggVorbisEncoder.Setup", "AdjStereo"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::VorbisInfo*), "GlobalStereo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{codecSetup, sampleRate, templateStereoModes});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::VorbisInfo::BlockSizeSetup
// Il2CppName: BlockSizeSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::OggVorbisEncoder::CodecSetup*, int, ::ArrayW<int>, ::ArrayW<int>)>(&OggVorbisEncoder::VorbisInfo::BlockSizeSetup)> {
  static const MethodInfo* get() {
    static auto* codecSetup = &::il2cpp_utils::GetClassFromName("OggVorbisEncoder", "CodecSetup")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* templateBlockSizeShort = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* templateBlockSizeLong = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::VorbisInfo*), "BlockSizeSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{codecSetup, index, templateBlockSizeShort, templateBlockSizeLong});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::VorbisInfo::ToneMaskSetup
// Il2CppName: ToneMaskSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::OggVorbisEncoder::CodecSetup*, double, int, ::ArrayW<::OggVorbisEncoder::Setup::Att3*>, ::ArrayW<int>, ::ArrayW<::OggVorbisEncoder::Setup::AdjBlock*>)>(&OggVorbisEncoder::VorbisInfo::ToneMaskSetup)> {
  static const MethodInfo* get() {
    static auto* codecSetup = &::il2cpp_utils::GetClassFromName("OggVorbisEncoder", "CodecSetup")->byval_arg;
    static auto* toneMaskSetting = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* block = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* templatePsyToneMasterAtt = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("OggVorbisEncoder.Setup", "Att3"), 1)->byval_arg;
    static auto* templatePsyTone0Decibel = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* templatePsyToneAdjLong = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("OggVorbisEncoder.Setup", "AdjBlock"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::VorbisInfo*), "ToneMaskSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{codecSetup, toneMaskSetting, block, templatePsyToneMasterAtt, templatePsyTone0Decibel, templatePsyToneAdjLong});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::VorbisInfo::CompandSetup
// Il2CppName: CompandSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::OggVorbisEncoder::CodecSetup*, double, int, ::ArrayW<::OggVorbisEncoder::Setup::CompandBlock*>, ::ArrayW<double>)>(&OggVorbisEncoder::VorbisInfo::CompandSetup)> {
  static const MethodInfo* get() {
    static auto* codecSetup = &::il2cpp_utils::GetClassFromName("OggVorbisEncoder", "CodecSetup")->byval_arg;
    static auto* noiseCompandSetting = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* block = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* templatePsyNoiseCompand = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("OggVorbisEncoder.Setup", "CompandBlock"), 1)->byval_arg;
    static auto* templatePsyNoiseCompandShortMapping = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Double"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::VorbisInfo*), "CompandSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{codecSetup, noiseCompandSetting, block, templatePsyNoiseCompand, templatePsyNoiseCompandShortMapping});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::VorbisInfo::PeakSetup
// Il2CppName: PeakSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::OggVorbisEncoder::CodecSetup*, double, int, ::ArrayW<int>)>(&OggVorbisEncoder::VorbisInfo::PeakSetup)> {
  static const MethodInfo* get() {
    static auto* codecSetup = &::il2cpp_utils::GetClassFromName("OggVorbisEncoder", "CodecSetup")->byval_arg;
    static auto* tonePeakLimitSetting = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* block = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* templatePsyToneDecibelSuppress = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::VorbisInfo*), "PeakSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{codecSetup, tonePeakLimitSetting, block, templatePsyToneDecibelSuppress});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::VorbisInfo::NoiseBiasSetup
// Il2CppName: NoiseBiasSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::OggVorbisEncoder::CodecSetup*, double, int, ::ArrayW<int>, ::ArrayW<::OggVorbisEncoder::Setup::Noise3*>, ::ArrayW<::OggVorbisEncoder::Setup::NoiseGuard*>)>(&OggVorbisEncoder::VorbisInfo::NoiseBiasSetup)> {
  static const MethodInfo* get() {
    static auto* codecSetup = &::il2cpp_utils::GetClassFromName("OggVorbisEncoder", "CodecSetup")->byval_arg;
    static auto* noiseBiasSetting = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* block = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* templatePsyNoiseDecibelSuppress = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* templatePsyNoiseBiasLong = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("OggVorbisEncoder.Setup", "Noise3"), 1)->byval_arg;
    static auto* templatePsyNoiseGuards = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("OggVorbisEncoder.Setup", "NoiseGuard"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::VorbisInfo*), "NoiseBiasSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{codecSetup, noiseBiasSetting, block, templatePsyNoiseDecibelSuppress, templatePsyNoiseBiasLong, templatePsyNoiseGuards});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::VorbisInfo::AthSetup
// Il2CppName: AthSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::OggVorbisEncoder::CodecSetup*, int)>(&OggVorbisEncoder::VorbisInfo::AthSetup)> {
  static const MethodInfo* get() {
    static auto* codecSetup = &::il2cpp_utils::GetClassFromName("OggVorbisEncoder", "CodecSetup")->byval_arg;
    static auto* block = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::VorbisInfo*), "AthSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{codecSetup, block});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::VorbisInfo::GetEncodeSetup
// Il2CppName: GetEncodeSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OggVorbisEncoder::EncodeSetup* (*)(int, int, float)>(&OggVorbisEncoder::VorbisInfo::GetEncodeSetup)> {
  static const MethodInfo* get() {
    static auto* channels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* sampleRate = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* quality = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::VorbisInfo*), "GetEncodeSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{channels, sampleRate, quality});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::VorbisInfo::GetApproxBitRate
// Il2CppName: GetApproxBitRate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::OggVorbisEncoder::EncodeSetup*, int)>(&OggVorbisEncoder::VorbisInfo::GetApproxBitRate)> {
  static const MethodInfo* get() {
    static auto* encodeSetup = &::il2cpp_utils::GetClassFromName("OggVorbisEncoder", "EncodeSetup")->byval_arg;
    static auto* channels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::VorbisInfo*), "GetApproxBitRate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{encodeSetup, channels});
  }
};
