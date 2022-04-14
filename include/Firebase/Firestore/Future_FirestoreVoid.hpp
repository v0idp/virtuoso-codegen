// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Firebase.FutureBase
#include "Firebase/FutureBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Firebase::Firestore
namespace Firebase::Firestore {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Forward declaring type: Future_FirestoreVoid
  class Future_FirestoreVoid;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Firestore::Future_FirestoreVoid);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Future_FirestoreVoid*, "Firebase.Firestore", "Future_FirestoreVoid");
// Type namespace: Firebase.Firestore
namespace Firebase::Firestore {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Firestore.Future_FirestoreVoid
  // [TokenAttribute] Offset: FFFFFFFF
  class Future_FirestoreVoid : public ::Firebase::FutureBase {
    public:
    // Writing base type padding for base size: 0x21 to desired offset: 0x28
    char ___base_padding[0x7] = {};
    // Nested type: ::Firebase::Firestore::Future_FirestoreVoid::Action
    class Action;
    // Nested type: ::Firebase::Firestore::Future_FirestoreVoid::SWIG_CompletionDelegate
    class SWIG_CompletionDelegate;
    // Nested type: ::Firebase::Firestore::Future_FirestoreVoid::$GetTask$c__AnonStorey0
    class $GetTask$c__AnonStorey0;
    public:
    // private System.Runtime.InteropServices.HandleRef swigCPtr
    // Size: 0x10
    // Offset: 0x28
    ::System::Runtime::InteropServices::HandleRef swigCPtr;
    // Field size check
    static_assert(sizeof(::System::Runtime::InteropServices::HandleRef) == 0x10);
    // private System.IntPtr callbackData
    // Size: 0x8
    // Offset: 0x38
    ::System::IntPtr callbackData;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private Firebase.Firestore.Future_FirestoreVoid/Firebase.Firestore.SWIG_CompletionDelegate SWIG_CompletionCB
    // Size: 0x8
    // Offset: 0x40
    ::Firebase::Firestore::Future_FirestoreVoid::SWIG_CompletionDelegate* SWIG_CompletionCB;
    // Field size check
    static_assert(sizeof(::Firebase::Firestore::Future_FirestoreVoid::SWIG_CompletionDelegate*) == 0x8);
    public:
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Firestore.Future_FirestoreVoid/Firebase.Firestore.Action> Callbacks
    static ::System::Collections::Generic::Dictionary_2<int, ::Firebase::Firestore::Future_FirestoreVoid::Action*>* _get_Callbacks();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Firestore.Future_FirestoreVoid/Firebase.Firestore.Action> Callbacks
    static void _set_Callbacks(::System::Collections::Generic::Dictionary_2<int, ::Firebase::Firestore::Future_FirestoreVoid::Action*>* value);
    // Get static field: static private System.Int32 CallbackIndex
    static int _get_CallbackIndex();
    // Set static field: static private System.Int32 CallbackIndex
    static void _set_CallbackIndex(int value);
    // Get static field: static private System.Object CallbackLock
    static ::Il2CppObject* _get_CallbackLock();
    // Set static field: static private System.Object CallbackLock
    static void _set_CallbackLock(::Il2CppObject* value);
    // Get instance field reference: private System.Runtime.InteropServices.HandleRef swigCPtr
    [[deprecated]] ::System::Runtime::InteropServices::HandleRef& dyn_swigCPtr();
    // Get instance field reference: private System.IntPtr callbackData
    [[deprecated]] ::System::IntPtr& dyn_callbackData();
    // Get instance field reference: private Firebase.Firestore.Future_FirestoreVoid/Firebase.Firestore.SWIG_CompletionDelegate SWIG_CompletionCB
    [[deprecated]] ::Firebase::Firestore::Future_FirestoreVoid::SWIG_CompletionDelegate*& dyn_SWIG_CompletionCB();
    // static private System.Void .cctor()
    // Offset: 0xD60990
    static void _cctor();
    // static public System.Threading.Tasks.Task GetTask(Firebase.Firestore.Future_FirestoreVoid fu)
    // Offset: 0xD53728
    static ::System::Threading::Tasks::Task* GetTask(::Firebase::Firestore::Future_FirestoreVoid* fu);
    // private System.Void ThrowIfDisposed()
    // Offset: 0xD60584
    void ThrowIfDisposed();
    // public System.Void SetOnCompletionCallback(Firebase.Firestore.Future_FirestoreVoid/Firebase.Firestore.Action userCompletionCallback)
    // Offset: 0xD60348
    void SetOnCompletionCallback(::Firebase::Firestore::Future_FirestoreVoid::Action* userCompletionCallback);
    // private System.Void SetCompletionData(System.IntPtr data)
    // Offset: 0xD602FC
    void SetCompletionData(::System::IntPtr data);
    // static private System.Void SWIG_CompletionDispatcher(System.Int32 key)
    // Offset: 0xD5FF34
    static void SWIG_CompletionDispatcher(int key);
    // System.IntPtr SWIG_OnCompletion(Firebase.Firestore.Future_FirestoreVoid/Firebase.Firestore.SWIG_CompletionDelegate cs_callback, System.Int32 cs_key)
    // Offset: 0xD6062C
    ::System::IntPtr SWIG_OnCompletion(::Firebase::Firestore::Future_FirestoreVoid::SWIG_CompletionDelegate* cs_callback, int cs_key);
    // public System.Void SWIG_FreeCompletionData(System.IntPtr data)
    // Offset: 0xD606E0
    void SWIG_FreeCompletionData(::System::IntPtr data);
    // System.Void .ctor(System.IntPtr cPtr, System.Boolean cMemoryOwn)
    // Offset: 0xD53668
    // Implemented from: Firebase.FutureBase
    // Base method: System.Void FutureBase::.ctor(System.IntPtr cPtr, System.Boolean cMemoryOwn)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Future_FirestoreVoid* New_ctor(::System::IntPtr cPtr, bool cMemoryOwn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::Future_FirestoreVoid::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Future_FirestoreVoid*, creationType>(cPtr, cMemoryOwn)));
    }
    // protected override System.Void Finalize()
    // Offset: 0xD600D8
    // Implemented from: Firebase.FutureBase
    // Base method: System.Void FutureBase::Finalize()
    void Finalize();
    // public override System.Void Dispose()
    // Offset: 0xD60148
    // Implemented from: Firebase.FutureBase
    // Base method: System.Void FutureBase::Dispose()
    void Dispose();
  }; // Firebase.Firestore.Future_FirestoreVoid
  #pragma pack(pop)
  static check_size<sizeof(Future_FirestoreVoid), 64 + sizeof(::Firebase::Firestore::Future_FirestoreVoid::SWIG_CompletionDelegate*)> __Firebase_Firestore_Future_FirestoreVoidSizeCheck;
  static_assert(sizeof(Future_FirestoreVoid) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Firestore::Future_FirestoreVoid::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Firebase::Firestore::Future_FirestoreVoid::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::Future_FirestoreVoid*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::Future_FirestoreVoid::GetTask
// Il2CppName: GetTask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (*)(::Firebase::Firestore::Future_FirestoreVoid*)>(&Firebase::Firestore::Future_FirestoreVoid::GetTask)> {
  static const MethodInfo* get() {
    static auto* fu = &::il2cpp_utils::GetClassFromName("Firebase.Firestore", "Future_FirestoreVoid")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::Future_FirestoreVoid*), "GetTask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fu});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::Future_FirestoreVoid::ThrowIfDisposed
// Il2CppName: ThrowIfDisposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Firestore::Future_FirestoreVoid::*)()>(&Firebase::Firestore::Future_FirestoreVoid::ThrowIfDisposed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::Future_FirestoreVoid*), "ThrowIfDisposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::Future_FirestoreVoid::SetOnCompletionCallback
// Il2CppName: SetOnCompletionCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Firestore::Future_FirestoreVoid::*)(::Firebase::Firestore::Future_FirestoreVoid::Action*)>(&Firebase::Firestore::Future_FirestoreVoid::SetOnCompletionCallback)> {
  static const MethodInfo* get() {
    static auto* userCompletionCallback = &::il2cpp_utils::GetClassFromName("Firebase.Firestore", "Future_FirestoreVoid/Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::Future_FirestoreVoid*), "SetOnCompletionCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userCompletionCallback});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::Future_FirestoreVoid::SetCompletionData
// Il2CppName: SetCompletionData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Firestore::Future_FirestoreVoid::*)(::System::IntPtr)>(&Firebase::Firestore::Future_FirestoreVoid::SetCompletionData)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::Future_FirestoreVoid*), "SetCompletionData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::Future_FirestoreVoid::SWIG_CompletionDispatcher
// Il2CppName: SWIG_CompletionDispatcher
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&Firebase::Firestore::Future_FirestoreVoid::SWIG_CompletionDispatcher)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::Future_FirestoreVoid*), "SWIG_CompletionDispatcher", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::Future_FirestoreVoid::SWIG_OnCompletion
// Il2CppName: SWIG_OnCompletion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (Firebase::Firestore::Future_FirestoreVoid::*)(::Firebase::Firestore::Future_FirestoreVoid::SWIG_CompletionDelegate*, int)>(&Firebase::Firestore::Future_FirestoreVoid::SWIG_OnCompletion)> {
  static const MethodInfo* get() {
    static auto* cs_callback = &::il2cpp_utils::GetClassFromName("Firebase.Firestore", "Future_FirestoreVoid/SWIG_CompletionDelegate")->byval_arg;
    static auto* cs_key = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::Future_FirestoreVoid*), "SWIG_OnCompletion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cs_callback, cs_key});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::Future_FirestoreVoid::SWIG_FreeCompletionData
// Il2CppName: SWIG_FreeCompletionData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Firestore::Future_FirestoreVoid::*)(::System::IntPtr)>(&Firebase::Firestore::Future_FirestoreVoid::SWIG_FreeCompletionData)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::Future_FirestoreVoid*), "SWIG_FreeCompletionData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::Future_FirestoreVoid::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::Firestore::Future_FirestoreVoid::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Firestore::Future_FirestoreVoid::*)()>(&Firebase::Firestore::Future_FirestoreVoid::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::Future_FirestoreVoid*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::Future_FirestoreVoid::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Firestore::Future_FirestoreVoid::*)()>(&Firebase::Firestore::Future_FirestoreVoid::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::Future_FirestoreVoid*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
