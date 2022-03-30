// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Timeline.TrackAsset
#include "UnityEngine/Timeline/TrackAsset.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: InstrumentTrack
  class InstrumentTrack;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::InstrumentTrack);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InstrumentTrack*, "VROSC", "InstrumentTrack");
// Type namespace: VROSC
namespace VROSC {
  // WARNING Size may be invalid!
  // Autogenerated type: VROSC.InstrumentTrack
  // [TokenAttribute] Offset: FFFFFFFF
  // [TrackClipTypeAttribute] Offset: 66A144
  // [TrackClipTypeAttribute] Offset: 66A144
  // [TrackClipTypeAttribute] Offset: 66A144
  // [TrackColorAttribute] Offset: 66A144
  // [TrackClipTypeAttribute] Offset: 66A144
  // [TrackClipTypeAttribute] Offset: 66A144
  class InstrumentTrack : public ::UnityEngine::Timeline::TrackAsset {
    public:
    // public System.Void .ctor()
    // Offset: 0x1385508
    // Implemented from: UnityEngine.Timeline.TrackAsset
    // Base method: System.Void TrackAsset::.ctor()
    // Base method: System.Void PlayableAsset::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InstrumentTrack* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::InstrumentTrack::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InstrumentTrack*, creationType>()));
    }
  }; // VROSC.InstrumentTrack
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::InstrumentTrack::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
