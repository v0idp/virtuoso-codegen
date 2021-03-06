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
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SetCameraUseDepthTexture
  class SetCameraUseDepthTexture;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SetCameraUseDepthTexture);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SetCameraUseDepthTexture*, "", "SetCameraUseDepthTexture");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: SetCameraUseDepthTexture
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: FFFFFFFF
  class SetCameraUseDepthTexture : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Camera cam
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Camera* cam;
    // Field size check
    static_assert(sizeof(::UnityEngine::Camera*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Camera cam
    [[deprecated("Use field access instead!")]] ::UnityEngine::Camera*& dyn_cam();
    // public System.Void .ctor()
    // Offset: 0x1924934
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SetCameraUseDepthTexture* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SetCameraUseDepthTexture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SetCameraUseDepthTexture*, creationType>()));
    }
    // private System.Void Start()
    // Offset: 0x19248D0
    void Start();
  }; // SetCameraUseDepthTexture
  #pragma pack(pop)
  static check_size<sizeof(SetCameraUseDepthTexture), 24 + sizeof(::UnityEngine::Camera*)> __GlobalNamespace_SetCameraUseDepthTextureSizeCheck;
  static_assert(sizeof(SetCameraUseDepthTexture) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SetCameraUseDepthTexture::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SetCameraUseDepthTexture::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SetCameraUseDepthTexture::*)()>(&GlobalNamespace::SetCameraUseDepthTexture::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SetCameraUseDepthTexture*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
