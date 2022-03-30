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
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: AdjustableMesh
  class AdjustableMesh;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: MetronomeDisplay
  class MetronomeDisplay;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::MetronomeDisplay);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MetronomeDisplay*, "VROSC", "MetronomeDisplay");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.MetronomeDisplay
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: FFFFFFFF
  class MetronomeDisplay : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::VROSC::MetronomeDisplay::$StrokeFlow$d__13
    class $StrokeFlow$d__13;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [ColorUsageAttribute] Offset: 0x671E30
    // private UnityEngine.Color _offColor
    // Size: 0x10
    // Offset: 0x18
    ::UnityEngine::Color offColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // [ColorUsageAttribute] Offset: 0x671E70
    // private UnityEngine.Color _beatColor
    // Size: 0x10
    // Offset: 0x28
    ::UnityEngine::Color beatColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // [ColorUsageAttribute] Offset: 0x671EB0
    // private UnityEngine.Color _beatpassedColor
    // Size: 0x10
    // Offset: 0x38
    ::UnityEngine::Color beatpassedColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.AnimationCurve _strikeCurve
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::AnimationCurve* strikeCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // private System.Single _strikeduration
    // Size: 0x4
    // Offset: 0x50
    float strikeduration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: strikeduration and: beat01
    char __padding4[0x4] = {};
    // private VROSC.AdjustableMesh _beat01
    // Size: 0x8
    // Offset: 0x58
    ::VROSC::AdjustableMesh* beat01;
    // Field size check
    static_assert(sizeof(::VROSC::AdjustableMesh*) == 0x8);
    // private VROSC.AdjustableMesh _beat02
    // Size: 0x8
    // Offset: 0x60
    ::VROSC::AdjustableMesh* beat02;
    // Field size check
    static_assert(sizeof(::VROSC::AdjustableMesh*) == 0x8);
    // private VROSC.AdjustableMesh _beat03
    // Size: 0x8
    // Offset: 0x68
    ::VROSC::AdjustableMesh* beat03;
    // Field size check
    static_assert(sizeof(::VROSC::AdjustableMesh*) == 0x8);
    // private VROSC.AdjustableMesh _beat04
    // Size: 0x8
    // Offset: 0x70
    ::VROSC::AdjustableMesh* beat04;
    // Field size check
    static_assert(sizeof(::VROSC::AdjustableMesh*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Color _offColor
    ::UnityEngine::Color& dyn__offColor();
    // Get instance field reference: private UnityEngine.Color _beatColor
    ::UnityEngine::Color& dyn__beatColor();
    // Get instance field reference: private UnityEngine.Color _beatpassedColor
    ::UnityEngine::Color& dyn__beatpassedColor();
    // Get instance field reference: private UnityEngine.AnimationCurve _strikeCurve
    ::UnityEngine::AnimationCurve*& dyn__strikeCurve();
    // Get instance field reference: private System.Single _strikeduration
    float& dyn__strikeduration();
    // Get instance field reference: private VROSC.AdjustableMesh _beat01
    ::VROSC::AdjustableMesh*& dyn__beat01();
    // Get instance field reference: private VROSC.AdjustableMesh _beat02
    ::VROSC::AdjustableMesh*& dyn__beat02();
    // Get instance field reference: private VROSC.AdjustableMesh _beat03
    ::VROSC::AdjustableMesh*& dyn__beat03();
    // Get instance field reference: private VROSC.AdjustableMesh _beat04
    ::VROSC::AdjustableMesh*& dyn__beat04();
    // private System.Void OnEnable()
    // Offset: 0x8AEEF8
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x8AF1C4
    void OnDisable();
    // public System.Void SetActive(System.Boolean shouldBeActive)
    // Offset: 0x8AF2BC
    void SetActive(bool shouldBeActive);
    // private System.Void MakeStroke(System.Int32 beat)
    // Offset: 0x8AF2F0
    void MakeStroke(int beat);
    // private System.Collections.IEnumerator StrokeFlow(System.Int32 beat)
    // Offset: 0x8AF39C
    ::System::Collections::IEnumerator* StrokeFlow(int beat);
    // private System.Void TurnAllOff()
    // Offset: 0x8AF338
    void TurnAllOff();
    // private System.Void CheckIfLightsShouldBeOn()
    // Offset: 0x8AF008
    void CheckIfLightsShouldBeOn();
    // private System.Void SetColor(System.Int32 beat, UnityEngine.Color color)
    // Offset: 0x8AF418
    void SetColor(int beat, ::UnityEngine::Color color);
    // private VROSC.AdjustableMesh GetAdjustableMeshByBeat(System.Int32 beat)
    // Offset: 0x8AF544
    ::VROSC::AdjustableMesh* GetAdjustableMeshByBeat(int beat);
    // public System.Void .ctor()
    // Offset: 0x8AF590
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MetronomeDisplay* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::MetronomeDisplay::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MetronomeDisplay*, creationType>()));
    }
  }; // VROSC.MetronomeDisplay
  #pragma pack(pop)
  static check_size<sizeof(MetronomeDisplay), 112 + sizeof(::VROSC::AdjustableMesh*)> __VROSC_MetronomeDisplaySizeCheck;
  static_assert(sizeof(MetronomeDisplay) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::MetronomeDisplay::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MetronomeDisplay::*)()>(&VROSC::MetronomeDisplay::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MetronomeDisplay*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MetronomeDisplay::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MetronomeDisplay::*)()>(&VROSC::MetronomeDisplay::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MetronomeDisplay*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MetronomeDisplay::SetActive
// Il2CppName: SetActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MetronomeDisplay::*)(bool)>(&VROSC::MetronomeDisplay::SetActive)> {
  static const MethodInfo* get() {
    static auto* shouldBeActive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MetronomeDisplay*), "SetActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{shouldBeActive});
  }
};
// Writing MetadataGetter for method: VROSC::MetronomeDisplay::MakeStroke
// Il2CppName: MakeStroke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MetronomeDisplay::*)(int)>(&VROSC::MetronomeDisplay::MakeStroke)> {
  static const MethodInfo* get() {
    static auto* beat = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MetronomeDisplay*), "MakeStroke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beat});
  }
};
// Writing MetadataGetter for method: VROSC::MetronomeDisplay::StrokeFlow
// Il2CppName: StrokeFlow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (VROSC::MetronomeDisplay::*)(int)>(&VROSC::MetronomeDisplay::StrokeFlow)> {
  static const MethodInfo* get() {
    static auto* beat = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MetronomeDisplay*), "StrokeFlow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beat});
  }
};
// Writing MetadataGetter for method: VROSC::MetronomeDisplay::TurnAllOff
// Il2CppName: TurnAllOff
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MetronomeDisplay::*)()>(&VROSC::MetronomeDisplay::TurnAllOff)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MetronomeDisplay*), "TurnAllOff", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MetronomeDisplay::CheckIfLightsShouldBeOn
// Il2CppName: CheckIfLightsShouldBeOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MetronomeDisplay::*)()>(&VROSC::MetronomeDisplay::CheckIfLightsShouldBeOn)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MetronomeDisplay*), "CheckIfLightsShouldBeOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MetronomeDisplay::SetColor
// Il2CppName: SetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MetronomeDisplay::*)(int, ::UnityEngine::Color)>(&VROSC::MetronomeDisplay::SetColor)> {
  static const MethodInfo* get() {
    static auto* beat = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MetronomeDisplay*), "SetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beat, color});
  }
};
// Writing MetadataGetter for method: VROSC::MetronomeDisplay::GetAdjustableMeshByBeat
// Il2CppName: GetAdjustableMeshByBeat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::AdjustableMesh* (VROSC::MetronomeDisplay::*)(int)>(&VROSC::MetronomeDisplay::GetAdjustableMeshByBeat)> {
  static const MethodInfo* get() {
    static auto* beat = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MetronomeDisplay*), "GetAdjustableMeshByBeat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beat});
  }
};
// Writing MetadataGetter for method: VROSC::MetronomeDisplay::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
