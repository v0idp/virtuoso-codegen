// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: FullScreenFxController
  class FullScreenFxController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::FullScreenFxController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FullScreenFxController*, "VROSC", "FullScreenFxController");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x25
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.FullScreenFxController
  // [TokenAttribute] Offset: FFFFFFFF
  class FullScreenFxController : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::VROSC::FullScreenFxController::$Recenter$d__3
    struct $Recenter$d__3;
    // Nested type: ::VROSC::FullScreenFxController::$FadeToBlack$d__5
    struct $FadeToBlack$d__5;
    // Nested type: ::VROSC::FullScreenFxController::$FadeFromBlack$d__6
    struct $FadeFromBlack$d__6;
    public:
    // private UnityEngine.AnimationCurve _screenFadeCurve
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::AnimationCurve* screenFadeCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // private System.Single _screenFadeTime
    // Size: 0x4
    // Offset: 0x20
    float screenFadeTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _isRecentering
    // Size: 0x1
    // Offset: 0x24
    bool isRecentering;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.AnimationCurve _screenFadeCurve
    [[deprecated]] ::UnityEngine::AnimationCurve*& dyn__screenFadeCurve();
    // Get instance field reference: private System.Single _screenFadeTime
    [[deprecated]] float& dyn__screenFadeTime();
    // Get instance field reference: private System.Boolean _isRecentering
    [[deprecated]] bool& dyn__isRecentering();
    // public System.Threading.Tasks.Task Recenter(System.Boolean useFade)
    // Offset: 0x19A1664
    ::System::Threading::Tasks::Task* Recenter(bool useFade);
    // private System.Void RecenterSteam()
    // Offset: 0x19A178C
    void RecenterSteam();
    // public System.Threading.Tasks.Task FadeToBlack(System.Boolean instant)
    // Offset: 0x19A1858
    ::System::Threading::Tasks::Task* FadeToBlack(bool instant);
    // public System.Threading.Tasks.Task FadeFromBlack(System.Boolean instant)
    // Offset: 0x19A1980
    ::System::Threading::Tasks::Task* FadeFromBlack(bool instant);
    // public System.Void .ctor()
    // Offset: 0x19A1AA8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FullScreenFxController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::FullScreenFxController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FullScreenFxController*, creationType>()));
    }
  }; // VROSC.FullScreenFxController
  #pragma pack(pop)
  static check_size<sizeof(FullScreenFxController), 36 + sizeof(bool)> __VROSC_FullScreenFxControllerSizeCheck;
  static_assert(sizeof(FullScreenFxController) == 0x25);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::FullScreenFxController::Recenter
// Il2CppName: Recenter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (VROSC::FullScreenFxController::*)(bool)>(&VROSC::FullScreenFxController::Recenter)> {
  static const MethodInfo* get() {
    static auto* useFade = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::FullScreenFxController*), "Recenter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{useFade});
  }
};
// Writing MetadataGetter for method: VROSC::FullScreenFxController::RecenterSteam
// Il2CppName: RecenterSteam
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::FullScreenFxController::*)()>(&VROSC::FullScreenFxController::RecenterSteam)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::FullScreenFxController*), "RecenterSteam", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::FullScreenFxController::FadeToBlack
// Il2CppName: FadeToBlack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (VROSC::FullScreenFxController::*)(bool)>(&VROSC::FullScreenFxController::FadeToBlack)> {
  static const MethodInfo* get() {
    static auto* instant = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::FullScreenFxController*), "FadeToBlack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instant});
  }
};
// Writing MetadataGetter for method: VROSC::FullScreenFxController::FadeFromBlack
// Il2CppName: FadeFromBlack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (VROSC::FullScreenFxController::*)(bool)>(&VROSC::FullScreenFxController::FadeFromBlack)> {
  static const MethodInfo* get() {
    static auto* instant = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::FullScreenFxController*), "FadeFromBlack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instant});
  }
};
// Writing MetadataGetter for method: VROSC::FullScreenFxController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
