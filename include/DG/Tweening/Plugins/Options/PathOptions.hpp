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
// Including type: DG.Tweening.PathMode
#include "DG/Tweening/PathMode.hpp"
// Including type: DG.Tweening.Plugins.Options.OrientType
#include "DG/Tweening/Plugins/Options/OrientType.hpp"
// Including type: DG.Tweening.AxisConstraint
#include "DG/Tweening/AxisConstraint.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: DG.Tweening.Plugins.Options
namespace DG::Tweening::Plugins::Options {
  // Forward declaring type: PathOptions
  struct PathOptions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Plugins::Options::PathOptions, "DG.Tweening.Plugins.Options", "PathOptions");
// Type namespace: DG.Tweening.Plugins.Options
namespace DG::Tweening::Plugins::Options {
  // Size: 0x6A
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: DG.Tweening.Plugins.Options.PathOptions
  // [TokenAttribute] Offset: FFFFFFFF
  struct PathOptions/*, public ::System::ValueType, public ::DG::Tweening::Plugins::Options::IPlugOptions*/ {
    public:
    public:
    // public DG.Tweening.PathMode mode
    // Size: 0x4
    // Offset: 0x0
    ::DG::Tweening::PathMode mode;
    // Field size check
    static_assert(sizeof(::DG::Tweening::PathMode) == 0x4);
    // public DG.Tweening.Plugins.Options.OrientType orientType
    // Size: 0x4
    // Offset: 0x4
    ::DG::Tweening::Plugins::Options::OrientType orientType;
    // Field size check
    static_assert(sizeof(::DG::Tweening::Plugins::Options::OrientType) == 0x4);
    // public DG.Tweening.AxisConstraint lockPositionAxis
    // Size: 0x4
    // Offset: 0x8
    ::DG::Tweening::AxisConstraint lockPositionAxis;
    // Field size check
    static_assert(sizeof(::DG::Tweening::AxisConstraint) == 0x4);
    // public DG.Tweening.AxisConstraint lockRotationAxis
    // Size: 0x4
    // Offset: 0xC
    ::DG::Tweening::AxisConstraint lockRotationAxis;
    // Field size check
    static_assert(sizeof(::DG::Tweening::AxisConstraint) == 0x4);
    // public System.Boolean isClosedPath
    // Size: 0x1
    // Offset: 0x10
    bool isClosedPath;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isClosedPath and: lookAtPosition
    char __padding4[0x3] = {};
    // public UnityEngine.Vector3 lookAtPosition
    // Size: 0xC
    // Offset: 0x14
    ::UnityEngine::Vector3 lookAtPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Transform lookAtTransform
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* lookAtTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public System.Single lookAhead
    // Size: 0x4
    // Offset: 0x28
    float lookAhead;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean hasCustomForwardDirection
    // Size: 0x1
    // Offset: 0x2C
    bool hasCustomForwardDirection;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasCustomForwardDirection and: forward
    char __padding8[0x3] = {};
    // public UnityEngine.Quaternion forward
    // Size: 0x10
    // Offset: 0x30
    ::UnityEngine::Quaternion forward;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // public System.Boolean useLocalPosition
    // Size: 0x1
    // Offset: 0x40
    bool useLocalPosition;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useLocalPosition and: parent
    char __padding10[0x7] = {};
    // public UnityEngine.Transform parent
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Transform* parent;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public System.Boolean isRigidbody
    // Size: 0x1
    // Offset: 0x50
    bool isRigidbody;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isRigidbody and: startupRot
    char __padding12[0x3] = {};
    // UnityEngine.Quaternion startupRot
    // Size: 0x10
    // Offset: 0x54
    ::UnityEngine::Quaternion startupRot;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // System.Single startupZRot
    // Size: 0x4
    // Offset: 0x64
    float startupZRot;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Boolean addedExtraStartWp
    // Size: 0x1
    // Offset: 0x68
    bool addedExtraStartWp;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean addedExtraEndWp
    // Size: 0x1
    // Offset: 0x69
    bool addedExtraEndWp;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: PathOptions
    constexpr PathOptions(::DG::Tweening::PathMode mode_ = {}, ::DG::Tweening::Plugins::Options::OrientType orientType_ = {}, ::DG::Tweening::AxisConstraint lockPositionAxis_ = {}, ::DG::Tweening::AxisConstraint lockRotationAxis_ = {}, bool isClosedPath_ = {}, ::UnityEngine::Vector3 lookAtPosition_ = {}, ::UnityEngine::Transform* lookAtTransform_ = {}, float lookAhead_ = {}, bool hasCustomForwardDirection_ = {}, ::UnityEngine::Quaternion forward_ = {}, bool useLocalPosition_ = {}, ::UnityEngine::Transform* parent_ = {}, bool isRigidbody_ = {}, ::UnityEngine::Quaternion startupRot_ = {}, float startupZRot_ = {}, bool addedExtraStartWp_ = {}, bool addedExtraEndWp_ = {}) noexcept : mode{mode_}, orientType{orientType_}, lockPositionAxis{lockPositionAxis_}, lockRotationAxis{lockRotationAxis_}, isClosedPath{isClosedPath_}, lookAtPosition{lookAtPosition_}, lookAtTransform{lookAtTransform_}, lookAhead{lookAhead_}, hasCustomForwardDirection{hasCustomForwardDirection_}, forward{forward_}, useLocalPosition{useLocalPosition_}, parent{parent_}, isRigidbody{isRigidbody_}, startupRot{startupRot_}, startupZRot{startupZRot_}, addedExtraStartWp{addedExtraStartWp_}, addedExtraEndWp{addedExtraEndWp_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::DG::Tweening::Plugins::Options::IPlugOptions
    operator ::DG::Tweening::Plugins::Options::IPlugOptions() noexcept {
      return *reinterpret_cast<::DG::Tweening::Plugins::Options::IPlugOptions*>(this);
    }
    // Get instance field reference: public DG.Tweening.PathMode mode
    ::DG::Tweening::PathMode& dyn_mode();
    // Get instance field reference: public DG.Tweening.Plugins.Options.OrientType orientType
    ::DG::Tweening::Plugins::Options::OrientType& dyn_orientType();
    // Get instance field reference: public DG.Tweening.AxisConstraint lockPositionAxis
    ::DG::Tweening::AxisConstraint& dyn_lockPositionAxis();
    // Get instance field reference: public DG.Tweening.AxisConstraint lockRotationAxis
    ::DG::Tweening::AxisConstraint& dyn_lockRotationAxis();
    // Get instance field reference: public System.Boolean isClosedPath
    bool& dyn_isClosedPath();
    // Get instance field reference: public UnityEngine.Vector3 lookAtPosition
    ::UnityEngine::Vector3& dyn_lookAtPosition();
    // Get instance field reference: public UnityEngine.Transform lookAtTransform
    ::UnityEngine::Transform*& dyn_lookAtTransform();
    // Get instance field reference: public System.Single lookAhead
    float& dyn_lookAhead();
    // Get instance field reference: public System.Boolean hasCustomForwardDirection
    bool& dyn_hasCustomForwardDirection();
    // Get instance field reference: public UnityEngine.Quaternion forward
    ::UnityEngine::Quaternion& dyn_forward();
    // Get instance field reference: public System.Boolean useLocalPosition
    bool& dyn_useLocalPosition();
    // Get instance field reference: public UnityEngine.Transform parent
    ::UnityEngine::Transform*& dyn_parent();
    // Get instance field reference: public System.Boolean isRigidbody
    bool& dyn_isRigidbody();
    // Get instance field reference: UnityEngine.Quaternion startupRot
    ::UnityEngine::Quaternion& dyn_startupRot();
    // Get instance field reference: System.Single startupZRot
    float& dyn_startupZRot();
    // Get instance field reference: System.Boolean addedExtraStartWp
    bool& dyn_addedExtraStartWp();
    // Get instance field reference: System.Boolean addedExtraEndWp
    bool& dyn_addedExtraEndWp();
    // public System.Void Reset()
    // Offset: 0x109F604
    void Reset();
  }; // DG.Tweening.Plugins.Options.PathOptions
  #pragma pack(pop)
  static check_size<sizeof(PathOptions), 105 + sizeof(bool)> __DG_Tweening_Plugins_Options_PathOptionsSizeCheck;
  static_assert(sizeof(PathOptions) == 0x6A);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DG::Tweening::Plugins::Options::PathOptions::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::Plugins::Options::PathOptions::*)()>(&DG::Tweening::Plugins::Options::PathOptions::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::Options::PathOptions), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
