// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: ovrAvatarMaterialLayerBlendMode
#include "GlobalNamespace/ovrAvatarMaterialLayerBlendMode.hpp"
// Including type: ovrAvatarMaterialLayerSampleMode
#include "GlobalNamespace/ovrAvatarMaterialLayerSampleMode.hpp"
// Including type: ovrAvatarMaterialMaskType
#include "GlobalNamespace/ovrAvatarMaterialMaskType.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ovrAvatarMaterialLayerState
  struct ovrAvatarMaterialLayerState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ovrAvatarMaterialLayerState, "", "ovrAvatarMaterialLayerState");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: ovrAvatarMaterialLayerState
  // [TokenAttribute] Offset: FFFFFFFF
  struct ovrAvatarMaterialLayerState/*, public ::System::ValueType*/ {
    public:
    public:
    // public ovrAvatarMaterialLayerBlendMode blendMode
    // Size: 0x4
    // Offset: 0x0
    ::GlobalNamespace::ovrAvatarMaterialLayerBlendMode blendMode;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ovrAvatarMaterialLayerBlendMode) == 0x4);
    // public ovrAvatarMaterialLayerSampleMode sampleMode
    // Size: 0x4
    // Offset: 0x4
    ::GlobalNamespace::ovrAvatarMaterialLayerSampleMode sampleMode;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ovrAvatarMaterialLayerSampleMode) == 0x4);
    // public ovrAvatarMaterialMaskType maskType
    // Size: 0x4
    // Offset: 0x8
    ::GlobalNamespace::ovrAvatarMaterialMaskType maskType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ovrAvatarMaterialMaskType) == 0x4);
    // public UnityEngine.Vector4 layerColor
    // Size: 0x10
    // Offset: 0xC
    ::UnityEngine::Vector4 layerColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    // public UnityEngine.Vector4 sampleParameters
    // Size: 0x10
    // Offset: 0x1C
    ::UnityEngine::Vector4 sampleParameters;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    // Padding between fields: sampleParameters and: sampleTexture
    char __padding4[0x4] = {};
    // public System.UInt64 sampleTexture
    // Size: 0x8
    // Offset: 0x30
    uint64_t sampleTexture;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public UnityEngine.Vector4 sampleScaleOffset
    // Size: 0x10
    // Offset: 0x38
    ::UnityEngine::Vector4 sampleScaleOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    // public UnityEngine.Vector4 maskParameters
    // Size: 0x10
    // Offset: 0x48
    ::UnityEngine::Vector4 maskParameters;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    // public UnityEngine.Vector4 maskAxis
    // Size: 0x10
    // Offset: 0x58
    ::UnityEngine::Vector4 maskAxis;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    public:
    // Creating value type constructor for type: ovrAvatarMaterialLayerState
    constexpr ovrAvatarMaterialLayerState(::GlobalNamespace::ovrAvatarMaterialLayerBlendMode blendMode_ = {}, ::GlobalNamespace::ovrAvatarMaterialLayerSampleMode sampleMode_ = {}, ::GlobalNamespace::ovrAvatarMaterialMaskType maskType_ = {}, ::UnityEngine::Vector4 layerColor_ = {}, ::UnityEngine::Vector4 sampleParameters_ = {}, uint64_t sampleTexture_ = {}, ::UnityEngine::Vector4 sampleScaleOffset_ = {}, ::UnityEngine::Vector4 maskParameters_ = {}, ::UnityEngine::Vector4 maskAxis_ = {}) noexcept : blendMode{blendMode_}, sampleMode{sampleMode_}, maskType{maskType_}, layerColor{layerColor_}, sampleParameters{sampleParameters_}, sampleTexture{sampleTexture_}, sampleScaleOffset{sampleScaleOffset_}, maskParameters{maskParameters_}, maskAxis{maskAxis_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public ovrAvatarMaterialLayerBlendMode blendMode
    ::GlobalNamespace::ovrAvatarMaterialLayerBlendMode& dyn_blendMode();
    // Get instance field reference: public ovrAvatarMaterialLayerSampleMode sampleMode
    ::GlobalNamespace::ovrAvatarMaterialLayerSampleMode& dyn_sampleMode();
    // Get instance field reference: public ovrAvatarMaterialMaskType maskType
    ::GlobalNamespace::ovrAvatarMaterialMaskType& dyn_maskType();
    // Get instance field reference: public UnityEngine.Vector4 layerColor
    ::UnityEngine::Vector4& dyn_layerColor();
    // Get instance field reference: public UnityEngine.Vector4 sampleParameters
    ::UnityEngine::Vector4& dyn_sampleParameters();
    // Get instance field reference: public System.UInt64 sampleTexture
    uint64_t& dyn_sampleTexture();
    // Get instance field reference: public UnityEngine.Vector4 sampleScaleOffset
    ::UnityEngine::Vector4& dyn_sampleScaleOffset();
    // Get instance field reference: public UnityEngine.Vector4 maskParameters
    ::UnityEngine::Vector4& dyn_maskParameters();
    // Get instance field reference: public UnityEngine.Vector4 maskAxis
    ::UnityEngine::Vector4& dyn_maskAxis();
    // static private System.Boolean VectorEquals(UnityEngine.Vector4 a, UnityEngine.Vector4 b)
    // Offset: 0x13589C4
    static bool VectorEquals(::UnityEngine::Vector4 a, ::UnityEngine::Vector4 b);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x13589F4
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1358C10
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // ovrAvatarMaterialLayerState
  #pragma pack(pop)
  static check_size<sizeof(ovrAvatarMaterialLayerState), 88 + sizeof(::UnityEngine::Vector4)> __GlobalNamespace_ovrAvatarMaterialLayerStateSizeCheck;
  static_assert(sizeof(ovrAvatarMaterialLayerState) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ovrAvatarMaterialLayerState::VectorEquals
// Il2CppName: VectorEquals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector4, ::UnityEngine::Vector4)>(&GlobalNamespace::ovrAvatarMaterialLayerState::VectorEquals)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ovrAvatarMaterialLayerState), "VectorEquals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ovrAvatarMaterialLayerState::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ovrAvatarMaterialLayerState::*)(::Il2CppObject*)>(&GlobalNamespace::ovrAvatarMaterialLayerState::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ovrAvatarMaterialLayerState), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ovrAvatarMaterialLayerState::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ovrAvatarMaterialLayerState::*)()>(&GlobalNamespace::ovrAvatarMaterialLayerState::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ovrAvatarMaterialLayerState), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
