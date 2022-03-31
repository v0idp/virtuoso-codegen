// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MarshalByRefObject
#include "System/MarshalByRefObject.hpp"
// Including type: System.Runtime.Remoting.Lifetime.ILease
#include "System/Runtime/Remoting/Lifetime/ILease.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Including type: System.Runtime.Remoting.Lifetime.LeaseState
#include "System/Runtime/Remoting/Lifetime/LeaseState.hpp"
// Including type: System.TimeSpan
#include "System/TimeSpan.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Lifetime
namespace System::Runtime::Remoting::Lifetime {
  // Forward declaring type: ISponsor
  class ISponsor;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
  // Forward declaring type: Queue
  class Queue;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Lifetime
namespace System::Runtime::Remoting::Lifetime {
  // Forward declaring type: Lease
  class Lease;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Lifetime::Lease);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Lifetime::Lease*, "System.Runtime.Remoting.Lifetime", "Lease");
// Type namespace: System.Runtime.Remoting.Lifetime
namespace System::Runtime::Remoting::Lifetime {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Lifetime.Lease
  // [TokenAttribute] Offset: FFFFFFFF
  class Lease : public ::System::MarshalByRefObject/*, public ::System::Runtime::Remoting::Lifetime::ILease*/ {
    public:
    // Nested type: ::System::Runtime::Remoting::Lifetime::Lease::RenewalDelegate
    class RenewalDelegate;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.DateTime _leaseExpireTime
    // Size: 0x8
    // Offset: 0x18
    ::System::DateTime leaseExpireTime;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // private System.Runtime.Remoting.Lifetime.LeaseState _currentState
    // Size: 0x4
    // Offset: 0x20
    ::System::Runtime::Remoting::Lifetime::LeaseState currentState;
    // Field size check
    static_assert(sizeof(::System::Runtime::Remoting::Lifetime::LeaseState) == 0x4);
    // Padding between fields: currentState and: initialLeaseTime
    char __padding1[0x4] = {};
    // private System.TimeSpan _initialLeaseTime
    // Size: 0x8
    // Offset: 0x28
    ::System::TimeSpan initialLeaseTime;
    // Field size check
    static_assert(sizeof(::System::TimeSpan) == 0x8);
    // private System.TimeSpan _renewOnCallTime
    // Size: 0x8
    // Offset: 0x30
    ::System::TimeSpan renewOnCallTime;
    // Field size check
    static_assert(sizeof(::System::TimeSpan) == 0x8);
    // private System.TimeSpan _sponsorshipTimeout
    // Size: 0x8
    // Offset: 0x38
    ::System::TimeSpan sponsorshipTimeout;
    // Field size check
    static_assert(sizeof(::System::TimeSpan) == 0x8);
    // private System.Collections.ArrayList _sponsors
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::ArrayList* sponsors;
    // Field size check
    static_assert(sizeof(::System::Collections::ArrayList*) == 0x8);
    // private System.Collections.Queue _renewingSponsors
    // Size: 0x8
    // Offset: 0x48
    ::System::Collections::Queue* renewingSponsors;
    // Field size check
    static_assert(sizeof(::System::Collections::Queue*) == 0x8);
    // private System.Runtime.Remoting.Lifetime.Lease/System.Runtime.Remoting.Lifetime.RenewalDelegate _renewalDelegate
    // Size: 0x8
    // Offset: 0x50
    ::System::Runtime::Remoting::Lifetime::Lease::RenewalDelegate* renewalDelegate;
    // Field size check
    static_assert(sizeof(::System::Runtime::Remoting::Lifetime::Lease::RenewalDelegate*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Runtime::Remoting::Lifetime::ILease
    operator ::System::Runtime::Remoting::Lifetime::ILease() noexcept {
      return *reinterpret_cast<::System::Runtime::Remoting::Lifetime::ILease*>(this);
    }
    // Deleting conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept = delete;
    // Get instance field reference: private System.DateTime _leaseExpireTime
    ::System::DateTime& dyn__leaseExpireTime();
    // Get instance field reference: private System.Runtime.Remoting.Lifetime.LeaseState _currentState
    ::System::Runtime::Remoting::Lifetime::LeaseState& dyn__currentState();
    // Get instance field reference: private System.TimeSpan _initialLeaseTime
    ::System::TimeSpan& dyn__initialLeaseTime();
    // Get instance field reference: private System.TimeSpan _renewOnCallTime
    ::System::TimeSpan& dyn__renewOnCallTime();
    // Get instance field reference: private System.TimeSpan _sponsorshipTimeout
    ::System::TimeSpan& dyn__sponsorshipTimeout();
    // Get instance field reference: private System.Collections.ArrayList _sponsors
    ::System::Collections::ArrayList*& dyn__sponsors();
    // Get instance field reference: private System.Collections.Queue _renewingSponsors
    ::System::Collections::Queue*& dyn__renewingSponsors();
    // Get instance field reference: private System.Runtime.Remoting.Lifetime.Lease/System.Runtime.Remoting.Lifetime.RenewalDelegate _renewalDelegate
    ::System::Runtime::Remoting::Lifetime::Lease::RenewalDelegate*& dyn__renewalDelegate();
    // public System.TimeSpan get_CurrentLeaseTime()
    // Offset: 0xC5A9AC
    ::System::TimeSpan get_CurrentLeaseTime();
    // public System.Runtime.Remoting.Lifetime.LeaseState get_CurrentState()
    // Offset: 0xC5AA20
    ::System::Runtime::Remoting::Lifetime::LeaseState get_CurrentState();
    // public System.TimeSpan get_RenewOnCallTime()
    // Offset: 0xC5AA34
    ::System::TimeSpan get_RenewOnCallTime();
    // public System.Void Activate()
    // Offset: 0xC5AA28
    void Activate();
    // public System.TimeSpan Renew(System.TimeSpan renewalTime)
    // Offset: 0xC5AA3C
    ::System::TimeSpan Renew(::System::TimeSpan renewalTime);
    // public System.Void Unregister(System.Runtime.Remoting.Lifetime.ISponsor obj)
    // Offset: 0xC5AAD4
    void Unregister(::System::Runtime::Remoting::Lifetime::ISponsor* obj);
    // System.Void UpdateState()
    // Offset: 0xC5AC1C
    void UpdateState();
    // private System.Void CheckNextSponsor()
    // Offset: 0xC5ADAC
    void CheckNextSponsor();
    // private System.Void ProcessSponsorResponse(System.Object state, System.Boolean timedOut)
    // Offset: 0xC5B010
    void ProcessSponsorResponse(::Il2CppObject* state, bool timedOut);
    // public System.Void .ctor()
    // Offset: 0xC5A820
    // Implemented from: System.MarshalByRefObject
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Lease* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Lifetime::Lease::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Lease*, creationType>()));
    }
  }; // System.Runtime.Remoting.Lifetime.Lease
  #pragma pack(pop)
  static check_size<sizeof(Lease), 80 + sizeof(::System::Runtime::Remoting::Lifetime::Lease::RenewalDelegate*)> __System_Runtime_Remoting_Lifetime_LeaseSizeCheck;
  static_assert(sizeof(Lease) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Lifetime::Lease::get_CurrentLeaseTime
// Il2CppName: get_CurrentLeaseTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (System::Runtime::Remoting::Lifetime::Lease::*)()>(&System::Runtime::Remoting::Lifetime::Lease::get_CurrentLeaseTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Lifetime::Lease*), "get_CurrentLeaseTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Lifetime::Lease::get_CurrentState
// Il2CppName: get_CurrentState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Lifetime::LeaseState (System::Runtime::Remoting::Lifetime::Lease::*)()>(&System::Runtime::Remoting::Lifetime::Lease::get_CurrentState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Lifetime::Lease*), "get_CurrentState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Lifetime::Lease::get_RenewOnCallTime
// Il2CppName: get_RenewOnCallTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (System::Runtime::Remoting::Lifetime::Lease::*)()>(&System::Runtime::Remoting::Lifetime::Lease::get_RenewOnCallTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Lifetime::Lease*), "get_RenewOnCallTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Lifetime::Lease::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Lifetime::Lease::*)()>(&System::Runtime::Remoting::Lifetime::Lease::Activate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Lifetime::Lease*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Lifetime::Lease::Renew
// Il2CppName: Renew
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (System::Runtime::Remoting::Lifetime::Lease::*)(::System::TimeSpan)>(&System::Runtime::Remoting::Lifetime::Lease::Renew)> {
  static const MethodInfo* get() {
    static auto* renewalTime = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Lifetime::Lease*), "Renew", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{renewalTime});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Lifetime::Lease::Unregister
// Il2CppName: Unregister
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Lifetime::Lease::*)(::System::Runtime::Remoting::Lifetime::ISponsor*)>(&System::Runtime::Remoting::Lifetime::Lease::Unregister)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Lifetime", "ISponsor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Lifetime::Lease*), "Unregister", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Lifetime::Lease::UpdateState
// Il2CppName: UpdateState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Lifetime::Lease::*)()>(&System::Runtime::Remoting::Lifetime::Lease::UpdateState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Lifetime::Lease*), "UpdateState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Lifetime::Lease::CheckNextSponsor
// Il2CppName: CheckNextSponsor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Lifetime::Lease::*)()>(&System::Runtime::Remoting::Lifetime::Lease::CheckNextSponsor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Lifetime::Lease*), "CheckNextSponsor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Lifetime::Lease::ProcessSponsorResponse
// Il2CppName: ProcessSponsorResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Lifetime::Lease::*)(::Il2CppObject*, bool)>(&System::Runtime::Remoting::Lifetime::Lease::ProcessSponsorResponse)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* timedOut = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Lifetime::Lease*), "ProcessSponsorResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state, timedOut});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Lifetime::Lease::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
