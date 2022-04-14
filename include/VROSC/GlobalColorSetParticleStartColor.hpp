// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ParticleSystem
  class ParticleSystem;
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: GlobalColorSetParticleStartColor
  class GlobalColorSetParticleStartColor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::GlobalColorSetParticleStartColor);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::GlobalColorSetParticleStartColor*, "VROSC", "GlobalColorSetParticleStartColor");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.GlobalColorSetParticleStartColor
  // [TokenAttribute] Offset: FFFFFFFF
  class GlobalColorSetParticleStartColor : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::VROSC::GlobalColorSetParticleStartColor::Channel
    struct Channel;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: VROSC.GlobalColorSetParticleStartColor/VROSC.Channel
    // [TokenAttribute] Offset: FFFFFFFF
    struct Channel/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Channel
      constexpr Channel(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public VROSC.GlobalColorSetParticleStartColor/VROSC.Channel Channel1
      static constexpr const int Channel1 = 0;
      // Get static field: static public VROSC.GlobalColorSetParticleStartColor/VROSC.Channel Channel1
      static ::VROSC::GlobalColorSetParticleStartColor::Channel _get_Channel1();
      // Set static field: static public VROSC.GlobalColorSetParticleStartColor/VROSC.Channel Channel1
      static void _set_Channel1(::VROSC::GlobalColorSetParticleStartColor::Channel value);
      // static field const value: static public VROSC.GlobalColorSetParticleStartColor/VROSC.Channel Channel2
      static constexpr const int Channel2 = 1;
      // Get static field: static public VROSC.GlobalColorSetParticleStartColor/VROSC.Channel Channel2
      static ::VROSC::GlobalColorSetParticleStartColor::Channel _get_Channel2();
      // Set static field: static public VROSC.GlobalColorSetParticleStartColor/VROSC.Channel Channel2
      static void _set_Channel2(::VROSC::GlobalColorSetParticleStartColor::Channel value);
      // static field const value: static public VROSC.GlobalColorSetParticleStartColor/VROSC.Channel Channel3
      static constexpr const int Channel3 = 2;
      // Get static field: static public VROSC.GlobalColorSetParticleStartColor/VROSC.Channel Channel3
      static ::VROSC::GlobalColorSetParticleStartColor::Channel _get_Channel3();
      // Set static field: static public VROSC.GlobalColorSetParticleStartColor/VROSC.Channel Channel3
      static void _set_Channel3(::VROSC::GlobalColorSetParticleStartColor::Channel value);
      // static field const value: static public VROSC.GlobalColorSetParticleStartColor/VROSC.Channel Channel4
      static constexpr const int Channel4 = 3;
      // Get static field: static public VROSC.GlobalColorSetParticleStartColor/VROSC.Channel Channel4
      static ::VROSC::GlobalColorSetParticleStartColor::Channel _get_Channel4();
      // Set static field: static public VROSC.GlobalColorSetParticleStartColor/VROSC.Channel Channel4
      static void _set_Channel4(::VROSC::GlobalColorSetParticleStartColor::Channel value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated]] int& dyn_value__();
    }; // VROSC.GlobalColorSetParticleStartColor/VROSC.Channel
    #pragma pack(pop)
    static check_size<sizeof(GlobalColorSetParticleStartColor::Channel), 0 + sizeof(int)> __VROSC_GlobalColorSetParticleStartColor_ChannelSizeCheck;
    static_assert(sizeof(GlobalColorSetParticleStartColor::Channel) == 0x4);
    public:
    // private VROSC.GlobalColorSetParticleStartColor/VROSC.Channel _channel
    // Size: 0x4
    // Offset: 0x18
    ::VROSC::GlobalColorSetParticleStartColor::Channel channel;
    // Field size check
    static_assert(sizeof(::VROSC::GlobalColorSetParticleStartColor::Channel) == 0x4);
    // Padding between fields: channel and: particleSystem
    char __padding0[0x4] = {};
    // private UnityEngine.ParticleSystem _particleSystem
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::ParticleSystem* particleSystem;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystem*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.GlobalColorSetParticleStartColor/VROSC.Channel _channel
    [[deprecated]] ::VROSC::GlobalColorSetParticleStartColor::Channel& dyn__channel();
    // Get instance field reference: private UnityEngine.ParticleSystem _particleSystem
    [[deprecated]] ::UnityEngine::ParticleSystem*& dyn__particleSystem();
    // private System.Void OnEnable()
    // Offset: 0x19A3E70
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x19A40D4
    void OnDisable();
    // private System.Void ColorChanged(UnityEngine.Color color, System.Single multiplier)
    // Offset: 0x19A4338
    void ColorChanged(::UnityEngine::Color color, float multiplier);
    // public System.Void .ctor()
    // Offset: 0x19A4430
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GlobalColorSetParticleStartColor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::GlobalColorSetParticleStartColor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GlobalColorSetParticleStartColor*, creationType>()));
    }
  }; // VROSC.GlobalColorSetParticleStartColor
  #pragma pack(pop)
  static check_size<sizeof(GlobalColorSetParticleStartColor), 32 + sizeof(::UnityEngine::ParticleSystem*)> __VROSC_GlobalColorSetParticleStartColorSizeCheck;
  static_assert(sizeof(GlobalColorSetParticleStartColor) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::GlobalColorSetParticleStartColor::Channel, "VROSC", "GlobalColorSetParticleStartColor/Channel");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::GlobalColorSetParticleStartColor::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::GlobalColorSetParticleStartColor::*)()>(&VROSC::GlobalColorSetParticleStartColor::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::GlobalColorSetParticleStartColor*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::GlobalColorSetParticleStartColor::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::GlobalColorSetParticleStartColor::*)()>(&VROSC::GlobalColorSetParticleStartColor::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::GlobalColorSetParticleStartColor*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::GlobalColorSetParticleStartColor::ColorChanged
// Il2CppName: ColorChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::GlobalColorSetParticleStartColor::*)(::UnityEngine::Color, float)>(&VROSC::GlobalColorSetParticleStartColor::ColorChanged)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* multiplier = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::GlobalColorSetParticleStartColor*), "ColorChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color, multiplier});
  }
};
// Writing MetadataGetter for method: VROSC::GlobalColorSetParticleStartColor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
