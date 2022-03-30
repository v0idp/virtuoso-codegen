// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: UnityEngine.Timeline.TimelineAsset/UnityEngine.Timeline.MediaType
#include "UnityEngine/Timeline/TimelineAsset_MediaType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: TrackMediaType
  class TrackMediaType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Timeline::TrackMediaType);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TrackMediaType*, "UnityEngine.Timeline", "TrackMediaType");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.TrackMediaType
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 599FA4
  // [ObsoleteAttribute] Offset: 599FA4
  class TrackMediaType : public ::System::Attribute {
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
    // public readonly UnityEngine.Timeline.TimelineAsset/UnityEngine.Timeline.MediaType m_MediaType
    // Size: 0x14
    // Offset: 0x10
    ::UnityEngine::Timeline::TimelineAsset::MediaType m_MediaType;
    // Field size check
    static_assert(sizeof(::UnityEngine::Timeline::TimelineAsset::MediaType) == 0x14);
    public:
    // Creating conversion operator: operator ::UnityEngine::Timeline::TimelineAsset::MediaType
    constexpr operator ::UnityEngine::Timeline::TimelineAsset::MediaType() const noexcept {
      return m_MediaType;
    }
    // Get instance field reference: public readonly UnityEngine.Timeline.TimelineAsset/UnityEngine.Timeline.MediaType m_MediaType
    ::UnityEngine::Timeline::TimelineAsset::MediaType& dyn_m_MediaType();
    // public System.Void .ctor(UnityEngine.Timeline.TimelineAsset/UnityEngine.Timeline.MediaType mt)
    // Offset: 0x12D0CB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TrackMediaType* New_ctor(::UnityEngine::Timeline::TimelineAsset::MediaType mt) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Timeline::TrackMediaType::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TrackMediaType*, creationType>(mt)));
    }
  }; // UnityEngine.Timeline.TrackMediaType
  #pragma pack(pop)
  static check_size<sizeof(TrackMediaType), 16 + sizeof(::UnityEngine::Timeline::TimelineAsset::MediaType)> __UnityEngine_Timeline_TrackMediaTypeSizeCheck;
  static_assert(sizeof(TrackMediaType) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::TrackMediaType::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
