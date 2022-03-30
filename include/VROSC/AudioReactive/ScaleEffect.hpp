// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.AudioReactive.CoroutineDrivenEffect
#include "VROSC/AudioReactive/CoroutineDrivenEffect.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC::AudioReactive
namespace VROSC::AudioReactive {
  // Forward declaring type: ScaleEffectData
  class ScaleEffectData;
  // Forward declaring type: AudioReactiveBehaviour
  class AudioReactiveBehaviour;
  // Forward declaring type: ReactToBeat
  class ReactToBeat;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: VROSC.AudioReactive
namespace VROSC::AudioReactive {
  // Forward declaring type: ScaleEffect
  class ScaleEffect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::AudioReactive::ScaleEffect);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::ScaleEffect*, "VROSC.AudioReactive", "ScaleEffect");
// Type namespace: VROSC.AudioReactive
namespace VROSC::AudioReactive {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.AudioReactive.ScaleEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class ScaleEffect : public ::VROSC::AudioReactive::CoroutineDrivenEffect {
    public:
    // Nested type: ::VROSC::AudioReactive::ScaleEffect::ScaleData
    class ScaleData;
    // Nested type: ::VROSC::AudioReactive::ScaleEffect::$SpecificFlow$d__8
    class $SpecificFlow$d__8;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private VROSC.AudioReactive.ScaleEffectData _data
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::AudioReactive::ScaleEffectData* data;
    // Field size check
    static_assert(sizeof(::VROSC::AudioReactive::ScaleEffectData*) == 0x8);
    // private UnityEngine.Transform[] _transforms
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::UnityEngine::Transform*> transforms;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Transform*>) == 0x8);
    // private VROSC.AudioReactive.ScaleEffect/VROSC.AudioReactive.ScaleData[] _scaleDatas
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::VROSC::AudioReactive::ScaleEffect::ScaleData*> scaleDatas;
    // Field size check
    static_assert(sizeof(::ArrayW<::VROSC::AudioReactive::ScaleEffect::ScaleData*>) == 0x8);
    public:
    // Get instance field reference: private VROSC.AudioReactive.ScaleEffectData _data
    ::VROSC::AudioReactive::ScaleEffectData*& dyn__data();
    // Get instance field reference: private UnityEngine.Transform[] _transforms
    ::ArrayW<::UnityEngine::Transform*>& dyn__transforms();
    // Get instance field reference: private VROSC.AudioReactive.ScaleEffect/VROSC.AudioReactive.ScaleData[] _scaleDatas
    ::ArrayW<::VROSC::AudioReactive::ScaleEffect::ScaleData*>& dyn__scaleDatas();
    // public VROSC.AudioReactive.ScaleEffectData get_Data()
    // Offset: 0xB10B20
    ::VROSC::AudioReactive::ScaleEffectData* get_Data();
    // public UnityEngine.Transform[] get_Transforms()
    // Offset: 0xB10B28
    ::ArrayW<::UnityEngine::Transform*> get_Transforms();
    // private System.Void SetStartScale()
    // Offset: 0xB10CEC
    void SetStartScale();
    // private System.Void GetScaleDatas()
    // Offset: 0xB10B58
    void GetScaleDatas();
    // public System.Void .ctor()
    // Offset: 0xB10E64
    // Implemented from: VROSC.AudioReactive.CoroutineDrivenEffect
    // Base method: System.Void CoroutineDrivenEffect::.ctor()
    // Base method: System.Void ReactiveEffect::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScaleEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::AudioReactive::ScaleEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScaleEffect*, creationType>()));
    }
    // public override System.Void Setup(VROSC.AudioReactive.AudioReactiveBehaviour behaviour)
    // Offset: 0xB10B30
    // Implemented from: VROSC.AudioReactive.CoroutineDrivenEffect
    // Base method: System.Void CoroutineDrivenEffect::Setup(VROSC.AudioReactive.AudioReactiveBehaviour behaviour)
    void Setup(::VROSC::AudioReactive::AudioReactiveBehaviour* behaviour);
    // protected override System.Collections.IEnumerator SpecificFlow()
    // Offset: 0xB10C80
    // Implemented from: VROSC.AudioReactive.CoroutineDrivenEffect
    // Base method: System.Collections.IEnumerator CoroutineDrivenEffect::SpecificFlow()
    ::System::Collections::IEnumerator* SpecificFlow();
    // public override System.Void DrawGizmos(VROSC.AudioReactive.ReactToBeat sender)
    // Offset: 0xB10D68
    // Implemented from: VROSC.AudioReactive.ReactiveEffect
    // Base method: System.Void ReactiveEffect::DrawGizmos(VROSC.AudioReactive.ReactToBeat sender)
    void DrawGizmos(::VROSC::AudioReactive::ReactToBeat* sender);
  }; // VROSC.AudioReactive.ScaleEffect
  #pragma pack(pop)
  static check_size<sizeof(ScaleEffect), 64 + sizeof(::ArrayW<::VROSC::AudioReactive::ScaleEffect::ScaleData*>)> __VROSC_AudioReactive_ScaleEffectSizeCheck;
  static_assert(sizeof(ScaleEffect) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::AudioReactive::ScaleEffect::get_Data
// Il2CppName: get_Data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::AudioReactive::ScaleEffectData* (VROSC::AudioReactive::ScaleEffect::*)()>(&VROSC::AudioReactive::ScaleEffect::get_Data)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::ScaleEffect*), "get_Data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::ScaleEffect::get_Transforms
// Il2CppName: get_Transforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Transform*> (VROSC::AudioReactive::ScaleEffect::*)()>(&VROSC::AudioReactive::ScaleEffect::get_Transforms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::ScaleEffect*), "get_Transforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::ScaleEffect::SetStartScale
// Il2CppName: SetStartScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioReactive::ScaleEffect::*)()>(&VROSC::AudioReactive::ScaleEffect::SetStartScale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::ScaleEffect*), "SetStartScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::ScaleEffect::GetScaleDatas
// Il2CppName: GetScaleDatas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioReactive::ScaleEffect::*)()>(&VROSC::AudioReactive::ScaleEffect::GetScaleDatas)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::ScaleEffect*), "GetScaleDatas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::ScaleEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::AudioReactive::ScaleEffect::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioReactive::ScaleEffect::*)(::VROSC::AudioReactive::AudioReactiveBehaviour*)>(&VROSC::AudioReactive::ScaleEffect::Setup)> {
  static const MethodInfo* get() {
    static auto* behaviour = &::il2cpp_utils::GetClassFromName("VROSC.AudioReactive", "AudioReactiveBehaviour")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::ScaleEffect*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{behaviour});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::ScaleEffect::SpecificFlow
// Il2CppName: SpecificFlow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (VROSC::AudioReactive::ScaleEffect::*)()>(&VROSC::AudioReactive::ScaleEffect::SpecificFlow)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::ScaleEffect*), "SpecificFlow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::ScaleEffect::DrawGizmos
// Il2CppName: DrawGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioReactive::ScaleEffect::*)(::VROSC::AudioReactive::ReactToBeat*)>(&VROSC::AudioReactive::ScaleEffect::DrawGizmos)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("VROSC.AudioReactive", "ReactToBeat")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::ScaleEffect*), "DrawGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender});
  }
};
