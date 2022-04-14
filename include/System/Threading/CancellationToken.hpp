// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
  // Forward declaring type: CancellationTokenRegistration
  struct CancellationTokenRegistration;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::CancellationToken, "System.Threading", "CancellationToken");
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Threading.CancellationToken
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerDisplayAttribute] Offset: 683998
  // [ComVisibleAttribute] Offset: 683998
  struct CancellationToken/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Threading.CancellationTokenSource m_source
    // Size: 0x8
    // Offset: 0x0
    ::System::Threading::CancellationTokenSource* m_source;
    // Field size check
    static_assert(sizeof(::System::Threading::CancellationTokenSource*) == 0x8);
    public:
    // Creating value type constructor for type: CancellationToken
    constexpr CancellationToken(::System::Threading::CancellationTokenSource* m_source_ = {}) noexcept : m_source{m_source_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::System::Threading::CancellationTokenSource*
    constexpr operator ::System::Threading::CancellationTokenSource*() const noexcept {
      return m_source;
    }
    // Get static field: static private readonly System.Action`1<System.Object> s_ActionToActionObjShunt
    static ::System::Action_1<::Il2CppObject*>* _get_s_ActionToActionObjShunt();
    // Set static field: static private readonly System.Action`1<System.Object> s_ActionToActionObjShunt
    static void _set_s_ActionToActionObjShunt(::System::Action_1<::Il2CppObject*>* value);
    // Get instance field reference: private System.Threading.CancellationTokenSource m_source
    [[deprecated]] ::System::Threading::CancellationTokenSource*& dyn_m_source();
    // static public System.Threading.CancellationToken get_None()
    // Offset: 0xFF71B0
    static ::System::Threading::CancellationToken get_None();
    // public System.Boolean get_IsCancellationRequested()
    // Offset: 0xFF71B8
    bool get_IsCancellationRequested();
    // public System.Boolean get_CanBeCanceled()
    // Offset: 0xFF7218
    bool get_CanBeCanceled();
    // System.Void .ctor(System.Threading.CancellationTokenSource source)
    // Offset: 0xFF7278
    // ABORTED: conflicts with another method.  CancellationToken(::System::Threading::CancellationTokenSource* source);
    // static private System.Void .cctor()
    // Offset: 0xFF7CD0
    static void _cctor();
    // static private System.Void ActionToActionObjShunt(System.Object obj)
    // Offset: 0xFF7280
    static void ActionToActionObjShunt(::Il2CppObject* obj);
    // public System.Threading.CancellationTokenRegistration Register(System.Action callback)
    // Offset: 0xFF72E4
    ::System::Threading::CancellationTokenRegistration Register(::System::Action* callback);
    // System.Threading.CancellationTokenRegistration InternalRegisterWithoutEC(System.Action`1<System.Object> callback, System.Object state)
    // Offset: 0xFF7568
    ::System::Threading::CancellationTokenRegistration InternalRegisterWithoutEC(::System::Action_1<::Il2CppObject*>* callback, ::Il2CppObject* state);
    // private System.Threading.CancellationTokenRegistration Register(System.Action`1<System.Object> callback, System.Object state, System.Boolean useSynchronizationContext, System.Boolean useExecutionContext)
    // Offset: 0xFF73D8
    ::System::Threading::CancellationTokenRegistration Register(::System::Action_1<::Il2CppObject*>* callback, ::Il2CppObject* state, bool useSynchronizationContext, bool useExecutionContext);
    // public System.Boolean Equals(System.Threading.CancellationToken other)
    // Offset: 0xFF78AC
    bool Equals(::System::Threading::CancellationToken other);
    // public System.Void ThrowIfCancellationRequested()
    // Offset: 0xFF7B58
    void ThrowIfCancellationRequested();
    // System.Void ThrowIfSourceDisposed()
    // Offset: 0xFF7C00
    void ThrowIfSourceDisposed();
    // private System.Void ThrowOperationCanceledException()
    // Offset: 0xFF7B94
    void ThrowOperationCanceledException();
    // static private System.Void ThrowObjectDisposedException()
    // Offset: 0xFF7C70
    static void ThrowObjectDisposedException();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xFF7A00
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public override System.Int32 GetHashCode()
    // Offset: 0xFF7A88
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // System.Threading.CancellationToken
  #pragma pack(pop)
  static check_size<sizeof(CancellationToken), 0 + sizeof(::System::Threading::CancellationTokenSource*)> __System_Threading_CancellationTokenSizeCheck;
  static_assert(sizeof(CancellationToken) == 0x8);
  // static public System.Boolean op_Equality(System.Threading.CancellationToken left, System.Threading.CancellationToken right)
  // Offset: 0xFF7B04
  bool operator ==(const ::System::Threading::CancellationToken& left, const ::System::Threading::CancellationToken& right);
  // static public System.Boolean op_Inequality(System.Threading.CancellationToken left, System.Threading.CancellationToken right)
  // Offset: 0xFF7B2C
  bool operator !=(const ::System::Threading::CancellationToken& left, const ::System::Threading::CancellationToken& right);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::CancellationToken::get_None
// Il2CppName: get_None
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::CancellationToken (*)()>(&System::Threading::CancellationToken::get_None)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationToken), "get_None", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationToken::get_IsCancellationRequested
// Il2CppName: get_IsCancellationRequested
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::CancellationToken::*)()>(&System::Threading::CancellationToken::get_IsCancellationRequested)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationToken), "get_IsCancellationRequested", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationToken::get_CanBeCanceled
// Il2CppName: get_CanBeCanceled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::CancellationToken::*)()>(&System::Threading::CancellationToken::get_CanBeCanceled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationToken), "get_CanBeCanceled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationToken::CancellationToken
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::CancellationToken::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Threading::CancellationToken::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationToken), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationToken::ActionToActionObjShunt
// Il2CppName: ActionToActionObjShunt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&System::Threading::CancellationToken::ActionToActionObjShunt)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationToken), "ActionToActionObjShunt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationToken::Register
// Il2CppName: Register
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::CancellationTokenRegistration (System::Threading::CancellationToken::*)(::System::Action*)>(&System::Threading::CancellationToken::Register)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationToken), "Register", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationToken::InternalRegisterWithoutEC
// Il2CppName: InternalRegisterWithoutEC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::CancellationTokenRegistration (System::Threading::CancellationToken::*)(::System::Action_1<::Il2CppObject*>*, ::Il2CppObject*)>(&System::Threading::CancellationToken::InternalRegisterWithoutEC)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationToken), "InternalRegisterWithoutEC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, state});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationToken::Register
// Il2CppName: Register
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::CancellationTokenRegistration (System::Threading::CancellationToken::*)(::System::Action_1<::Il2CppObject*>*, ::Il2CppObject*, bool, bool)>(&System::Threading::CancellationToken::Register)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* useSynchronizationContext = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* useExecutionContext = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationToken), "Register", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, state, useSynchronizationContext, useExecutionContext});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationToken::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::CancellationToken::*)(::System::Threading::CancellationToken)>(&System::Threading::CancellationToken::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationToken), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationToken::ThrowIfCancellationRequested
// Il2CppName: ThrowIfCancellationRequested
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::CancellationToken::*)()>(&System::Threading::CancellationToken::ThrowIfCancellationRequested)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationToken), "ThrowIfCancellationRequested", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationToken::ThrowIfSourceDisposed
// Il2CppName: ThrowIfSourceDisposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::CancellationToken::*)()>(&System::Threading::CancellationToken::ThrowIfSourceDisposed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationToken), "ThrowIfSourceDisposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationToken::ThrowOperationCanceledException
// Il2CppName: ThrowOperationCanceledException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::CancellationToken::*)()>(&System::Threading::CancellationToken::ThrowOperationCanceledException)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationToken), "ThrowOperationCanceledException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationToken::ThrowObjectDisposedException
// Il2CppName: ThrowObjectDisposedException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Threading::CancellationToken::ThrowObjectDisposedException)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationToken), "ThrowObjectDisposedException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationToken::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::CancellationToken::*)(::Il2CppObject*)>(&System::Threading::CancellationToken::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationToken), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationToken::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Threading::CancellationToken::*)()>(&System::Threading::CancellationToken::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CancellationToken), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::CancellationToken::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Threading::CancellationToken::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
