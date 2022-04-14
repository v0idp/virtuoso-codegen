// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: GroupPresenceJoinIntent
  class GroupPresenceJoinIntent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::GroupPresenceJoinIntent);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::GroupPresenceJoinIntent*, "Oculus.Platform.Models", "GroupPresenceJoinIntent");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.GroupPresenceJoinIntent
  // [TokenAttribute] Offset: FFFFFFFF
  class GroupPresenceJoinIntent : public ::Il2CppObject {
    public:
    public:
    // public readonly System.String DeeplinkMessage
    // Size: 0x8
    // Offset: 0x10
    ::StringW DeeplinkMessage;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.String DestinationApiName
    // Size: 0x8
    // Offset: 0x18
    ::StringW DestinationApiName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.String LobbySessionId
    // Size: 0x8
    // Offset: 0x20
    ::StringW LobbySessionId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.String MatchSessionId
    // Size: 0x8
    // Offset: 0x28
    ::StringW MatchSessionId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public readonly System.String DeeplinkMessage
    [[deprecated]] ::StringW& dyn_DeeplinkMessage();
    // Get instance field reference: public readonly System.String DestinationApiName
    [[deprecated]] ::StringW& dyn_DestinationApiName();
    // Get instance field reference: public readonly System.String LobbySessionId
    [[deprecated]] ::StringW& dyn_LobbySessionId();
    // Get instance field reference: public readonly System.String MatchSessionId
    [[deprecated]] ::StringW& dyn_MatchSessionId();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x9329A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GroupPresenceJoinIntent* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::GroupPresenceJoinIntent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GroupPresenceJoinIntent*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.GroupPresenceJoinIntent
  #pragma pack(pop)
  static check_size<sizeof(GroupPresenceJoinIntent), 40 + sizeof(::StringW)> __Oculus_Platform_Models_GroupPresenceJoinIntentSizeCheck;
  static_assert(sizeof(GroupPresenceJoinIntent) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::GroupPresenceJoinIntent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
