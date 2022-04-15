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
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rigidbody
  class Rigidbody;
}
// Completed forward declares
// Type namespace: BeautifyEffect
namespace BeautifyEffect {
  // Forward declaring type: SphereAnimator
  class SphereAnimator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BeautifyEffect::SphereAnimator);
DEFINE_IL2CPP_ARG_TYPE(::BeautifyEffect::SphereAnimator*, "BeautifyEffect", "SphereAnimator");
// Type namespace: BeautifyEffect
namespace BeautifyEffect {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BeautifyEffect.SphereAnimator
  // [TokenAttribute] Offset: FFFFFFFF
  class SphereAnimator : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Rigidbody rb
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Rigidbody* rb;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rigidbody*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Rigidbody rb
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rigidbody*& dyn_rb();
    // public System.Void .ctor()
    // Offset: 0x192F63C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SphereAnimator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BeautifyEffect::SphereAnimator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SphereAnimator*, creationType>()));
    }
    // private System.Void Start()
    // Offset: 0x192F538
    void Start();
    // private System.Void FixedUpdate()
    // Offset: 0x192F58C
    void FixedUpdate();
  }; // BeautifyEffect.SphereAnimator
  #pragma pack(pop)
  static check_size<sizeof(SphereAnimator), 24 + sizeof(::UnityEngine::Rigidbody*)> __BeautifyEffect_SphereAnimatorSizeCheck;
  static_assert(sizeof(SphereAnimator) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BeautifyEffect::SphereAnimator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: BeautifyEffect::SphereAnimator::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeautifyEffect::SphereAnimator::*)()>(&BeautifyEffect::SphereAnimator::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeautifyEffect::SphereAnimator*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeautifyEffect::SphereAnimator::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeautifyEffect::SphereAnimator::*)()>(&BeautifyEffect::SphereAnimator::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeautifyEffect::SphereAnimator*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
