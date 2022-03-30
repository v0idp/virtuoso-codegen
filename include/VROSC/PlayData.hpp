// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: PlayData
  struct PlayData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PlayData, "VROSC", "PlayData");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: VROSC.PlayData
  // [TokenAttribute] Offset: FFFFFFFF
  struct PlayData/*, public ::System::ValueType*/ {
    public:
    public:
    // private readonly UnityEngine.Vector3 <Power>k__BackingField
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Vector3 Power;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private readonly System.Single <Velocity>k__BackingField
    // Size: 0x4
    // Offset: 0xC
    float Velocity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: PlayData
    constexpr PlayData(::UnityEngine::Vector3 Power_ = {}, float Velocity_ = {}) noexcept : Power{Power_}, Velocity{Velocity_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private readonly UnityEngine.Vector3 <Power>k__BackingField
    ::UnityEngine::Vector3& dyn_$Power$k__BackingField();
    // Get instance field reference: private readonly System.Single <Velocity>k__BackingField
    float& dyn_$Velocity$k__BackingField();
    // public UnityEngine.Vector3 get_Power()
    // Offset: 0x8FC180
    ::UnityEngine::Vector3 get_Power();
    // public System.Single get_Velocity()
    // Offset: 0x8FC18C
    float get_Velocity();
    // static public VROSC.PlayData get_None()
    // Offset: 0x8FC1A0
    static ::VROSC::PlayData get_None();
    // public System.Void .ctor(UnityEngine.Vector3 power, System.Single velocity)
    // Offset: 0x8FC194
    // ABORTED: conflicts with another method.  PlayData(::UnityEngine::Vector3 power, float velocity);
  }; // VROSC.PlayData
  #pragma pack(pop)
  static check_size<sizeof(PlayData), 12 + sizeof(float)> __VROSC_PlayDataSizeCheck;
  static_assert(sizeof(PlayData) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::PlayData::get_Power
// Il2CppName: get_Power
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (VROSC::PlayData::*)()>(&VROSC::PlayData::get_Power)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::PlayData), "get_Power", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::PlayData::get_Velocity
// Il2CppName: get_Velocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::PlayData::*)()>(&VROSC::PlayData::get_Velocity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::PlayData), "get_Velocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::PlayData::get_None
// Il2CppName: get_None
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::PlayData (*)()>(&VROSC::PlayData::get_None)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::PlayData), "get_None", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::PlayData::PlayData
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!