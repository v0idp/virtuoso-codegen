// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
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
// Forward declaring namespace: VROSC::AudioReactive
namespace VROSC::AudioReactive {
  // Forward declaring type: RotateEffectData
  class RotateEffectData;
}
// Completed forward declares
// Type namespace: VROSC.AudioReactive
namespace VROSC::AudioReactive {
  // Forward declaring type: ConstantRotationData
  class ConstantRotationData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::AudioReactive::ConstantRotationData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::ConstantRotationData*, "VROSC.AudioReactive", "ConstantRotationData");
// Type namespace: VROSC.AudioReactive
namespace VROSC::AudioReactive {
  // Size: 0x25
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.AudioReactive.ConstantRotationData
  // [TokenAttribute] Offset: FFFFFFFF
  class ConstantRotationData : public ::Il2CppObject {
    public:
    public:
    // private UnityEngine.Transform _transform
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Vector3 _rotation
    // Size: 0xC
    // Offset: 0x18
    ::UnityEngine::Vector3 rotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Boolean _local
    // Size: 0x1
    // Offset: 0x24
    bool local;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private UnityEngine.Transform _transform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__transform();
    // Get instance field reference: private UnityEngine.Vector3 _rotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__rotation();
    // Get instance field reference: private System.Boolean _local
    [[deprecated("Use field access instead!")]] bool& dyn__local();
    // public System.Void .ctor(UnityEngine.Transform transform, VROSC.AudioReactive.RotateEffectData data)
    // Offset: 0x94CC80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConstantRotationData* New_ctor(::UnityEngine::Transform* transform, ::VROSC::AudioReactive::RotateEffectData* data) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::AudioReactive::ConstantRotationData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConstantRotationData*, creationType>(transform, data)));
    }
    // public System.Void Rotate()
    // Offset: 0x94CCE4
    void Rotate();
  }; // VROSC.AudioReactive.ConstantRotationData
  #pragma pack(pop)
  static check_size<sizeof(ConstantRotationData), 36 + sizeof(bool)> __VROSC_AudioReactive_ConstantRotationDataSizeCheck;
  static_assert(sizeof(ConstantRotationData) == 0x25);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::AudioReactive::ConstantRotationData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::AudioReactive::ConstantRotationData::Rotate
// Il2CppName: Rotate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioReactive::ConstantRotationData::*)()>(&VROSC::AudioReactive::ConstantRotationData::Rotate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::ConstantRotationData*), "Rotate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
