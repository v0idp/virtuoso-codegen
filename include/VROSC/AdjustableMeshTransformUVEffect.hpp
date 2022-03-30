// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.AdjustableMeshEffect
#include "VROSC/AdjustableMeshEffect.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: AdjustableMeshTransformUVEffect
  class AdjustableMeshTransformUVEffect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::AdjustableMeshTransformUVEffect);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AdjustableMeshTransformUVEffect*, "VROSC", "AdjustableMeshTransformUVEffect");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.AdjustableMeshTransformUVEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class AdjustableMeshTransformUVEffect : public ::VROSC::AdjustableMeshEffect {
    public:
    // Nested type: ::VROSC::AdjustableMeshTransformUVEffect::Channel
    struct Channel;
    // Size: 0x14
    #pragma pack(push, 1)
    // Autogenerated type: VROSC.AdjustableMeshTransformUVEffect/VROSC.Channel
    // [TokenAttribute] Offset: FFFFFFFF
    struct Channel/*, public ::System::Enum*/ {
      public:
      // Writing base type padding for base size: 0x0 to desired offset: 0x10
      char ___base_padding[0x10] = {};
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x10
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
      // static field const value: static public VROSC.AdjustableMeshTransformUVEffect/VROSC.Channel Uv1
      static constexpr const int Uv1 = 0;
      // Get static field: static public VROSC.AdjustableMeshTransformUVEffect/VROSC.Channel Uv1
      static ::VROSC::AdjustableMeshTransformUVEffect::Channel _get_Uv1();
      // Set static field: static public VROSC.AdjustableMeshTransformUVEffect/VROSC.Channel Uv1
      static void _set_Uv1(::VROSC::AdjustableMeshTransformUVEffect::Channel value);
      // static field const value: static public VROSC.AdjustableMeshTransformUVEffect/VROSC.Channel Uv2
      static constexpr const int Uv2 = 1;
      // Get static field: static public VROSC.AdjustableMeshTransformUVEffect/VROSC.Channel Uv2
      static ::VROSC::AdjustableMeshTransformUVEffect::Channel _get_Uv2();
      // Set static field: static public VROSC.AdjustableMeshTransformUVEffect/VROSC.Channel Uv2
      static void _set_Uv2(::VROSC::AdjustableMeshTransformUVEffect::Channel value);
      // static field const value: static public VROSC.AdjustableMeshTransformUVEffect/VROSC.Channel Uv3
      static constexpr const int Uv3 = 2;
      // Get static field: static public VROSC.AdjustableMeshTransformUVEffect/VROSC.Channel Uv3
      static ::VROSC::AdjustableMeshTransformUVEffect::Channel _get_Uv3();
      // Set static field: static public VROSC.AdjustableMeshTransformUVEffect/VROSC.Channel Uv3
      static void _set_Uv3(::VROSC::AdjustableMeshTransformUVEffect::Channel value);
      // static field const value: static public VROSC.AdjustableMeshTransformUVEffect/VROSC.Channel Uv4
      static constexpr const int Uv4 = 3;
      // Get static field: static public VROSC.AdjustableMeshTransformUVEffect/VROSC.Channel Uv4
      static ::VROSC::AdjustableMeshTransformUVEffect::Channel _get_Uv4();
      // Set static field: static public VROSC.AdjustableMeshTransformUVEffect/VROSC.Channel Uv4
      static void _set_Uv4(::VROSC::AdjustableMeshTransformUVEffect::Channel value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // VROSC.AdjustableMeshTransformUVEffect/VROSC.Channel
    #pragma pack(pop)
    static check_size<sizeof(AdjustableMeshTransformUVEffect::Channel), 16 + sizeof(int)> __VROSC_AdjustableMeshTransformUVEffect_ChannelSizeCheck;
    static_assert(sizeof(AdjustableMeshTransformUVEffect::Channel) == 0x14);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private UnityEngine.Vector2 _offset
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Vector2 offset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // private VROSC.AdjustableMeshTransformUVEffect/VROSC.Channel _channel
    // Size: 0x14
    // Offset: 0x28
    ::VROSC::AdjustableMeshTransformUVEffect::Channel channel;
    // Field size check
    static_assert(sizeof(::VROSC::AdjustableMeshTransformUVEffect::Channel) == 0x14);
    // private UnityEngine.Vector2[] _originalUv
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::UnityEngine::Vector2> originalUv;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector2>) == 0x8);
    // private UnityEngine.Vector2[] _uv
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::UnityEngine::Vector2> uv;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector2>) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.Vector2 _offset
    ::UnityEngine::Vector2& dyn__offset();
    // Get instance field reference: private VROSC.AdjustableMeshTransformUVEffect/VROSC.Channel _channel
    ::VROSC::AdjustableMeshTransformUVEffect::Channel& dyn__channel();
    // Get instance field reference: private UnityEngine.Vector2[] _originalUv
    ::ArrayW<::UnityEngine::Vector2>& dyn__originalUv();
    // Get instance field reference: private UnityEngine.Vector2[] _uv
    ::ArrayW<::UnityEngine::Vector2>& dyn__uv();
    // public System.Void SetOffset(UnityEngine.Vector2 offset)
    // Offset: 0x136A148
    void SetOffset(::UnityEngine::Vector2 offset);
    // public System.Void .ctor()
    // Offset: 0x136A150
    // Implemented from: VROSC.AdjustableMeshEffect
    // Base method: System.Void AdjustableMeshEffect::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AdjustableMeshTransformUVEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::AdjustableMeshTransformUVEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AdjustableMeshTransformUVEffect*, creationType>()));
    }
  }; // VROSC.AdjustableMeshTransformUVEffect
  #pragma pack(pop)
  static check_size<sizeof(AdjustableMeshTransformUVEffect), 56 + sizeof(::ArrayW<::UnityEngine::Vector2>)> __VROSC_AdjustableMeshTransformUVEffectSizeCheck;
  static_assert(sizeof(AdjustableMeshTransformUVEffect) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AdjustableMeshTransformUVEffect::Channel, "VROSC", "AdjustableMeshTransformUVEffect/Channel");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::AdjustableMeshTransformUVEffect::SetOffset
// Il2CppName: SetOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AdjustableMeshTransformUVEffect::*)(::UnityEngine::Vector2)>(&VROSC::AdjustableMeshTransformUVEffect::SetOffset)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AdjustableMeshTransformUVEffect*), "SetOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset});
  }
};
// Writing MetadataGetter for method: VROSC::AdjustableMeshTransformUVEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
