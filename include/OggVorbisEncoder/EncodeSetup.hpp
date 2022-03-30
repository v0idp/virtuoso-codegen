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
// Forward declaring namespace: OggVorbisEncoder::Setup
namespace OggVorbisEncoder::Setup {
  // Forward declaring type: ISetupTemplate
  class ISetupTemplate;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: OggVorbisEncoder
namespace OggVorbisEncoder {
  // Forward declaring type: EncodeSetup
  class EncodeSetup;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OggVorbisEncoder::EncodeSetup);
DEFINE_IL2CPP_ARG_TYPE(::OggVorbisEncoder::EncodeSetup*, "OggVorbisEncoder", "EncodeSetup");
// Type namespace: OggVorbisEncoder
namespace OggVorbisEncoder {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: OggVorbisEncoder.EncodeSetup
  // [TokenAttribute] Offset: FFFFFFFF
  class EncodeSetup : public ::Il2CppObject {
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
    // private readonly OggVorbisEncoder.Setup.ISetupTemplate <Template>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::OggVorbisEncoder::Setup::ISetupTemplate* Template;
    // Field size check
    static_assert(sizeof(::OggVorbisEncoder::Setup::ISetupTemplate*) == 0x8);
    // private readonly System.Double <BaseSetting>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    double BaseSetting;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private readonly System.Double <LowPassKilohertz>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    double LowPassKilohertz;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private readonly System.Double <AthFloatingDecibel>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    double AthFloatingDecibel;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private readonly System.Double <AthAbsoluteDecibel>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    double AthAbsoluteDecibel;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private readonly System.Double <AmplitudeTrackDbPerSec>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    double AmplitudeTrackDbPerSec;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    public:
    // Get static field: static private readonly System.Collections.Generic.IEnumerable`1<OggVorbisEncoder.Setup.ISetupTemplate> SetupTemplates
    static ::System::Collections::Generic::IEnumerable_1<::OggVorbisEncoder::Setup::ISetupTemplate*>* _get_SetupTemplates();
    // Set static field: static private readonly System.Collections.Generic.IEnumerable`1<OggVorbisEncoder.Setup.ISetupTemplate> SetupTemplates
    static void _set_SetupTemplates(::System::Collections::Generic::IEnumerable_1<::OggVorbisEncoder::Setup::ISetupTemplate*>* value);
    // Get instance field reference: private readonly OggVorbisEncoder.Setup.ISetupTemplate <Template>k__BackingField
    ::OggVorbisEncoder::Setup::ISetupTemplate*& dyn_$Template$k__BackingField();
    // Get instance field reference: private readonly System.Double <BaseSetting>k__BackingField
    double& dyn_$BaseSetting$k__BackingField();
    // Get instance field reference: private readonly System.Double <LowPassKilohertz>k__BackingField
    double& dyn_$LowPassKilohertz$k__BackingField();
    // Get instance field reference: private readonly System.Double <AthFloatingDecibel>k__BackingField
    double& dyn_$AthFloatingDecibel$k__BackingField();
    // Get instance field reference: private readonly System.Double <AthAbsoluteDecibel>k__BackingField
    double& dyn_$AthAbsoluteDecibel$k__BackingField();
    // Get instance field reference: private readonly System.Double <AmplitudeTrackDbPerSec>k__BackingField
    double& dyn_$AmplitudeTrackDbPerSec$k__BackingField();
    // public OggVorbisEncoder.Setup.ISetupTemplate get_Template()
    // Offset: 0x75B02C
    ::OggVorbisEncoder::Setup::ISetupTemplate* get_Template();
    // public System.Double get_BaseSetting()
    // Offset: 0x75B034
    double get_BaseSetting();
    // public System.Double get_LowPassKilohertz()
    // Offset: 0x75B03C
    double get_LowPassKilohertz();
    // public System.Double get_AthFloatingDecibel()
    // Offset: 0x75B044
    double get_AthFloatingDecibel();
    // public System.Double get_AthAbsoluteDecibel()
    // Offset: 0x75B04C
    double get_AthAbsoluteDecibel();
    // public System.Double get_AmplitudeTrackDbPerSec()
    // Offset: 0x75B054
    double get_AmplitudeTrackDbPerSec();
    // public System.Void .ctor(OggVorbisEncoder.Setup.ISetupTemplate template, System.Double baseSetting)
    // Offset: 0x75AC04
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EncodeSetup* New_ctor(::OggVorbisEncoder::Setup::ISetupTemplate* _template, double baseSetting) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OggVorbisEncoder::EncodeSetup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EncodeSetup*, creationType>(_template, baseSetting)));
    }
    // static private System.Void .cctor()
    // Offset: 0x75B95C
    static void _cctor();
    // static public OggVorbisEncoder.EncodeSetup GetBestMatch(System.Int32 channels, System.Int32 sampleRate, System.Single quality)
    // Offset: 0x75B05C
    static ::OggVorbisEncoder::EncodeSetup* GetBestMatch(int channels, int sampleRate, float quality);
    // static private System.Collections.Generic.IEnumerable`1<OggVorbisEncoder.Setup.ISetupTemplate> CreateTemplates()
    // Offset: 0x75B898
    static ::System::Collections::Generic::IEnumerable_1<::OggVorbisEncoder::Setup::ISetupTemplate*>* CreateTemplates();
  }; // OggVorbisEncoder.EncodeSetup
  #pragma pack(pop)
  static check_size<sizeof(EncodeSetup), 56 + sizeof(double)> __OggVorbisEncoder_EncodeSetupSizeCheck;
  static_assert(sizeof(EncodeSetup) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OggVorbisEncoder::EncodeSetup::get_Template
// Il2CppName: get_Template
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OggVorbisEncoder::Setup::ISetupTemplate* (OggVorbisEncoder::EncodeSetup::*)()>(&OggVorbisEncoder::EncodeSetup::get_Template)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::EncodeSetup*), "get_Template", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::EncodeSetup::get_BaseSetting
// Il2CppName: get_BaseSetting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (OggVorbisEncoder::EncodeSetup::*)()>(&OggVorbisEncoder::EncodeSetup::get_BaseSetting)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::EncodeSetup*), "get_BaseSetting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::EncodeSetup::get_LowPassKilohertz
// Il2CppName: get_LowPassKilohertz
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (OggVorbisEncoder::EncodeSetup::*)()>(&OggVorbisEncoder::EncodeSetup::get_LowPassKilohertz)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::EncodeSetup*), "get_LowPassKilohertz", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::EncodeSetup::get_AthFloatingDecibel
// Il2CppName: get_AthFloatingDecibel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (OggVorbisEncoder::EncodeSetup::*)()>(&OggVorbisEncoder::EncodeSetup::get_AthFloatingDecibel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::EncodeSetup*), "get_AthFloatingDecibel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::EncodeSetup::get_AthAbsoluteDecibel
// Il2CppName: get_AthAbsoluteDecibel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (OggVorbisEncoder::EncodeSetup::*)()>(&OggVorbisEncoder::EncodeSetup::get_AthAbsoluteDecibel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::EncodeSetup*), "get_AthAbsoluteDecibel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::EncodeSetup::get_AmplitudeTrackDbPerSec
// Il2CppName: get_AmplitudeTrackDbPerSec
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (OggVorbisEncoder::EncodeSetup::*)()>(&OggVorbisEncoder::EncodeSetup::get_AmplitudeTrackDbPerSec)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::EncodeSetup*), "get_AmplitudeTrackDbPerSec", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::EncodeSetup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OggVorbisEncoder::EncodeSetup::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&OggVorbisEncoder::EncodeSetup::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::EncodeSetup*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::EncodeSetup::GetBestMatch
// Il2CppName: GetBestMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OggVorbisEncoder::EncodeSetup* (*)(int, int, float)>(&OggVorbisEncoder::EncodeSetup::GetBestMatch)> {
  static const MethodInfo* get() {
    static auto* channels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* sampleRate = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* quality = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::EncodeSetup*), "GetBestMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{channels, sampleRate, quality});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::EncodeSetup::CreateTemplates
// Il2CppName: CreateTemplates
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::OggVorbisEncoder::Setup::ISetupTemplate*>* (*)()>(&OggVorbisEncoder::EncodeSetup::CreateTemplates)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::EncodeSetup*), "CreateTemplates", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};