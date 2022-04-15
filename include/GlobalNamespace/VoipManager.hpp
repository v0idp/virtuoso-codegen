// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: VoipManager
  class VoipManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::VoipManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VoipManager*, "", "VoipManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: VoipManager
  // [TokenAttribute] Offset: FFFFFFFF
  class VoipManager : public ::Il2CppObject {
    public:
    // public System.Void .ctor()
    // Offset: 0x94F444
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VoipManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::VoipManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VoipManager*, creationType>()));
    }
    // public System.Void ConnectTo(System.UInt64 userID)
    // Offset: 0x94F524
    void ConnectTo(uint64_t userID);
    // public System.Void Disconnect(System.UInt64 userID)
    // Offset: 0x94F608
    void Disconnect(uint64_t userID);
    // private System.Void VoipConnectRequestCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.NetworkingPeer> msg)
    // Offset: 0x94F688
    void VoipConnectRequestCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::NetworkingPeer*>* msg);
    // private System.Void VoipStateChangedCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.NetworkingPeer> msg)
    // Offset: 0x94F7F8
    void VoipStateChangedCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::NetworkingPeer*>* msg);
  }; // VoipManager
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VoipManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::VoipManager::ConnectTo
// Il2CppName: ConnectTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VoipManager::*)(uint64_t)>(&GlobalNamespace::VoipManager::ConnectTo)> {
  static const MethodInfo* get() {
    static auto* userID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VoipManager*), "ConnectTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userID});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VoipManager::Disconnect
// Il2CppName: Disconnect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VoipManager::*)(uint64_t)>(&GlobalNamespace::VoipManager::Disconnect)> {
  static const MethodInfo* get() {
    static auto* userID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VoipManager*), "Disconnect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userID});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VoipManager::VoipConnectRequestCallback
// Il2CppName: VoipConnectRequestCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VoipManager::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::NetworkingPeer*>*)>(&GlobalNamespace::VoipManager::VoipConnectRequestCallback)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "NetworkingPeer")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VoipManager*), "VoipConnectRequestCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VoipManager::VoipStateChangedCallback
// Il2CppName: VoipStateChangedCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VoipManager::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::NetworkingPeer*>*)>(&GlobalNamespace::VoipManager::VoipStateChangedCallback)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "NetworkingPeer")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VoipManager*), "VoipStateChangedCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
