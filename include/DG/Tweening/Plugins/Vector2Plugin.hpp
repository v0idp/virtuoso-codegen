// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DG.Tweening.Plugins.Core.ABSTweenPlugin`3
#include "DG/Tweening/Plugins/Core/ABSTweenPlugin_3.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: DG.Tweening.Plugins.Options.VectorOptions
#include "DG/Tweening/Plugins/Options/VectorOptions.hpp"
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
  // Forward declaring type: Vector2Plugin
  class Vector2Plugin;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DG::Tweening::Plugins::Vector2Plugin);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Plugins::Vector2Plugin*, "DG.Tweening.Plugins", "Vector2Plugin");
// Type namespace: DG.Tweening.Plugins
namespace DG::Tweening::Plugins {
  // WARNING Size may be invalid!
  // Autogenerated type: DG.Tweening.Plugins.Vector2Plugin
  // [TokenAttribute] Offset: FFFFFFFF
  class Vector2Plugin : public ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions> {
    public:
    // public System.Void Reset(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> t)
    // Offset: 0x12676BC
    void Reset(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions>* t);
    // public System.Void SetFrom(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> t, System.Boolean isRelative)
    // Offset: 0x12676C0
    void SetFrom(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions>* t, bool isRelative);
    // public System.Void SetFrom(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> t, UnityEngine.Vector2 fromValue, System.Boolean setImmediately)
    // Offset: 0x12678C8
    void SetFrom(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions>* t, ::UnityEngine::Vector2 fromValue, bool setImmediately);
    // public UnityEngine.Vector2 ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> t, UnityEngine.Vector2 value)
    // Offset: 0x1267AEC
    ::UnityEngine::Vector2 ConvertToStartValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions>* t, ::UnityEngine::Vector2 value);
    // public System.Void SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> t)
    // Offset: 0x1267AF0
    void SetRelativeEndValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions>* t);
    // public System.Void SetChangeValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> t)
    // Offset: 0x1267B1C
    void SetChangeValue(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions>* t);
    // public System.Single GetSpeedBasedDuration(DG.Tweening.Plugins.Options.VectorOptions options, System.Single unitsXSecond, UnityEngine.Vector2 changeValue)
    // Offset: 0x1267B8C
    float GetSpeedBasedDuration(::DG::Tweening::Plugins::Options::VectorOptions options, float unitsXSecond, ::UnityEngine::Vector2 changeValue);
    // public System.Void EvaluateAndApply(DG.Tweening.Plugins.Options.VectorOptions options, DG.Tweening.Tween t, System.Boolean isRelative, DG.Tweening.Core.DOGetter`1<UnityEngine.Vector2> getter, DG.Tweening.Core.DOSetter`1<UnityEngine.Vector2> setter, System.Single elapsed, UnityEngine.Vector2 startValue, UnityEngine.Vector2 changeValue, System.Single duration, System.Boolean usingInversePosition, DG.Tweening.Core.Enums.UpdateNotice updateNotice)
    // Offset: 0x1267BBC
    void EvaluateAndApply(::DG::Tweening::Plugins::Options::VectorOptions options, ::DG::Tweening::Tween* t, bool isRelative, ::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector2>* getter, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector2>* setter, float elapsed, ::UnityEngine::Vector2 startValue, ::UnityEngine::Vector2 changeValue, float duration, bool usingInversePosition, ::DG::Tweening::Core::Enums::UpdateNotice updateNotice);
    // public System.Void .ctor()
    // Offset: 0x1267FD8
    // Implemented from: DG.Tweening.Plugins.Core.ABSTweenPlugin`3
    // Base method: System.Void ABSTweenPlugin_3::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Vector2Plugin* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DG::Tweening::Plugins::Vector2Plugin::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Vector2Plugin*, creationType>()));
    }
  }; // DG.Tweening.Plugins.Vector2Plugin
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DG::Tweening::Plugins::Vector2Plugin::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::Plugins::Vector2Plugin::*)(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions>*)>(&DG::Tweening::Plugins::Vector2Plugin::Reset)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening.Core", "TweenerCore`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2"), ::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2"), ::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "VectorOptions")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::Vector2Plugin*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Plugins::Vector2Plugin::SetFrom
// Il2CppName: SetFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::Plugins::Vector2Plugin::*)(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions>*, bool)>(&DG::Tweening::Plugins::Vector2Plugin::SetFrom)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening.Core", "TweenerCore`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2"), ::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2"), ::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "VectorOptions")})->byval_arg;
    static auto* isRelative = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::Vector2Plugin*), "SetFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, isRelative});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Plugins::Vector2Plugin::SetFrom
// Il2CppName: SetFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::Plugins::Vector2Plugin::*)(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions>*, ::UnityEngine::Vector2, bool)>(&DG::Tweening::Plugins::Vector2Plugin::SetFrom)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening.Core", "TweenerCore`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2"), ::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2"), ::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "VectorOptions")})->byval_arg;
    static auto* fromValue = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* setImmediately = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::Vector2Plugin*), "SetFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, fromValue, setImmediately});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Plugins::Vector2Plugin::ConvertToStartValue
// Il2CppName: ConvertToStartValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (DG::Tweening::Plugins::Vector2Plugin::*)(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions>*, ::UnityEngine::Vector2)>(&DG::Tweening::Plugins::Vector2Plugin::ConvertToStartValue)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening.Core", "TweenerCore`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2"), ::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2"), ::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "VectorOptions")})->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::Vector2Plugin*), "ConvertToStartValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, value});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Plugins::Vector2Plugin::SetRelativeEndValue
// Il2CppName: SetRelativeEndValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::Plugins::Vector2Plugin::*)(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions>*)>(&DG::Tweening::Plugins::Vector2Plugin::SetRelativeEndValue)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening.Core", "TweenerCore`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2"), ::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2"), ::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "VectorOptions")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::Vector2Plugin*), "SetRelativeEndValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Plugins::Vector2Plugin::SetChangeValue
// Il2CppName: SetChangeValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::Plugins::Vector2Plugin::*)(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions>*)>(&DG::Tweening::Plugins::Vector2Plugin::SetChangeValue)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening.Core", "TweenerCore`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2"), ::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2"), ::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "VectorOptions")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::Vector2Plugin*), "SetChangeValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Plugins::Vector2Plugin::GetSpeedBasedDuration
// Il2CppName: GetSpeedBasedDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (DG::Tweening::Plugins::Vector2Plugin::*)(::DG::Tweening::Plugins::Options::VectorOptions, float, ::UnityEngine::Vector2)>(&DG::Tweening::Plugins::Vector2Plugin::GetSpeedBasedDuration)> {
  static const MethodInfo* get() {
    static auto* options = &::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "VectorOptions")->byval_arg;
    static auto* unitsXSecond = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* changeValue = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::Vector2Plugin*), "GetSpeedBasedDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{options, unitsXSecond, changeValue});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Plugins::Vector2Plugin::EvaluateAndApply
// Il2CppName: EvaluateAndApply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::Plugins::Vector2Plugin::*)(::DG::Tweening::Plugins::Options::VectorOptions, ::DG::Tweening::Tween*, bool, ::DG::Tweening::Core::DOGetter_1<::UnityEngine::Vector2>*, ::DG::Tweening::Core::DOSetter_1<::UnityEngine::Vector2>*, float, ::UnityEngine::Vector2, ::UnityEngine::Vector2, float, bool, ::DG::Tweening::Core::Enums::UpdateNotice)>(&DG::Tweening::Plugins::Vector2Plugin::EvaluateAndApply)> {
  static const MethodInfo* get() {
    static auto* options = &::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "VectorOptions")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    static auto* isRelative = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* getter = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening.Core", "DOGetter`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")})->byval_arg;
    static auto* setter = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening.Core", "DOSetter`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")})->byval_arg;
    static auto* elapsed = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* startValue = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* changeValue = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* usingInversePosition = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* updateNotice = &::il2cpp_utils::GetClassFromName("DG.Tweening.Core.Enums", "UpdateNotice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::Vector2Plugin*), "EvaluateAndApply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{options, t, isRelative, getter, setter, elapsed, startValue, changeValue, duration, usingInversePosition, updateNotice});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Plugins::Vector2Plugin::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
