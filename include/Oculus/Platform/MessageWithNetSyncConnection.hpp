// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: NetSyncConnection
  class NetSyncConnection;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: MessageWithNetSyncConnection
  class MessageWithNetSyncConnection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::MessageWithNetSyncConnection);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithNetSyncConnection*, "Oculus.Platform", "MessageWithNetSyncConnection");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithNetSyncConnection
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithNetSyncConnection : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::NetSyncConnection*> {
    public:
    // protected Oculus.Platform.Models.NetSyncConnection GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0xB4DCD4
    ::Oculus::Platform::Models::NetSyncConnection* GetDataFromMessage(::System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0xB49458
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithNetSyncConnection* New_ctor(::System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::MessageWithNetSyncConnection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithNetSyncConnection*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.NetSyncConnection GetNetSyncConnection()
    // Offset: 0xB4DC94
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.NetSyncConnection Message::GetNetSyncConnection()
    ::Oculus::Platform::Models::NetSyncConnection* GetNetSyncConnection();
  }; // Oculus.Platform.MessageWithNetSyncConnection
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithNetSyncConnection::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::NetSyncConnection* (Oculus::Platform::MessageWithNetSyncConnection::*)(::System::IntPtr)>(&Oculus::Platform::MessageWithNetSyncConnection::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithNetSyncConnection*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithNetSyncConnection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithNetSyncConnection::GetNetSyncConnection
// Il2CppName: GetNetSyncConnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::NetSyncConnection* (Oculus::Platform::MessageWithNetSyncConnection::*)()>(&Oculus::Platform::MessageWithNetSyncConnection::GetNetSyncConnection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithNetSyncConnection*), "GetNetSyncConnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
