// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.PeerConnectionState
#include "Oculus/Platform/PeerConnectionState.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: NetworkingPeer
  class NetworkingPeer;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Samples.VrVoiceChat
namespace Oculus::Platform::Samples::VrVoiceChat {
  // Forward declaring type: VoipManager
  class VoipManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Samples::VrVoiceChat::VoipManager);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Samples::VrVoiceChat::VoipManager*, "Oculus.Platform.Samples.VrVoiceChat", "VoipManager");
// Type namespace: Oculus.Platform.Samples.VrVoiceChat
namespace Oculus::Platform::Samples::VrVoiceChat {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Samples.VrVoiceChat.VoipManager
  // [TokenAttribute] Offset: FFFFFFFF
  class VoipManager : public ::Il2CppObject {
    public:
    public:
    // private System.UInt64 m_remoteID
    // Size: 0x8
    // Offset: 0x10
    uint64_t m_remoteID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private Oculus.Platform.PeerConnectionState m_state
    // Size: 0x4
    // Offset: 0x18
    ::Oculus::Platform::PeerConnectionState m_state;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::PeerConnectionState) == 0x4);
    // Padding between fields: m_state and: m_remoteHead
    char __padding1[0x4] = {};
    // private readonly UnityEngine.GameObject m_remoteHead
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* m_remoteHead;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    public:
    // Get instance field reference: private System.UInt64 m_remoteID
    [[deprecated("Use field access instead!")]] uint64_t& dyn_m_remoteID();
    // Get instance field reference: private Oculus.Platform.PeerConnectionState m_state
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::PeerConnectionState& dyn_m_state();
    // Get instance field reference: private readonly UnityEngine.GameObject m_remoteHead
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_m_remoteHead();
    // public System.Boolean get_Connected()
    // Offset: 0x1720520
    bool get_Connected();
    // public System.Void .ctor(UnityEngine.GameObject remoteHead)
    // Offset: 0x17202C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VoipManager* New_ctor(::UnityEngine::GameObject* remoteHead) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Samples::VrVoiceChat::VoipManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VoipManager*, creationType>(remoteHead)));
    }
    // public System.Void ConnectTo(System.UInt64 userID)
    // Offset: 0x17203A8
    void ConnectTo(uint64_t userID);
    // public System.Void Disconnect()
    // Offset: 0x1720470
    void Disconnect();
    // private System.Void VoipConnectRequestCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.NetworkingPeer> msg)
    // Offset: 0x1720530
    void VoipConnectRequestCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::NetworkingPeer*>* msg);
    // private System.Void VoipStateChangedCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.NetworkingPeer> msg)
    // Offset: 0x17206D4
    void VoipStateChangedCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::NetworkingPeer*>* msg);
  }; // Oculus.Platform.Samples.VrVoiceChat.VoipManager
  #pragma pack(pop)
  static check_size<sizeof(VoipManager), 32 + sizeof(::UnityEngine::GameObject*)> __Oculus_Platform_Samples_VrVoiceChat_VoipManagerSizeCheck;
  static_assert(sizeof(VoipManager) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrVoiceChat::VoipManager::get_Connected
// Il2CppName: get_Connected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Platform::Samples::VrVoiceChat::VoipManager::*)()>(&Oculus::Platform::Samples::VrVoiceChat::VoipManager::get_Connected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrVoiceChat::VoipManager*), "get_Connected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrVoiceChat::VoipManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrVoiceChat::VoipManager::ConnectTo
// Il2CppName: ConnectTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrVoiceChat::VoipManager::*)(uint64_t)>(&Oculus::Platform::Samples::VrVoiceChat::VoipManager::ConnectTo)> {
  static const MethodInfo* get() {
    static auto* userID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrVoiceChat::VoipManager*), "ConnectTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrVoiceChat::VoipManager::Disconnect
// Il2CppName: Disconnect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrVoiceChat::VoipManager::*)()>(&Oculus::Platform::Samples::VrVoiceChat::VoipManager::Disconnect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrVoiceChat::VoipManager*), "Disconnect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrVoiceChat::VoipManager::VoipConnectRequestCallback
// Il2CppName: VoipConnectRequestCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrVoiceChat::VoipManager::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::NetworkingPeer*>*)>(&Oculus::Platform::Samples::VrVoiceChat::VoipManager::VoipConnectRequestCallback)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "NetworkingPeer")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrVoiceChat::VoipManager*), "VoipConnectRequestCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrVoiceChat::VoipManager::VoipStateChangedCallback
// Il2CppName: VoipStateChangedCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrVoiceChat::VoipManager::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::NetworkingPeer*>*)>(&Oculus::Platform::Samples::VrVoiceChat::VoipManager::VoipStateChangedCallback)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "NetworkingPeer")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrVoiceChat::VoipManager*), "VoipStateChangedCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
