// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: DG.Tweening.Plugins.Options.QuaternionOptions
#include "DG/Tweening/Plugins/Options/QuaternionOptions.hpp"
// Including type: DG.Tweening.Plugins.Options.Vector3ArrayOptions
#include "DG/Tweening/Plugins/Options/Vector3ArrayOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: DG::Tweening::Core
namespace DG::Tweening::Core {
  // Forward declaring type: TweenerCore`3<T1, T2, TPlugOptions>
  template<typename T1, typename T2, typename TPlugOptions>
  class TweenerCore_3;
}
// Completed forward declares
// Type namespace: DG.Tweening.Plugins.Core
namespace DG::Tweening::Plugins::Core {
  // Forward declaring type: SpecialPluginsUtils
  class SpecialPluginsUtils;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DG::Tweening::Plugins::Core::SpecialPluginsUtils);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Plugins::Core::SpecialPluginsUtils*, "DG.Tweening.Plugins.Core", "SpecialPluginsUtils");
// Type namespace: DG.Tweening.Plugins.Core
namespace DG::Tweening::Plugins::Core {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.Plugins.Core.SpecialPluginsUtils
  // [TokenAttribute] Offset: FFFFFFFF
  class SpecialPluginsUtils : public ::Il2CppObject {
    public:
    // static System.Boolean SetLookAt(DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions> t)
    // Offset: 0x1035644
    static bool SetLookAt(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::QuaternionOptions>* t);
    // static System.Boolean SetPunch(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions> t)
    // Offset: 0x1035768
    static bool SetPunch(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::ArrayW<::UnityEngine::Vector3>, ::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* t);
    // static System.Boolean SetShake(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions> t)
    // Offset: 0x10358D0
    static bool SetShake(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::ArrayW<::UnityEngine::Vector3>, ::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* t);
    // static System.Boolean SetCameraShakePosition(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions> t)
    // Offset: 0x103590C
    static bool SetCameraShakePosition(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::ArrayW<::UnityEngine::Vector3>, ::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* t);
  }; // DG.Tweening.Plugins.Core.SpecialPluginsUtils
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DG::Tweening::Plugins::Core::SpecialPluginsUtils::SetLookAt
// Il2CppName: SetLookAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::QuaternionOptions>*)>(&DG::Tweening::Plugins::Core::SpecialPluginsUtils::SetLookAt)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening.Core", "TweenerCore`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion"), ::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), ::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "QuaternionOptions")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::Core::SpecialPluginsUtils*), "SetLookAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Plugins::Core::SpecialPluginsUtils::SetPunch
// Il2CppName: SetPunch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::ArrayW<::UnityEngine::Vector3>, ::DG::Tweening::Plugins::Options::Vector3ArrayOptions>*)>(&DG::Tweening::Plugins::Core::SpecialPluginsUtils::SetPunch)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening.Core", "TweenerCore`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1), ::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "Vector3ArrayOptions")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::Core::SpecialPluginsUtils*), "SetPunch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Plugins::Core::SpecialPluginsUtils::SetShake
// Il2CppName: SetShake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::ArrayW<::UnityEngine::Vector3>, ::DG::Tweening::Plugins::Options::Vector3ArrayOptions>*)>(&DG::Tweening::Plugins::Core::SpecialPluginsUtils::SetShake)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening.Core", "TweenerCore`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1), ::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "Vector3ArrayOptions")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::Core::SpecialPluginsUtils*), "SetShake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Plugins::Core::SpecialPluginsUtils::SetCameraShakePosition
// Il2CppName: SetCameraShakePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::ArrayW<::UnityEngine::Vector3>, ::DG::Tweening::Plugins::Options::Vector3ArrayOptions>*)>(&DG::Tweening::Plugins::Core::SpecialPluginsUtils::SetCameraShakePosition)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening.Core", "TweenerCore`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1), ::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "Vector3ArrayOptions")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::Core::SpecialPluginsUtils*), "SetCameraShakePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
