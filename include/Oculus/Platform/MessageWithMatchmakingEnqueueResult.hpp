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
  // Forward declaring type: MatchmakingEnqueueResult
  class MatchmakingEnqueueResult;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: MessageWithMatchmakingEnqueueResult
  class MessageWithMatchmakingEnqueueResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::MessageWithMatchmakingEnqueueResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithMatchmakingEnqueueResult*, "Oculus.Platform", "MessageWithMatchmakingEnqueueResult");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithMatchmakingEnqueueResult
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithMatchmakingEnqueueResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::MatchmakingEnqueueResult*> {
    public:
    // protected Oculus.Platform.Models.MatchmakingEnqueueResult GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x97B438
    ::Oculus::Platform::Models::MatchmakingEnqueueResult* GetDataFromMessage(::System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x976F4C
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithMatchmakingEnqueueResult* New_ctor(::System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::MessageWithMatchmakingEnqueueResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithMatchmakingEnqueueResult*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.MatchmakingEnqueueResult GetMatchmakingEnqueueResult()
    // Offset: 0x97B3F8
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.MatchmakingEnqueueResult Message::GetMatchmakingEnqueueResult()
    ::Oculus::Platform::Models::MatchmakingEnqueueResult* GetMatchmakingEnqueueResult();
  }; // Oculus.Platform.MessageWithMatchmakingEnqueueResult
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithMatchmakingEnqueueResult::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::MatchmakingEnqueueResult* (Oculus::Platform::MessageWithMatchmakingEnqueueResult::*)(::System::IntPtr)>(&Oculus::Platform::MessageWithMatchmakingEnqueueResult::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithMatchmakingEnqueueResult*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithMatchmakingEnqueueResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithMatchmakingEnqueueResult::GetMatchmakingEnqueueResult
// Il2CppName: GetMatchmakingEnqueueResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::MatchmakingEnqueueResult* (Oculus::Platform::MessageWithMatchmakingEnqueueResult::*)()>(&Oculus::Platform::MessageWithMatchmakingEnqueueResult::GetMatchmakingEnqueueResult)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithMatchmakingEnqueueResult*), "GetMatchmakingEnqueueResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
