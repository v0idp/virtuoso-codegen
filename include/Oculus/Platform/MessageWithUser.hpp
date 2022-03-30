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
  // Forward declaring type: User
  class User;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: MessageWithUser
  class MessageWithUser;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::MessageWithUser);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithUser*, "Oculus.Platform", "MessageWithUser");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithUser
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithUser : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*> {
    public:
    // protected Oculus.Platform.Models.User GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x97E350
    ::Oculus::Platform::Models::User* GetDataFromMessage(::System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x977848
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithUser* New_ctor(::System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::MessageWithUser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithUser*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.User GetUser()
    // Offset: 0x97E310
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.User Message::GetUser()
    ::Oculus::Platform::Models::User* GetUser();
  }; // Oculus.Platform.MessageWithUser
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithUser::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::User* (Oculus::Platform::MessageWithUser::*)(::System::IntPtr)>(&Oculus::Platform::MessageWithUser::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithUser*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithUser::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithUser::GetUser
// Il2CppName: GetUser
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::User* (Oculus::Platform::MessageWithUser::*)()>(&Oculus::Platform::MessageWithUser::GetUser)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithUser*), "GetUser", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
