// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: VROSC.TransmissionData
#include "VROSC/TransmissionData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: NoteBoardNote
  class NoteBoardNote;
  // Skipping declaration: NotefieldColorSettings because it is already included!
  // Forward declaring type: PlayData
  struct PlayData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: NoteBoardNoteAnimator
  class NoteBoardNoteAnimator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::NoteBoardNoteAnimator);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteBoardNoteAnimator*, "VROSC", "NoteBoardNoteAnimator");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.NoteBoardNoteAnimator
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteBoardNoteAnimator : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // protected System.Boolean _lockSizeX
    // Size: 0x1
    // Offset: 0x18
    bool lockSizeX;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // protected System.Boolean _lockSizeY
    // Size: 0x1
    // Offset: 0x19
    bool lockSizeY;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // protected System.Boolean _lockSizeZ
    // Size: 0x1
    // Offset: 0x1A
    bool lockSizeZ;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: lockSizeZ and: noteBoardNote
    char __padding2[0x5] = {};
    // private VROSC.NoteBoardNote _noteBoardNote
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::NoteBoardNote* noteBoardNote;
    // Field size check
    static_assert(sizeof(::VROSC::NoteBoardNote*) == 0x8);
    // protected UnityEngine.Vector3 _baseScale
    // Size: 0xC
    // Offset: 0x28
    ::UnityEngine::Vector3 baseScale;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 <InputPower>k__BackingField
    // Size: 0xC
    // Offset: 0x34
    ::UnityEngine::Vector3 InputPower;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 <HightlightColor>k__BackingField
    // Size: 0xC
    // Offset: 0x40
    ::UnityEngine::Vector3 HightlightColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single <HoveringAmount>k__BackingField
    // Size: 0x4
    // Offset: 0x4C
    float HoveringAmount;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 <VisualEffectPower>k__BackingField
    // Size: 0xC
    // Offset: 0x50
    ::UnityEngine::Vector3 VisualEffectPower;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single <Velocity>k__BackingField
    // Size: 0x4
    // Offset: 0x5C
    float Velocity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private VROSC.NotefieldColorSettings _settings
    // Size: 0x8
    // Offset: 0x60
    ::VROSC::NotefieldColorSettings* settings;
    // Field size check
    static_assert(sizeof(::VROSC::NotefieldColorSettings*) == 0x8);
    // private System.Boolean _hovering
    // Size: 0x1
    // Offset: 0x68
    bool hovering;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hovering and: transmissionData
    char __padding11[0x7] = {};
    // private System.Collections.Generic.List`1<VROSC.TransmissionData> _transmissionData
    // Size: 0x8
    // Offset: 0x70
    ::System::Collections::Generic::List_1<::VROSC::TransmissionData>* transmissionData;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::VROSC::TransmissionData>*) == 0x8);
    // private UnityEngine.Transform _transform
    // Size: 0x8
    // Offset: 0x78
    ::UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: protected System.Boolean _lockSizeX
    [[deprecated("Use field access instead!")]] bool& dyn__lockSizeX();
    // Get instance field reference: protected System.Boolean _lockSizeY
    [[deprecated("Use field access instead!")]] bool& dyn__lockSizeY();
    // Get instance field reference: protected System.Boolean _lockSizeZ
    [[deprecated("Use field access instead!")]] bool& dyn__lockSizeZ();
    // Get instance field reference: private VROSC.NoteBoardNote _noteBoardNote
    [[deprecated("Use field access instead!")]] ::VROSC::NoteBoardNote*& dyn__noteBoardNote();
    // Get instance field reference: protected UnityEngine.Vector3 _baseScale
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__baseScale();
    // Get instance field reference: private UnityEngine.Vector3 <InputPower>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_$InputPower$k__BackingField();
    // Get instance field reference: private UnityEngine.Vector3 <HightlightColor>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_$HightlightColor$k__BackingField();
    // Get instance field reference: private System.Single <HoveringAmount>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$HoveringAmount$k__BackingField();
    // Get instance field reference: private UnityEngine.Vector3 <VisualEffectPower>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_$VisualEffectPower$k__BackingField();
    // Get instance field reference: private System.Single <Velocity>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$Velocity$k__BackingField();
    // Get instance field reference: private VROSC.NotefieldColorSettings _settings
    [[deprecated("Use field access instead!")]] ::VROSC::NotefieldColorSettings*& dyn__settings();
    // Get instance field reference: private System.Boolean _hovering
    [[deprecated("Use field access instead!")]] bool& dyn__hovering();
    // Get instance field reference: private System.Collections.Generic.List`1<VROSC.TransmissionData> _transmissionData
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::VROSC::TransmissionData>*& dyn__transmissionData();
    // Get instance field reference: private UnityEngine.Transform _transform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__transform();
    // public UnityEngine.Vector3 get_InputPower()
    // Offset: 0xAD66C0
    ::UnityEngine::Vector3 get_InputPower();
    // private System.Void set_InputPower(UnityEngine.Vector3 value)
    // Offset: 0xAD66B4
    void set_InputPower(::UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_HightlightColor()
    // Offset: 0xAD66D8
    ::UnityEngine::Vector3 get_HightlightColor();
    // private System.Void set_HightlightColor(UnityEngine.Vector3 value)
    // Offset: 0xAD66CC
    void set_HightlightColor(::UnityEngine::Vector3 value);
    // public System.Single get_HoveringAmount()
    // Offset: 0xAD66EC
    float get_HoveringAmount();
    // private System.Void set_HoveringAmount(System.Single value)
    // Offset: 0xAD66E4
    void set_HoveringAmount(float value);
    // public UnityEngine.Vector3 get_VisualEffectPower()
    // Offset: 0xAD6700
    ::UnityEngine::Vector3 get_VisualEffectPower();
    // private System.Void set_VisualEffectPower(UnityEngine.Vector3 value)
    // Offset: 0xAD66F4
    void set_VisualEffectPower(::UnityEngine::Vector3 value);
    // public System.Single get_Velocity()
    // Offset: 0xAD6714
    float get_Velocity();
    // private System.Void set_Velocity(System.Single value)
    // Offset: 0xAD670C
    void set_Velocity(float value);
    // public System.Void .ctor()
    // Offset: 0xAD6C94
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteBoardNoteAnimator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::NoteBoardNoteAnimator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteBoardNoteAnimator*, creationType>()));
    }
    // public System.Void Setup(VROSC.NoteBoardNote noteBoardNote, System.Int32[] numberOfFields, UnityEngine.Vector3 baseScale)
    // Offset: 0xAD671C
    void Setup(::VROSC::NoteBoardNote* noteBoardNote, ::ArrayW<int> numberOfFields, ::UnityEngine::Vector3 baseScale);
    // public System.Void UpdateVisuals()
    // Offset: 0xAD6290
    void UpdateVisuals();
    // System.Void Highlight(UnityEngine.Vector3 highlightColor)
    // Offset: 0xAD68EC
    void Highlight(::UnityEngine::Vector3 highlightColor);
    // public System.Void SetTransmissionData(System.Collections.Generic.List`1<VROSC.TransmissionData> transmissionData)
    // Offset: 0xAD68F8
    void SetTransmissionData(::System::Collections::Generic::List_1<::VROSC::TransmissionData>* transmissionData);
    // protected System.Void UpdateInputPower()
    // Offset: 0xAD67E8
    void UpdateInputPower();
    // private UnityEngine.Vector3 Fall(UnityEngine.Vector3 vector)
    // Offset: 0xAD6900
    ::UnityEngine::Vector3 Fall(::UnityEngine::Vector3 vector);
    // protected System.Void UpdateScaling()
    // Offset: 0xAD6A00
    void UpdateScaling();
    // public System.Void Play(VROSC.PlayData playData)
    // Offset: 0xAD661C
    void Play(::VROSC::PlayData playData);
    // public System.Void Hover(System.Boolean isHovering, System.Boolean isPlaying)
    // Offset: 0xAD6574
    void Hover(bool isHovering, bool isPlaying);
    // public System.Void SetEffectPowerColor(UnityEngine.Vector3 effectPower)
    // Offset: 0xAD4480
    void SetEffectPowerColor(::UnityEngine::Vector3 effectPower);
    // public System.Void Transmit(UnityEngine.Vector3 transmitPower)
    // Offset: 0xAD6A70
    void Transmit(::UnityEngine::Vector3 transmitPower);
    // public System.Void TransmitHovering(System.Single hovering)
    // Offset: 0xAD6AF8
    void TransmitHovering(float hovering);
    // private System.Void OnDrawGizmosSelected()
    // Offset: 0xAD6B30
    void OnDrawGizmosSelected();
  }; // VROSC.NoteBoardNoteAnimator
  #pragma pack(pop)
  static check_size<sizeof(NoteBoardNoteAnimator), 120 + sizeof(::UnityEngine::Transform*)> __VROSC_NoteBoardNoteAnimatorSizeCheck;
  static_assert(sizeof(NoteBoardNoteAnimator) == 0x80);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::NoteBoardNoteAnimator::get_InputPower
// Il2CppName: get_InputPower
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (VROSC::NoteBoardNoteAnimator::*)()>(&VROSC::NoteBoardNoteAnimator::get_InputPower)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteAnimator*), "get_InputPower", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteAnimator::set_InputPower
// Il2CppName: set_InputPower
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNoteAnimator::*)(::UnityEngine::Vector3)>(&VROSC::NoteBoardNoteAnimator::set_InputPower)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteAnimator*), "set_InputPower", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteAnimator::get_HightlightColor
// Il2CppName: get_HightlightColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (VROSC::NoteBoardNoteAnimator::*)()>(&VROSC::NoteBoardNoteAnimator::get_HightlightColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteAnimator*), "get_HightlightColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteAnimator::set_HightlightColor
// Il2CppName: set_HightlightColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNoteAnimator::*)(::UnityEngine::Vector3)>(&VROSC::NoteBoardNoteAnimator::set_HightlightColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteAnimator*), "set_HightlightColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteAnimator::get_HoveringAmount
// Il2CppName: get_HoveringAmount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::NoteBoardNoteAnimator::*)()>(&VROSC::NoteBoardNoteAnimator::get_HoveringAmount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteAnimator*), "get_HoveringAmount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteAnimator::set_HoveringAmount
// Il2CppName: set_HoveringAmount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNoteAnimator::*)(float)>(&VROSC::NoteBoardNoteAnimator::set_HoveringAmount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteAnimator*), "set_HoveringAmount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteAnimator::get_VisualEffectPower
// Il2CppName: get_VisualEffectPower
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (VROSC::NoteBoardNoteAnimator::*)()>(&VROSC::NoteBoardNoteAnimator::get_VisualEffectPower)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteAnimator*), "get_VisualEffectPower", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteAnimator::set_VisualEffectPower
// Il2CppName: set_VisualEffectPower
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNoteAnimator::*)(::UnityEngine::Vector3)>(&VROSC::NoteBoardNoteAnimator::set_VisualEffectPower)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteAnimator*), "set_VisualEffectPower", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteAnimator::get_Velocity
// Il2CppName: get_Velocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::NoteBoardNoteAnimator::*)()>(&VROSC::NoteBoardNoteAnimator::get_Velocity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteAnimator*), "get_Velocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteAnimator::set_Velocity
// Il2CppName: set_Velocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNoteAnimator::*)(float)>(&VROSC::NoteBoardNoteAnimator::set_Velocity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteAnimator*), "set_Velocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteAnimator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::NoteBoardNoteAnimator::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNoteAnimator::*)(::VROSC::NoteBoardNote*, ::ArrayW<int>, ::UnityEngine::Vector3)>(&VROSC::NoteBoardNoteAnimator::Setup)> {
  static const MethodInfo* get() {
    static auto* noteBoardNote = &::il2cpp_utils::GetClassFromName("VROSC", "NoteBoardNote")->byval_arg;
    static auto* numberOfFields = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* baseScale = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteAnimator*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteBoardNote, numberOfFields, baseScale});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteAnimator::UpdateVisuals
// Il2CppName: UpdateVisuals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNoteAnimator::*)()>(&VROSC::NoteBoardNoteAnimator::UpdateVisuals)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteAnimator*), "UpdateVisuals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteAnimator::Highlight
// Il2CppName: Highlight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNoteAnimator::*)(::UnityEngine::Vector3)>(&VROSC::NoteBoardNoteAnimator::Highlight)> {
  static const MethodInfo* get() {
    static auto* highlightColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteAnimator*), "Highlight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{highlightColor});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteAnimator::SetTransmissionData
// Il2CppName: SetTransmissionData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNoteAnimator::*)(::System::Collections::Generic::List_1<::VROSC::TransmissionData>*)>(&VROSC::NoteBoardNoteAnimator::SetTransmissionData)> {
  static const MethodInfo* get() {
    static auto* transmissionData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("VROSC", "TransmissionData")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteAnimator*), "SetTransmissionData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transmissionData});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteAnimator::UpdateInputPower
// Il2CppName: UpdateInputPower
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNoteAnimator::*)()>(&VROSC::NoteBoardNoteAnimator::UpdateInputPower)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteAnimator*), "UpdateInputPower", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteAnimator::Fall
// Il2CppName: Fall
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (VROSC::NoteBoardNoteAnimator::*)(::UnityEngine::Vector3)>(&VROSC::NoteBoardNoteAnimator::Fall)> {
  static const MethodInfo* get() {
    static auto* vector = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteAnimator*), "Fall", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vector});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteAnimator::UpdateScaling
// Il2CppName: UpdateScaling
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNoteAnimator::*)()>(&VROSC::NoteBoardNoteAnimator::UpdateScaling)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteAnimator*), "UpdateScaling", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteAnimator::Play
// Il2CppName: Play
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNoteAnimator::*)(::VROSC::PlayData)>(&VROSC::NoteBoardNoteAnimator::Play)> {
  static const MethodInfo* get() {
    static auto* playData = &::il2cpp_utils::GetClassFromName("VROSC", "PlayData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteAnimator*), "Play", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playData});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteAnimator::Hover
// Il2CppName: Hover
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNoteAnimator::*)(bool, bool)>(&VROSC::NoteBoardNoteAnimator::Hover)> {
  static const MethodInfo* get() {
    static auto* isHovering = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isPlaying = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteAnimator*), "Hover", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isHovering, isPlaying});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteAnimator::SetEffectPowerColor
// Il2CppName: SetEffectPowerColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNoteAnimator::*)(::UnityEngine::Vector3)>(&VROSC::NoteBoardNoteAnimator::SetEffectPowerColor)> {
  static const MethodInfo* get() {
    static auto* effectPower = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteAnimator*), "SetEffectPowerColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{effectPower});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteAnimator::Transmit
// Il2CppName: Transmit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNoteAnimator::*)(::UnityEngine::Vector3)>(&VROSC::NoteBoardNoteAnimator::Transmit)> {
  static const MethodInfo* get() {
    static auto* transmitPower = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteAnimator*), "Transmit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transmitPower});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteAnimator::TransmitHovering
// Il2CppName: TransmitHovering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNoteAnimator::*)(float)>(&VROSC::NoteBoardNoteAnimator::TransmitHovering)> {
  static const MethodInfo* get() {
    static auto* hovering = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteAnimator*), "TransmitHovering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hovering});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteAnimator::OnDrawGizmosSelected
// Il2CppName: OnDrawGizmosSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNoteAnimator::*)()>(&VROSC::NoteBoardNoteAnimator::OnDrawGizmosSelected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteAnimator*), "OnDrawGizmosSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
