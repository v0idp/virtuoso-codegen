// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Forward declaring type: SendOrPostCallback
  class SendOrPostCallback;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Threading::SendOrPostCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::SendOrPostCallback*, "System.Threading", "SendOrPostCallback");
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.SendOrPostCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class SendOrPostCallback : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x117783C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SendOrPostCallback* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::SendOrPostCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SendOrPostCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Object state)
    // Offset: 0x117784C
    void Invoke(::Il2CppObject* state);
    // public System.IAsyncResult BeginInvoke(System.Object state, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1177BC0
    ::System::IAsyncResult* BeginInvoke(::Il2CppObject* state, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1177BE4
    void EndInvoke(::System::IAsyncResult* result);
  }; // System.Threading.SendOrPostCallback
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::SendOrPostCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::SendOrPostCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::SendOrPostCallback::*)(::Il2CppObject*)>(&System::Threading::SendOrPostCallback::Invoke)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SendOrPostCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: System::Threading::SendOrPostCallback::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::Threading::SendOrPostCallback::*)(::Il2CppObject*, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::Threading::SendOrPostCallback::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SendOrPostCallback*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state, callback, object});
  }
};
// Writing MetadataGetter for method: System::Threading::SendOrPostCallback::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::SendOrPostCallback::*)(::System::IAsyncResult*)>(&System::Threading::SendOrPostCallback::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SendOrPostCallback*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
