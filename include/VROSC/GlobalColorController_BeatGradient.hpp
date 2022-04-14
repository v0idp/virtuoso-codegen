// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.GlobalColorController
#include "VROSC/GlobalColorController.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Gradient
  class Gradient;
  // Forward declaring type: Coroutine
  class Coroutine;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::GlobalColorController::BeatGradient);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::GlobalColorController::BeatGradient*, "VROSC", "GlobalColorController/BeatGradient");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.GlobalColorController/VROSC.BeatGradient
  // [TokenAttribute] Offset: FFFFFFFF
  class GlobalColorController::BeatGradient : public ::Il2CppObject {
    public:
    // Nested type: ::VROSC::GlobalColorController::BeatGradient::$PerformBeat$d__8
    class $PerformBeat$d__8;
    public:
    // private System.Int32 _beat
    // Size: 0x4
    // Offset: 0x10
    int beat;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: beat and: gradient
    char __padding0[0x4] = {};
    // private UnityEngine.Gradient _gradient
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Gradient* gradient;
    // Field size check
    static_assert(sizeof(::UnityEngine::Gradient*) == 0x8);
    // private System.Single _beatTime
    // Size: 0x4
    // Offset: 0x20
    float beatTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: beatTime and: value
    char __padding2[0x4] = {};
    // private System.String _value
    // Size: 0x8
    // Offset: 0x28
    ::StringW value;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Action`1<UnityEngine.Color> OnColorChange
    // Size: 0x8
    // Offset: 0x30
    ::System::Action_1<::UnityEngine::Color>* OnColorChange;
    // Field size check
    static_assert(sizeof(::System::Action_1<::UnityEngine::Color>*) == 0x8);
    // public UnityEngine.Coroutine BeatCoroutine
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Coroutine* BeatCoroutine;
    // Field size check
    static_assert(sizeof(::UnityEngine::Coroutine*) == 0x8);
    public:
    // Get instance field reference: private System.Int32 _beat
    [[deprecated]] int& dyn__beat();
    // Get instance field reference: private UnityEngine.Gradient _gradient
    [[deprecated]] ::UnityEngine::Gradient*& dyn__gradient();
    // Get instance field reference: private System.Single _beatTime
    [[deprecated]] float& dyn__beatTime();
    // Get instance field reference: private System.String _value
    [[deprecated]] ::StringW& dyn__value();
    // Get instance field reference: public System.Action`1<UnityEngine.Color> OnColorChange
    [[deprecated]] ::System::Action_1<::UnityEngine::Color>*& dyn_OnColorChange();
    // Get instance field reference: public UnityEngine.Coroutine BeatCoroutine
    [[deprecated]] ::UnityEngine::Coroutine*& dyn_BeatCoroutine();
    // public System.Int32 get_Beat()
    // Offset: 0x19570A4
    int get_Beat();
    // public System.Collections.IEnumerator PerformBeat(System.Single multiplier)
    // Offset: 0x19570AC
    ::System::Collections::IEnumerator* PerformBeat(float multiplier);
    // public System.Void .ctor()
    // Offset: 0x1957128
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GlobalColorController::BeatGradient* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::GlobalColorController::BeatGradient::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GlobalColorController::BeatGradient*, creationType>()));
    }
  }; // VROSC.GlobalColorController/VROSC.BeatGradient
  #pragma pack(pop)
  static check_size<sizeof(GlobalColorController::BeatGradient), 56 + sizeof(::UnityEngine::Coroutine*)> __VROSC_GlobalColorController_BeatGradientSizeCheck;
  static_assert(sizeof(GlobalColorController::BeatGradient) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::GlobalColorController::BeatGradient::get_Beat
// Il2CppName: get_Beat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::GlobalColorController::BeatGradient::*)()>(&VROSC::GlobalColorController::BeatGradient::get_Beat)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::GlobalColorController::BeatGradient*), "get_Beat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::GlobalColorController::BeatGradient::PerformBeat
// Il2CppName: PerformBeat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (VROSC::GlobalColorController::BeatGradient::*)(float)>(&VROSC::GlobalColorController::BeatGradient::PerformBeat)> {
  static const MethodInfo* get() {
    static auto* multiplier = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::GlobalColorController::BeatGradient*), "PerformBeat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{multiplier});
  }
};
// Writing MetadataGetter for method: VROSC::GlobalColorController::BeatGradient::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
