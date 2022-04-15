// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.ServicePointScheduler
#include "System/Net/ServicePointScheduler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: LinkedList`1<T>
  template<typename T>
  class LinkedList_1;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebConnection
  class WebConnection;
  // Forward declaring type: WebOperation
  class WebOperation;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ValueTuple`2<T1, T2>
  template<typename T1, typename T2>
  struct ValueTuple_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::ServicePointScheduler::ConnectionGroup);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ServicePointScheduler::ConnectionGroup*, "System.Net", "ServicePointScheduler/ConnectionGroup");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.ServicePointScheduler/System.Net.ConnectionGroup
  // [TokenAttribute] Offset: FFFFFFFF
  class ServicePointScheduler::ConnectionGroup : public ::Il2CppObject {
    public:
    public:
    // private readonly System.Net.ServicePointScheduler <Scheduler>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::System::Net::ServicePointScheduler* Scheduler;
    // Field size check
    static_assert(sizeof(::System::Net::ServicePointScheduler*) == 0x8);
    // private readonly System.String <Name>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.Int32 ID
    // Size: 0x4
    // Offset: 0x20
    int _ID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: _ID and: connections
    char __padding2[0x4] = {};
    // private System.Collections.Generic.LinkedList`1<System.Net.WebConnection> connections
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::LinkedList_1<::System::Net::WebConnection*>* connections;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::LinkedList_1<::System::Net::WebConnection*>*) == 0x8);
    // private System.Collections.Generic.LinkedList`1<System.Net.WebOperation> queue
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::LinkedList_1<::System::Net::WebOperation*>* queue;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::LinkedList_1<::System::Net::WebOperation*>*) == 0x8);
    public:
    // Get static field: static private System.Int32 nextId
    static int _get_nextId();
    // Set static field: static private System.Int32 nextId
    static void _set_nextId(int value);
    // Get instance field reference: private readonly System.Net.ServicePointScheduler <Scheduler>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Net::ServicePointScheduler*& dyn_$Scheduler$k__BackingField();
    // Get instance field reference: private readonly System.String <Name>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Name$k__BackingField();
    // Get instance field reference: public readonly System.Int32 ID
    [[deprecated("Use field access instead!")]] int& dyn_ID();
    // Get instance field reference: private System.Collections.Generic.LinkedList`1<System.Net.WebConnection> connections
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::LinkedList_1<::System::Net::WebConnection*>*& dyn_connections();
    // Get instance field reference: private System.Collections.Generic.LinkedList`1<System.Net.WebOperation> queue
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::LinkedList_1<::System::Net::WebOperation*>*& dyn_queue();
    // public System.Net.ServicePointScheduler get_Scheduler()
    // Offset: 0x9FF1BC
    ::System::Net::ServicePointScheduler* get_Scheduler();
    // public System.Void .ctor(System.Net.ServicePointScheduler scheduler, System.String name)
    // Offset: 0x9FF1C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ServicePointScheduler::ConnectionGroup* New_ctor(::System::Net::ServicePointScheduler* scheduler, ::StringW name) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::ServicePointScheduler::ConnectionGroup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ServicePointScheduler::ConnectionGroup*, creationType>(scheduler, name)));
    }
    // public System.Boolean IsEmpty()
    // Offset: 0x9FEC0C
    bool IsEmpty();
    // public System.Void RemoveConnection(System.Net.WebConnection connection)
    // Offset: 0x9FF2C0
    void RemoveConnection(::System::Net::WebConnection* connection);
    // public System.Void Cleanup()
    // Offset: 0x9FF348
    void Cleanup();
    // public System.Void EnqueueOperation(System.Net.WebOperation operation)
    // Offset: 0x9FF438
    void EnqueueOperation(::System::Net::WebOperation* operation);
    // public System.Net.WebOperation GetNextOperation()
    // Offset: 0x9FF49C
    ::System::Net::WebOperation* GetNextOperation();
    // public System.Net.WebConnection FindIdleConnection(System.Net.WebOperation operation)
    // Offset: 0x9FF594
    ::System::Net::WebConnection* FindIdleConnection(::System::Net::WebOperation* operation);
    // public System.ValueTuple`2<System.Net.WebConnection,System.Boolean> CreateOrReuseConnection(System.Net.WebOperation operation, System.Boolean force)
    // Offset: 0x9FF8E8
    ::System::ValueTuple_2<::System::Net::WebConnection*, bool> CreateOrReuseConnection(::System::Net::WebOperation* operation, bool force);
  }; // System.Net.ServicePointScheduler/System.Net.ConnectionGroup
  #pragma pack(pop)
  static check_size<sizeof(ServicePointScheduler::ConnectionGroup), 48 + sizeof(::System::Collections::Generic::LinkedList_1<::System::Net::WebOperation*>*)> __System_Net_ServicePointScheduler_ConnectionGroupSizeCheck;
  static_assert(sizeof(ServicePointScheduler::ConnectionGroup) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::ServicePointScheduler::ConnectionGroup::get_Scheduler
// Il2CppName: get_Scheduler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ServicePointScheduler* (System::Net::ServicePointScheduler::ConnectionGroup::*)()>(&System::Net::ServicePointScheduler::ConnectionGroup::get_Scheduler)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePointScheduler::ConnectionGroup*), "get_Scheduler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePointScheduler::ConnectionGroup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::ServicePointScheduler::ConnectionGroup::IsEmpty
// Il2CppName: IsEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::ServicePointScheduler::ConnectionGroup::*)()>(&System::Net::ServicePointScheduler::ConnectionGroup::IsEmpty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePointScheduler::ConnectionGroup*), "IsEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePointScheduler::ConnectionGroup::RemoveConnection
// Il2CppName: RemoveConnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ServicePointScheduler::ConnectionGroup::*)(::System::Net::WebConnection*)>(&System::Net::ServicePointScheduler::ConnectionGroup::RemoveConnection)> {
  static const MethodInfo* get() {
    static auto* connection = &::il2cpp_utils::GetClassFromName("System.Net", "WebConnection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePointScheduler::ConnectionGroup*), "RemoveConnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{connection});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePointScheduler::ConnectionGroup::Cleanup
// Il2CppName: Cleanup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ServicePointScheduler::ConnectionGroup::*)()>(&System::Net::ServicePointScheduler::ConnectionGroup::Cleanup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePointScheduler::ConnectionGroup*), "Cleanup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePointScheduler::ConnectionGroup::EnqueueOperation
// Il2CppName: EnqueueOperation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ServicePointScheduler::ConnectionGroup::*)(::System::Net::WebOperation*)>(&System::Net::ServicePointScheduler::ConnectionGroup::EnqueueOperation)> {
  static const MethodInfo* get() {
    static auto* operation = &::il2cpp_utils::GetClassFromName("System.Net", "WebOperation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePointScheduler::ConnectionGroup*), "EnqueueOperation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{operation});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePointScheduler::ConnectionGroup::GetNextOperation
// Il2CppName: GetNextOperation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebOperation* (System::Net::ServicePointScheduler::ConnectionGroup::*)()>(&System::Net::ServicePointScheduler::ConnectionGroup::GetNextOperation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePointScheduler::ConnectionGroup*), "GetNextOperation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePointScheduler::ConnectionGroup::FindIdleConnection
// Il2CppName: FindIdleConnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebConnection* (System::Net::ServicePointScheduler::ConnectionGroup::*)(::System::Net::WebOperation*)>(&System::Net::ServicePointScheduler::ConnectionGroup::FindIdleConnection)> {
  static const MethodInfo* get() {
    static auto* operation = &::il2cpp_utils::GetClassFromName("System.Net", "WebOperation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePointScheduler::ConnectionGroup*), "FindIdleConnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{operation});
  }
};
// Writing MetadataGetter for method: System::Net::ServicePointScheduler::ConnectionGroup::CreateOrReuseConnection
// Il2CppName: CreateOrReuseConnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<::System::Net::WebConnection*, bool> (System::Net::ServicePointScheduler::ConnectionGroup::*)(::System::Net::WebOperation*, bool)>(&System::Net::ServicePointScheduler::ConnectionGroup::CreateOrReuseConnection)> {
  static const MethodInfo* get() {
    static auto* operation = &::il2cpp_utils::GetClassFromName("System.Net", "WebOperation")->byval_arg;
    static auto* force = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ServicePointScheduler::ConnectionGroup*), "CreateOrReuseConnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{operation, force});
  }
};
