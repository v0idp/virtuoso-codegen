// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: OvrAvatar
#include "GlobalNamespace/OvrAvatar.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: LinkedList`1<T>
  template<typename T>
  class LinkedList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: RemoteLoopbackManager
  class RemoteLoopbackManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::RemoteLoopbackManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RemoteLoopbackManager*, "", "RemoteLoopbackManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: RemoteLoopbackManager
  // [TokenAttribute] Offset: FFFFFFFF
  class RemoteLoopbackManager : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::RemoteLoopbackManager::PacketLatencyPair
    class PacketLatencyPair;
    // Nested type: ::GlobalNamespace::RemoteLoopbackManager::SimulatedLatencySettings
    class SimulatedLatencySettings;
    public:
    // public OvrAvatar LocalAvatar
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::OvrAvatar* LocalAvatar;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OvrAvatar*) == 0x8);
    // public OvrAvatar LoopbackAvatar
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::OvrAvatar* LoopbackAvatar;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OvrAvatar*) == 0x8);
    // public RemoteLoopbackManager/SimulatedLatencySettings LatencySettings
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::RemoteLoopbackManager::SimulatedLatencySettings* LatencySettings;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::RemoteLoopbackManager::SimulatedLatencySettings*) == 0x8);
    // private System.Int32 PacketSequence
    // Size: 0x4
    // Offset: 0x30
    int PacketSequence;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: PacketSequence and: packetQueue
    char __padding3[0x4] = {};
    // private System.Collections.Generic.LinkedList`1<RemoteLoopbackManager/PacketLatencyPair> packetQueue
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::LinkedList_1<::GlobalNamespace::RemoteLoopbackManager::PacketLatencyPair*>* packetQueue;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::LinkedList_1<::GlobalNamespace::RemoteLoopbackManager::PacketLatencyPair*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public OvrAvatar LocalAvatar
    [[deprecated]] ::GlobalNamespace::OvrAvatar*& dyn_LocalAvatar();
    // Get instance field reference: public OvrAvatar LoopbackAvatar
    [[deprecated]] ::GlobalNamespace::OvrAvatar*& dyn_LoopbackAvatar();
    // Get instance field reference: public RemoteLoopbackManager/SimulatedLatencySettings LatencySettings
    [[deprecated]] ::GlobalNamespace::RemoteLoopbackManager::SimulatedLatencySettings*& dyn_LatencySettings();
    // Get instance field reference: private System.Int32 PacketSequence
    [[deprecated]] int& dyn_PacketSequence();
    // Get instance field reference: private System.Collections.Generic.LinkedList`1<RemoteLoopbackManager/PacketLatencyPair> packetQueue
    [[deprecated]] ::System::Collections::Generic::LinkedList_1<::GlobalNamespace::RemoteLoopbackManager::PacketLatencyPair*>*& dyn_packetQueue();
    // private System.Void Start()
    // Offset: 0xB31660
    void Start();
    // private System.Void OnLocalAvatarPacketRecorded(System.Object sender, OvrAvatar/PacketEventArgs args)
    // Offset: 0xB317A4
    void OnLocalAvatarPacketRecorded(::Il2CppObject* sender, ::GlobalNamespace::OvrAvatar::PacketEventArgs* args);
    // private System.Void Update()
    // Offset: 0xB31B7C
    void Update();
    // private System.Void SendPacketData(System.Byte[] data)
    // Offset: 0xB31AD4
    void SendPacketData(::ArrayW<uint8_t> data);
    // private System.Void ReceivePacketData(System.Byte[] data)
    // Offset: 0xB31EAC
    void ReceivePacketData(::ArrayW<uint8_t> data);
    // public System.Void .ctor()
    // Offset: 0xB32194
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RemoteLoopbackManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::RemoteLoopbackManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RemoteLoopbackManager*, creationType>()));
    }
  }; // RemoteLoopbackManager
  #pragma pack(pop)
  static check_size<sizeof(RemoteLoopbackManager), 56 + sizeof(::System::Collections::Generic::LinkedList_1<::GlobalNamespace::RemoteLoopbackManager::PacketLatencyPair*>*)> __GlobalNamespace_RemoteLoopbackManagerSizeCheck;
  static_assert(sizeof(RemoteLoopbackManager) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RemoteLoopbackManager::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RemoteLoopbackManager::*)()>(&GlobalNamespace::RemoteLoopbackManager::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RemoteLoopbackManager*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RemoteLoopbackManager::OnLocalAvatarPacketRecorded
// Il2CppName: OnLocalAvatarPacketRecorded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RemoteLoopbackManager::*)(::Il2CppObject*, ::GlobalNamespace::OvrAvatar::PacketEventArgs*)>(&GlobalNamespace::RemoteLoopbackManager::OnLocalAvatarPacketRecorded)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* args = &::il2cpp_utils::GetClassFromName("", "OvrAvatar/PacketEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RemoteLoopbackManager*), "OnLocalAvatarPacketRecorded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, args});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RemoteLoopbackManager::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RemoteLoopbackManager::*)()>(&GlobalNamespace::RemoteLoopbackManager::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RemoteLoopbackManager*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RemoteLoopbackManager::SendPacketData
// Il2CppName: SendPacketData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RemoteLoopbackManager::*)(::ArrayW<uint8_t>)>(&GlobalNamespace::RemoteLoopbackManager::SendPacketData)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RemoteLoopbackManager*), "SendPacketData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RemoteLoopbackManager::ReceivePacketData
// Il2CppName: ReceivePacketData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RemoteLoopbackManager::*)(::ArrayW<uint8_t>)>(&GlobalNamespace::RemoteLoopbackManager::ReceivePacketData)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RemoteLoopbackManager*), "ReceivePacketData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RemoteLoopbackManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
