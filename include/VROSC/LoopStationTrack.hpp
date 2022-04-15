// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: LoopPlaybackConfigData
  class LoopPlaybackConfigData;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: LoopStationTrack
  class LoopStationTrack;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::LoopStationTrack);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationTrack*, "VROSC", "LoopStationTrack");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x84
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.LoopStationTrack
  // [TokenAttribute] Offset: FFFFFFFF
  class LoopStationTrack : public ::Il2CppObject {
    public:
    public:
    // public System.String TrackId
    // Size: 0x8
    // Offset: 0x10
    ::StringW TrackId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 TrackNumber
    // Size: 0x4
    // Offset: 0x18
    int TrackNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: TrackNumber and: InstrumentName
    char __padding1[0x4] = {};
    // public System.String InstrumentName
    // Size: 0x8
    // Offset: 0x20
    ::StringW InstrumentName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String PatchName
    // Size: 0x8
    // Offset: 0x28
    ::StringW PatchName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Single Volume
    // Size: 0x4
    // Offset: 0x30
    float Volume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single NormalizeMultiplier
    // Size: 0x4
    // Offset: 0x34
    float NormalizeMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean IsMuted
    // Size: 0x1
    // Offset: 0x38
    bool IsMuted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsMuted and: BelongsToGroup
    char __padding6[0x7] = {};
    // public System.String BelongsToGroup
    // Size: 0x8
    // Offset: 0x40
    ::StringW BelongsToGroup;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 PositionInGroup
    // Size: 0x4
    // Offset: 0x48
    int PositionInGroup;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: PositionInGroup and: DisplayName
    char __padding8[0x4] = {};
    // public System.String DisplayName
    // Size: 0x8
    // Offset: 0x50
    ::StringW DisplayName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 GlobalSyncStartOffset
    // Size: 0x4
    // Offset: 0x58
    int GlobalSyncStartOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 LoopLength
    // Size: 0x4
    // Offset: 0x5C
    int LoopLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public VROSC.LoopPlaybackConfigData PlaybackConfigData
    // Size: 0x8
    // Offset: 0x60
    ::VROSC::LoopPlaybackConfigData* PlaybackConfigData;
    // Field size check
    static_assert(sizeof(::VROSC::LoopPlaybackConfigData*) == 0x8);
    // public VROSC.LoopPlaybackConfigData StartConfigData
    // Size: 0x8
    // Offset: 0x68
    ::VROSC::LoopPlaybackConfigData* StartConfigData;
    // Field size check
    static_assert(sizeof(::VROSC::LoopPlaybackConfigData*) == 0x8);
    // public System.Boolean IsPlaying
    // Size: 0x1
    // Offset: 0x70
    bool IsPlaying;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsPlaying and: Color
    char __padding14[0x3] = {};
    // public UnityEngine.Color Color
    // Size: 0x10
    // Offset: 0x74
    ::UnityEngine::Color Color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Get instance field reference: public System.String TrackId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_TrackId();
    // Get instance field reference: public System.Int32 TrackNumber
    [[deprecated("Use field access instead!")]] int& dyn_TrackNumber();
    // Get instance field reference: public System.String InstrumentName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_InstrumentName();
    // Get instance field reference: public System.String PatchName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_PatchName();
    // Get instance field reference: public System.Single Volume
    [[deprecated("Use field access instead!")]] float& dyn_Volume();
    // Get instance field reference: public System.Single NormalizeMultiplier
    [[deprecated("Use field access instead!")]] float& dyn_NormalizeMultiplier();
    // Get instance field reference: public System.Boolean IsMuted
    [[deprecated("Use field access instead!")]] bool& dyn_IsMuted();
    // Get instance field reference: public System.String BelongsToGroup
    [[deprecated("Use field access instead!")]] ::StringW& dyn_BelongsToGroup();
    // Get instance field reference: public System.Int32 PositionInGroup
    [[deprecated("Use field access instead!")]] int& dyn_PositionInGroup();
    // Get instance field reference: public System.String DisplayName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_DisplayName();
    // Get instance field reference: public System.Int32 GlobalSyncStartOffset
    [[deprecated("Use field access instead!")]] int& dyn_GlobalSyncStartOffset();
    // Get instance field reference: public System.Int32 LoopLength
    [[deprecated("Use field access instead!")]] int& dyn_LoopLength();
    // Get instance field reference: public VROSC.LoopPlaybackConfigData PlaybackConfigData
    [[deprecated("Use field access instead!")]] ::VROSC::LoopPlaybackConfigData*& dyn_PlaybackConfigData();
    // Get instance field reference: public VROSC.LoopPlaybackConfigData StartConfigData
    [[deprecated("Use field access instead!")]] ::VROSC::LoopPlaybackConfigData*& dyn_StartConfigData();
    // Get instance field reference: public System.Boolean IsPlaying
    [[deprecated("Use field access instead!")]] bool& dyn_IsPlaying();
    // Get instance field reference: public UnityEngine.Color Color
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_Color();
    // public System.Void .ctor()
    // Offset: 0x196C310
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoopStationTrack* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::LoopStationTrack::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoopStationTrack*, creationType>()));
    }
  }; // VROSC.LoopStationTrack
  #pragma pack(pop)
  static check_size<sizeof(LoopStationTrack), 116 + sizeof(::UnityEngine::Color)> __VROSC_LoopStationTrackSizeCheck;
  static_assert(sizeof(LoopStationTrack) == 0x84);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::LoopStationTrack::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
