// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.PeerConnectionState
#include "Oculus/Platform/PeerConnectionState.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OvrAvatar
  class OvrAvatar;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: VoipAudioSourceHiLevel
  class VoipAudioSourceHiLevel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: RemotePlayer
  class RemotePlayer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::RemotePlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RemotePlayer*, "", "RemotePlayer");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: RemotePlayer
  // [TokenAttribute] Offset: FFFFFFFF
  class RemotePlayer : public ::Il2CppObject {
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
    // public System.UInt64 remoteUserID
    // Size: 0x8
    // Offset: 0x10
    uint64_t remoteUserID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.Boolean stillInRoom
    // Size: 0x1
    // Offset: 0x18
    bool stillInRoom;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: stillInRoom and: p2pConnectionState
    char __padding1[0x3] = {};
    // public Oculus.Platform.PeerConnectionState p2pConnectionState
    // Size: 0x14
    // Offset: 0x1C
    ::Oculus::Platform::PeerConnectionState p2pConnectionState;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::PeerConnectionState) == 0x14);
    // public Oculus.Platform.PeerConnectionState voipConnectionState
    // Size: 0x14
    // Offset: 0x20
    ::Oculus::Platform::PeerConnectionState voipConnectionState;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::PeerConnectionState) == 0x14);
    // public OvrAvatar RemoteAvatar
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::OvrAvatar* RemoteAvatar;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OvrAvatar*) == 0x8);
    // public UnityEngine.Vector3 receivedRootPosition
    // Size: 0xC
    // Offset: 0x30
    ::UnityEngine::Vector3 receivedRootPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 receivedRootPositionPrior
    // Size: 0xC
    // Offset: 0x3C
    ::UnityEngine::Vector3 receivedRootPositionPrior;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion receivedRootRotation
    // Size: 0x10
    // Offset: 0x48
    ::UnityEngine::Quaternion receivedRootRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // public UnityEngine.Quaternion receivedRootRotationPrior
    // Size: 0x10
    // Offset: 0x58
    ::UnityEngine::Quaternion receivedRootRotationPrior;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // public Oculus.Platform.VoipAudioSourceHiLevel voipSource
    // Size: 0x8
    // Offset: 0x68
    ::Oculus::Platform::VoipAudioSourceHiLevel* voipSource;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::VoipAudioSourceHiLevel*) == 0x8);
    public:
    // Get instance field reference: public System.UInt64 remoteUserID
    uint64_t& dyn_remoteUserID();
    // Get instance field reference: public System.Boolean stillInRoom
    bool& dyn_stillInRoom();
    // Get instance field reference: public Oculus.Platform.PeerConnectionState p2pConnectionState
    ::Oculus::Platform::PeerConnectionState& dyn_p2pConnectionState();
    // Get instance field reference: public Oculus.Platform.PeerConnectionState voipConnectionState
    ::Oculus::Platform::PeerConnectionState& dyn_voipConnectionState();
    // Get instance field reference: public OvrAvatar RemoteAvatar
    ::GlobalNamespace::OvrAvatar*& dyn_RemoteAvatar();
    // Get instance field reference: public UnityEngine.Vector3 receivedRootPosition
    ::UnityEngine::Vector3& dyn_receivedRootPosition();
    // Get instance field reference: public UnityEngine.Vector3 receivedRootPositionPrior
    ::UnityEngine::Vector3& dyn_receivedRootPositionPrior();
    // Get instance field reference: public UnityEngine.Quaternion receivedRootRotation
    ::UnityEngine::Quaternion& dyn_receivedRootRotation();
    // Get instance field reference: public UnityEngine.Quaternion receivedRootRotationPrior
    ::UnityEngine::Quaternion& dyn_receivedRootRotationPrior();
    // Get instance field reference: public Oculus.Platform.VoipAudioSourceHiLevel voipSource
    ::Oculus::Platform::VoipAudioSourceHiLevel*& dyn_voipSource();
    // public System.Void .ctor()
    // Offset: 0x999794
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RemotePlayer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::RemotePlayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RemotePlayer*, creationType>()));
    }
  }; // RemotePlayer
  #pragma pack(pop)
  static check_size<sizeof(RemotePlayer), 104 + sizeof(::Oculus::Platform::VoipAudioSourceHiLevel*)> __GlobalNamespace_RemotePlayerSizeCheck;
  static_assert(sizeof(RemotePlayer) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RemotePlayer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!