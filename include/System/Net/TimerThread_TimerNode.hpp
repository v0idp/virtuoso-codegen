// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.TimerThread
#include "System/Net/TimerThread.hpp"
// Including type: System.Net.TimerThread/System.Net.Timer
#include "System/Net/TimerThread_Timer.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::TimerThread::TimerNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::TimerThread::TimerNode*, "System.Net", "TimerThread/TimerNode");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.TimerThread/System.Net.TimerNode
  // [TokenAttribute] Offset: FFFFFFFF
  class TimerThread::TimerNode : public ::System::Net::TimerThread::Timer {
    public:
    // Nested type: ::System::Net::TimerThread::TimerNode::TimerState
    struct TimerState;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: System.Net.TimerThread/System.Net.TimerNode/System.Net.TimerState
    // [TokenAttribute] Offset: FFFFFFFF
    struct TimerState/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: TimerState
      constexpr TimerState(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public System.Net.TimerThread/System.Net.TimerNode/System.Net.TimerState Ready
      static constexpr const int Ready = 0;
      // Get static field: static public System.Net.TimerThread/System.Net.TimerNode/System.Net.TimerState Ready
      static ::System::Net::TimerThread::TimerNode::TimerState _get_Ready();
      // Set static field: static public System.Net.TimerThread/System.Net.TimerNode/System.Net.TimerState Ready
      static void _set_Ready(::System::Net::TimerThread::TimerNode::TimerState value);
      // static field const value: static public System.Net.TimerThread/System.Net.TimerNode/System.Net.TimerState Fired
      static constexpr const int Fired = 1;
      // Get static field: static public System.Net.TimerThread/System.Net.TimerNode/System.Net.TimerState Fired
      static ::System::Net::TimerThread::TimerNode::TimerState _get_Fired();
      // Set static field: static public System.Net.TimerThread/System.Net.TimerNode/System.Net.TimerState Fired
      static void _set_Fired(::System::Net::TimerThread::TimerNode::TimerState value);
      // static field const value: static public System.Net.TimerThread/System.Net.TimerNode/System.Net.TimerState Cancelled
      static constexpr const int Cancelled = 2;
      // Get static field: static public System.Net.TimerThread/System.Net.TimerNode/System.Net.TimerState Cancelled
      static ::System::Net::TimerThread::TimerNode::TimerState _get_Cancelled();
      // Set static field: static public System.Net.TimerThread/System.Net.TimerNode/System.Net.TimerState Cancelled
      static void _set_Cancelled(::System::Net::TimerThread::TimerNode::TimerState value);
      // static field const value: static public System.Net.TimerThread/System.Net.TimerNode/System.Net.TimerState Sentinel
      static constexpr const int Sentinel = 3;
      // Get static field: static public System.Net.TimerThread/System.Net.TimerNode/System.Net.TimerState Sentinel
      static ::System::Net::TimerThread::TimerNode::TimerState _get_Sentinel();
      // Set static field: static public System.Net.TimerThread/System.Net.TimerNode/System.Net.TimerState Sentinel
      static void _set_Sentinel(::System::Net::TimerThread::TimerNode::TimerState value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // System.Net.TimerThread/System.Net.TimerNode/System.Net.TimerState
    #pragma pack(pop)
    static check_size<sizeof(TimerThread::TimerNode::TimerState), 0 + sizeof(int)> __System_Net_TimerThread_TimerNode_TimerStateSizeCheck;
    static_assert(sizeof(TimerThread::TimerNode::TimerState) == 0x4);
    public:
    // private System.Net.TimerThread/System.Net.TimerNode/System.Net.TimerState m_TimerState
    // Size: 0x4
    // Offset: 0x18
    ::System::Net::TimerThread::TimerNode::TimerState m_TimerState;
    // Field size check
    static_assert(sizeof(::System::Net::TimerThread::TimerNode::TimerState) == 0x4);
    // Padding between fields: m_TimerState and: m_Callback
    char __padding0[0x4] = {};
    // private System.Net.TimerThread/System.Net.Callback m_Callback
    // Size: 0x8
    // Offset: 0x20
    ::System::Net::TimerThread::Callback* m_Callback;
    // Field size check
    static_assert(sizeof(::System::Net::TimerThread::Callback*) == 0x8);
    // private System.Object m_Context
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppObject* m_Context;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Object m_QueueLock
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppObject* m_QueueLock;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Net.TimerThread/System.Net.TimerNode next
    // Size: 0x8
    // Offset: 0x38
    ::System::Net::TimerThread::TimerNode* next;
    // Field size check
    static_assert(sizeof(::System::Net::TimerThread::TimerNode*) == 0x8);
    // private System.Net.TimerThread/System.Net.TimerNode prev
    // Size: 0x8
    // Offset: 0x40
    ::System::Net::TimerThread::TimerNode* prev;
    // Field size check
    static_assert(sizeof(::System::Net::TimerThread::TimerNode*) == 0x8);
    public:
    // Get instance field reference: private System.Net.TimerThread/System.Net.TimerNode/System.Net.TimerState m_TimerState
    [[deprecated("Use field access instead!")]] ::System::Net::TimerThread::TimerNode::TimerState& dyn_m_TimerState();
    // Get instance field reference: private System.Net.TimerThread/System.Net.Callback m_Callback
    [[deprecated("Use field access instead!")]] ::System::Net::TimerThread::Callback*& dyn_m_Callback();
    // Get instance field reference: private System.Object m_Context
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_m_Context();
    // Get instance field reference: private System.Object m_QueueLock
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_m_QueueLock();
    // Get instance field reference: private System.Net.TimerThread/System.Net.TimerNode next
    [[deprecated("Use field access instead!")]] ::System::Net::TimerThread::TimerNode*& dyn_next();
    // Get instance field reference: private System.Net.TimerThread/System.Net.TimerNode prev
    [[deprecated("Use field access instead!")]] ::System::Net::TimerThread::TimerNode*& dyn_prev();
    // System.Net.TimerThread/System.Net.TimerNode get_Next()
    // Offset: 0xA0243C
    ::System::Net::TimerThread::TimerNode* get_Next();
    // System.Void set_Next(System.Net.TimerThread/System.Net.TimerNode value)
    // Offset: 0xA02444
    void set_Next(::System::Net::TimerThread::TimerNode* value);
    // System.Net.TimerThread/System.Net.TimerNode get_Prev()
    // Offset: 0xA0244C
    ::System::Net::TimerThread::TimerNode* get_Prev();
    // System.Void set_Prev(System.Net.TimerThread/System.Net.TimerNode value)
    // Offset: 0xA02454
    void set_Prev(::System::Net::TimerThread::TimerNode* value);
    // System.Void .ctor()
    // Offset: 0xA02400
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimerThread::TimerNode* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::TimerThread::TimerNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimerThread::TimerNode*, creationType>()));
    }
    // override System.Boolean Cancel()
    // Offset: 0xA0245C
    // Implemented from: System.Net.TimerThread/System.Net.Timer
    // Base method: System.Boolean Timer::Cancel()
    bool Cancel();
  }; // System.Net.TimerThread/System.Net.TimerNode
  #pragma pack(pop)
  static check_size<sizeof(TimerThread::TimerNode), 64 + sizeof(::System::Net::TimerThread::TimerNode*)> __System_Net_TimerThread_TimerNodeSizeCheck;
  static_assert(sizeof(TimerThread::TimerNode) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::TimerThread::TimerNode::TimerState, "System.Net", "TimerThread/TimerNode/TimerState");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::TimerThread::TimerNode::get_Next
// Il2CppName: get_Next
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::TimerThread::TimerNode* (System::Net::TimerThread::TimerNode::*)()>(&System::Net::TimerThread::TimerNode::get_Next)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::TimerThread::TimerNode*), "get_Next", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::TimerThread::TimerNode::set_Next
// Il2CppName: set_Next
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::TimerThread::TimerNode::*)(::System::Net::TimerThread::TimerNode*)>(&System::Net::TimerThread::TimerNode::set_Next)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net", "TimerThread/TimerNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::TimerThread::TimerNode*), "set_Next", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::TimerThread::TimerNode::get_Prev
// Il2CppName: get_Prev
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::TimerThread::TimerNode* (System::Net::TimerThread::TimerNode::*)()>(&System::Net::TimerThread::TimerNode::get_Prev)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::TimerThread::TimerNode*), "get_Prev", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::TimerThread::TimerNode::set_Prev
// Il2CppName: set_Prev
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::TimerThread::TimerNode::*)(::System::Net::TimerThread::TimerNode*)>(&System::Net::TimerThread::TimerNode::set_Prev)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net", "TimerThread/TimerNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::TimerThread::TimerNode*), "set_Prev", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::TimerThread::TimerNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::TimerThread::TimerNode::Cancel
// Il2CppName: Cancel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::TimerThread::TimerNode::*)()>(&System::Net::TimerThread::TimerNode::Cancel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::TimerThread::TimerNode*), "Cancel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
