// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: LIV.SDK.Unity.RENDERING_PIPELINE
#include "LIV/SDK/Unity/RENDERING_PIPELINE.hpp"
// Including type: LIV.SDK.Unity.SDKTrackedSpace
#include "LIV/SDK/Unity/SDKTrackedSpace.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: LIV.SDK.Unity
namespace LIV::SDK::Unity {
  // Forward declaring type: SDKOutputFrame
  struct SDKOutputFrame;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKOutputFrame, "LIV.SDK.Unity", "SDKOutputFrame");
// Type namespace: LIV.SDK.Unity
namespace LIV::SDK::Unity {
  // Size: 0xAC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: LIV.SDK.Unity.SDKOutputFrame
  // [TokenAttribute] Offset: FFFFFFFF
  struct SDKOutputFrame/*, public ::System::ValueType*/ {
    public:
    public:
    // public LIV.SDK.Unity.RENDERING_PIPELINE renderingPipeline
    // Size: 0x4
    // Offset: 0x0
    ::LIV::SDK::Unity::RENDERING_PIPELINE renderingPipeline;
    // Field size check
    static_assert(sizeof(::LIV::SDK::Unity::RENDERING_PIPELINE) == 0x4);
    // public LIV.SDK.Unity.SDKTrackedSpace trackedSpace
    // Size: 0xA8
    // Offset: 0x4
    ::LIV::SDK::Unity::SDKTrackedSpace trackedSpace;
    // Field size check
    static_assert(sizeof(::LIV::SDK::Unity::SDKTrackedSpace) == 0xA8);
    public:
    // Creating value type constructor for type: SDKOutputFrame
    constexpr SDKOutputFrame(::LIV::SDK::Unity::RENDERING_PIPELINE renderingPipeline_ = {}, ::LIV::SDK::Unity::SDKTrackedSpace trackedSpace_ = {}) noexcept : renderingPipeline{renderingPipeline_}, trackedSpace{trackedSpace_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public LIV.SDK.Unity.RENDERING_PIPELINE renderingPipeline
    ::LIV::SDK::Unity::RENDERING_PIPELINE& dyn_renderingPipeline();
    // Get instance field reference: public LIV.SDK.Unity.SDKTrackedSpace trackedSpace
    ::LIV::SDK::Unity::SDKTrackedSpace& dyn_trackedSpace();
    // static public LIV.SDK.Unity.SDKOutputFrame get_empty()
    // Offset: 0xB03B44
    static ::LIV::SDK::Unity::SDKOutputFrame get_empty();
    // public override System.String ToString()
    // Offset: 0xB03C00
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // LIV.SDK.Unity.SDKOutputFrame
  #pragma pack(pop)
  static check_size<sizeof(SDKOutputFrame), 4 + sizeof(::LIV::SDK::Unity::SDKTrackedSpace)> __LIV_SDK_Unity_SDKOutputFrameSizeCheck;
  static_assert(sizeof(SDKOutputFrame) == 0xAC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKOutputFrame::get_empty
// Il2CppName: get_empty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKOutputFrame (*)()>(&LIV::SDK::Unity::SDKOutputFrame::get_empty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKOutputFrame), "get_empty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKOutputFrame::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (LIV::SDK::Unity::SDKOutputFrame::*)()>(&LIV::SDK::Unity::SDKOutputFrame::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKOutputFrame), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
