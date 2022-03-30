// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DG.Tweening.Plugins.Core.ABSTweenPlugin`3
#include "DG/Tweening/Plugins/Core/ABSTweenPlugin_3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Including type: DG.Tweening.Plugins.Options.NoOptions
#include "DG/Tweening/Plugins/Options/NoOptions.hpp"
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
// Type namespace: DG.Tweening.CustomPlugins
namespace DG::Tweening::CustomPlugins {
  // Forward declaring type: PureQuaternionPlugin
  class PureQuaternionPlugin;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DG::Tweening::CustomPlugins::PureQuaternionPlugin);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::CustomPlugins::PureQuaternionPlugin*, "DG.Tweening.CustomPlugins", "PureQuaternionPlugin");
// Type namespace: DG.Tweening.CustomPlugins
namespace DG::Tweening::CustomPlugins {
  // WARNING Size may be invalid!
  // Autogenerated type: DG.Tweening.CustomPlugins.PureQuaternionPlugin
  // [TokenAttribute] Offset: FFFFFFFF
  class PureQuaternionPlugin : public ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::DG::Tweening::Plugins::Options::NoOptions> {
    public:
    // Get static field: static private DG.Tweening.CustomPlugins.PureQuaternionPlugin _plug
    static ::DG::Tweening::CustomPlugins::PureQuaternionPlugin* _get__plug();
    // Set static field: static private DG.Tweening.CustomPlugins.PureQuaternionPlugin _plug
    static void _set__plug(::DG::Tweening::CustomPlugins::PureQuaternionPlugin* value);
    // static public DG.Tweening.CustomPlugins.PureQuaternionPlugin Plug()
    // Offset: 0x10A06D4
    static ::DG::Tweening::CustomPlugins::PureQuaternionPlugin* Plug();
    // public System.Void Reset(DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Quaternion,DG.Tweening.Plugins.Options.NoOptions> t)
    // Offset: 0x10A0798
    void Reset(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::DG::Tweening::Plugins::Options::NoOptions>* t);
    // public System.Void SetFrom(DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Quaternion,DG.Tweening.Plugins.Options.NoOptions> t, System.Boolean isRelative)
    // Offset: 0x10A079C
    void SetFrom(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::DG::Tweening::Plugins::Options::NoOptions>* t, bool isRelative);
    // public System.Void SetFrom(DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Quaternion,DG.Tweening.Plugins.Options.NoOptions> t, UnityEngine.Quaternion fromValue, System.Boolean setImmediately)
    // Offset: 0x10A08A0
    void SetFrom(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::DG::Tweening::Plugins::Options::NoOptions>* t, ::UnityEngine::Quaternion fromValue, bool setImmediately);
    // public UnityEngine.Quaternion ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Quaternion,DG.Tweening.Plugins.Options.NoOptions> t, UnityEngine.Quaternion value)
    // Offset: 0x10A0960
    ::UnityEngine::Quaternion ConvertToStartValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::DG::Tweening::Plugins::Options::NoOptions>* t, ::UnityEngine::Quaternion value);
    // public System.Void SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Quaternion,DG.Tweening.Plugins.Options.NoOptions> t)
    // Offset: 0x10A0964
    void SetRelativeEndValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::DG::Tweening::Plugins::Options::NoOptions>* t);
    // public System.Void SetChangeValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Quaternion,DG.Tweening.Plugins.Options.NoOptions> t)
    // Offset: 0x10A09C0
    void SetChangeValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::DG::Tweening::Plugins::Options::NoOptions>* t);
    // public System.Single GetSpeedBasedDuration(DG.Tweening.Plugins.Options.NoOptions options, System.Single unitsXSecond, UnityEngine.Quaternion changeValue)
    // Offset: 0x10A09E4
    float GetSpeedBasedDuration(::DG::Tweening::Plugins::Options::NoOptions options, float unitsXSecond, ::UnityEngine::Quaternion changeValue);
    // public System.Void EvaluateAndApply(DG.Tweening.Plugins.Options.NoOptions options, DG.Tweening.Tween t, System.Boolean isRelative, DG.Tweening.Core.DOGetter`1<UnityEngine.Quaternion> getter, DG.Tweening.Core.DOSetter`1<UnityEngine.Quaternion> setter, System.Single elapsed, UnityEngine.Quaternion startValue, UnityEngine.Quaternion changeValue, System.Single duration, System.Boolean usingInversePosition, DG.Tweening.Core.Enums.UpdateNotice updateNotice)
    // Offset: 0x10A0A34
    void EvaluateAndApply(::DG::Tweening::Plugins::Options::NoOptions options, ::DG::Tweening::Tween* t, bool isRelative, ::DG::Tweening::Core::DOGetter_1<::UnityEngine::Quaternion>* getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Quaternion>* setter, float elapsed, ::UnityEngine::Quaternion startValue, ::UnityEngine::Quaternion changeValue, float duration, bool usingInversePosition, ::DG::Tweening::Core::Enums::UpdateNotice updateNotice);
    // public System.Void .ctor()
    // Offset: 0x10A074C
    // Implemented from: DG.Tweening.Plugins.Core.ABSTweenPlugin`3
    // Base method: System.Void ABSTweenPlugin_3::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PureQuaternionPlugin* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DG::Tweening::CustomPlugins::PureQuaternionPlugin::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PureQuaternionPlugin*, creationType>()));
    }
  }; // DG.Tweening.CustomPlugins.PureQuaternionPlugin
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DG::Tweening::CustomPlugins::PureQuaternionPlugin::Plug
// Il2CppName: Plug
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::CustomPlugins::PureQuaternionPlugin* (*)()>(&DG::Tweening::CustomPlugins::PureQuaternionPlugin::Plug)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::CustomPlugins::PureQuaternionPlugin*), "Plug", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DG::Tweening::CustomPlugins::PureQuaternionPlugin::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::CustomPlugins::PureQuaternionPlugin::*)(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::DG::Tweening::Plugins::Options::NoOptions>*)>(&DG::Tweening::CustomPlugins::PureQuaternionPlugin::Reset)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening.Core", "TweenerCore`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion"), ::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion"), ::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "NoOptions")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::CustomPlugins::PureQuaternionPlugin*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::CustomPlugins::PureQuaternionPlugin::SetFrom
// Il2CppName: SetFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::CustomPlugins::PureQuaternionPlugin::*)(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::DG::Tweening::Plugins::Options::NoOptions>*, bool)>(&DG::Tweening::CustomPlugins::PureQuaternionPlugin::SetFrom)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening.Core", "TweenerCore`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion"), ::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion"), ::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "NoOptions")})->byval_arg;
    static auto* isRelative = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::CustomPlugins::PureQuaternionPlugin*), "SetFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, isRelative});
  }
};
// Writing MetadataGetter for method: DG::Tweening::CustomPlugins::PureQuaternionPlugin::SetFrom
// Il2CppName: SetFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::CustomPlugins::PureQuaternionPlugin::*)(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::DG::Tweening::Plugins::Options::NoOptions>*, ::UnityEngine::Quaternion, bool)>(&DG::Tweening::CustomPlugins::PureQuaternionPlugin::SetFrom)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening.Core", "TweenerCore`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion"), ::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion"), ::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "NoOptions")})->byval_arg;
    static auto* fromValue = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* setImmediately = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::CustomPlugins::PureQuaternionPlugin*), "SetFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, fromValue, setImmediately});
  }
};
// Writing MetadataGetter for method: DG::Tweening::CustomPlugins::PureQuaternionPlugin::ConvertToStartValue
// Il2CppName: ConvertToStartValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (DG::Tweening::CustomPlugins::PureQuaternionPlugin::*)(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::DG::Tweening::Plugins::Options::NoOptions>*, ::UnityEngine::Quaternion)>(&DG::Tweening::CustomPlugins::PureQuaternionPlugin::ConvertToStartValue)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening.Core", "TweenerCore`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion"), ::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion"), ::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "NoOptions")})->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::CustomPlugins::PureQuaternionPlugin*), "ConvertToStartValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, value});
  }
};
// Writing MetadataGetter for method: DG::Tweening::CustomPlugins::PureQuaternionPlugin::SetRelativeEndValue
// Il2CppName: SetRelativeEndValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::CustomPlugins::PureQuaternionPlugin::*)(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::DG::Tweening::Plugins::Options::NoOptions>*)>(&DG::Tweening::CustomPlugins::PureQuaternionPlugin::SetRelativeEndValue)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening.Core", "TweenerCore`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion"), ::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion"), ::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "NoOptions")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::CustomPlugins::PureQuaternionPlugin*), "SetRelativeEndValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::CustomPlugins::PureQuaternionPlugin::SetChangeValue
// Il2CppName: SetChangeValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::CustomPlugins::PureQuaternionPlugin::*)(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::DG::Tweening::Plugins::Options::NoOptions>*)>(&DG::Tweening::CustomPlugins::PureQuaternionPlugin::SetChangeValue)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening.Core", "TweenerCore`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion"), ::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion"), ::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "NoOptions")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::CustomPlugins::PureQuaternionPlugin*), "SetChangeValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::CustomPlugins::PureQuaternionPlugin::GetSpeedBasedDuration
// Il2CppName: GetSpeedBasedDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (DG::Tweening::CustomPlugins::PureQuaternionPlugin::*)(::DG::Tweening::Plugins::Options::NoOptions, float, ::UnityEngine::Quaternion)>(&DG::Tweening::CustomPlugins::PureQuaternionPlugin::GetSpeedBasedDuration)> {
  static const MethodInfo* get() {
    static auto* options = &::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "NoOptions")->byval_arg;
    static auto* unitsXSecond = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* changeValue = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::CustomPlugins::PureQuaternionPlugin*), "GetSpeedBasedDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{options, unitsXSecond, changeValue});
  }
};
// Writing MetadataGetter for method: DG::Tweening::CustomPlugins::PureQuaternionPlugin::EvaluateAndApply
// Il2CppName: EvaluateAndApply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::CustomPlugins::PureQuaternionPlugin::*)(::DG::Tweening::Plugins::Options::NoOptions, ::DG::Tweening::Tween*, bool, ::DG::Tweening::Core::DOGetter_1<::UnityEngine::Quaternion>*, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Quaternion>*, float, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, float, bool, ::DG::Tweening::Core::Enums::UpdateNotice)>(&DG::Tweening::CustomPlugins::PureQuaternionPlugin::EvaluateAndApply)> {
  static const MethodInfo* get() {
    static auto* options = &::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "NoOptions")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    static auto* isRelative = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* getter = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening.Core", "DOGetter`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")})->byval_arg;
    static auto* setter = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening.Core", "DOSetter`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")})->byval_arg;
    static auto* elapsed = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* startValue = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* changeValue = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* usingInversePosition = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* updateNotice = &::il2cpp_utils::GetClassFromName("DG.Tweening.Core.Enums", "UpdateNotice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::CustomPlugins::PureQuaternionPlugin*), "EvaluateAndApply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{options, t, isRelative, getter, setter, elapsed, startValue, changeValue, duration, usingInversePosition, updateNotice});
  }
};
// Writing MetadataGetter for method: DG::Tweening::CustomPlugins::PureQuaternionPlugin::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
