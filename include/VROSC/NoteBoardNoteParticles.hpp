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
  // Forward declaring type: NoteBoardNoteAnimator
  class NoteBoardNoteAnimator;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Gradient
  class Gradient;
  // Forward declaring type: ParticleSystem
  class ParticleSystem;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: NoteBoardNoteParticles
  class NoteBoardNoteParticles;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::NoteBoardNoteParticles);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteBoardNoteParticles*, "VROSC", "NoteBoardNoteParticles");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.NoteBoardNoteParticles
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteBoardNoteParticles : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::VROSC::NoteBoardNoteParticles::Emission
    class Emission;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private VROSC.NoteBoardNoteAnimator _target
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::NoteBoardNoteAnimator* target;
    // Field size check
    static_assert(sizeof(::VROSC::NoteBoardNoteAnimator*) == 0x8);
    // [RangeAttribute] Offset: 0x675684
    // private System.Single _rate
    // Size: 0x4
    // Offset: 0x20
    float rate;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0x6756C4
    // private System.Single _size
    // Size: 0x4
    // Offset: 0x24
    float size;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0x675704
    // private System.Int32 _multiplier
    // Size: 0x4
    // Offset: 0x28
    int multiplier;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _useRandomColor
    // Size: 0x1
    // Offset: 0x2C
    bool useRandomColor;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useRandomColor and: randomColor
    char __padding4[0x3] = {};
    // private UnityEngine.Gradient _randomColor
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Gradient* randomColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Gradient*) == 0x8);
    // private System.Boolean _remap
    // Size: 0x1
    // Offset: 0x38
    bool remap;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: remap and: remapR
    char __padding6[0x3] = {};
    // private UnityEngine.Color _remapR
    // Size: 0x10
    // Offset: 0x3C
    ::UnityEngine::Color remapR;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _remapG
    // Size: 0x10
    // Offset: 0x4C
    ::UnityEngine::Color remapG;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _remapB
    // Size: 0x10
    // Offset: 0x5C
    ::UnityEngine::Color remapB;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // Padding between fields: remapB and: red
    char __padding9[0x4] = {};
    // private VROSC.NoteBoardNoteParticles/VROSC.Emission _red
    // Size: 0x8
    // Offset: 0x70
    ::VROSC::NoteBoardNoteParticles::Emission* red;
    // Field size check
    static_assert(sizeof(::VROSC::NoteBoardNoteParticles::Emission*) == 0x8);
    // private UnityEngine.ParticleSystem _particleSystem
    // Size: 0x8
    // Offset: 0x78
    ::UnityEngine::ParticleSystem* particleSystem;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystem*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.NoteBoardNoteAnimator _target
    ::VROSC::NoteBoardNoteAnimator*& dyn__target();
    // Get instance field reference: private System.Single _rate
    float& dyn__rate();
    // Get instance field reference: private System.Single _size
    float& dyn__size();
    // Get instance field reference: private System.Int32 _multiplier
    int& dyn__multiplier();
    // Get instance field reference: private System.Boolean _useRandomColor
    bool& dyn__useRandomColor();
    // Get instance field reference: private UnityEngine.Gradient _randomColor
    ::UnityEngine::Gradient*& dyn__randomColor();
    // Get instance field reference: private System.Boolean _remap
    bool& dyn__remap();
    // Get instance field reference: private UnityEngine.Color _remapR
    ::UnityEngine::Color& dyn__remapR();
    // Get instance field reference: private UnityEngine.Color _remapG
    ::UnityEngine::Color& dyn__remapG();
    // Get instance field reference: private UnityEngine.Color _remapB
    ::UnityEngine::Color& dyn__remapB();
    // Get instance field reference: private VROSC.NoteBoardNoteParticles/VROSC.Emission _red
    ::VROSC::NoteBoardNoteParticles::Emission*& dyn__red();
    // Get instance field reference: private UnityEngine.ParticleSystem _particleSystem
    ::UnityEngine::ParticleSystem*& dyn__particleSystem();
    // private System.Void Awake()
    // Offset: 0xA13768
    void Awake();
    // private System.Void Update()
    // Offset: 0xA138C0
    void Update();
    // private UnityEngine.Color GetColor(UnityEngine.Color normalColor)
    // Offset: 0xA139C8
    ::UnityEngine::Color GetColor(::UnityEngine::Color normalColor);
    // private System.Void OnDrawGizmosSelected()
    // Offset: 0xA13B54
    void OnDrawGizmosSelected();
    // public System.Void .ctor()
    // Offset: 0xA13BA4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteBoardNoteParticles* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::NoteBoardNoteParticles::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteBoardNoteParticles*, creationType>()));
    }
  }; // VROSC.NoteBoardNoteParticles
  #pragma pack(pop)
  static check_size<sizeof(NoteBoardNoteParticles), 120 + sizeof(::UnityEngine::ParticleSystem*)> __VROSC_NoteBoardNoteParticlesSizeCheck;
  static_assert(sizeof(NoteBoardNoteParticles) == 0x80);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::NoteBoardNoteParticles::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNoteParticles::*)()>(&VROSC::NoteBoardNoteParticles::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteParticles*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteParticles::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNoteParticles::*)()>(&VROSC::NoteBoardNoteParticles::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteParticles*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteParticles::GetColor
// Il2CppName: GetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (VROSC::NoteBoardNoteParticles::*)(::UnityEngine::Color)>(&VROSC::NoteBoardNoteParticles::GetColor)> {
  static const MethodInfo* get() {
    static auto* normalColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteParticles*), "GetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{normalColor});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteParticles::OnDrawGizmosSelected
// Il2CppName: OnDrawGizmosSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNoteParticles::*)()>(&VROSC::NoteBoardNoteParticles::OnDrawGizmosSelected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteParticles*), "OnDrawGizmosSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteParticles::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!