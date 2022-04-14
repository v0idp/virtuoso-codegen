// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: VROSC.TutorialStep
#include "VROSC/TutorialStep.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: TutorialCondition
  class TutorialCondition;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::TutorialCondition);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TutorialCondition*, "VROSC", "TutorialCondition");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.TutorialCondition
  // [TokenAttribute] Offset: FFFFFFFF
  class TutorialCondition : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private TMPro.TextMeshPro _conditionText
    // Size: 0x8
    // Offset: 0x18
    ::TMPro::TextMeshPro* conditionText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshPro*) == 0x8);
    // private UnityEngine.GameObject _incompleteIcon
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* incompleteIcon;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _completeIcon
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::GameObject* completeIcon;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.Color _conditionTextIncompleteColor
    // Size: 0x10
    // Offset: 0x30
    ::UnityEngine::Color conditionTextIncompleteColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _conditionTextCompleteColor
    // Size: 0x10
    // Offset: 0x40
    ::UnityEngine::Color conditionTextCompleteColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private VROSC.TutorialStep/VROSC.Condition _condition
    // Size: 0x8
    // Offset: 0x50
    ::VROSC::TutorialStep::Condition* condition;
    // Field size check
    static_assert(sizeof(::VROSC::TutorialStep::Condition*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private TMPro.TextMeshPro _conditionText
    [[deprecated]] ::TMPro::TextMeshPro*& dyn__conditionText();
    // Get instance field reference: private UnityEngine.GameObject _incompleteIcon
    [[deprecated]] ::UnityEngine::GameObject*& dyn__incompleteIcon();
    // Get instance field reference: private UnityEngine.GameObject _completeIcon
    [[deprecated]] ::UnityEngine::GameObject*& dyn__completeIcon();
    // Get instance field reference: private UnityEngine.Color _conditionTextIncompleteColor
    [[deprecated]] ::UnityEngine::Color& dyn__conditionTextIncompleteColor();
    // Get instance field reference: private UnityEngine.Color _conditionTextCompleteColor
    [[deprecated]] ::UnityEngine::Color& dyn__conditionTextCompleteColor();
    // Get instance field reference: private VROSC.TutorialStep/VROSC.Condition _condition
    [[deprecated]] ::VROSC::TutorialStep::Condition*& dyn__condition();
    // public System.Void SetupTutorialStep(VROSC.TutorialStep/VROSC.Condition condition)
    // Offset: 0xA2EB10
    void SetupTutorialStep(::VROSC::TutorialStep::Condition* condition);
    // public System.Void Deactivate()
    // Offset: 0xA2EBD8
    void Deactivate();
    // public System.Void DisplayConditionText(System.Boolean conditionComplete)
    // Offset: 0xA2EC3C
    void DisplayConditionText(bool conditionComplete);
    // private System.Void ConditionCompleted()
    // Offset: 0xA2EE94
    void ConditionCompleted();
    // public System.Void .ctor()
    // Offset: 0xA2EF60
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TutorialCondition* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::TutorialCondition::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TutorialCondition*, creationType>()));
    }
  }; // VROSC.TutorialCondition
  #pragma pack(pop)
  static check_size<sizeof(TutorialCondition), 80 + sizeof(::VROSC::TutorialStep::Condition*)> __VROSC_TutorialConditionSizeCheck;
  static_assert(sizeof(TutorialCondition) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::TutorialCondition::SetupTutorialStep
// Il2CppName: SetupTutorialStep
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialCondition::*)(::VROSC::TutorialStep::Condition*)>(&VROSC::TutorialCondition::SetupTutorialStep)> {
  static const MethodInfo* get() {
    static auto* condition = &::il2cpp_utils::GetClassFromName("VROSC", "TutorialStep/Condition")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialCondition*), "SetupTutorialStep", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{condition});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialCondition::Deactivate
// Il2CppName: Deactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialCondition::*)()>(&VROSC::TutorialCondition::Deactivate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialCondition*), "Deactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialCondition::DisplayConditionText
// Il2CppName: DisplayConditionText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialCondition::*)(bool)>(&VROSC::TutorialCondition::DisplayConditionText)> {
  static const MethodInfo* get() {
    static auto* conditionComplete = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialCondition*), "DisplayConditionText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{conditionComplete});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialCondition::ConditionCompleted
// Il2CppName: ConditionCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialCondition::*)()>(&VROSC::TutorialCondition::ConditionCompleted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialCondition*), "ConditionCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialCondition::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!