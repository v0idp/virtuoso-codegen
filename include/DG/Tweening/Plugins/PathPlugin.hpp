// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DG.Tweening.Plugins.Core.ABSTweenPlugin`3
#include "DG/Tweening/Plugins/Core/ABSTweenPlugin_3.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: DG.Tweening.Plugins.Options.PathOptions
#include "DG/Tweening/Plugins/Options/PathOptions.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: DG::Tweening::Plugins::Core::PathCore
namespace DG::Tweening::Plugins::Core::PathCore {
  // Forward declaring type: Path
  class Path;
}
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
  // Forward declaring type: PathPlugin
  class PathPlugin;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DG::Tweening::Plugins::PathPlugin);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Plugins::PathPlugin*, "DG.Tweening.Plugins", "PathPlugin");
// Type namespace: DG.Tweening.Plugins
namespace DG::Tweening::Plugins {
  // WARNING Size may be invalid!
  // Autogenerated type: DG.Tweening.Plugins.PathPlugin
  // [TokenAttribute] Offset: FFFFFFFF
  class PathPlugin : public ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions> {
    public:
    // static field const value: static public System.Single MinLookAhead
    static constexpr const float MinLookAhead = 0.0001;
    // Get static field: static public System.Single MinLookAhead
    static float _get_MinLookAhead();
    // Set static field: static public System.Single MinLookAhead
    static void _set_MinLookAhead(float value);
    // public System.Void Reset(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> t)
    // Offset: 0x15E1C98
    void Reset(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>* t);
    // public System.Void SetFrom(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> t, System.Boolean isRelative)
    // Offset: 0x15E1CD0
    void SetFrom(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>* t, bool isRelative);
    // public System.Void SetFrom(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> t, DG.Tweening.Plugins.Core.PathCore.Path fromValue, System.Boolean setImmediately)
    // Offset: 0x15E1CD4
    void SetFrom(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>* t, ::DG::Tweening::Plugins::Core::PathCore::Path* fromValue, bool setImmediately);
    // static public DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> Get()
    // Offset: 0x15E1CD8
    static ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>* Get();
    // public DG.Tweening.Plugins.Core.PathCore.Path ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> t, UnityEngine.Vector3 value)
    // Offset: 0x15E1D1C
    ::DG::Tweening::Plugins::Core::PathCore::Path* ConvertToStartValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>* t, ::UnityEngine::Vector3 value);
    // public System.Void SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> t)
    // Offset: 0x15E1D34
    void SetRelativeEndValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>* t);
    // public System.Void SetChangeValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> t)
    // Offset: 0x15E1E20
    void SetChangeValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>* t);
    // public System.Single GetSpeedBasedDuration(DG.Tweening.Plugins.Options.PathOptions options, System.Single unitsXSecond, DG.Tweening.Plugins.Core.PathCore.Path changeValue)
    // Offset: 0x15E220C
    float GetSpeedBasedDuration(::DG::Tweening::Plugins::Options::PathOptions options, float unitsXSecond, ::DG::Tweening::Plugins::Core::PathCore::Path* changeValue);
    // public System.Void EvaluateAndApply(DG.Tweening.Plugins.Options.PathOptions options, DG.Tweening.Tween t, System.Boolean isRelative, DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3> getter, DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3> setter, System.Single elapsed, DG.Tweening.Plugins.Core.PathCore.Path startValue, DG.Tweening.Plugins.Core.PathCore.Path changeValue, System.Single duration, System.Boolean usingInversePosition, DG.Tweening.Core.Enums.UpdateNotice updateNotice)
    // Offset: 0x15E2228
    void EvaluateAndApply(::DG::Tweening::Plugins::Options::PathOptions options, ::DG::Tweening::Tween* t, bool isRelative, ::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector3>* getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector3>* setter, float elapsed, ::DG::Tweening::Plugins::Core::PathCore::Path* startValue, ::DG::Tweening::Plugins::Core::PathCore::Path* changeValue, float duration, bool usingInversePosition, ::DG::Tweening::Core::Enums::UpdateNotice updateNotice);
    // public System.Void SetOrientation(DG.Tweening.Plugins.Options.PathOptions options, DG.Tweening.Tween t, DG.Tweening.Plugins.Core.PathCore.Path path, System.Single pathPerc, UnityEngine.Vector3 tPos, DG.Tweening.Core.Enums.UpdateNotice updateNotice)
    // Offset: 0x15E24D8
    void SetOrientation(::DG::Tweening::Plugins::Options::PathOptions options, ::DG::Tweening::Tween* t, ::DG::Tweening::Plugins::Core::PathCore::Path* path, float pathPerc, ::UnityEngine::Vector3 tPos, ::DG::Tweening::Core::Enums::UpdateNotice updateNotice);
    // public System.Void .ctor()
    // Offset: 0x15E2CB0
    // Implemented from: DG.Tweening.Plugins.Core.ABSTweenPlugin`3
    // Base method: System.Void ABSTweenPlugin_3::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PathPlugin* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DG::Tweening::Plugins::PathPlugin::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PathPlugin*, creationType>()));
    }
  }; // DG.Tweening.Plugins.PathPlugin
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DG::Tweening::Plugins::PathPlugin::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::Plugins::PathPlugin::*)(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>*)>(&DG::Tweening::Plugins::PathPlugin::Reset)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening.Core", "TweenerCore`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), ::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Core.PathCore", "Path"), ::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "PathOptions")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::PathPlugin*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Plugins::PathPlugin::SetFrom
// Il2CppName: SetFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::Plugins::PathPlugin::*)(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>*, bool)>(&DG::Tweening::Plugins::PathPlugin::SetFrom)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening.Core", "TweenerCore`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), ::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Core.PathCore", "Path"), ::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "PathOptions")})->byval_arg;
    static auto* isRelative = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::PathPlugin*), "SetFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, isRelative});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Plugins::PathPlugin::SetFrom
// Il2CppName: SetFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::Plugins::PathPlugin::*)(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>*, ::DG::Tweening::Plugins::Core::PathCore::Path*, bool)>(&DG::Tweening::Plugins::PathPlugin::SetFrom)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening.Core", "TweenerCore`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), ::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Core.PathCore", "Path"), ::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "PathOptions")})->byval_arg;
    static auto* fromValue = &::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Core.PathCore", "Path")->byval_arg;
    static auto* setImmediately = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::PathPlugin*), "SetFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, fromValue, setImmediately});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Plugins::PathPlugin::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>* (*)()>(&DG::Tweening::Plugins::PathPlugin::Get)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::PathPlugin*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Plugins::PathPlugin::ConvertToStartValue
// Il2CppName: ConvertToStartValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::Plugins::Core::PathCore::Path* (DG::Tweening::Plugins::PathPlugin::*)(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>*, ::UnityEngine::Vector3)>(&DG::Tweening::Plugins::PathPlugin::ConvertToStartValue)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening.Core", "TweenerCore`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), ::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Core.PathCore", "Path"), ::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "PathOptions")})->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::PathPlugin*), "ConvertToStartValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, value});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Plugins::PathPlugin::SetRelativeEndValue
// Il2CppName: SetRelativeEndValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::Plugins::PathPlugin::*)(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>*)>(&DG::Tweening::Plugins::PathPlugin::SetRelativeEndValue)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening.Core", "TweenerCore`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), ::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Core.PathCore", "Path"), ::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "PathOptions")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::PathPlugin*), "SetRelativeEndValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Plugins::PathPlugin::SetChangeValue
// Il2CppName: SetChangeValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::Plugins::PathPlugin::*)(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Options::PathOptions>*)>(&DG::Tweening::Plugins::PathPlugin::SetChangeValue)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening.Core", "TweenerCore`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), ::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Core.PathCore", "Path"), ::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "PathOptions")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::PathPlugin*), "SetChangeValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Plugins::PathPlugin::GetSpeedBasedDuration
// Il2CppName: GetSpeedBasedDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (DG::Tweening::Plugins::PathPlugin::*)(::DG::Tweening::Plugins::Options::PathOptions, float, ::DG::Tweening::Plugins::Core::PathCore::Path*)>(&DG::Tweening::Plugins::PathPlugin::GetSpeedBasedDuration)> {
  static const MethodInfo* get() {
    static auto* options = &::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "PathOptions")->byval_arg;
    static auto* unitsXSecond = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* changeValue = &::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Core.PathCore", "Path")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::PathPlugin*), "GetSpeedBasedDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{options, unitsXSecond, changeValue});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Plugins::PathPlugin::EvaluateAndApply
// Il2CppName: EvaluateAndApply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::Plugins::PathPlugin::*)(::DG::Tweening::Plugins::Options::PathOptions, ::DG::Tweening::Tween*, bool, ::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector3>*, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector3>*, float, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::DG::Tweening::Plugins::Core::PathCore::Path*, float, bool, ::DG::Tweening::Core::Enums::UpdateNotice)>(&DG::Tweening::Plugins::PathPlugin::EvaluateAndApply)> {
  static const MethodInfo* get() {
    static auto* options = &::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "PathOptions")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    static auto* isRelative = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* getter = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening.Core", "DOGetter`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    static auto* setter = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening.Core", "DOSetter`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    static auto* elapsed = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* startValue = &::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Core.PathCore", "Path")->byval_arg;
    static auto* changeValue = &::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Core.PathCore", "Path")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* usingInversePosition = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* updateNotice = &::il2cpp_utils::GetClassFromName("DG.Tweening.Core.Enums", "UpdateNotice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::PathPlugin*), "EvaluateAndApply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{options, t, isRelative, getter, setter, elapsed, startValue, changeValue, duration, usingInversePosition, updateNotice});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Plugins::PathPlugin::SetOrientation
// Il2CppName: SetOrientation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::Plugins::PathPlugin::*)(::DG::Tweening::Plugins::Options::PathOptions, ::DG::Tweening::Tween*, ::DG::Tweening::Plugins::Core::PathCore::Path*, float, ::UnityEngine::Vector3, ::DG::Tweening::Core::Enums::UpdateNotice)>(&DG::Tweening::Plugins::PathPlugin::SetOrientation)> {
  static const MethodInfo* get() {
    static auto* options = &::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "PathOptions")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    static auto* path = &::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Core.PathCore", "Path")->byval_arg;
    static auto* pathPerc = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* tPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* updateNotice = &::il2cpp_utils::GetClassFromName("DG.Tweening.Core.Enums", "UpdateNotice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::PathPlugin*), "SetOrientation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{options, t, path, pathPerc, tPos, updateNotice});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Plugins::PathPlugin::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
