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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: MinMaxFloat
  class MinMaxFloat;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: FracturedObjectController
  class FracturedObjectController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::FracturedObjectController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FracturedObjectController*, "VROSC", "FracturedObjectController");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.FracturedObjectController
  // [TokenAttribute] Offset: FFFFFFFF
  class FracturedObjectController : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::VROSC::FracturedObjectController::$$c
    class $$c;
    public:
    // private UnityEngine.Transform[] _objects
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::Transform*> objects;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Transform*>) == 0x8);
    // private UnityEngine.Vector3[] _assembledPositions
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::UnityEngine::Vector3> assembledPositions;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // private UnityEngine.Quaternion[] _assembledRotations
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::UnityEngine::Quaternion> assembledRotations;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Quaternion>) == 0x8);
    // private VROSC.MinMaxFloat _positionOffset
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::MinMaxFloat* positionOffset;
    // Field size check
    static_assert(sizeof(::VROSC::MinMaxFloat*) == 0x8);
    // private VROSC.MinMaxFloat _rotationOffset
    // Size: 0x8
    // Offset: 0x38
    ::VROSC::MinMaxFloat* rotationOffset;
    // Field size check
    static_assert(sizeof(::VROSC::MinMaxFloat*) == 0x8);
    // private UnityEngine.AnimationCurve _positionCurve
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::AnimationCurve* positionCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.AnimationCurve _rotationCurve
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::AnimationCurve* rotationCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.AnimationCurve _scaleCurve
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::AnimationCurve* scaleCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Transform[] _objects
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Transform*>& dyn__objects();
    // Get instance field reference: private UnityEngine.Vector3[] _assembledPositions
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector3>& dyn__assembledPositions();
    // Get instance field reference: private UnityEngine.Quaternion[] _assembledRotations
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Quaternion>& dyn__assembledRotations();
    // Get instance field reference: private VROSC.MinMaxFloat _positionOffset
    [[deprecated("Use field access instead!")]] ::VROSC::MinMaxFloat*& dyn__positionOffset();
    // Get instance field reference: private VROSC.MinMaxFloat _rotationOffset
    [[deprecated("Use field access instead!")]] ::VROSC::MinMaxFloat*& dyn__rotationOffset();
    // Get instance field reference: private UnityEngine.AnimationCurve _positionCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn__positionCurve();
    // Get instance field reference: private UnityEngine.AnimationCurve _rotationCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn__rotationCurve();
    // Get instance field reference: private UnityEngine.AnimationCurve _scaleCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn__scaleCurve();
    // public VROSC.MinMaxFloat get_PositionOffset()
    // Offset: 0x19A0908
    ::VROSC::MinMaxFloat* get_PositionOffset();
    // public VROSC.MinMaxFloat get_RotationOffset()
    // Offset: 0x19A0910
    ::VROSC::MinMaxFloat* get_RotationOffset();
    // public UnityEngine.AnimationCurve get_RotationCurve()
    // Offset: 0x19A0918
    ::UnityEngine::AnimationCurve* get_RotationCurve();
    // public UnityEngine.AnimationCurve get_PositionCurve()
    // Offset: 0x19A0920
    ::UnityEngine::AnimationCurve* get_PositionCurve();
    // public UnityEngine.AnimationCurve get_ScaleCurve()
    // Offset: 0x19A0928
    ::UnityEngine::AnimationCurve* get_ScaleCurve();
    // public UnityEngine.Transform[] get_Objects()
    // Offset: 0x19A0930
    ::ArrayW<::UnityEngine::Transform*> get_Objects();
    // public UnityEngine.Vector3[] get_AssembledPositions()
    // Offset: 0x19A0938
    ::ArrayW<::UnityEngine::Vector3> get_AssembledPositions();
    // public UnityEngine.Quaternion[] get_AssembledRotations()
    // Offset: 0x19A0940
    ::ArrayW<::UnityEngine::Quaternion> get_AssembledRotations();
    // public System.Void .ctor()
    // Offset: 0x19A0C08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FracturedObjectController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::FracturedObjectController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FracturedObjectController*, creationType>()));
    }
    // private System.Void GetAllChildren()
    // Offset: 0x19A0948
    void GetAllChildren();
    // private System.Void StoreAssembledPositions()
    // Offset: 0x19A099C
    void StoreAssembledPositions();
    // public System.Void ResetObjects()
    // Offset: 0x19A0604
    void ResetObjects();
  }; // VROSC.FracturedObjectController
  #pragma pack(pop)
  static check_size<sizeof(FracturedObjectController), 80 + sizeof(::UnityEngine::AnimationCurve*)> __VROSC_FracturedObjectControllerSizeCheck;
  static_assert(sizeof(FracturedObjectController) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::FracturedObjectController::get_PositionOffset
// Il2CppName: get_PositionOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::MinMaxFloat* (VROSC::FracturedObjectController::*)()>(&VROSC::FracturedObjectController::get_PositionOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::FracturedObjectController*), "get_PositionOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::FracturedObjectController::get_RotationOffset
// Il2CppName: get_RotationOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::MinMaxFloat* (VROSC::FracturedObjectController::*)()>(&VROSC::FracturedObjectController::get_RotationOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::FracturedObjectController*), "get_RotationOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::FracturedObjectController::get_RotationCurve
// Il2CppName: get_RotationCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationCurve* (VROSC::FracturedObjectController::*)()>(&VROSC::FracturedObjectController::get_RotationCurve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::FracturedObjectController*), "get_RotationCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::FracturedObjectController::get_PositionCurve
// Il2CppName: get_PositionCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationCurve* (VROSC::FracturedObjectController::*)()>(&VROSC::FracturedObjectController::get_PositionCurve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::FracturedObjectController*), "get_PositionCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::FracturedObjectController::get_ScaleCurve
// Il2CppName: get_ScaleCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationCurve* (VROSC::FracturedObjectController::*)()>(&VROSC::FracturedObjectController::get_ScaleCurve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::FracturedObjectController*), "get_ScaleCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::FracturedObjectController::get_Objects
// Il2CppName: get_Objects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Transform*> (VROSC::FracturedObjectController::*)()>(&VROSC::FracturedObjectController::get_Objects)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::FracturedObjectController*), "get_Objects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::FracturedObjectController::get_AssembledPositions
// Il2CppName: get_AssembledPositions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector3> (VROSC::FracturedObjectController::*)()>(&VROSC::FracturedObjectController::get_AssembledPositions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::FracturedObjectController*), "get_AssembledPositions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::FracturedObjectController::get_AssembledRotations
// Il2CppName: get_AssembledRotations
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Quaternion> (VROSC::FracturedObjectController::*)()>(&VROSC::FracturedObjectController::get_AssembledRotations)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::FracturedObjectController*), "get_AssembledRotations", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::FracturedObjectController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::FracturedObjectController::GetAllChildren
// Il2CppName: GetAllChildren
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::FracturedObjectController::*)()>(&VROSC::FracturedObjectController::GetAllChildren)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::FracturedObjectController*), "GetAllChildren", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::FracturedObjectController::StoreAssembledPositions
// Il2CppName: StoreAssembledPositions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::FracturedObjectController::*)()>(&VROSC::FracturedObjectController::StoreAssembledPositions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::FracturedObjectController*), "StoreAssembledPositions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::FracturedObjectController::ResetObjects
// Il2CppName: ResetObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::FracturedObjectController::*)()>(&VROSC::FracturedObjectController::ResetObjects)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::FracturedObjectController*), "ResetObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
