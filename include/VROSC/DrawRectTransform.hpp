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
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: DrawRectTransform
  class DrawRectTransform;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::DrawRectTransform);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::DrawRectTransform*, "VROSC", "DrawRectTransform");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.DrawRectTransform
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: 7807E8
  class DrawRectTransform : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.RectTransform _rectTransform
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::RectTransform* rectTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.RectTransform _rectTransform
    [[deprecated]] ::UnityEngine::RectTransform*& dyn__rectTransform();
    // private System.Void OnDrawGizmos()
    // Offset: 0x8E52D8
    void OnDrawGizmos();
    // public System.Void .ctor()
    // Offset: 0x8E53E0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DrawRectTransform* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::DrawRectTransform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DrawRectTransform*, creationType>()));
    }
  }; // VROSC.DrawRectTransform
  #pragma pack(pop)
  static check_size<sizeof(DrawRectTransform), 24 + sizeof(::UnityEngine::RectTransform*)> __VROSC_DrawRectTransformSizeCheck;
  static_assert(sizeof(DrawRectTransform) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::DrawRectTransform::OnDrawGizmos
// Il2CppName: OnDrawGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::DrawRectTransform::*)()>(&VROSC::DrawRectTransform::OnDrawGizmos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::DrawRectTransform*), "OnDrawGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::DrawRectTransform::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
