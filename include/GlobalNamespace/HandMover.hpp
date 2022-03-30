// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: VROSC.HandType
#include "VROSC/HandType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: HandMover
  class HandMover;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::HandMover);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HandMover*, "", "HandMover");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: HandMover
  // [TokenAttribute] Offset: FFFFFFFF
  class HandMover : public ::UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private UnityEngine.Transform _leftHand
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Transform* leftHand;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _rightHand
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* rightHand;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private VROSC.HandType _useHand
    // Size: 0x14
    // Offset: 0x28
    ::VROSC::HandType useHand;
    // Field size check
    static_assert(sizeof(::VROSC::HandType) == 0x14);
    // private System.Single _depthScrollSpeed
    // Size: 0x4
    // Offset: 0x2C
    float depthScrollSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _depthOffset
    // Size: 0x4
    // Offset: 0x30
    float depthOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Transform _leftHand
    ::UnityEngine::Transform*& dyn__leftHand();
    // Get instance field reference: private UnityEngine.Transform _rightHand
    ::UnityEngine::Transform*& dyn__rightHand();
    // Get instance field reference: private VROSC.HandType _useHand
    ::VROSC::HandType& dyn__useHand();
    // Get instance field reference: private System.Single _depthScrollSpeed
    float& dyn__depthScrollSpeed();
    // Get instance field reference: private System.Single _depthOffset
    float& dyn__depthOffset();
    // public VROSC.HandType get_UseHand()
    // Offset: 0x897B48
    ::VROSC::HandType get_UseHand();
    // protected System.Void Update()
    // Offset: 0x897B50
    void Update();
    // public System.Void .ctor()
    // Offset: 0x897E10
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HandMover* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::HandMover::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HandMover*, creationType>()));
    }
  }; // HandMover
  #pragma pack(pop)
  static check_size<sizeof(HandMover), 48 + sizeof(float)> __GlobalNamespace_HandMoverSizeCheck;
  static_assert(sizeof(HandMover) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HandMover::get_UseHand
// Il2CppName: get_UseHand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::HandType (GlobalNamespace::HandMover::*)()>(&GlobalNamespace::HandMover::get_UseHand)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HandMover*), "get_UseHand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HandMover::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HandMover::*)()>(&GlobalNamespace::HandMover::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HandMover*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HandMover::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
