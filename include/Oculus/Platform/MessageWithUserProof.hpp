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
  // Forward declaring type: UserProof
  class UserProof;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: MessageWithUserProof
  class MessageWithUserProof;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::MessageWithUserProof);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithUserProof*, "Oculus.Platform", "MessageWithUserProof");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithUserProof
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithUserProof : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserProof*> {
    public:
    // protected Oculus.Platform.Models.UserProof GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0xB50A8C
    ::Oculus::Platform::Models::UserProof* GetDataFromMessage(::System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0xB49D54
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithUserProof* New_ctor(::System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::MessageWithUserProof::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithUserProof*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.UserProof GetUserProof()
    // Offset: 0xB50A4C
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.UserProof Message::GetUserProof()
    ::Oculus::Platform::Models::UserProof* GetUserProof();
  }; // Oculus.Platform.MessageWithUserProof
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithUserProof::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::UserProof* (Oculus::Platform::MessageWithUserProof::*)(::System::IntPtr)>(&Oculus::Platform::MessageWithUserProof::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithUserProof*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithUserProof::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithUserProof::GetUserProof
// Il2CppName: GetUserProof
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::UserProof* (Oculus::Platform::MessageWithUserProof::*)()>(&Oculus::Platform::MessageWithUserProof::GetUserProof)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithUserProof*), "GetUserProof", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
