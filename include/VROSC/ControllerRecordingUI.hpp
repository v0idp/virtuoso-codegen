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
// Including type: VROSC.LoopStationRecorder
#include "VROSC/LoopStationRecorder.hpp"
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
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: AdjustableMesh
  class AdjustableMesh;
  // Forward declaring type: LoopStationRecordingProgress
  class LoopStationRecordingProgress;
}
// Forward declaring namespace: VROSC::UI::Meshes
namespace VROSC::UI::Meshes {
  // Forward declaring type: ProceduralArc
  class ProceduralArc;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: ControllerRecordingUI
  class ControllerRecordingUI;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::ControllerRecordingUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ControllerRecordingUI*, "VROSC", "ControllerRecordingUI");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.ControllerRecordingUI
  // [TokenAttribute] Offset: FFFFFFFF
  class ControllerRecordingUI : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private TMPro.TextMeshPro _recText
    // Size: 0x8
    // Offset: 0x18
    ::TMPro::TextMeshPro* recText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshPro*) == 0x8);
    // private VROSC.AdjustableMesh _recIndicator
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::AdjustableMesh* recIndicator;
    // Field size check
    static_assert(sizeof(::VROSC::AdjustableMesh*) == 0x8);
    // private UnityEngine.Color _recordingColor
    // Size: 0x10
    // Offset: 0x28
    ::UnityEngine::Color recordingColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _waitingColor
    // Size: 0x10
    // Offset: 0x38
    ::UnityEngine::Color waitingColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _offColor
    // Size: 0x10
    // Offset: 0x48
    ::UnityEngine::Color offColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private VROSC.UI.Meshes.ProceduralArc _arc
    // Size: 0x8
    // Offset: 0x58
    ::VROSC::UI::Meshes::ProceduralArc* arc;
    // Field size check
    static_assert(sizeof(::VROSC::UI::Meshes::ProceduralArc*) == 0x8);
    // private VROSC.UI.Meshes.ProceduralArc _arcBackground
    // Size: 0x8
    // Offset: 0x60
    ::VROSC::UI::Meshes::ProceduralArc* arcBackground;
    // Field size check
    static_assert(sizeof(::VROSC::UI::Meshes::ProceduralArc*) == 0x8);
    // private UnityEngine.Transform _arcRotator
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::Transform* arcRotator;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private VROSC.LoopStationRecordingProgress _recordingProgress
    // Size: 0x8
    // Offset: 0x70
    ::VROSC::LoopStationRecordingProgress* recordingProgress;
    // Field size check
    static_assert(sizeof(::VROSC::LoopStationRecordingProgress*) == 0x8);
    // private System.Boolean _recording
    // Size: 0x1
    // Offset: 0x78
    bool recording;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _waiting
    // Size: 0x1
    // Offset: 0x79
    bool waiting;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: waiting and: offset
    char __padding10[0x2] = {};
    // private System.Single _offset
    // Size: 0x4
    // Offset: 0x7C
    float offset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private VROSC.LoopStationRecorder _loopStationRecorder
    // Size: 0x8
    // Offset: 0x80
    ::VROSC::LoopStationRecorder* loopStationRecorder;
    // Field size check
    static_assert(sizeof(::VROSC::LoopStationRecorder*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private TMPro.TextMeshPro _recText
    [[deprecated]] ::TMPro::TextMeshPro*& dyn__recText();
    // Get instance field reference: private VROSC.AdjustableMesh _recIndicator
    [[deprecated]] ::VROSC::AdjustableMesh*& dyn__recIndicator();
    // Get instance field reference: private UnityEngine.Color _recordingColor
    [[deprecated]] ::UnityEngine::Color& dyn__recordingColor();
    // Get instance field reference: private UnityEngine.Color _waitingColor
    [[deprecated]] ::UnityEngine::Color& dyn__waitingColor();
    // Get instance field reference: private UnityEngine.Color _offColor
    [[deprecated]] ::UnityEngine::Color& dyn__offColor();
    // Get instance field reference: private VROSC.UI.Meshes.ProceduralArc _arc
    [[deprecated]] ::VROSC::UI::Meshes::ProceduralArc*& dyn__arc();
    // Get instance field reference: private VROSC.UI.Meshes.ProceduralArc _arcBackground
    [[deprecated]] ::VROSC::UI::Meshes::ProceduralArc*& dyn__arcBackground();
    // Get instance field reference: private UnityEngine.Transform _arcRotator
    [[deprecated]] ::UnityEngine::Transform*& dyn__arcRotator();
    // Get instance field reference: private VROSC.LoopStationRecordingProgress _recordingProgress
    [[deprecated]] ::VROSC::LoopStationRecordingProgress*& dyn__recordingProgress();
    // Get instance field reference: private System.Boolean _recording
    [[deprecated]] bool& dyn__recording();
    // Get instance field reference: private System.Boolean _waiting
    [[deprecated]] bool& dyn__waiting();
    // Get instance field reference: private System.Single _offset
    [[deprecated]] float& dyn__offset();
    // Get instance field reference: private VROSC.LoopStationRecorder _loopStationRecorder
    [[deprecated]] ::VROSC::LoopStationRecorder*& dyn__loopStationRecorder();
    // private System.Void Awake()
    // Offset: 0x8DD968
    void Awake();
    // public System.Void LinkToRecorder(VROSC.LoopStationRecorder loopStationRecorder)
    // Offset: 0x8DD9C0
    void LinkToRecorder(::VROSC::LoopStationRecorder* loopStationRecorder);
    // private System.Void RecorderStateChanged(VROSC.LoopStationRecorder/VROSC.RecordingState state)
    // Offset: 0x8DDCD4
    void RecorderStateChanged(::VROSC::LoopStationRecorder::RecordingState state);
    // private System.Void Update()
    // Offset: 0x8DDCF0
    void Update();
    // private System.Void SetRecording(System.Boolean recording)
    // Offset: 0x8DDABC
    void SetRecording(bool recording);
    // public System.Void .ctor()
    // Offset: 0x8DDD90
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ControllerRecordingUI* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::ControllerRecordingUI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ControllerRecordingUI*, creationType>()));
    }
  }; // VROSC.ControllerRecordingUI
  #pragma pack(pop)
  static check_size<sizeof(ControllerRecordingUI), 128 + sizeof(::VROSC::LoopStationRecorder*)> __VROSC_ControllerRecordingUISizeCheck;
  static_assert(sizeof(ControllerRecordingUI) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::ControllerRecordingUI::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ControllerRecordingUI::*)()>(&VROSC::ControllerRecordingUI::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ControllerRecordingUI*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ControllerRecordingUI::LinkToRecorder
// Il2CppName: LinkToRecorder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ControllerRecordingUI::*)(::VROSC::LoopStationRecorder*)>(&VROSC::ControllerRecordingUI::LinkToRecorder)> {
  static const MethodInfo* get() {
    static auto* loopStationRecorder = &::il2cpp_utils::GetClassFromName("VROSC", "LoopStationRecorder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ControllerRecordingUI*), "LinkToRecorder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{loopStationRecorder});
  }
};
// Writing MetadataGetter for method: VROSC::ControllerRecordingUI::RecorderStateChanged
// Il2CppName: RecorderStateChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ControllerRecordingUI::*)(::VROSC::LoopStationRecorder::RecordingState)>(&VROSC::ControllerRecordingUI::RecorderStateChanged)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("VROSC", "LoopStationRecorder/RecordingState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ControllerRecordingUI*), "RecorderStateChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: VROSC::ControllerRecordingUI::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ControllerRecordingUI::*)()>(&VROSC::ControllerRecordingUI::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ControllerRecordingUI*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ControllerRecordingUI::SetRecording
// Il2CppName: SetRecording
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ControllerRecordingUI::*)(bool)>(&VROSC::ControllerRecordingUI::SetRecording)> {
  static const MethodInfo* get() {
    static auto* recording = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ControllerRecordingUI*), "SetRecording", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{recording});
  }
};
// Writing MetadataGetter for method: VROSC::ControllerRecordingUI::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
