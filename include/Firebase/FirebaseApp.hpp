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
// Forward declaring namespace: Firebase
namespace Firebase {
  // Forward declaring type: LogLevel
  struct LogLevel;
  // Forward declaring type: AppOptionsInternal
  class AppOptionsInternal;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: EventHandler
  class EventHandler;
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: Firebase
namespace Firebase {
  // Forward declaring type: FirebaseApp
  class FirebaseApp;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::FirebaseApp);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::FirebaseApp*, "Firebase", "FirebaseApp");
// Type namespace: Firebase
namespace Firebase {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.FirebaseApp
  // [TokenAttribute] Offset: FFFFFFFF
  class FirebaseApp : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    // Nested type: ::Firebase::FirebaseApp::EnableModuleParams
    class EnableModuleParams;
    // Nested type: ::Firebase::FirebaseApp::CreateDelegate
    class CreateDelegate;
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
    // Padding between fields: swigCMemOwn and: name
    char __padding1[0x7] = {};
    // private System.String name
    // Size: 0x8
    // Offset: 0x28
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.EventHandler AppDisposed
    // Size: 0x8
    // Offset: 0x30
    ::System::EventHandler* AppDisposed;
    // Field size check
    static_assert(sizeof(::System::EventHandler*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get static field: static readonly System.Object disposeLock
    static ::Il2CppObject* _get_disposeLock();
    // Set static field: static readonly System.Object disposeLock
    static void _set_disposeLock(::Il2CppObject* value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp> nameToProxy
    static ::System::Collections::Generic::Dictionary_2<::StringW, ::Firebase::FirebaseApp*>* _get_nameToProxy();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp> nameToProxy
    static void _set_nameToProxy(::System::Collections::Generic::Dictionary_2<::StringW, ::Firebase::FirebaseApp*>* value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp> cPtrToProxy
    static ::System::Collections::Generic::Dictionary_2<::System::IntPtr, ::Firebase::FirebaseApp*>* _get_cPtrToProxy();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp> cPtrToProxy
    static void _set_cPtrToProxy(::System::Collections::Generic::Dictionary_2<::System::IntPtr, ::Firebase::FirebaseApp*>* value);
    // Get static field: static private System.Boolean AppUtilCallbacksInitialized
    static bool _get_AppUtilCallbacksInitialized();
    // Set static field: static private System.Boolean AppUtilCallbacksInitialized
    static void _set_AppUtilCallbacksInitialized(bool value);
    // Get static field: static private System.Object AppUtilCallbacksLock
    static ::Il2CppObject* _get_AppUtilCallbacksLock();
    // Set static field: static private System.Object AppUtilCallbacksLock
    static void _set_AppUtilCallbacksLock(::Il2CppObject* value);
    // Get static field: static private System.Boolean PreventOnAllAppsDestroyed
    static bool _get_PreventOnAllAppsDestroyed();
    // Set static field: static private System.Boolean PreventOnAllAppsDestroyed
    static void _set_PreventOnAllAppsDestroyed(bool value);
    // Get static field: static private System.Boolean crashlyticsInitializationAttempted
    static bool _get_crashlyticsInitializationAttempted();
    // Set static field: static private System.Boolean crashlyticsInitializationAttempted
    static void _set_crashlyticsInitializationAttempted(bool value);
    // Get static field: static private System.Int32 CheckDependenciesThread
    static int _get_CheckDependenciesThread();
    // Set static field: static private System.Int32 CheckDependenciesThread
    static void _set_CheckDependenciesThread(int value);
    // Get static field: static private System.Object CheckDependenciesThreadLock
    static ::Il2CppObject* _get_CheckDependenciesThreadLock();
    // Set static field: static private System.Object CheckDependenciesThreadLock
    static void _set_CheckDependenciesThreadLock(::Il2CppObject* value);
    // Get static field: static private Firebase.FirebaseApp/Firebase.CreateDelegate <>f__am$cache0
    static ::Firebase::FirebaseApp::CreateDelegate* _get_$$f__am$cache0();
    // Set static field: static private Firebase.FirebaseApp/Firebase.CreateDelegate <>f__am$cache0
    static void _set_$$f__am$cache0(::Firebase::FirebaseApp::CreateDelegate* value);
    // Get static field: static private System.Func`1<System.Boolean> <>f__am$cache1
    static ::System::Func_1<bool>* _get_$$f__am$cache1();
    // Set static field: static private System.Func`1<System.Boolean> <>f__am$cache1
    static void _set_$$f__am$cache1(::System::Func_1<bool>* value);
    // Get instance field reference: private System.Runtime.InteropServices.HandleRef swigCPtr
    ::System::Runtime::InteropServices::HandleRef& dyn_swigCPtr();
    // Get instance field reference: private System.Boolean swigCMemOwn
    bool& dyn_swigCMemOwn();
    // Get instance field reference: private System.String name
    ::StringW& dyn_name();
    // Get instance field reference: private System.EventHandler AppDisposed
    ::System::EventHandler*& dyn_AppDisposed();
    // static public Firebase.FirebaseApp get_DefaultInstance()
    // Offset: 0x1296BD4
    static ::Firebase::FirebaseApp* get_DefaultInstance();
    // public System.String get_Name()
    // Offset: 0x1297B30
    ::StringW get_Name();
    // static public Firebase.LogLevel get_LogLevel()
    // Offset: 0x1297C00
    static ::Firebase::LogLevel get_LogLevel();
    // System.String get_NameInternal()
    // Offset: 0x1296684
    ::StringW get_NameInternal();
    // static public System.String get_DefaultName()
    // Offset: 0x1296C5C
    static ::StringW get_DefaultName();
    // System.Void add_AppDisposed(System.EventHandler value)
    // Offset: 0x1297C58
    void add_AppDisposed(::System::EventHandler* value);
    // System.Void remove_AppDisposed(System.EventHandler value)
    // Offset: 0x1297CF8
    void remove_AppDisposed(::System::EventHandler* value);
    // System.Void .ctor(System.IntPtr cPtr, System.Boolean cMemoryOwn)
    // Offset: 0x129624C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FirebaseApp* New_ctor(::System::IntPtr cPtr, bool cMemoryOwn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::FirebaseApp::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FirebaseApp*, creationType>(cPtr, cMemoryOwn)));
    }
    // static private System.Void .cctor()
    // Offset: 0x12962B0
    static void _cctor();
    // static System.Runtime.InteropServices.HandleRef getCPtr(Firebase.FirebaseApp obj)
    // Offset: 0x129650C
    static ::System::Runtime::InteropServices::HandleRef getCPtr(::Firebase::FirebaseApp* obj);
    // public System.Void Dispose()
    // Offset: 0x12965E0
    void Dispose();
    // static System.Void TranslateDllNotFoundException(System.Action closureToExecute)
    // Offset: 0x12969D8
    static void TranslateDllNotFoundException(::System::Action* closureToExecute);
    // static public Firebase.FirebaseApp GetInstance(System.String name)
    // Offset: 0x1296CE8
    static ::Firebase::FirebaseApp* GetInstance(::StringW name);
    // static public Firebase.FirebaseApp Create()
    // Offset: 0x1296E84
    static ::Firebase::FirebaseApp* Create();
    // private System.Void AddReference()
    // Offset: 0x1297D98
    void AddReference();
    // private System.Void RemoveReference()
    // Offset: 0x1296720
    void RemoveReference();
    // private System.Void ThrowIfNull()
    // Offset: 0x1297B68
    void ThrowIfNull();
    // static private System.Void InitializeAppUtilCallbacks()
    // Offset: 0x1298164
    static void InitializeAppUtilCallbacks();
    // static private System.Void OnAllAppsDestroyed()
    // Offset: 0x1297FD4
    static void OnAllAppsDestroyed();
    // static private System.Boolean InitializeCrashlyticsIfPresent()
    // Offset: 0x1298E54
    static bool InitializeCrashlyticsIfPresent();
    // static private Firebase.FirebaseApp CreateAndTrack(Firebase.FirebaseApp/Firebase.CreateDelegate createDelegate, Firebase.FirebaseApp existingProxy)
    // Offset: 0x1297118
    static ::Firebase::FirebaseApp* CreateAndTrack(::Firebase::FirebaseApp::CreateDelegate* createDelegate, ::Firebase::FirebaseApp* existingProxy);
    // static private System.Void ThrowIfCheckDependenciesRunning()
    // Offset: 0x1296F84
    static void ThrowIfCheckDependenciesRunning();
    // static private System.Boolean IsCheckDependenciesRunning()
    // Offset: 0x12994AC
    static bool IsCheckDependenciesRunning();
    // Firebase.AppOptionsInternal options()
    // Offset: 0x1299590
    ::Firebase::AppOptionsInternal* options();
    // static Firebase.FirebaseApp CreateInternal()
    // Offset: 0x129965C
    static ::Firebase::FirebaseApp* CreateInternal();
    // static System.Void ReleaseReferenceInternal(Firebase.FirebaseApp app)
    // Offset: 0x1297F08
    static void ReleaseReferenceInternal(::Firebase::FirebaseApp* app);
    // static System.Void RegisterLibraryInternal(System.String library, System.String version)
    // Offset: 0x1299410
    static void RegisterLibraryInternal(::StringW library, ::StringW version);
    // static System.Void AppSetDefaultConfigPath(System.String path)
    // Offset: 0x129912C
    static void AppSetDefaultConfigPath(::StringW path);
    // static private Firebase.FirebaseApp <Create>m__0()
    // Offset: 0x1299734
    static ::Firebase::FirebaseApp* $Create$m__0();
    // static private System.Boolean <CreateAndTrack>m__1()
    // Offset: 0x129978C
    static bool $CreateAndTrack$m__1();
    // protected override System.Void Finalize()
    // Offset: 0x1296578
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Firebase.FirebaseApp
  #pragma pack(pop)
  static check_size<sizeof(FirebaseApp), 48 + sizeof(::System::EventHandler*)> __Firebase_FirebaseAppSizeCheck;
  static_assert(sizeof(FirebaseApp) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::FirebaseApp::get_DefaultInstance
// Il2CppName: get_DefaultInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::FirebaseApp* (*)()>(&Firebase::FirebaseApp::get_DefaultInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::FirebaseApp*), "get_DefaultInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::FirebaseApp::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Firebase::FirebaseApp::*)()>(&Firebase::FirebaseApp::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::FirebaseApp*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::FirebaseApp::get_LogLevel
// Il2CppName: get_LogLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::LogLevel (*)()>(&Firebase::FirebaseApp::get_LogLevel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::FirebaseApp*), "get_LogLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::FirebaseApp::get_NameInternal
// Il2CppName: get_NameInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Firebase::FirebaseApp::*)()>(&Firebase::FirebaseApp::get_NameInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::FirebaseApp*), "get_NameInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::FirebaseApp::get_DefaultName
// Il2CppName: get_DefaultName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&Firebase::FirebaseApp::get_DefaultName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::FirebaseApp*), "get_DefaultName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::FirebaseApp::add_AppDisposed
// Il2CppName: add_AppDisposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::FirebaseApp::*)(::System::EventHandler*)>(&Firebase::FirebaseApp::add_AppDisposed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "EventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::FirebaseApp*), "add_AppDisposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Firebase::FirebaseApp::remove_AppDisposed
// Il2CppName: remove_AppDisposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::FirebaseApp::*)(::System::EventHandler*)>(&Firebase::FirebaseApp::remove_AppDisposed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "EventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::FirebaseApp*), "remove_AppDisposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Firebase::FirebaseApp::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::FirebaseApp::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Firebase::FirebaseApp::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::FirebaseApp*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::FirebaseApp::getCPtr
// Il2CppName: getCPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::Firebase::FirebaseApp*)>(&Firebase::FirebaseApp::getCPtr)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("Firebase", "FirebaseApp")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::FirebaseApp*), "getCPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Firebase::FirebaseApp::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::FirebaseApp::*)()>(&Firebase::FirebaseApp::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::FirebaseApp*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::FirebaseApp::TranslateDllNotFoundException
// Il2CppName: TranslateDllNotFoundException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&Firebase::FirebaseApp::TranslateDllNotFoundException)> {
  static const MethodInfo* get() {
    static auto* closureToExecute = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::FirebaseApp*), "TranslateDllNotFoundException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{closureToExecute});
  }
};
// Writing MetadataGetter for method: Firebase::FirebaseApp::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::FirebaseApp* (*)(::StringW)>(&Firebase::FirebaseApp::GetInstance)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::FirebaseApp*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: Firebase::FirebaseApp::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::FirebaseApp* (*)()>(&Firebase::FirebaseApp::Create)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::FirebaseApp*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::FirebaseApp::AddReference
// Il2CppName: AddReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::FirebaseApp::*)()>(&Firebase::FirebaseApp::AddReference)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::FirebaseApp*), "AddReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::FirebaseApp::RemoveReference
// Il2CppName: RemoveReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::FirebaseApp::*)()>(&Firebase::FirebaseApp::RemoveReference)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::FirebaseApp*), "RemoveReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::FirebaseApp::ThrowIfNull
// Il2CppName: ThrowIfNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::FirebaseApp::*)()>(&Firebase::FirebaseApp::ThrowIfNull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::FirebaseApp*), "ThrowIfNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::FirebaseApp::InitializeAppUtilCallbacks
// Il2CppName: InitializeAppUtilCallbacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Firebase::FirebaseApp::InitializeAppUtilCallbacks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::FirebaseApp*), "InitializeAppUtilCallbacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::FirebaseApp::OnAllAppsDestroyed
// Il2CppName: OnAllAppsDestroyed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Firebase::FirebaseApp::OnAllAppsDestroyed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::FirebaseApp*), "OnAllAppsDestroyed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::FirebaseApp::InitializeCrashlyticsIfPresent
// Il2CppName: InitializeCrashlyticsIfPresent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Firebase::FirebaseApp::InitializeCrashlyticsIfPresent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::FirebaseApp*), "InitializeCrashlyticsIfPresent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::FirebaseApp::CreateAndTrack
// Il2CppName: CreateAndTrack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::FirebaseApp* (*)(::Firebase::FirebaseApp::CreateDelegate*, ::Firebase::FirebaseApp*)>(&Firebase::FirebaseApp::CreateAndTrack)> {
  static const MethodInfo* get() {
    static auto* createDelegate = &::il2cpp_utils::GetClassFromName("Firebase", "FirebaseApp/CreateDelegate")->byval_arg;
    static auto* existingProxy = &::il2cpp_utils::GetClassFromName("Firebase", "FirebaseApp")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::FirebaseApp*), "CreateAndTrack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{createDelegate, existingProxy});
  }
};
// Writing MetadataGetter for method: Firebase::FirebaseApp::ThrowIfCheckDependenciesRunning
// Il2CppName: ThrowIfCheckDependenciesRunning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Firebase::FirebaseApp::ThrowIfCheckDependenciesRunning)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::FirebaseApp*), "ThrowIfCheckDependenciesRunning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::FirebaseApp::IsCheckDependenciesRunning
// Il2CppName: IsCheckDependenciesRunning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Firebase::FirebaseApp::IsCheckDependenciesRunning)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::FirebaseApp*), "IsCheckDependenciesRunning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::FirebaseApp::options
// Il2CppName: options
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::AppOptionsInternal* (Firebase::FirebaseApp::*)()>(&Firebase::FirebaseApp::options)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::FirebaseApp*), "options", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::FirebaseApp::CreateInternal
// Il2CppName: CreateInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::FirebaseApp* (*)()>(&Firebase::FirebaseApp::CreateInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::FirebaseApp*), "CreateInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::FirebaseApp::ReleaseReferenceInternal
// Il2CppName: ReleaseReferenceInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Firebase::FirebaseApp*)>(&Firebase::FirebaseApp::ReleaseReferenceInternal)> {
  static const MethodInfo* get() {
    static auto* app = &::il2cpp_utils::GetClassFromName("Firebase", "FirebaseApp")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::FirebaseApp*), "ReleaseReferenceInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{app});
  }
};
// Writing MetadataGetter for method: Firebase::FirebaseApp::RegisterLibraryInternal
// Il2CppName: RegisterLibraryInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW)>(&Firebase::FirebaseApp::RegisterLibraryInternal)> {
  static const MethodInfo* get() {
    static auto* library = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* version = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::FirebaseApp*), "RegisterLibraryInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{library, version});
  }
};
// Writing MetadataGetter for method: Firebase::FirebaseApp::AppSetDefaultConfigPath
// Il2CppName: AppSetDefaultConfigPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&Firebase::FirebaseApp::AppSetDefaultConfigPath)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::FirebaseApp*), "AppSetDefaultConfigPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: Firebase::FirebaseApp::$Create$m__0
// Il2CppName: <Create>m__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::FirebaseApp* (*)()>(&Firebase::FirebaseApp::$Create$m__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::FirebaseApp*), "<Create>m__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::FirebaseApp::$CreateAndTrack$m__1
// Il2CppName: <CreateAndTrack>m__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Firebase::FirebaseApp::$CreateAndTrack$m__1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::FirebaseApp*), "<CreateAndTrack>m__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::FirebaseApp::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::FirebaseApp::*)()>(&Firebase::FirebaseApp::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::FirebaseApp*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
