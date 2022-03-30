// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OggVorbisEncoder::Setup
namespace OggVorbisEncoder::Setup {
}
// Completed forward declares
// Type namespace: OggVorbisEncoder.Setup
namespace OggVorbisEncoder::Setup {
  // Forward declaring type: PsyGlobal
  class PsyGlobal;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OggVorbisEncoder::Setup::PsyGlobal);
DEFINE_IL2CPP_ARG_TYPE(::OggVorbisEncoder::Setup::PsyGlobal*, "OggVorbisEncoder.Setup", "PsyGlobal");
// Type namespace: OggVorbisEncoder.Setup
namespace OggVorbisEncoder::Setup {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: OggVorbisEncoder.Setup.PsyGlobal
  // [TokenAttribute] Offset: FFFFFFFF
  class PsyGlobal : public ::Il2CppObject {
    public:
    // Nested type: ::OggVorbisEncoder::Setup::PsyGlobal::$$c
    class $$c;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private readonly System.Int32 <EighthOctaveLines>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    int EighthOctaveLines;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: EighthOctaveLines and: PreEchoThreshold
    char __padding0[0x4] = {};
    // private readonly System.Single[] <PreEchoThreshold>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<float> PreEchoThreshold;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // private readonly System.Single[] <PostEchoThreshold>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<float> PostEchoThreshold;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // private readonly System.Single <StretchPenalty>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    float StretchPenalty;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly System.Single <PreEchoMinEnergy>k__BackingField
    // Size: 0x4
    // Offset: 0x2C
    float PreEchoMinEnergy;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <AmpMaxAttPerSec>k__BackingField
    // Size: 0x4
    // Offset: 0x30
    float AmpMaxAttPerSec;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: AmpMaxAttPerSec and: CouplingPerKilohertz
    char __padding5[0x4] = {};
    // private readonly System.Int32[] <CouplingPerKilohertz>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<int> CouplingPerKilohertz;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private readonly System.Int32[][] <CouplingPointLimit>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::ArrayW<int>> CouplingPointLimit;
    // Field size check
    static_assert(sizeof(::ArrayW<::ArrayW<int>>) == 0x8);
    // private System.Int32[] <CouplingPrePointAmp>k__BackingField
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<int> CouplingPrePointAmp;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private System.Int32[] <CouplingPostPointAmp>k__BackingField
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<int> CouplingPostPointAmp;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private readonly System.Int32[][] <SlidingLowPass>k__BackingField
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<::ArrayW<int>> SlidingLowPass;
    // Field size check
    static_assert(sizeof(::ArrayW<::ArrayW<int>>) == 0x8);
    public:
    // static field const value: static public System.Int32 EnvelopeBands
    static constexpr const int EnvelopeBands = 7;
    // Get static field: static public System.Int32 EnvelopeBands
    static int _get_EnvelopeBands();
    // Set static field: static public System.Int32 EnvelopeBands
    static void _set_EnvelopeBands(int value);
    // static field const value: static public System.Int32 PacketBlobs
    static constexpr const int PacketBlobs = 15;
    // Get static field: static public System.Int32 PacketBlobs
    static int _get_PacketBlobs();
    // Set static field: static public System.Int32 PacketBlobs
    static void _set_PacketBlobs(int value);
    // Get instance field reference: private readonly System.Int32 <EighthOctaveLines>k__BackingField
    int& dyn_$EighthOctaveLines$k__BackingField();
    // Get instance field reference: private readonly System.Single[] <PreEchoThreshold>k__BackingField
    ::ArrayW<float>& dyn_$PreEchoThreshold$k__BackingField();
    // Get instance field reference: private readonly System.Single[] <PostEchoThreshold>k__BackingField
    ::ArrayW<float>& dyn_$PostEchoThreshold$k__BackingField();
    // Get instance field reference: private readonly System.Single <StretchPenalty>k__BackingField
    float& dyn_$StretchPenalty$k__BackingField();
    // Get instance field reference: private readonly System.Single <PreEchoMinEnergy>k__BackingField
    float& dyn_$PreEchoMinEnergy$k__BackingField();
    // Get instance field reference: private System.Single <AmpMaxAttPerSec>k__BackingField
    float& dyn_$AmpMaxAttPerSec$k__BackingField();
    // Get instance field reference: private readonly System.Int32[] <CouplingPerKilohertz>k__BackingField
    ::ArrayW<int>& dyn_$CouplingPerKilohertz$k__BackingField();
    // Get instance field reference: private readonly System.Int32[][] <CouplingPointLimit>k__BackingField
    ::ArrayW<::ArrayW<int>>& dyn_$CouplingPointLimit$k__BackingField();
    // Get instance field reference: private System.Int32[] <CouplingPrePointAmp>k__BackingField
    ::ArrayW<int>& dyn_$CouplingPrePointAmp$k__BackingField();
    // Get instance field reference: private System.Int32[] <CouplingPostPointAmp>k__BackingField
    ::ArrayW<int>& dyn_$CouplingPostPointAmp$k__BackingField();
    // Get instance field reference: private readonly System.Int32[][] <SlidingLowPass>k__BackingField
    ::ArrayW<::ArrayW<int>>& dyn_$SlidingLowPass$k__BackingField();
    // public System.Int32 get_EighthOctaveLines()
    // Offset: 0x79BDFC
    int get_EighthOctaveLines();
    // public System.Single[] get_PreEchoThreshold()
    // Offset: 0x79BE04
    ::ArrayW<float> get_PreEchoThreshold();
    // public System.Single[] get_PostEchoThreshold()
    // Offset: 0x79BE0C
    ::ArrayW<float> get_PostEchoThreshold();
    // public System.Single get_StretchPenalty()
    // Offset: 0x79BE14
    float get_StretchPenalty();
    // public System.Single get_PreEchoMinEnergy()
    // Offset: 0x79BE1C
    float get_PreEchoMinEnergy();
    // public System.Single get_AmpMaxAttPerSec()
    // Offset: 0x79BE24
    float get_AmpMaxAttPerSec();
    // public System.Void set_AmpMaxAttPerSec(System.Single value)
    // Offset: 0x79BE2C
    void set_AmpMaxAttPerSec(float value);
    // public System.Int32[] get_CouplingPerKilohertz()
    // Offset: 0x79BE34
    ::ArrayW<int> get_CouplingPerKilohertz();
    // public System.Int32[][] get_CouplingPointLimit()
    // Offset: 0x79BE3C
    ::ArrayW<::ArrayW<int>> get_CouplingPointLimit();
    // public System.Int32[] get_CouplingPrePointAmp()
    // Offset: 0x79BE44
    ::ArrayW<int> get_CouplingPrePointAmp();
    // public System.Void set_CouplingPrePointAmp(System.Int32[] value)
    // Offset: 0x79BE4C
    void set_CouplingPrePointAmp(::ArrayW<int> value);
    // public System.Int32[] get_CouplingPostPointAmp()
    // Offset: 0x79BE54
    ::ArrayW<int> get_CouplingPostPointAmp();
    // public System.Void set_CouplingPostPointAmp(System.Int32[] value)
    // Offset: 0x79BE5C
    void set_CouplingPostPointAmp(::ArrayW<int> value);
    // public System.Int32[][] get_SlidingLowPass()
    // Offset: 0x79BE64
    ::ArrayW<::ArrayW<int>> get_SlidingLowPass();
    // public System.Void .ctor(System.Int32 eighthOctaveLines, System.Single[] preEchoThreshold, System.Single[] postEchoThreshold, System.Single stretchPenalty, System.Single preEchoMinEnergy, System.Single ampMaxAttPerSecond, System.Int32[] couplingPerKilohertz, System.Int32[][] couplingPointLimit, System.Int32[] couplingPrePointAmp, System.Int32[] couplingPostPointAmp, System.Int32[][] slidingLowPass)
    // Offset: 0x79BB18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PsyGlobal* New_ctor(int eighthOctaveLines, ::ArrayW<float> preEchoThreshold, ::ArrayW<float> postEchoThreshold, float stretchPenalty, float preEchoMinEnergy, float ampMaxAttPerSecond, ::ArrayW<int> couplingPerKilohertz, ::ArrayW<::ArrayW<int>> couplingPointLimit, ::ArrayW<int> couplingPrePointAmp, ::ArrayW<int> couplingPostPointAmp, ::ArrayW<::ArrayW<int>> slidingLowPass) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OggVorbisEncoder::Setup::PsyGlobal::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PsyGlobal*, creationType>(eighthOctaveLines, preEchoThreshold, postEchoThreshold, stretchPenalty, preEchoMinEnergy, ampMaxAttPerSecond, couplingPerKilohertz, couplingPointLimit, couplingPrePointAmp, couplingPostPointAmp, slidingLowPass)));
    }
    // public OggVorbisEncoder.Setup.PsyGlobal Clone()
    // Offset: 0x79BE6C
    ::OggVorbisEncoder::Setup::PsyGlobal* Clone();
  }; // OggVorbisEncoder.Setup.PsyGlobal
  #pragma pack(pop)
  static check_size<sizeof(PsyGlobal), 88 + sizeof(::ArrayW<::ArrayW<int>>)> __OggVorbisEncoder_Setup_PsyGlobalSizeCheck;
  static_assert(sizeof(PsyGlobal) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::PsyGlobal::get_EighthOctaveLines
// Il2CppName: get_EighthOctaveLines
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (OggVorbisEncoder::Setup::PsyGlobal::*)()>(&OggVorbisEncoder::Setup::PsyGlobal::get_EighthOctaveLines)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Setup::PsyGlobal*), "get_EighthOctaveLines", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::PsyGlobal::get_PreEchoThreshold
// Il2CppName: get_PreEchoThreshold
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float> (OggVorbisEncoder::Setup::PsyGlobal::*)()>(&OggVorbisEncoder::Setup::PsyGlobal::get_PreEchoThreshold)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Setup::PsyGlobal*), "get_PreEchoThreshold", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::PsyGlobal::get_PostEchoThreshold
// Il2CppName: get_PostEchoThreshold
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float> (OggVorbisEncoder::Setup::PsyGlobal::*)()>(&OggVorbisEncoder::Setup::PsyGlobal::get_PostEchoThreshold)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Setup::PsyGlobal*), "get_PostEchoThreshold", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::PsyGlobal::get_StretchPenalty
// Il2CppName: get_StretchPenalty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (OggVorbisEncoder::Setup::PsyGlobal::*)()>(&OggVorbisEncoder::Setup::PsyGlobal::get_StretchPenalty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Setup::PsyGlobal*), "get_StretchPenalty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::PsyGlobal::get_PreEchoMinEnergy
// Il2CppName: get_PreEchoMinEnergy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (OggVorbisEncoder::Setup::PsyGlobal::*)()>(&OggVorbisEncoder::Setup::PsyGlobal::get_PreEchoMinEnergy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Setup::PsyGlobal*), "get_PreEchoMinEnergy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::PsyGlobal::get_AmpMaxAttPerSec
// Il2CppName: get_AmpMaxAttPerSec
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (OggVorbisEncoder::Setup::PsyGlobal::*)()>(&OggVorbisEncoder::Setup::PsyGlobal::get_AmpMaxAttPerSec)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Setup::PsyGlobal*), "get_AmpMaxAttPerSec", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::PsyGlobal::set_AmpMaxAttPerSec
// Il2CppName: set_AmpMaxAttPerSec
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OggVorbisEncoder::Setup::PsyGlobal::*)(float)>(&OggVorbisEncoder::Setup::PsyGlobal::set_AmpMaxAttPerSec)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Setup::PsyGlobal*), "set_AmpMaxAttPerSec", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::PsyGlobal::get_CouplingPerKilohertz
// Il2CppName: get_CouplingPerKilohertz
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int> (OggVorbisEncoder::Setup::PsyGlobal::*)()>(&OggVorbisEncoder::Setup::PsyGlobal::get_CouplingPerKilohertz)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Setup::PsyGlobal*), "get_CouplingPerKilohertz", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::PsyGlobal::get_CouplingPointLimit
// Il2CppName: get_CouplingPointLimit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::ArrayW<int>> (OggVorbisEncoder::Setup::PsyGlobal::*)()>(&OggVorbisEncoder::Setup::PsyGlobal::get_CouplingPointLimit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Setup::PsyGlobal*), "get_CouplingPointLimit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::PsyGlobal::get_CouplingPrePointAmp
// Il2CppName: get_CouplingPrePointAmp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int> (OggVorbisEncoder::Setup::PsyGlobal::*)()>(&OggVorbisEncoder::Setup::PsyGlobal::get_CouplingPrePointAmp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Setup::PsyGlobal*), "get_CouplingPrePointAmp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::PsyGlobal::set_CouplingPrePointAmp
// Il2CppName: set_CouplingPrePointAmp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OggVorbisEncoder::Setup::PsyGlobal::*)(::ArrayW<int>)>(&OggVorbisEncoder::Setup::PsyGlobal::set_CouplingPrePointAmp)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Setup::PsyGlobal*), "set_CouplingPrePointAmp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::PsyGlobal::get_CouplingPostPointAmp
// Il2CppName: get_CouplingPostPointAmp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int> (OggVorbisEncoder::Setup::PsyGlobal::*)()>(&OggVorbisEncoder::Setup::PsyGlobal::get_CouplingPostPointAmp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Setup::PsyGlobal*), "get_CouplingPostPointAmp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::PsyGlobal::set_CouplingPostPointAmp
// Il2CppName: set_CouplingPostPointAmp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OggVorbisEncoder::Setup::PsyGlobal::*)(::ArrayW<int>)>(&OggVorbisEncoder::Setup::PsyGlobal::set_CouplingPostPointAmp)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Setup::PsyGlobal*), "set_CouplingPostPointAmp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::PsyGlobal::get_SlidingLowPass
// Il2CppName: get_SlidingLowPass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::ArrayW<int>> (OggVorbisEncoder::Setup::PsyGlobal::*)()>(&OggVorbisEncoder::Setup::PsyGlobal::get_SlidingLowPass)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Setup::PsyGlobal*), "get_SlidingLowPass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::PsyGlobal::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::PsyGlobal::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OggVorbisEncoder::Setup::PsyGlobal* (OggVorbisEncoder::Setup::PsyGlobal::*)()>(&OggVorbisEncoder::Setup::PsyGlobal::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Setup::PsyGlobal*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
