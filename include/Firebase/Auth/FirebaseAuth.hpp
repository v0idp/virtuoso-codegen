// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Runtime.InteropServices.HandleRef
#include "System/Runtime/InteropServices/HandleRef.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Firebase::Auth
namespace Firebase::Auth {
  // Forward declaring type: FirebaseUser
  class FirebaseUser;
}
// Forward declaring namespace: Firebase
namespace Firebase {
  // Forward declaring type: FirebaseApp
  class FirebaseApp;
  // Forward declaring type: InitResult
  struct InitResult;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: EventHandler
  class EventHandler;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: EventArgs
  class EventArgs;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: Firebase.Auth
namespace Firebase::Auth {
  // Forward declaring type: FirebaseAuth
  class FirebaseAuth;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Auth::FirebaseAuth);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Auth::FirebaseAuth*, "Firebase.Auth", "FirebaseAuth");
// Type namespace: Firebase.Auth
namespace Firebase::Auth {
  // Size: 0x61
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Auth.FirebaseAuth
  // [TokenAttribute] Offset: FFFFFFFF
  class FirebaseAuth : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    // Nested type: ::Firebase::Auth::FirebaseAuth::StateChangedDelegate
    class StateChangedDelegate;
    // Nested type: ::Firebase::Auth::FirebaseAuth::$GetAuth$c__AnonStorey1
    class $GetAuth$c__AnonStorey1;
    // Nested type: ::Firebase::Auth::FirebaseAuth::$GetAuth$c__AnonStorey2
    class $GetAuth$c__AnonStorey2;
    // Nested type: ::Firebase::Auth::FirebaseAuth::$ForwardStateChange$c__AnonStorey3
    class $ForwardStateChange$c__AnonStorey3;
    // Nested type: ::Firebase::Auth::FirebaseAuth::$ForwardStateChange$c__AnonStorey4
    class $ForwardStateChange$c__AnonStorey4;
    // Nested type: ::Firebase::Auth::FirebaseAuth::$SignInWithEmailAndPasswordAsync$c__AnonStoreyA
    class $SignInWithEmailAndPasswordAsync$c__AnonStoreyA;
    // Nested type: ::Firebase::Auth::FirebaseAuth::$CreateUserWithEmailAndPasswordAsync$c__AnonStoreyB
    class $CreateUserWithEmailAndPasswordAsync$c__AnonStoreyB;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Runtime.InteropServices.HandleRef swigCPtr
    // Size: 0x10
    // Offset: 0x10
    ::System::Runtime::InteropServices::HandleRef swigCPtr;
    // Field size check
    static_assert(sizeof(::System::Runtime::InteropServices::HandleRef) == 0x10);
    // private System.Boolean swigCMemOwn
    // Size: 0x1
    // Offset: 0x20
    bool swigCMemOwn;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: swigCMemOwn and: appProxy
    char __padding1[0x7] = {};
    // private Firebase.FirebaseApp appProxy
    // Size: 0x8
    // Offset: 0x28
    ::Firebase::FirebaseApp* appProxy;
    // Field size check
    static_assert(sizeof(::Firebase::FirebaseApp*) == 0x8);
    // private System.IntPtr appCPtr
    // Size: 0x8
    // Offset: 0x30
    ::System::IntPtr appCPtr;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private System.IntPtr authStateListener
    // Size: 0x8
    // Offset: 0x38
    ::System::IntPtr authStateListener;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private System.IntPtr idTokenListener
    // Size: 0x8
    // Offset: 0x40
    ::System::IntPtr idTokenListener;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private Firebase.Auth.FirebaseUser currentUser
    // Size: 0x8
    // Offset: 0x48
    ::Firebase::Auth::FirebaseUser* currentUser;
    // Field size check
    static_assert(sizeof(::Firebase::Auth::FirebaseUser*) == 0x8);
    // private System.EventHandler stateChangedImpl
    // Size: 0x8
    // Offset: 0x50
    ::System::EventHandler* stateChangedImpl;
    // Field size check
    static_assert(sizeof(::System::EventHandler*) == 0x8);
    // private System.EventHandler idTokenChangedImpl
    // Size: 0x8
    // Offset: 0x58
    ::System::EventHandler* idTokenChangedImpl;
    // Field size check
    static_assert(sizeof(::System::EventHandler*) == 0x8);
    // private System.Boolean persistentLoaded
    // Size: 0x1
    // Offset: 0x60
    bool persistentLoaded;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth> appCPtrToAuth
    static ::System::Collections::Generic::Dictionary_2<::System::IntPtr, ::Firebase::Auth::FirebaseAuth*>* _get_appCPtrToAuth();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth> appCPtrToAuth
    static void _set_appCPtrToAuth(::System::Collections::Generic::Dictionary_2<::System::IntPtr, ::Firebase::Auth::FirebaseAuth*>* value);
    // Get static field: static private Firebase.Auth.FirebaseAuth/Firebase.Auth.StateChangedDelegate <>f__mg$cache0
    static ::Firebase::Auth::FirebaseAuth::StateChangedDelegate* _get_$$f__mg$cache0();
    // Set static field: static private Firebase.Auth.FirebaseAuth/Firebase.Auth.StateChangedDelegate <>f__mg$cache0
    static void _set_$$f__mg$cache0(::Firebase::Auth::FirebaseAuth::StateChangedDelegate* value);
    // Get static field: static private Firebase.Auth.FirebaseAuth/Firebase.Auth.StateChangedDelegate <>f__mg$cache1
    static ::Firebase::Auth::FirebaseAuth::StateChangedDelegate* _get_$$f__mg$cache1();
    // Set static field: static private Firebase.Auth.FirebaseAuth/Firebase.Auth.StateChangedDelegate <>f__mg$cache1
    static void _set_$$f__mg$cache1(::Firebase::Auth::FirebaseAuth::StateChangedDelegate* value);
    // Get static field: static private System.Action`1<Firebase.Auth.FirebaseAuth> <>f__am$cache0
    static ::System::Action_1<::Firebase::Auth::FirebaseAuth*>* _get_$$f__am$cache0();
    // Set static field: static private System.Action`1<Firebase.Auth.FirebaseAuth> <>f__am$cache0
    static void _set_$$f__am$cache0(::System::Action_1<::Firebase::Auth::FirebaseAuth*>* value);
    // Get static field: static private System.Action`1<Firebase.Auth.FirebaseAuth> <>f__am$cache1
    static ::System::Action_1<::Firebase::Auth::FirebaseAuth*>* _get_$$f__am$cache1();
    // Set static field: static private System.Action`1<Firebase.Auth.FirebaseAuth> <>f__am$cache1
    static void _set_$$f__am$cache1(::System::Action_1<::Firebase::Auth::FirebaseAuth*>* value);
    // Get instance field reference: private System.Runtime.InteropServices.HandleRef swigCPtr
    ::System::Runtime::InteropServices::HandleRef& dyn_swigCPtr();
    // Get instance field reference: private System.Boolean swigCMemOwn
    bool& dyn_swigCMemOwn();
    // Get instance field reference: private Firebase.FirebaseApp appProxy
    ::Firebase::FirebaseApp*& dyn_appProxy();
    // Get instance field reference: private System.IntPtr appCPtr
    ::System::IntPtr& dyn_appCPtr();
    // Get instance field reference: private System.IntPtr authStateListener
    ::System::IntPtr& dyn_authStateListener();
    // Get instance field reference: private System.IntPtr idTokenListener
    ::System::IntPtr& dyn_idTokenListener();
    // Get instance field reference: private Firebase.Auth.FirebaseUser currentUser
    ::Firebase::Auth::FirebaseUser*& dyn_currentUser();
    // Get instance field reference: private System.EventHandler stateChangedImpl
    ::System::EventHandler*& dyn_stateChangedImpl();
    // Get instance field reference: private System.EventHandler idTokenChangedImpl
    ::System::EventHandler*& dyn_idTokenChangedImpl();
    // Get instance field reference: private System.Boolean persistentLoaded
    bool& dyn_persistentLoaded();
    // static public Firebase.Auth.FirebaseAuth get_DefaultInstance()
    // Offset: 0x12B0C98
    static ::Firebase::Auth::FirebaseAuth* get_DefaultInstance();
    // public Firebase.Auth.FirebaseUser get_CurrentUser()
    // Offset: 0x12B10B8
    ::Firebase::Auth::FirebaseUser* get_CurrentUser();
    // Firebase.Auth.FirebaseUser get_CurrentUserInternal()
    // Offset: 0x12B111C
    ::Firebase::Auth::FirebaseUser* get_CurrentUserInternal();
    // public System.Void add_StateChanged(System.EventHandler value)
    // Offset: 0x12B0D30
    void add_StateChanged(::System::EventHandler* value);
    // public System.Void remove_StateChanged(System.EventHandler value)
    // Offset: 0x12B0E7C
    void remove_StateChanged(::System::EventHandler* value);
    // private System.Void add_stateChangedImpl(System.EventHandler value)
    // Offset: 0x12B0DDC
    void add_stateChangedImpl(::System::EventHandler* value);
    // private System.Void remove_stateChangedImpl(System.EventHandler value)
    // Offset: 0x12B0E80
    void remove_stateChangedImpl(::System::EventHandler* value);
    // System.Void .ctor(System.IntPtr cPtr, System.Boolean cMemoryOwn)
    // Offset: 0x12AFD78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FirebaseAuth* New_ctor(::System::IntPtr cPtr, bool cMemoryOwn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Auth::FirebaseAuth::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FirebaseAuth*, creationType>(cPtr, cMemoryOwn)));
    }
    // static private System.Void .cctor()
    // Offset: 0x12B1E08
    static void _cctor();
    // static System.Runtime.InteropServices.HandleRef getCPtr(Firebase.Auth.FirebaseAuth obj)
    // Offset: 0x12AE9A8
    static ::System::Runtime::InteropServices::HandleRef getCPtr(::Firebase::Auth::FirebaseAuth* obj);
    // public System.Void Dispose()
    // Offset: 0x12AFE44
    void Dispose();
    // static private Firebase.Auth.FirebaseAuth ProxyFromAppCPtr(System.IntPtr appCPtr)
    // Offset: 0x12B01FC
    static ::Firebase::Auth::FirebaseAuth* ProxyFromAppCPtr(::System::IntPtr appCPtr);
    // private System.Void ThrowIfNull()
    // Offset: 0x12B0328
    void ThrowIfNull();
    // static public Firebase.Auth.FirebaseAuth GetAuth(Firebase.FirebaseApp app)
    // Offset: 0x12B03AC
    static ::Firebase::Auth::FirebaseAuth* GetAuth(::Firebase::FirebaseApp* app);
    // private System.Void OnAppDisposed(System.Object sender, System.EventArgs eventArgs)
    // Offset: 0x12B0858
    void OnAppDisposed(::Il2CppObject* sender, ::System::EventArgs* eventArgs);
    // private System.Void DisposeInternal()
    // Offset: 0x12AFE48
    void DisposeInternal();
    // static private System.Void ForwardStateChange(System.IntPtr appCPtr, System.Action`1<Firebase.Auth.FirebaseAuth> stateChangeClosure)
    // Offset: 0x12B0AC0
    static void ForwardStateChange(::System::IntPtr appCPtr, ::System::Action_1<::Firebase::Auth::FirebaseAuth*>* stateChangeClosure);
    // static System.Void StateChangedFunction(System.IntPtr appCPtr)
    // Offset: 0x12AFB50
    static void StateChangedFunction(::System::IntPtr appCPtr);
    // static System.Void IdTokenChangedFunction(System.IntPtr appCPtr)
    // Offset: 0x12AFC64
    static void IdTokenChangedFunction(::System::IntPtr appCPtr);
    // private Firebase.Auth.FirebaseUser UpdateCurrentUser(Firebase.Auth.FirebaseUser proxy)
    // Offset: 0x12B0F20
    ::Firebase::Auth::FirebaseUser* UpdateCurrentUser(::Firebase::Auth::FirebaseUser* proxy);
    // public System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> SignInWithEmailAndPasswordAsync(System.String email, System.String password)
    // Offset: 0x12B1230
    ::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>* SignInWithEmailAndPasswordAsync(::StringW email, ::StringW password);
    // public System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> CreateUserWithEmailAndPasswordAsync(System.String email, System.String password)
    // Offset: 0x12B14AC
    ::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>* CreateUserWithEmailAndPasswordAsync(::StringW email, ::StringW password);
    // private System.Void CompleteFirebaseUserTask(System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> task, System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser> taskCompletionSource)
    // Offset: 0x12B1728
    void CompleteFirebaseUserTask(::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>* task, ::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Auth::FirebaseUser*>* taskCompletionSource);
    // System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> SignInWithEmailAndPasswordInternalAsync(System.String email, System.String password)
    // Offset: 0x12B13AC
    ::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>* SignInWithEmailAndPasswordInternalAsync(::StringW email, ::StringW password);
    // System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> CreateUserWithEmailAndPasswordInternalAsync(System.String email, System.String password)
    // Offset: 0x12B1628
    ::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>* CreateUserWithEmailAndPasswordInternalAsync(::StringW email, ::StringW password);
    // public System.Void SignOut()
    // Offset: 0x12B1AB0
    void SignOut();
    // public System.Threading.Tasks.Task SendPasswordResetEmailAsync(System.String email)
    // Offset: 0x12B1B4C
    ::System::Threading::Tasks::Task* SendPasswordResetEmailAsync(::StringW email);
    // static Firebase.Auth.FirebaseAuth GetAuthInternal(Firebase.FirebaseApp app, out Firebase.InitResult init_result_out)
    // Offset: 0x12B1C20
    static ::Firebase::Auth::FirebaseAuth* GetAuthInternal(::Firebase::FirebaseApp* app, ByRef<::Firebase::InitResult> init_result_out);
    // static System.Void ReleaseReferenceInternal(Firebase.Auth.FirebaseAuth instance)
    // Offset: 0x12B09EC
    static void ReleaseReferenceInternal(::Firebase::Auth::FirebaseAuth* instance);
    // static private System.Void <StateChangedFunction>m__0(Firebase.Auth.FirebaseAuth auth)
    // Offset: 0x12B1E90
    static void $StateChangedFunction$m__0(::Firebase::Auth::FirebaseAuth* auth);
    // static private System.Void <IdTokenChangedFunction>m__1(Firebase.Auth.FirebaseAuth auth)
    // Offset: 0x12B1FCC
    static void $IdTokenChangedFunction$m__1(::Firebase::Auth::FirebaseAuth* auth);
    // protected override System.Void Finalize()
    // Offset: 0x12AFDDC
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Firebase.Auth.FirebaseAuth
  #pragma pack(pop)
  static check_size<sizeof(FirebaseAuth), 96 + sizeof(bool)> __Firebase_Auth_FirebaseAuthSizeCheck;
  static_assert(sizeof(FirebaseAuth) == 0x61);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Auth::FirebaseAuth::get_DefaultInstance
// Il2CppName: get_DefaultInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Auth::FirebaseAuth* (*)()>(&Firebase::Auth::FirebaseAuth::get_DefaultInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::FirebaseAuth*), "get_DefaultInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::FirebaseAuth::get_CurrentUser
// Il2CppName: get_CurrentUser
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Auth::FirebaseUser* (Firebase::Auth::FirebaseAuth::*)()>(&Firebase::Auth::FirebaseAuth::get_CurrentUser)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::FirebaseAuth*), "get_CurrentUser", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::FirebaseAuth::get_CurrentUserInternal
// Il2CppName: get_CurrentUserInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Auth::FirebaseUser* (Firebase::Auth::FirebaseAuth::*)()>(&Firebase::Auth::FirebaseAuth::get_CurrentUserInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::FirebaseAuth*), "get_CurrentUserInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::FirebaseAuth::add_StateChanged
// Il2CppName: add_StateChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Auth::FirebaseAuth::*)(::System::EventHandler*)>(&Firebase::Auth::FirebaseAuth::add_StateChanged)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "EventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::FirebaseAuth*), "add_StateChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::FirebaseAuth::remove_StateChanged
// Il2CppName: remove_StateChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Auth::FirebaseAuth::*)(::System::EventHandler*)>(&Firebase::Auth::FirebaseAuth::remove_StateChanged)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "EventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::FirebaseAuth*), "remove_StateChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::FirebaseAuth::add_stateChangedImpl
// Il2CppName: add_stateChangedImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Auth::FirebaseAuth::*)(::System::EventHandler*)>(&Firebase::Auth::FirebaseAuth::add_stateChangedImpl)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "EventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::FirebaseAuth*), "add_stateChangedImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::FirebaseAuth::remove_stateChangedImpl
// Il2CppName: remove_stateChangedImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Auth::FirebaseAuth::*)(::System::EventHandler*)>(&Firebase::Auth::FirebaseAuth::remove_stateChangedImpl)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "EventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::FirebaseAuth*), "remove_stateChangedImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::FirebaseAuth::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::Auth::FirebaseAuth::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Firebase::Auth::FirebaseAuth::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::FirebaseAuth*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::FirebaseAuth::getCPtr
// Il2CppName: getCPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::Firebase::Auth::FirebaseAuth*)>(&Firebase::Auth::FirebaseAuth::getCPtr)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("Firebase.Auth", "FirebaseAuth")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::FirebaseAuth*), "getCPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::FirebaseAuth::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Auth::FirebaseAuth::*)()>(&Firebase::Auth::FirebaseAuth::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::FirebaseAuth*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::FirebaseAuth::ProxyFromAppCPtr
// Il2CppName: ProxyFromAppCPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Auth::FirebaseAuth* (*)(::System::IntPtr)>(&Firebase::Auth::FirebaseAuth::ProxyFromAppCPtr)> {
  static const MethodInfo* get() {
    static auto* appCPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::FirebaseAuth*), "ProxyFromAppCPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{appCPtr});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::FirebaseAuth::ThrowIfNull
// Il2CppName: ThrowIfNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Auth::FirebaseAuth::*)()>(&Firebase::Auth::FirebaseAuth::ThrowIfNull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::FirebaseAuth*), "ThrowIfNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::FirebaseAuth::GetAuth
// Il2CppName: GetAuth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Auth::FirebaseAuth* (*)(::Firebase::FirebaseApp*)>(&Firebase::Auth::FirebaseAuth::GetAuth)> {
  static const MethodInfo* get() {
    static auto* app = &::il2cpp_utils::GetClassFromName("Firebase", "FirebaseApp")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::FirebaseAuth*), "GetAuth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{app});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::FirebaseAuth::OnAppDisposed
// Il2CppName: OnAppDisposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Auth::FirebaseAuth::*)(::Il2CppObject*, ::System::EventArgs*)>(&Firebase::Auth::FirebaseAuth::OnAppDisposed)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* eventArgs = &::il2cpp_utils::GetClassFromName("System", "EventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::FirebaseAuth*), "OnAppDisposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, eventArgs});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::FirebaseAuth::DisposeInternal
// Il2CppName: DisposeInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Auth::FirebaseAuth::*)()>(&Firebase::Auth::FirebaseAuth::DisposeInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::FirebaseAuth*), "DisposeInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::FirebaseAuth::ForwardStateChange
// Il2CppName: ForwardStateChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::Action_1<::Firebase::Auth::FirebaseAuth*>*)>(&Firebase::Auth::FirebaseAuth::ForwardStateChange)> {
  static const MethodInfo* get() {
    static auto* appCPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* stateChangeClosure = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Firebase.Auth", "FirebaseAuth")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::FirebaseAuth*), "ForwardStateChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{appCPtr, stateChangeClosure});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::FirebaseAuth::StateChangedFunction
// Il2CppName: StateChangedFunction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&Firebase::Auth::FirebaseAuth::StateChangedFunction)> {
  static const MethodInfo* get() {
    static auto* appCPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::FirebaseAuth*), "StateChangedFunction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{appCPtr});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::FirebaseAuth::IdTokenChangedFunction
// Il2CppName: IdTokenChangedFunction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&Firebase::Auth::FirebaseAuth::IdTokenChangedFunction)> {
  static const MethodInfo* get() {
    static auto* appCPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::FirebaseAuth*), "IdTokenChangedFunction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{appCPtr});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::FirebaseAuth::UpdateCurrentUser
// Il2CppName: UpdateCurrentUser
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Auth::FirebaseUser* (Firebase::Auth::FirebaseAuth::*)(::Firebase::Auth::FirebaseUser*)>(&Firebase::Auth::FirebaseAuth::UpdateCurrentUser)> {
  static const MethodInfo* get() {
    static auto* proxy = &::il2cpp_utils::GetClassFromName("Firebase.Auth", "FirebaseUser")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::FirebaseAuth*), "UpdateCurrentUser", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{proxy});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::FirebaseAuth::SignInWithEmailAndPasswordAsync
// Il2CppName: SignInWithEmailAndPasswordAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>* (Firebase::Auth::FirebaseAuth::*)(::StringW, ::StringW)>(&Firebase::Auth::FirebaseAuth::SignInWithEmailAndPasswordAsync)> {
  static const MethodInfo* get() {
    static auto* email = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::FirebaseAuth*), "SignInWithEmailAndPasswordAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{email, password});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::FirebaseAuth::CreateUserWithEmailAndPasswordAsync
// Il2CppName: CreateUserWithEmailAndPasswordAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>* (Firebase::Auth::FirebaseAuth::*)(::StringW, ::StringW)>(&Firebase::Auth::FirebaseAuth::CreateUserWithEmailAndPasswordAsync)> {
  static const MethodInfo* get() {
    static auto* email = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::FirebaseAuth*), "CreateUserWithEmailAndPasswordAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{email, password});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::FirebaseAuth::CompleteFirebaseUserTask
// Il2CppName: CompleteFirebaseUserTask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Auth::FirebaseAuth::*)(::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>*, ::System::Threading::Tasks::TaskCompletionSource_1<::Firebase::Auth::FirebaseUser*>*)>(&Firebase::Auth::FirebaseAuth::CompleteFirebaseUserTask)> {
  static const MethodInfo* get() {
    static auto* task = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Firebase.Auth", "FirebaseUser")})->byval_arg;
    static auto* taskCompletionSource = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "TaskCompletionSource`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Firebase.Auth", "FirebaseUser")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::FirebaseAuth*), "CompleteFirebaseUserTask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{task, taskCompletionSource});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::FirebaseAuth::SignInWithEmailAndPasswordInternalAsync
// Il2CppName: SignInWithEmailAndPasswordInternalAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>* (Firebase::Auth::FirebaseAuth::*)(::StringW, ::StringW)>(&Firebase::Auth::FirebaseAuth::SignInWithEmailAndPasswordInternalAsync)> {
  static const MethodInfo* get() {
    static auto* email = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::FirebaseAuth*), "SignInWithEmailAndPasswordInternalAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{email, password});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::FirebaseAuth::CreateUserWithEmailAndPasswordInternalAsync
// Il2CppName: CreateUserWithEmailAndPasswordInternalAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>* (Firebase::Auth::FirebaseAuth::*)(::StringW, ::StringW)>(&Firebase::Auth::FirebaseAuth::CreateUserWithEmailAndPasswordInternalAsync)> {
  static const MethodInfo* get() {
    static auto* email = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::FirebaseAuth*), "CreateUserWithEmailAndPasswordInternalAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{email, password});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::FirebaseAuth::SignOut
// Il2CppName: SignOut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Auth::FirebaseAuth::*)()>(&Firebase::Auth::FirebaseAuth::SignOut)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::FirebaseAuth*), "SignOut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::FirebaseAuth::SendPasswordResetEmailAsync
// Il2CppName: SendPasswordResetEmailAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (Firebase::Auth::FirebaseAuth::*)(::StringW)>(&Firebase::Auth::FirebaseAuth::SendPasswordResetEmailAsync)> {
  static const MethodInfo* get() {
    static auto* email = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::FirebaseAuth*), "SendPasswordResetEmailAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{email});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::FirebaseAuth::GetAuthInternal
// Il2CppName: GetAuthInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Auth::FirebaseAuth* (*)(::Firebase::FirebaseApp*, ByRef<::Firebase::InitResult>)>(&Firebase::Auth::FirebaseAuth::GetAuthInternal)> {
  static const MethodInfo* get() {
    static auto* app = &::il2cpp_utils::GetClassFromName("Firebase", "FirebaseApp")->byval_arg;
    static auto* init_result_out = &::il2cpp_utils::GetClassFromName("Firebase", "InitResult")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::FirebaseAuth*), "GetAuthInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{app, init_result_out});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::FirebaseAuth::ReleaseReferenceInternal
// Il2CppName: ReleaseReferenceInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Firebase::Auth::FirebaseAuth*)>(&Firebase::Auth::FirebaseAuth::ReleaseReferenceInternal)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("Firebase.Auth", "FirebaseAuth")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::FirebaseAuth*), "ReleaseReferenceInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::FirebaseAuth::$StateChangedFunction$m__0
// Il2CppName: <StateChangedFunction>m__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Firebase::Auth::FirebaseAuth*)>(&Firebase::Auth::FirebaseAuth::$StateChangedFunction$m__0)> {
  static const MethodInfo* get() {
    static auto* auth = &::il2cpp_utils::GetClassFromName("Firebase.Auth", "FirebaseAuth")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::FirebaseAuth*), "<StateChangedFunction>m__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{auth});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::FirebaseAuth::$IdTokenChangedFunction$m__1
// Il2CppName: <IdTokenChangedFunction>m__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Firebase::Auth::FirebaseAuth*)>(&Firebase::Auth::FirebaseAuth::$IdTokenChangedFunction$m__1)> {
  static const MethodInfo* get() {
    static auto* auth = &::il2cpp_utils::GetClassFromName("Firebase.Auth", "FirebaseAuth")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::FirebaseAuth*), "<IdTokenChangedFunction>m__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{auth});
  }
};
// Writing MetadataGetter for method: Firebase::Auth::FirebaseAuth::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Auth::FirebaseAuth::*)()>(&Firebase::Auth::FirebaseAuth::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Auth::FirebaseAuth*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};