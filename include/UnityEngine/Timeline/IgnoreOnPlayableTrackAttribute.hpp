// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: IgnoreOnPlayableTrackAttribute
  class IgnoreOnPlayableTrackAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute*, "UnityEngine.Timeline", "IgnoreOnPlayableTrackAttribute");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.IgnoreOnPlayableTrackAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 6AE150
  class IgnoreOnPlayableTrackAttribute : public ::System::Attribute {
    public:
    // public System.Void .ctor()
    // Offset: 0xC77940
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IgnoreOnPlayableTrackAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IgnoreOnPlayableTrackAttribute*, creationType>()));
    }
  }; // UnityEngine.Timeline.IgnoreOnPlayableTrackAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
