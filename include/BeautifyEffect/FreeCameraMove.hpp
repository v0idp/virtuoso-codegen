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
// Type namespace: BeautifyEffect
namespace BeautifyEffect {
  // Forward declaring type: FreeCameraMove
  class FreeCameraMove;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BeautifyEffect::FreeCameraMove);
DEFINE_IL2CPP_ARG_TYPE(::BeautifyEffect::FreeCameraMove*, "BeautifyEffect", "FreeCameraMove");
// Type namespace: BeautifyEffect
namespace BeautifyEffect {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: BeautifyEffect.FreeCameraMove
  // [TokenAttribute] Offset: FFFFFFFF
  class FreeCameraMove : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Single cameraSensitivity
    // Size: 0x4
    // Offset: 0x18
    float cameraSensitivity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single climbSpeed
    // Size: 0x4
    // Offset: 0x1C
    float climbSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single normalMoveSpeed
    // Size: 0x4
    // Offset: 0x20
    float normalMoveSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single slowMoveFactor
    // Size: 0x4
    // Offset: 0x24
    float slowMoveFactor;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single fastMoveFactor
    // Size: 0x4
    // Offset: 0x28
    float fastMoveFactor;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single rotationX
    // Size: 0x4
    // Offset: 0x2C
    float rotationX;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single rotationY
    // Size: 0x4
    // Offset: 0x30
    float rotationY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Quaternion originalRotation
    // Size: 0x10
    // Offset: 0x34
    ::UnityEngine::Quaternion originalRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Single cameraSensitivity
    [[deprecated("Use field access instead!")]] float& dyn_cameraSensitivity();
    // Get instance field reference: public System.Single climbSpeed
    [[deprecated("Use field access instead!")]] float& dyn_climbSpeed();
    // Get instance field reference: public System.Single normalMoveSpeed
    [[deprecated("Use field access instead!")]] float& dyn_normalMoveSpeed();
    // Get instance field reference: public System.Single slowMoveFactor
    [[deprecated("Use field access instead!")]] float& dyn_slowMoveFactor();
    // Get instance field reference: public System.Single fastMoveFactor
    [[deprecated("Use field access instead!")]] float& dyn_fastMoveFactor();
    // Get instance field reference: private System.Single rotationX
    [[deprecated("Use field access instead!")]] float& dyn_rotationX();
    // Get instance field reference: private System.Single rotationY
    [[deprecated("Use field access instead!")]] float& dyn_rotationY();
    // Get instance field reference: private UnityEngine.Quaternion originalRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_originalRotation();
    // public System.Void .ctor()
    // Offset: 0x19A1648
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FreeCameraMove* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BeautifyEffect::FreeCameraMove::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FreeCameraMove*, creationType>()));
    }
    // private System.Void Start()
    // Offset: 0x19A0E58
    void Start();
    // private System.Void Update()
    // Offset: 0x19A0EAC
    void Update();
  }; // BeautifyEffect.FreeCameraMove
  #pragma pack(pop)
  static check_size<sizeof(FreeCameraMove), 52 + sizeof(::UnityEngine::Quaternion)> __BeautifyEffect_FreeCameraMoveSizeCheck;
  static_assert(sizeof(FreeCameraMove) == 0x44);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BeautifyEffect::FreeCameraMove::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: BeautifyEffect::FreeCameraMove::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeautifyEffect::FreeCameraMove::*)()>(&BeautifyEffect::FreeCameraMove::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeautifyEffect::FreeCameraMove*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeautifyEffect::FreeCameraMove::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeautifyEffect::FreeCameraMove::*)()>(&BeautifyEffect::FreeCameraMove::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeautifyEffect::FreeCameraMove*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
