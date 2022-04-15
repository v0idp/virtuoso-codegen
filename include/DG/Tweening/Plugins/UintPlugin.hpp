// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DG.Tweening.Plugins.Core.ABSTweenPlugin`3
#include "DG/Tweening/Plugins/Core/ABSTweenPlugin_3.hpp"
// Including type: DG.Tweening.Plugins.Options.UintOptions
#include "DG/Tweening/Plugins/Options/UintOptions.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: DG::Tweening::Core
namespace DG::Tweening::Core {
  // Forward declaring type: TweenerCore`3<T1, T2, TPlugOptions>
  template<typename T1, typename T2, typename TPlugOptions>
  class TweenerCore_3;
  // Forward declaring type: DOGetter`1<T>
  template<typename T>
  class DOGetter_1;
  // Forward declaring type: DOSetter`1<T>
  template<typename T>
  class DOSetter_1;
}
// Forward declaring namespace: DG::Tweening
namespace DG::Tweening {
  // Forward declaring type: Tween
  class Tween;
}
// Forward declaring namespace: DG::Tweening::Core::Enums
namespace DG::Tweening::Core::Enums {
  // Skipping declaration: UpdateNotice because it is already included!
}
// Completed forward declares
// Type namespace: DG.Tweening.Plugins
namespace DG::Tweening::Plugins {
  // Forward declaring type: UintPlugin
  class UintPlugin;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DG::Tweening::Plugins::UintPlugin);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Plugins::UintPlugin*, "DG.Tweening.Plugins", "UintPlugin");
// Type namespace: DG.Tweening.Plugins
namespace DG::Tweening::Plugins {
  // WARNING Size may be invalid!
  // Autogenerated type: DG.Tweening.Plugins.UintPlugin
  // [TokenAttribute] Offset: FFFFFFFF
  class UintPlugin : public ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<uint, uint, ::DG::Tweening::Plugins::Options::UintOptions> {
    public:
    // public System.Void Reset(DG.Tweening.Core.TweenerCore`3<System.UInt32,System.UInt32,DG.Tweening.Plugins.Options.UintOptions> t)
    // Offset: 0x185EC20
    void Reset(::DG::Tweening::Core::TweenerCore_3<uint, uint, ::DG::Tweening::Plugins::Options::UintOptions>* t);
    // public System.Void SetFrom(DG.Tweening.Core.TweenerCore`3<System.UInt32,System.UInt32,DG.Tweening.Plugins.Options.UintOptions> t, System.Boolean isRelative)
    // Offset: 0x185EC24
    void SetFrom(::DG::Tweening::Core::TweenerCore_3<uint, uint, ::DG::Tweening::Plugins::Options::UintOptions>* t, bool isRelative);
    // public System.Void SetFrom(DG.Tweening.Core.TweenerCore`3<System.UInt32,System.UInt32,DG.Tweening.Plugins.Options.UintOptions> t, System.UInt32 fromValue, System.Boolean setImmediately)
    // Offset: 0x185ECC8
    void SetFrom(::DG::Tweening::Core::TweenerCore_3<uint, uint, ::DG::Tweening::Plugins::Options::UintOptions>* t, uint fromValue, bool setImmediately);
    // public System.UInt32 ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<System.UInt32,System.UInt32,DG.Tweening.Plugins.Options.UintOptions> t, System.UInt32 value)
    // Offset: 0x185ED4C
    uint ConvertToStartValue(::DG::Tweening::Core::TweenerCore_3<uint, uint, ::DG::Tweening::Plugins::Options::UintOptions>* t, uint value);
    // public System.Void SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<System.UInt32,System.UInt32,DG.Tweening.Plugins.Options.UintOptions> t)
    // Offset: 0x185ED54
    void SetRelativeEndValue(::DG::Tweening::Core::TweenerCore_3<uint, uint, ::DG::Tweening::Plugins::Options::UintOptions>* t);
    // public System.Void SetChangeValue(DG.Tweening.Core.TweenerCore`3<System.UInt32,System.UInt32,DG.Tweening.Plugins.Options.UintOptions> t)
    // Offset: 0x185ED78
    void SetChangeValue(::DG::Tweening::Core::TweenerCore_3<uint, uint, ::DG::Tweening::Plugins::Options::UintOptions>* t);
    // public System.Single GetSpeedBasedDuration(DG.Tweening.Plugins.Options.UintOptions options, System.Single unitsXSecond, System.UInt32 changeValue)
    // Offset: 0x185EDAC
    float GetSpeedBasedDuration(::DG::Tweening::Plugins::Options::UintOptions options, float unitsXSecond, uint changeValue);
    // public System.Void EvaluateAndApply(DG.Tweening.Plugins.Options.UintOptions options, DG.Tweening.Tween t, System.Boolean isRelative, DG.Tweening.Core.DOGetter`1<System.UInt32> getter, DG.Tweening.Core.DOSetter`1<System.UInt32> setter, System.Single elapsed, System.UInt32 startValue, System.UInt32 changeValue, System.Single duration, System.Boolean usingInversePosition, DG.Tweening.Core.Enums.UpdateNotice updateNotice)
    // Offset: 0x185EDC8
    void EvaluateAndApply(::DG::Tweening::Plugins::Options::UintOptions options, ::DG::Tweening::Tween* t, bool isRelative, ::DG::Tweening::Core::DOGetter_1<uint>* getter, ::DG::Tweening::Core::DOSetter_1<uint>* setter, float elapsed, uint startValue, uint changeValue, float duration, bool usingInversePosition, ::DG::Tweening::Core::Enums::UpdateNotice updateNotice);
    // public System.Void .ctor()
    // Offset: 0x185EFD4
    // Implemented from: DG.Tweening.Plugins.Core.ABSTweenPlugin`3
    // Base method: System.Void ABSTweenPlugin_3::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UintPlugin* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DG::Tweening::Plugins::UintPlugin::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UintPlugin*, creationType>()));
    }
  }; // DG.Tweening.Plugins.UintPlugin
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DG::Tweening::Plugins::UintPlugin::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::Plugins::UintPlugin::*)(::DG::Tweening::Core::TweenerCore_3<uint, uint, ::DG::Tweening::Plugins::Options::UintOptions>*)>(&DG::Tweening::Plugins::UintPlugin::Reset)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening.Core", "TweenerCore`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "UInt32"), ::il2cpp_utils::GetClassFromName("System", "UInt32"), ::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "UintOptions")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::UintPlugin*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Plugins::UintPlugin::SetFrom
// Il2CppName: SetFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::Plugins::UintPlugin::*)(::DG::Tweening::Core::TweenerCore_3<uint, uint, ::DG::Tweening::Plugins::Options::UintOptions>*, bool)>(&DG::Tweening::Plugins::UintPlugin::SetFrom)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening.Core", "TweenerCore`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "UInt32"), ::il2cpp_utils::GetClassFromName("System", "UInt32"), ::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "UintOptions")})->byval_arg;
    static auto* isRelative = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::UintPlugin*), "SetFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, isRelative});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Plugins::UintPlugin::SetFrom
// Il2CppName: SetFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::Plugins::UintPlugin::*)(::DG::Tweening::Core::TweenerCore_3<uint, uint, ::DG::Tweening::Plugins::Options::UintOptions>*, uint, bool)>(&DG::Tweening::Plugins::UintPlugin::SetFrom)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening.Core", "TweenerCore`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "UInt32"), ::il2cpp_utils::GetClassFromName("System", "UInt32"), ::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "UintOptions")})->byval_arg;
    static auto* fromValue = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* setImmediately = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::UintPlugin*), "SetFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, fromValue, setImmediately});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Plugins::UintPlugin::ConvertToStartValue
// Il2CppName: ConvertToStartValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (DG::Tweening::Plugins::UintPlugin::*)(::DG::Tweening::Core::TweenerCore_3<uint, uint, ::DG::Tweening::Plugins::Options::UintOptions>*, uint)>(&DG::Tweening::Plugins::UintPlugin::ConvertToStartValue)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening.Core", "TweenerCore`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "UInt32"), ::il2cpp_utils::GetClassFromName("System", "UInt32"), ::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "UintOptions")})->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::UintPlugin*), "ConvertToStartValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, value});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Plugins::UintPlugin::SetRelativeEndValue
// Il2CppName: SetRelativeEndValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::Plugins::UintPlugin::*)(::DG::Tweening::Core::TweenerCore_3<uint, uint, ::DG::Tweening::Plugins::Options::UintOptions>*)>(&DG::Tweening::Plugins::UintPlugin::SetRelativeEndValue)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening.Core", "TweenerCore`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "UInt32"), ::il2cpp_utils::GetClassFromName("System", "UInt32"), ::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "UintOptions")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::UintPlugin*), "SetRelativeEndValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Plugins::UintPlugin::SetChangeValue
// Il2CppName: SetChangeValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::Plugins::UintPlugin::*)(::DG::Tweening::Core::TweenerCore_3<uint, uint, ::DG::Tweening::Plugins::Options::UintOptions>*)>(&DG::Tweening::Plugins::UintPlugin::SetChangeValue)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening.Core", "TweenerCore`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "UInt32"), ::il2cpp_utils::GetClassFromName("System", "UInt32"), ::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "UintOptions")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::UintPlugin*), "SetChangeValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Plugins::UintPlugin::GetSpeedBasedDuration
// Il2CppName: GetSpeedBasedDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (DG::Tweening::Plugins::UintPlugin::*)(::DG::Tweening::Plugins::Options::UintOptions, float, uint)>(&DG::Tweening::Plugins::UintPlugin::GetSpeedBasedDuration)> {
  static const MethodInfo* get() {
    static auto* options = &::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "UintOptions")->byval_arg;
    static auto* unitsXSecond = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* changeValue = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::UintPlugin*), "GetSpeedBasedDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{options, unitsXSecond, changeValue});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Plugins::UintPlugin::EvaluateAndApply
// Il2CppName: EvaluateAndApply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::Plugins::UintPlugin::*)(::DG::Tweening::Plugins::Options::UintOptions, ::DG::Tweening::Tween*, bool, ::DG::Tweening::Core::DOGetter_1<uint>*, ::DG::Tweening::Core::DOSetter_1<uint>*, float, uint, uint, float, bool, ::DG::Tweening::Core::Enums::UpdateNotice)>(&DG::Tweening::Plugins::UintPlugin::EvaluateAndApply)> {
  static const MethodInfo* get() {
    static auto* options = &::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "UintOptions")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    static auto* isRelative = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* getter = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening.Core", "DOGetter`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "UInt32")})->byval_arg;
    static auto* setter = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening.Core", "DOSetter`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "UInt32")})->byval_arg;
    static auto* elapsed = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* startValue = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* changeValue = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* usingInversePosition = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* updateNotice = &::il2cpp_utils::GetClassFromName("DG.Tweening.Core.Enums", "UpdateNotice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::UintPlugin*), "EvaluateAndApply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{options, t, isRelative, getter, setter, elapsed, startValue, changeValue, duration, usingInversePosition, updateNotice});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Plugins::UintPlugin::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
