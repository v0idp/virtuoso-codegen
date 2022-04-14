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
  // Forward declaring type: TempoSyncDisplay
  class TempoSyncDisplay;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::TempoSyncDisplay);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TempoSyncDisplay*, "VROSC", "TempoSyncDisplay");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x55
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.TempoSyncDisplay
  // [TokenAttribute] Offset: FFFFFFFF
  class TempoSyncDisplay : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::VROSC::TempoSyncDisplay::$StrokeFlow$d__14
    class $StrokeFlow$d__14;
    public:
    // [ColorUsageAttribute] Offset: 0x78B188
    // private UnityEngine.Color _offColor
    // Size: 0x10
    // Offset: 0x18
    ::UnityEngine::Color offColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // [ColorUsageAttribute] Offset: 0x78B1C8
    // private UnityEngine.Color _beatColor
    // Size: 0x10
    // Offset: 0x28
    ::UnityEngine::Color beatColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.AnimationCurve _strikeCurve
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::AnimationCurve* strikeCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // private VROSC.AdjustableMesh _beatVisual
    // Size: 0x8
    // Offset: 0x40
    ::VROSC::AdjustableMesh* beatVisual;
    // Field size check
    static_assert(sizeof(::VROSC::AdjustableMesh*) == 0x8);
    // private System.Int32 _beatDivision
    // Size: 0x4
    // Offset: 0x48
    int beatDivision;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _lastSubdivision
    // Size: 0x4
    // Offset: 0x4C
    int lastSubdivision;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _strikeduration
    // Size: 0x4
    // Offset: 0x50
    float strikeduration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _isOn
    // Size: 0x1
    // Offset: 0x54
    bool isOn;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Color _offColor
    [[deprecated]] ::UnityEngine::Color& dyn__offColor();
    // Get instance field reference: private UnityEngine.Color _beatColor
    [[deprecated]] ::UnityEngine::Color& dyn__beatColor();
    // Get instance field reference: private UnityEngine.AnimationCurve _strikeCurve
    [[deprecated]] ::UnityEngine::AnimationCurve*& dyn__strikeCurve();
    // Get instance field reference: private VROSC.AdjustableMesh _beatVisual
    [[deprecated]] ::VROSC::AdjustableMesh*& dyn__beatVisual();
    // Get instance field reference: private System.Int32 _beatDivision
    [[deprecated]] int& dyn__beatDivision();
    // Get instance field reference: private System.Int32 _lastSubdivision
    [[deprecated]] int& dyn__lastSubdivision();
    // Get instance field reference: private System.Single _strikeduration
    [[deprecated]] float& dyn__strikeduration();
    // Get instance field reference: private System.Boolean _isOn
    [[deprecated]] bool& dyn__isOn();
    // protected System.Void Awake()
    // Offset: 0xA242C8
    void Awake();
    // protected System.Void Update()
    // Offset: 0xA243B8
    void Update();
    // protected System.Void OnDestroy()
    // Offset: 0xA24540
    void OnDestroy();
    // public System.Void SetBeatDivision(System.Int32 beatDivision)
    // Offset: 0xA2454C
    void SetBeatDivision(int beatDivision);
    // public System.Void SetActive(System.Boolean shouldBeActive)
    // Offset: 0xA245EC
    void SetActive(bool shouldBeActive);
    // private System.Void MakeStroke()
    // Offset: 0xA2449C
    void MakeStroke();
    // private System.Collections.IEnumerator StrokeFlow()
    // Offset: 0xA24620
    ::System::Collections::IEnumerator* StrokeFlow();
    // private System.Void SetColor(UnityEngine.Color color)
    // Offset: 0xA242D4
    void SetColor(::UnityEngine::Color color);
    // public System.Void .ctor()
    // Offset: 0xA2468C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TempoSyncDisplay* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::TempoSyncDisplay::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TempoSyncDisplay*, creationType>()));
    }
  }; // VROSC.TempoSyncDisplay
  #pragma pack(pop)
  static check_size<sizeof(TempoSyncDisplay), 84 + sizeof(bool)> __VROSC_TempoSyncDisplaySizeCheck;
  static_assert(sizeof(TempoSyncDisplay) == 0x55);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::TempoSyncDisplay::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TempoSyncDisplay::*)()>(&VROSC::TempoSyncDisplay::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TempoSyncDisplay*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TempoSyncDisplay::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TempoSyncDisplay::*)()>(&VROSC::TempoSyncDisplay::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TempoSyncDisplay*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TempoSyncDisplay::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TempoSyncDisplay::*)()>(&VROSC::TempoSyncDisplay::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TempoSyncDisplay*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TempoSyncDisplay::SetBeatDivision
// Il2CppName: SetBeatDivision
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TempoSyncDisplay::*)(int)>(&VROSC::TempoSyncDisplay::SetBeatDivision)> {
  static const MethodInfo* get() {
    static auto* beatDivision = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TempoSyncDisplay*), "SetBeatDivision", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatDivision});
  }
};
// Writing MetadataGetter for method: VROSC::TempoSyncDisplay::SetActive
// Il2CppName: SetActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TempoSyncDisplay::*)(bool)>(&VROSC::TempoSyncDisplay::SetActive)> {
  static const MethodInfo* get() {
    static auto* shouldBeActive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TempoSyncDisplay*), "SetActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{shouldBeActive});
  }
};
// Writing MetadataGetter for method: VROSC::TempoSyncDisplay::MakeStroke
// Il2CppName: MakeStroke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TempoSyncDisplay::*)()>(&VROSC::TempoSyncDisplay::MakeStroke)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TempoSyncDisplay*), "MakeStroke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TempoSyncDisplay::StrokeFlow
// Il2CppName: StrokeFlow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (VROSC::TempoSyncDisplay::*)()>(&VROSC::TempoSyncDisplay::StrokeFlow)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TempoSyncDisplay*), "StrokeFlow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TempoSyncDisplay::SetColor
// Il2CppName: SetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TempoSyncDisplay::*)(::UnityEngine::Color)>(&VROSC::TempoSyncDisplay::SetColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TempoSyncDisplay*), "SetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: VROSC::TempoSyncDisplay::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
