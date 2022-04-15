// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.WebCamKind
#include "UnityEngine/WebCamKind.hpp"
// Including type: UnityEngine.Resolution
#include "UnityEngine/Resolution.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: WebCamDevice
  struct WebCamDevice;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::WebCamDevice, "UnityEngine", "WebCamDevice");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.WebCamDevice
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: 6C1AC0
  struct WebCamDevice/*, public ::System::ValueType*/ {
    public:
    public:
    // [NativeNameAttribute] Offset: 0x6C20D0
    // System.String m_Name
    // Size: 0x8
    // Offset: 0x0
    ::StringW m_Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [NativeNameAttribute] Offset: 0x6C2108
    // System.String m_DepthCameraName
    // Size: 0x8
    // Offset: 0x8
    ::StringW m_DepthCameraName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [NativeNameAttribute] Offset: 0x6C2140
    // System.Int32 m_Flags
    // Size: 0x4
    // Offset: 0x10
    int m_Flags;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [NativeNameAttribute] Offset: 0x6C2178
    // UnityEngine.WebCamKind m_Kind
    // Size: 0x4
    // Offset: 0x14
    ::UnityEngine::WebCamKind m_Kind;
    // Field size check
    static_assert(sizeof(::UnityEngine::WebCamKind) == 0x4);
    // [NativeNameAttribute] Offset: 0x6C21B0
    // UnityEngine.Resolution[] m_Resolutions
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::Resolution> m_Resolutions;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Resolution>) == 0x8);
    public:
    // Creating value type constructor for type: WebCamDevice
    constexpr WebCamDevice(::StringW m_Name_ = {}, ::StringW m_DepthCameraName_ = {}, int m_Flags_ = {}, ::UnityEngine::WebCamKind m_Kind_ = {}, ::ArrayW<::UnityEngine::Resolution> m_Resolutions_ = ::ArrayW<::UnityEngine::Resolution>(static_cast<void*>(nullptr))) noexcept : m_Name{m_Name_}, m_DepthCameraName{m_DepthCameraName_}, m_Flags{m_Flags_}, m_Kind{m_Kind_}, m_Resolutions{m_Resolutions_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: System.String m_Name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_Name();
    // Get instance field reference: System.String m_DepthCameraName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_DepthCameraName();
    // Get instance field reference: System.Int32 m_Flags
    [[deprecated("Use field access instead!")]] int& dyn_m_Flags();
    // Get instance field reference: UnityEngine.WebCamKind m_Kind
    [[deprecated("Use field access instead!")]] ::UnityEngine::WebCamKind& dyn_m_Kind();
    // Get instance field reference: UnityEngine.Resolution[] m_Resolutions
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Resolution>& dyn_m_Resolutions();
    // public System.String get_name()
    // Offset: 0x18DAE5C
    ::StringW get_name();
    // public System.Boolean get_isFrontFacing()
    // Offset: 0x18DAE64
    bool get_isFrontFacing();
  }; // UnityEngine.WebCamDevice
  #pragma pack(pop)
  static check_size<sizeof(WebCamDevice), 24 + sizeof(::ArrayW<::UnityEngine::Resolution>)> __UnityEngine_WebCamDeviceSizeCheck;
  static_assert(sizeof(WebCamDevice) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::WebCamDevice::get_name
// Il2CppName: get_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::WebCamDevice::*)()>(&UnityEngine::WebCamDevice::get_name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::WebCamDevice), "get_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::WebCamDevice::get_isFrontFacing
// Il2CppName: get_isFrontFacing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::WebCamDevice::*)()>(&UnityEngine::WebCamDevice::get_isFrontFacing)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::WebCamDevice), "get_isFrontFacing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
