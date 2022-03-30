// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.Samples.VrHoops.Player
#include "Oculus/Platform/Samples/VrHoops/Player.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: User
  class User;
}
// Forward declaring namespace: Oculus::Platform::Samples::VrHoops
namespace Oculus::Platform::Samples::VrHoops {
  // Forward declaring type: P2PNetworkGoal
  class P2PNetworkGoal;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Samples.VrHoops
namespace Oculus::Platform::Samples::VrHoops {
  // Forward declaring type: RemotePlayer
  class RemotePlayer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Samples::VrHoops::RemotePlayer);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Samples::VrHoops::RemotePlayer*, "Oculus.Platform.Samples.VrHoops", "RemotePlayer");
// Type namespace: Oculus.Platform.Samples.VrHoops
namespace Oculus::Platform::Samples::VrHoops {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Samples.VrHoops.RemotePlayer
  // [TokenAttribute] Offset: FFFFFFFF
  class RemotePlayer : public ::Oculus::Platform::Samples::VrHoops::Player {
    public:
    // Writing base type padding for base size: 0x4C to desired offset: 0x50
    char ___base_padding[0x4] = {};
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private Oculus.Platform.Models.User m_user
    // Size: 0x8
    // Offset: 0x50
    ::Oculus::Platform::Models::User* m_user;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Models::User*) == 0x8);
    // private Oculus.Platform.Samples.VrHoops.P2PNetworkGoal m_goal
    // Size: 0x8
    // Offset: 0x58
    ::Oculus::Platform::Samples::VrHoops::P2PNetworkGoal* m_goal;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Samples::VrHoops::P2PNetworkGoal*) == 0x8);
    public:
    // Get instance field reference: private Oculus.Platform.Models.User m_user
    ::Oculus::Platform::Models::User*& dyn_m_user();
    // Get instance field reference: private Oculus.Platform.Samples.VrHoops.P2PNetworkGoal m_goal
    ::Oculus::Platform::Samples::VrHoops::P2PNetworkGoal*& dyn_m_goal();
    // public System.Void set_User(Oculus.Platform.Models.User value)
    // Offset: 0x1146658
    void set_User(::Oculus::Platform::Models::User* value);
    // public System.UInt64 get_ID()
    // Offset: 0x1146660
    uint64_t get_ID();
    // public Oculus.Platform.Samples.VrHoops.P2PNetworkGoal get_Goal()
    // Offset: 0x114667C
    ::Oculus::Platform::Samples::VrHoops::P2PNetworkGoal* get_Goal();
    // public System.Void set_Goal(Oculus.Platform.Samples.VrHoops.P2PNetworkGoal value)
    // Offset: 0x1146684
    void set_Goal(::Oculus::Platform::Samples::VrHoops::P2PNetworkGoal* value);
    // public System.Void ReceiveRemoteScore(System.UInt32 score)
    // Offset: 0x1146690
    void ReceiveRemoteScore(uint score);
    // public override System.Void set_Score(System.UInt32 value)
    // Offset: 0x114668C
    // Implemented from: Oculus.Platform.Samples.VrHoops.Player
    // Base method: System.Void Player::set_Score(System.UInt32 value)
    void set_Score(uint value);
    // public System.Void .ctor()
    // Offset: 0x1146694
    // Implemented from: Oculus.Platform.Samples.VrHoops.Player
    // Base method: System.Void Player::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RemotePlayer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Samples::VrHoops::RemotePlayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RemotePlayer*, creationType>()));
    }
  }; // Oculus.Platform.Samples.VrHoops.RemotePlayer
  #pragma pack(pop)
  static check_size<sizeof(RemotePlayer), 88 + sizeof(::Oculus::Platform::Samples::VrHoops::P2PNetworkGoal*)> __Oculus_Platform_Samples_VrHoops_RemotePlayerSizeCheck;
  static_assert(sizeof(RemotePlayer) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::RemotePlayer::set_User
// Il2CppName: set_User
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrHoops::RemotePlayer::*)(::Oculus::Platform::Models::User*)>(&Oculus::Platform::Samples::VrHoops::RemotePlayer::set_User)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "User")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::RemotePlayer*), "set_User", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::RemotePlayer::get_ID
// Il2CppName: get_ID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (Oculus::Platform::Samples::VrHoops::RemotePlayer::*)()>(&Oculus::Platform::Samples::VrHoops::RemotePlayer::get_ID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::RemotePlayer*), "get_ID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::RemotePlayer::get_Goal
// Il2CppName: get_Goal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Samples::VrHoops::P2PNetworkGoal* (Oculus::Platform::Samples::VrHoops::RemotePlayer::*)()>(&Oculus::Platform::Samples::VrHoops::RemotePlayer::get_Goal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::RemotePlayer*), "get_Goal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::RemotePlayer::set_Goal
// Il2CppName: set_Goal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrHoops::RemotePlayer::*)(::Oculus::Platform::Samples::VrHoops::P2PNetworkGoal*)>(&Oculus::Platform::Samples::VrHoops::RemotePlayer::set_Goal)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Platform.Samples.VrHoops", "P2PNetworkGoal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::RemotePlayer*), "set_Goal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::RemotePlayer::ReceiveRemoteScore
// Il2CppName: ReceiveRemoteScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrHoops::RemotePlayer::*)(uint)>(&Oculus::Platform::Samples::VrHoops::RemotePlayer::ReceiveRemoteScore)> {
  static const MethodInfo* get() {
    static auto* score = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::RemotePlayer*), "ReceiveRemoteScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{score});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::RemotePlayer::set_Score
// Il2CppName: set_Score
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrHoops::RemotePlayer::*)(uint)>(&Oculus::Platform::Samples::VrHoops::RemotePlayer::set_Score)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::RemotePlayer*), "set_Score", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::RemotePlayer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
