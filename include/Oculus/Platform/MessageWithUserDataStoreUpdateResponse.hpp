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
  // Forward declaring type: UserDataStoreUpdateResponse
  class UserDataStoreUpdateResponse;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: MessageWithUserDataStoreUpdateResponse
  class MessageWithUserDataStoreUpdateResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::MessageWithUserDataStoreUpdateResponse);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithUserDataStoreUpdateResponse*, "Oculus.Platform", "MessageWithUserDataStoreUpdateResponse");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithUserDataStoreUpdateResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithUserDataStoreUpdateResponse : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserDataStoreUpdateResponse*> {
    public:
    // protected Oculus.Platform.Models.UserDataStoreUpdateResponse GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x97E520
    ::Oculus::Platform::Models::UserDataStoreUpdateResponse* GetDataFromMessage(::System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x97795C
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithUserDataStoreUpdateResponse* New_ctor(::System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::MessageWithUserDataStoreUpdateResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithUserDataStoreUpdateResponse*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.UserDataStoreUpdateResponse GetUserDataStoreUpdateResponse()
    // Offset: 0x97E4E0
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.UserDataStoreUpdateResponse Message::GetUserDataStoreUpdateResponse()
    ::Oculus::Platform::Models::UserDataStoreUpdateResponse* GetUserDataStoreUpdateResponse();
  }; // Oculus.Platform.MessageWithUserDataStoreUpdateResponse
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithUserDataStoreUpdateResponse::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::UserDataStoreUpdateResponse* (Oculus::Platform::MessageWithUserDataStoreUpdateResponse::*)(::System::IntPtr)>(&Oculus::Platform::MessageWithUserDataStoreUpdateResponse::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithUserDataStoreUpdateResponse*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithUserDataStoreUpdateResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithUserDataStoreUpdateResponse::GetUserDataStoreUpdateResponse
// Il2CppName: GetUserDataStoreUpdateResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::UserDataStoreUpdateResponse* (Oculus::Platform::MessageWithUserDataStoreUpdateResponse::*)()>(&Oculus::Platform::MessageWithUserDataStoreUpdateResponse::GetUserDataStoreUpdateResponse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithUserDataStoreUpdateResponse*), "GetUserDataStoreUpdateResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
