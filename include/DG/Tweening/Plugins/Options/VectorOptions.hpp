// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: DG.Tweening.Plugins.Options.IPlugOptions
#include "DG/Tweening/Plugins/Options/IPlugOptions.hpp"
// Including type: DG.Tweening.AxisConstraint
#include "DG/Tweening/AxisConstraint.hpp"
// Completed includes
// Type namespace: DG.Tweening.Plugins.Options
namespace DG::Tweening::Plugins::Options {
  // Forward declaring type: VectorOptions
  struct VectorOptions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Plugins::Options::VectorOptions, "DG.Tweening.Plugins.Options", "VectorOptions");
// Type namespace: DG.Tweening.Plugins.Options
namespace DG::Tweening::Plugins::Options {
  // Size: 0x5
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: DG.Tweening.Plugins.Options.VectorOptions
  // [TokenAttribute] Offset: FFFFFFFF
  struct VectorOptions/*, public ::System::ValueType, public ::DG::Tweening::Plugins::Options::IPlugOptions*/ {
    public:
    public:
    // public DG.Tweening.AxisConstraint axisConstraint
    // Size: 0x4
    // Offset: 0x0
    ::DG::Tweening::AxisConstraint axisConstraint;
    // Field size check
    static_assert(sizeof(::DG::Tweening::AxisConstraint) == 0x4);
    // public System.Boolean snapping
    // Size: 0x1
    // Offset: 0x4
    bool snapping;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: VectorOptions
    constexpr VectorOptions(::DG::Tweening::AxisConstraint axisConstraint_ = {}, bool snapping_ = {}) noexcept : axisConstraint{axisConstraint_}, snapping{snapping_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::DG::Tweening::Plugins::Options::IPlugOptions
    operator ::DG::Tweening::Plugins::Options::IPlugOptions() noexcept {
      return *reinterpret_cast<::DG::Tweening::Plugins::Options::IPlugOptions*>(this);
    }
    // Get instance field reference: public DG.Tweening.AxisConstraint axisConstraint
    [[deprecated]] ::DG::Tweening::AxisConstraint& dyn_axisConstraint();
    // Get instance field reference: public System.Boolean snapping
    [[deprecated]] bool& dyn_snapping();
    // public System.Void Reset()
    // Offset: 0x1862E68
    void Reset();
  }; // DG.Tweening.Plugins.Options.VectorOptions
  #pragma pack(pop)
  static check_size<sizeof(VectorOptions), 4 + sizeof(bool)> __DG_Tweening_Plugins_Options_VectorOptionsSizeCheck;
  static_assert(sizeof(VectorOptions) == 0x5);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DG::Tweening::Plugins::Options::VectorOptions::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::Plugins::Options::VectorOptions::*)()>(&DG::Tweening::Plugins::Options::VectorOptions::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::Options::VectorOptions), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
