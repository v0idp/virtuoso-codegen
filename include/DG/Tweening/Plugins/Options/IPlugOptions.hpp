// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: DG.Tweening.Plugins.Options
namespace DG::Tweening::Plugins::Options {
  // Forward declaring type: IPlugOptions
  class IPlugOptions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DG::Tweening::Plugins::Options::IPlugOptions);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Plugins::Options::IPlugOptions*, "DG.Tweening.Plugins.Options", "IPlugOptions");
// Type namespace: DG.Tweening.Plugins.Options
namespace DG::Tweening::Plugins::Options {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.Plugins.Options.IPlugOptions
  // [TokenAttribute] Offset: FFFFFFFF
  class IPlugOptions {
    public:
    // public System.Void Reset()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Reset();
  }; // DG.Tweening.Plugins.Options.IPlugOptions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DG::Tweening::Plugins::Options::IPlugOptions::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::Plugins::Options::IPlugOptions::*)()>(&DG::Tweening::Plugins::Options::IPlugOptions::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::Options::IPlugOptions*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
