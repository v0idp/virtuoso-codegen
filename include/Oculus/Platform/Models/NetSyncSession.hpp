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
  // Forward declaring type: NetSyncSession
  class NetSyncSession;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::NetSyncSession);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::NetSyncSession*, "Oculus.Platform.Models", "NetSyncSession");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.NetSyncSession
  // [TokenAttribute] Offset: FFFFFFFF
  class NetSyncSession : public ::Il2CppObject {
    public:
    public:
    // public readonly System.Int64 ConnectionId
    // Size: 0x8
    // Offset: 0x10
    int64_t ConnectionId;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public readonly System.Boolean Muted
    // Size: 0x1
    // Offset: 0x18
    bool Muted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: Muted and: SessionId
    char __padding1[0x7] = {};
    // public readonly System.UInt64 SessionId
    // Size: 0x8
    // Offset: 0x20
    uint64_t SessionId;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly System.UInt64 UserId
    // Size: 0x8
    // Offset: 0x28
    uint64_t UserId;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly System.String VoipGroup
    // Size: 0x8
    // Offset: 0x30
    ::StringW VoipGroup;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public readonly System.Int64 ConnectionId
    [[deprecated("Use field access instead!")]] int64_t& dyn_ConnectionId();
    // Get instance field reference: public readonly System.Boolean Muted
    [[deprecated("Use field access instead!")]] bool& dyn_Muted();
    // Get instance field reference: public readonly System.UInt64 SessionId
    [[deprecated("Use field access instead!")]] uint64_t& dyn_SessionId();
    // Get instance field reference: public readonly System.UInt64 UserId
    [[deprecated("Use field access instead!")]] uint64_t& dyn_UserId();
    // Get instance field reference: public readonly System.String VoipGroup
    [[deprecated("Use field access instead!")]] ::StringW& dyn_VoipGroup();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0xB51FC0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetSyncSession* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::NetSyncSession::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetSyncSession*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.NetSyncSession
  #pragma pack(pop)
  static check_size<sizeof(NetSyncSession), 48 + sizeof(::StringW)> __Oculus_Platform_Models_NetSyncSessionSizeCheck;
  static_assert(sizeof(NetSyncSession) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::NetSyncSession::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
