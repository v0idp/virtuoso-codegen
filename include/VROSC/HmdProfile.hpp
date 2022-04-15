// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: VROSC.HmdModel
#include "VROSC/HmdModel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: HmdProfile
  class HmdProfile;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::HmdProfile);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::HmdProfile*, "VROSC", "HmdProfile");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.HmdProfile
  // [TokenAttribute] Offset: FFFFFFFF
  // [CreateAssetMenuAttribute] Offset: 77F308
  class HmdProfile : public ::UnityEngine::ScriptableObject {
    public:
    public:
    // private VROSC.HmdModel _hmdModel
    // Size: 0x4
    // Offset: 0x18
    ::VROSC::HmdModel hmdModel;
    // Field size check
    static_assert(sizeof(::VROSC::HmdModel) == 0x4);
    // Padding between fields: hmdModel and: microphoneName
    char __padding0[0x4] = {};
    // private System.String _microphoneName
    // Size: 0x8
    // Offset: 0x20
    ::StringW microphoneName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 _sameNameIndex
    // Size: 0x4
    // Offset: 0x28
    int sameNameIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _microphoneLatency
    // Size: 0x4
    // Offset: 0x2C
    float microphoneLatency;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _microphonePeakValue
    // Size: 0x4
    // Offset: 0x30
    float microphonePeakValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: microphonePeakValue and: steamModelName
    char __padding4[0x4] = {};
    // private System.String _steamModelName
    // Size: 0x8
    // Offset: 0x38
    ::StringW steamModelName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.HmdModel _hmdModel
    [[deprecated("Use field access instead!")]] ::VROSC::HmdModel& dyn__hmdModel();
    // Get instance field reference: private System.String _microphoneName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__microphoneName();
    // Get instance field reference: private System.Int32 _sameNameIndex
    [[deprecated("Use field access instead!")]] int& dyn__sameNameIndex();
    // Get instance field reference: private System.Single _microphoneLatency
    [[deprecated("Use field access instead!")]] float& dyn__microphoneLatency();
    // Get instance field reference: private System.Single _microphonePeakValue
    [[deprecated("Use field access instead!")]] float& dyn__microphonePeakValue();
    // Get instance field reference: private System.String _steamModelName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__steamModelName();
    // public VROSC.HmdModel get_HmdModel()
    // Offset: 0x1941D1C
    ::VROSC::HmdModel get_HmdModel();
    // public System.String get_MicrophoneName()
    // Offset: 0x1941D24
    ::StringW get_MicrophoneName();
    // public System.Int32 get_SameNameIndex()
    // Offset: 0x1941D2C
    int get_SameNameIndex();
    // public System.Single get_MicrophoneLatency()
    // Offset: 0x1941D34
    float get_MicrophoneLatency();
    // public System.Single get_MicrophonePeakValue()
    // Offset: 0x1941D3C
    float get_MicrophonePeakValue();
    // public System.String get_SteamModelName()
    // Offset: 0x1941D44
    ::StringW get_SteamModelName();
    // public System.Void .ctor()
    // Offset: 0x1941D4C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HmdProfile* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::HmdProfile::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HmdProfile*, creationType>()));
    }
  }; // VROSC.HmdProfile
  #pragma pack(pop)
  static check_size<sizeof(HmdProfile), 56 + sizeof(::StringW)> __VROSC_HmdProfileSizeCheck;
  static_assert(sizeof(HmdProfile) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::HmdProfile::get_HmdModel
// Il2CppName: get_HmdModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::HmdModel (VROSC::HmdProfile::*)()>(&VROSC::HmdProfile::get_HmdModel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::HmdProfile*), "get_HmdModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::HmdProfile::get_MicrophoneName
// Il2CppName: get_MicrophoneName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VROSC::HmdProfile::*)()>(&VROSC::HmdProfile::get_MicrophoneName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::HmdProfile*), "get_MicrophoneName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::HmdProfile::get_SameNameIndex
// Il2CppName: get_SameNameIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::HmdProfile::*)()>(&VROSC::HmdProfile::get_SameNameIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::HmdProfile*), "get_SameNameIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::HmdProfile::get_MicrophoneLatency
// Il2CppName: get_MicrophoneLatency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::HmdProfile::*)()>(&VROSC::HmdProfile::get_MicrophoneLatency)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::HmdProfile*), "get_MicrophoneLatency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::HmdProfile::get_MicrophonePeakValue
// Il2CppName: get_MicrophonePeakValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::HmdProfile::*)()>(&VROSC::HmdProfile::get_MicrophonePeakValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::HmdProfile*), "get_MicrophonePeakValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::HmdProfile::get_SteamModelName
// Il2CppName: get_SteamModelName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VROSC::HmdProfile::*)()>(&VROSC::HmdProfile::get_SteamModelName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::HmdProfile*), "get_SteamModelName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::HmdProfile::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
