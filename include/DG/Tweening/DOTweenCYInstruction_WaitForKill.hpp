// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DG.Tweening.DOTweenCYInstruction
#include "DG/Tweening/DOTweenCYInstruction.hpp"
// Including type: UnityEngine.CustomYieldInstruction
#include "UnityEngine/CustomYieldInstruction.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: DG::Tweening
namespace DG::Tweening {
  // Forward declaring type: Tween
  class Tween;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DG::Tweening::DOTweenCYInstruction::WaitForKill);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenCYInstruction::WaitForKill*, "DG.Tweening", "DOTweenCYInstruction/WaitForKill");
// Type namespace: DG.Tweening
namespace DG::Tweening {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.DOTweenCYInstruction/DG.Tweening.WaitForKill
  // [TokenAttribute] Offset: FFFFFFFF
  class DOTweenCYInstruction::WaitForKill : public ::UnityEngine::CustomYieldInstruction {
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
    // private readonly DG.Tweening.Tween t
    // Size: 0x8
    // Offset: 0x10
    ::DG::Tweening::Tween* t;
    // Field size check
    static_assert(sizeof(::DG::Tweening::Tween*) == 0x8);
    public:
    // Creating conversion operator: operator ::DG::Tweening::Tween*
    constexpr operator ::DG::Tweening::Tween*() const noexcept {
      return t;
    }
    // Get instance field reference: private readonly DG.Tweening.Tween t
    ::DG::Tweening::Tween*& dyn_t();
    // public System.Void .ctor(DG.Tweening.Tween tween)
    // Offset: 0x1264230
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DOTweenCYInstruction::WaitForKill* New_ctor(::DG::Tweening::Tween* tween) {
      static auto ___internal__logger = ::Logger::get().WithContext("::DG::Tweening::DOTweenCYInstruction::WaitForKill::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DOTweenCYInstruction::WaitForKill*, creationType>(tween)));
    }
    // public override System.Boolean get_keepWaiting()
    // Offset: 0x1264214
    // Implemented from: UnityEngine.CustomYieldInstruction
    // Base method: System.Boolean CustomYieldInstruction::get_keepWaiting()
    bool get_keepWaiting();
  }; // DG.Tweening.DOTweenCYInstruction/DG.Tweening.WaitForKill
  #pragma pack(pop)
  static check_size<sizeof(DOTweenCYInstruction::WaitForKill), 16 + sizeof(::DG::Tweening::Tween*)> __DG_Tweening_DOTweenCYInstruction_WaitForKillSizeCheck;
  static_assert(sizeof(DOTweenCYInstruction::WaitForKill) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DG::Tweening::DOTweenCYInstruction::WaitForKill::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: DG::Tweening::DOTweenCYInstruction::WaitForKill::get_keepWaiting
// Il2CppName: get_keepWaiting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DG::Tweening::DOTweenCYInstruction::WaitForKill::*)()>(&DG::Tweening::DOTweenCYInstruction::WaitForKill::get_keepWaiting)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenCYInstruction::WaitForKill*), "get_keepWaiting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
