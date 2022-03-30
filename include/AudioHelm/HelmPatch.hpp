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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Object because it is already included!
}
// Forward declaring namespace: AudioHelm
namespace AudioHelm {
  // Forward declaring type: HelmPatchFormat
  class HelmPatchFormat;
}
// Completed forward declares
// Type namespace: AudioHelm
namespace AudioHelm {
  // Forward declaring type: HelmPatch
  class HelmPatch;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::AudioHelm::HelmPatch);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::HelmPatch*, "AudioHelm", "HelmPatch");
// Type namespace: AudioHelm
namespace AudioHelm {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: AudioHelm.HelmPatch
  // [TokenAttribute] Offset: FFFFFFFF
  class HelmPatch : public ::UnityEngine::MonoBehaviour {
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
    // public UnityEngine.Object patchObject
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Object* patchObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // public AudioHelm.HelmPatchFormat patchData
    // Size: 0x8
    // Offset: 0x20
    ::AudioHelm::HelmPatchFormat* patchData;
    // Field size check
    static_assert(sizeof(::AudioHelm::HelmPatchFormat*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.Object patchObject
    ::UnityEngine::Object*& dyn_patchObject();
    // Get instance field reference: public AudioHelm.HelmPatchFormat patchData
    ::AudioHelm::HelmPatchFormat*& dyn_patchData();
    // public System.Void LoadPatchData(System.String filePath)
    // Offset: 0x89AB80
    void LoadPatchData(::StringW filePath);
    // public System.Void .ctor()
    // Offset: 0x89ABE8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HelmPatch* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::AudioHelm::HelmPatch::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HelmPatch*, creationType>()));
    }
  }; // AudioHelm.HelmPatch
  #pragma pack(pop)
  static check_size<sizeof(HelmPatch), 32 + sizeof(::AudioHelm::HelmPatchFormat*)> __AudioHelm_HelmPatchSizeCheck;
  static_assert(sizeof(HelmPatch) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AudioHelm::HelmPatch::LoadPatchData
// Il2CppName: LoadPatchData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::HelmPatch::*)(::StringW)>(&AudioHelm::HelmPatch::LoadPatchData)> {
  static const MethodInfo* get() {
    static auto* filePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::HelmPatch*), "LoadPatchData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{filePath});
  }
};
// Writing MetadataGetter for method: AudioHelm::HelmPatch::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!