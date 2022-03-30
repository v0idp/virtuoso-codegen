// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.RaycastHit
#include "UnityEngine/RaycastHit.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: InputDevice
  class InputDevice;
  // Forward declaring type: PredictiveHitWisp
  class PredictiveHitWisp;
  // Forward declaring type: PredictiveHittable
  class PredictiveHittable;
  // Forward declaring type: SignalControllerInfo
  class SignalControllerInfo;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: PredictiveHitter
  class PredictiveHitter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::PredictiveHitter);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PredictiveHitter*, "VROSC", "PredictiveHitter");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0xB0
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.PredictiveHitter
  // [TokenAttribute] Offset: FFFFFFFF
  class PredictiveHitter : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::VROSC::PredictiveHitter::PredictedHit
    class PredictedHit;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private VROSC.InputDevice _device
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::InputDevice* device;
    // Field size check
    static_assert(sizeof(::VROSC::InputDevice*) == 0x8);
    // private System.Collections.Generic.List`1<VROSC.PredictiveHitter/VROSC.PredictedHit> _predictedHits
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::VROSC::PredictiveHitter::PredictedHit*>* predictedHits;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::VROSC::PredictiveHitter::PredictedHit*>*) == 0x8);
    // private VROSC.PredictiveHitWisp _visualObject
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::PredictiveHitWisp* visualObject;
    // Field size check
    static_assert(sizeof(::VROSC::PredictiveHitWisp*) == 0x8);
    // private System.Single _lookAhead
    // Size: 0x4
    // Offset: 0x30
    float lookAhead;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _baseLatencyAdjustment
    // Size: 0x4
    // Offset: 0x34
    float baseLatencyAdjustment;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _postPredictionBuffer
    // Size: 0x4
    // Offset: 0x38
    float postPredictionBuffer;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _minVelocityForHit
    // Size: 0x4
    // Offset: 0x3C
    float minVelocityForHit;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _smoothFrames
    // Size: 0x4
    // Offset: 0x40
    int smoothFrames;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _bendAngle
    // Size: 0x4
    // Offset: 0x44
    float bendAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _latencyAdjustment
    // Size: 0x4
    // Offset: 0x48
    float latencyAdjustment;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 _lastFramePosition
    // Size: 0xC
    // Offset: 0x4C
    ::UnityEngine::Vector3 lastFramePosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _velocity
    // Size: 0xC
    // Offset: 0x58
    ::UnityEngine::Vector3 velocity;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // Padding between fields: velocity and: velocitySmoothingBuffer
    char __padding11[0x4] = {};
    // private UnityEngine.Vector3[] _velocitySmoothingBuffer
    // Size: 0x8
    // Offset: 0x68
    ::ArrayW<::UnityEngine::Vector3> velocitySmoothingBuffer;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // private System.Int32 _velocityBufferIndex
    // Size: 0x4
    // Offset: 0x70
    int velocityBufferIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: velocityBufferIndex and: raycastHits
    char __padding13[0x4] = {};
    // private UnityEngine.RaycastHit[] _raycastHits
    // Size: 0x8
    // Offset: 0x78
    ::ArrayW<::UnityEngine::RaycastHit> raycastHits;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::RaycastHit>) == 0x8);
    // private UnityEngine.Vector3[] _hitPoints
    // Size: 0x8
    // Offset: 0x80
    ::ArrayW<::UnityEngine::Vector3> hitPoints;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // private VROSC.PredictiveHittable[] _hittables
    // Size: 0x8
    // Offset: 0x88
    ::ArrayW<::VROSC::PredictiveHittable*> hittables;
    // Field size check
    static_assert(sizeof(::ArrayW<::VROSC::PredictiveHittable*>) == 0x8);
    // private System.Int32 _raycastAllocSize
    // Size: 0x4
    // Offset: 0x90
    int raycastAllocSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: raycastAllocSize and: debugObject
    char __padding17[0x4] = {};
    // private UnityEngine.GameObject _debugObject
    // Size: 0x8
    // Offset: 0x98
    ::UnityEngine::GameObject* debugObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private System.Boolean <IsMalletOrOnlyHitter>k__BackingField
    // Size: 0x1
    // Offset: 0xA0
    bool IsMalletOrOnlyHitter;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _disabled
    // Size: 0x1
    // Offset: 0xA1
    bool disabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disabled and: OnHitDSP
    char __padding20[0x6] = {};
    // public System.Action`2<System.Single,System.Boolean> OnHitDSP
    // Size: 0x8
    // Offset: 0xA8
    ::System::Action_2<float, bool>* OnHitDSP;
    // Field size check
    static_assert(sizeof(::System::Action_2<float, bool>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.InputDevice _device
    ::VROSC::InputDevice*& dyn__device();
    // Get instance field reference: private System.Collections.Generic.List`1<VROSC.PredictiveHitter/VROSC.PredictedHit> _predictedHits
    ::System::Collections::Generic::List_1<::VROSC::PredictiveHitter::PredictedHit*>*& dyn__predictedHits();
    // Get instance field reference: private VROSC.PredictiveHitWisp _visualObject
    ::VROSC::PredictiveHitWisp*& dyn__visualObject();
    // Get instance field reference: private System.Single _lookAhead
    float& dyn__lookAhead();
    // Get instance field reference: private System.Single _baseLatencyAdjustment
    float& dyn__baseLatencyAdjustment();
    // Get instance field reference: private System.Single _postPredictionBuffer
    float& dyn__postPredictionBuffer();
    // Get instance field reference: private System.Single _minVelocityForHit
    float& dyn__minVelocityForHit();
    // Get instance field reference: private System.Int32 _smoothFrames
    int& dyn__smoothFrames();
    // Get instance field reference: private System.Single _bendAngle
    float& dyn__bendAngle();
    // Get instance field reference: private System.Single _latencyAdjustment
    float& dyn__latencyAdjustment();
    // Get instance field reference: private UnityEngine.Vector3 _lastFramePosition
    ::UnityEngine::Vector3& dyn__lastFramePosition();
    // Get instance field reference: private UnityEngine.Vector3 _velocity
    ::UnityEngine::Vector3& dyn__velocity();
    // Get instance field reference: private UnityEngine.Vector3[] _velocitySmoothingBuffer
    ::ArrayW<::UnityEngine::Vector3>& dyn__velocitySmoothingBuffer();
    // Get instance field reference: private System.Int32 _velocityBufferIndex
    int& dyn__velocityBufferIndex();
    // Get instance field reference: private UnityEngine.RaycastHit[] _raycastHits
    ::ArrayW<::UnityEngine::RaycastHit>& dyn__raycastHits();
    // Get instance field reference: private UnityEngine.Vector3[] _hitPoints
    ::ArrayW<::UnityEngine::Vector3>& dyn__hitPoints();
    // Get instance field reference: private VROSC.PredictiveHittable[] _hittables
    ::ArrayW<::VROSC::PredictiveHittable*>& dyn__hittables();
    // Get instance field reference: private System.Int32 _raycastAllocSize
    int& dyn__raycastAllocSize();
    // Get instance field reference: private UnityEngine.GameObject _debugObject
    ::UnityEngine::GameObject*& dyn__debugObject();
    // Get instance field reference: private System.Boolean <IsMalletOrOnlyHitter>k__BackingField
    bool& dyn_$IsMalletOrOnlyHitter$k__BackingField();
    // Get instance field reference: private System.Boolean _disabled
    bool& dyn__disabled();
    // Get instance field reference: public System.Action`2<System.Single,System.Boolean> OnHitDSP
    ::System::Action_2<float, bool>*& dyn_OnHitDSP();
    // public System.Boolean get_IsMalletOrOnlyHitter()
    // Offset: 0x8FE5A8
    bool get_IsMalletOrOnlyHitter();
    // public System.Void set_IsMalletOrOnlyHitter(System.Boolean value)
    // Offset: 0x8FE5B0
    void set_IsMalletOrOnlyHitter(bool value);
    // public System.Void Setup(VROSC.InputDevice device, System.Boolean isMalletOrOnlyHitter)
    // Offset: 0x8FE5BC
    void Setup(::VROSC::InputDevice* device, bool isMalletOrOnlyHitter);
    // public System.Void OnGrabbed(VROSC.InputDevice inputDevice, System.Boolean grabbed)
    // Offset: 0x8FE7A8
    void OnGrabbed(::VROSC::InputDevice* inputDevice, bool grabbed);
    // protected System.Void Update()
    // Offset: 0x8FE8F8
    void Update();
    // private VROSC.SignalControllerInfo GetControllerInfo(VROSC.PredictiveHittable hittable, UnityEngine.Vector3 hitPoint)
    // Offset: 0x8FF38C
    ::VROSC::SignalControllerInfo* GetControllerInfo(::VROSC::PredictiveHittable* hittable, ::UnityEngine::Vector3 hitPoint);
    // private System.Boolean IsNewHittable(VROSC.PredictiveHittable hittable)
    // Offset: 0x8FF1A8
    bool IsNewHittable(::VROSC::PredictiveHittable* hittable);
    // private System.Int32 RayForHittables(UnityEngine.Vector3 fromPosition, UnityEngine.Vector3 toPosition, VROSC.PredictiveHittable[] hittables, UnityEngine.Vector3[] hitPoints)
    // Offset: 0x8FEF74
    int RayForHittables(::UnityEngine::Vector3 fromPosition, ::UnityEngine::Vector3 toPosition, ::ArrayW<::VROSC::PredictiveHittable*> hittables, ::ArrayW<::UnityEngine::Vector3> hitPoints);
    // private System.Void CalculateSmoothedVelocity()
    // Offset: 0x8FF4F4
    void CalculateSmoothedVelocity();
    // public System.Void Reset()
    // Offset: 0x8FE84C
    void Reset();
    // public System.Void SetDisabled(System.Boolean disabled)
    // Offset: 0x8FF698
    void SetDisabled(bool disabled);
    // private System.Void SpawnDebugObject()
    // Offset: 0x8FF6A4
    void SpawnDebugObject();
    // public System.Void .ctor()
    // Offset: 0x8FF770
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PredictiveHitter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::PredictiveHitter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PredictiveHitter*, creationType>()));
    }
  }; // VROSC.PredictiveHitter
  #pragma pack(pop)
  static check_size<sizeof(PredictiveHitter), 168 + sizeof(::System::Action_2<float, bool>*)> __VROSC_PredictiveHitterSizeCheck;
  static_assert(sizeof(PredictiveHitter) == 0xB0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::PredictiveHitter::get_IsMalletOrOnlyHitter
// Il2CppName: get_IsMalletOrOnlyHitter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::PredictiveHitter::*)()>(&VROSC::PredictiveHitter::get_IsMalletOrOnlyHitter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::PredictiveHitter*), "get_IsMalletOrOnlyHitter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::PredictiveHitter::set_IsMalletOrOnlyHitter
// Il2CppName: set_IsMalletOrOnlyHitter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PredictiveHitter::*)(bool)>(&VROSC::PredictiveHitter::set_IsMalletOrOnlyHitter)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::PredictiveHitter*), "set_IsMalletOrOnlyHitter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::PredictiveHitter::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PredictiveHitter::*)(::VROSC::InputDevice*, bool)>(&VROSC::PredictiveHitter::Setup)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* isMalletOrOnlyHitter = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::PredictiveHitter*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device, isMalletOrOnlyHitter});
  }
};
// Writing MetadataGetter for method: VROSC::PredictiveHitter::OnGrabbed
// Il2CppName: OnGrabbed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PredictiveHitter::*)(::VROSC::InputDevice*, bool)>(&VROSC::PredictiveHitter::OnGrabbed)> {
  static const MethodInfo* get() {
    static auto* inputDevice = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* grabbed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::PredictiveHitter*), "OnGrabbed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputDevice, grabbed});
  }
};
// Writing MetadataGetter for method: VROSC::PredictiveHitter::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PredictiveHitter::*)()>(&VROSC::PredictiveHitter::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::PredictiveHitter*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::PredictiveHitter::GetControllerInfo
// Il2CppName: GetControllerInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::SignalControllerInfo* (VROSC::PredictiveHitter::*)(::VROSC::PredictiveHittable*, ::UnityEngine::Vector3)>(&VROSC::PredictiveHitter::GetControllerInfo)> {
  static const MethodInfo* get() {
    static auto* hittable = &::il2cpp_utils::GetClassFromName("VROSC", "PredictiveHittable")->byval_arg;
    static auto* hitPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::PredictiveHitter*), "GetControllerInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hittable, hitPoint});
  }
};
// Writing MetadataGetter for method: VROSC::PredictiveHitter::IsNewHittable
// Il2CppName: IsNewHittable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::PredictiveHitter::*)(::VROSC::PredictiveHittable*)>(&VROSC::PredictiveHitter::IsNewHittable)> {
  static const MethodInfo* get() {
    static auto* hittable = &::il2cpp_utils::GetClassFromName("VROSC", "PredictiveHittable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::PredictiveHitter*), "IsNewHittable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hittable});
  }
};
// Writing MetadataGetter for method: VROSC::PredictiveHitter::RayForHittables
// Il2CppName: RayForHittables
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::PredictiveHitter::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ArrayW<::VROSC::PredictiveHittable*>, ::ArrayW<::UnityEngine::Vector3>)>(&VROSC::PredictiveHitter::RayForHittables)> {
  static const MethodInfo* get() {
    static auto* fromPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* toPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* hittables = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("VROSC", "PredictiveHittable"), 1)->byval_arg;
    static auto* hitPoints = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::PredictiveHitter*), "RayForHittables", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fromPosition, toPosition, hittables, hitPoints});
  }
};
// Writing MetadataGetter for method: VROSC::PredictiveHitter::CalculateSmoothedVelocity
// Il2CppName: CalculateSmoothedVelocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PredictiveHitter::*)()>(&VROSC::PredictiveHitter::CalculateSmoothedVelocity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::PredictiveHitter*), "CalculateSmoothedVelocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::PredictiveHitter::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PredictiveHitter::*)()>(&VROSC::PredictiveHitter::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::PredictiveHitter*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::PredictiveHitter::SetDisabled
// Il2CppName: SetDisabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PredictiveHitter::*)(bool)>(&VROSC::PredictiveHitter::SetDisabled)> {
  static const MethodInfo* get() {
    static auto* disabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::PredictiveHitter*), "SetDisabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disabled});
  }
};
// Writing MetadataGetter for method: VROSC::PredictiveHitter::SpawnDebugObject
// Il2CppName: SpawnDebugObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PredictiveHitter::*)()>(&VROSC::PredictiveHitter::SpawnDebugObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::PredictiveHitter*), "SpawnDebugObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::PredictiveHitter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
