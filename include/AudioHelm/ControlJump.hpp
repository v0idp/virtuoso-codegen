// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.KeyCode
#include "UnityEngine/KeyCode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collision
  class Collision;
}
// Completed forward declares
// Type namespace: AudioHelm
namespace AudioHelm {
  // Forward declaring type: ControlJump
  class ControlJump;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::AudioHelm::ControlJump);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::ControlJump*, "AudioHelm", "ControlJump");
// Type namespace: AudioHelm
namespace AudioHelm {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: AudioHelm.ControlJump
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: 781F9C
  class ControlJump : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Single jumpForce
    // Size: 0x4
    // Offset: 0x18
    float jumpForce;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.KeyCode key
    // Size: 0x4
    // Offset: 0x1C
    ::UnityEngine::KeyCode key;
    // Field size check
    static_assert(sizeof(::UnityEngine::KeyCode) == 0x4);
    // private UnityEngine.Vector3 surface_normal_
    // Size: 0xC
    // Offset: 0x20
    ::UnityEngine::Vector3 surface_normal;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Single jumpForce
    [[deprecated("Use field access instead!")]] float& dyn_jumpForce();
    // Get instance field reference: public UnityEngine.KeyCode key
    [[deprecated("Use field access instead!")]] ::UnityEngine::KeyCode& dyn_key();
    // Get instance field reference: private UnityEngine.Vector3 surface_normal_
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_surface_normal_();
    // public System.Void .ctor()
    // Offset: 0x94CE98
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ControlJump* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::AudioHelm::ControlJump::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ControlJump*, creationType>()));
    }
    // private System.Void Update()
    // Offset: 0x94CD48
    void Update();
    // private System.Void OnCollisionStay(UnityEngine.Collision collision)
    // Offset: 0x94CDE0
    void OnCollisionStay(::UnityEngine::Collision* collision);
  }; // AudioHelm.ControlJump
  #pragma pack(pop)
  static check_size<sizeof(ControlJump), 32 + sizeof(::UnityEngine::Vector3)> __AudioHelm_ControlJumpSizeCheck;
  static_assert(sizeof(ControlJump) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AudioHelm::ControlJump::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: AudioHelm::ControlJump::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::ControlJump::*)()>(&AudioHelm::ControlJump::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::ControlJump*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: AudioHelm::ControlJump::OnCollisionStay
// Il2CppName: OnCollisionStay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::ControlJump::*)(::UnityEngine::Collision*)>(&AudioHelm::ControlJump::OnCollisionStay)> {
  static const MethodInfo* get() {
    static auto* collision = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collision")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::ControlJump*), "OnCollisionStay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{collision});
  }
};
