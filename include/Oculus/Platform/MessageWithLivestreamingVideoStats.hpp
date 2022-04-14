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
  // Forward declaring type: LivestreamingVideoStats
  class LivestreamingVideoStats;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: MessageWithLivestreamingVideoStats
  class MessageWithLivestreamingVideoStats;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::MessageWithLivestreamingVideoStats);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithLivestreamingVideoStats*, "Oculus.Platform", "MessageWithLivestreamingVideoStats");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithLivestreamingVideoStats
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithLivestreamingVideoStats : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LivestreamingVideoStats*> {
    public:
    // protected Oculus.Platform.Models.LivestreamingVideoStats GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0xB4D4D0
    ::Oculus::Platform::Models::LivestreamingVideoStats* GetDataFromMessage(::System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0xB4D434
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithLivestreamingVideoStats* New_ctor(::System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::MessageWithLivestreamingVideoStats::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithLivestreamingVideoStats*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.LivestreamingVideoStats GetLivestreamingVideoStats()
    // Offset: 0xB4D490
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.LivestreamingVideoStats Message::GetLivestreamingVideoStats()
    ::Oculus::Platform::Models::LivestreamingVideoStats* GetLivestreamingVideoStats();
  }; // Oculus.Platform.MessageWithLivestreamingVideoStats
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithLivestreamingVideoStats::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LivestreamingVideoStats* (Oculus::Platform::MessageWithLivestreamingVideoStats::*)(::System::IntPtr)>(&Oculus::Platform::MessageWithLivestreamingVideoStats::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithLivestreamingVideoStats*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithLivestreamingVideoStats::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithLivestreamingVideoStats::GetLivestreamingVideoStats
// Il2CppName: GetLivestreamingVideoStats
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LivestreamingVideoStats* (Oculus::Platform::MessageWithLivestreamingVideoStats::*)()>(&Oculus::Platform::MessageWithLivestreamingVideoStats::GetLivestreamingVideoStats)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithLivestreamingVideoStats*), "GetLivestreamingVideoStats", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
