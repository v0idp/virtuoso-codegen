// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Security.Cryptography.RSAManaged
#include "Mono/Security/Cryptography/RSAManaged_.hpp"
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
  // Forward declaring type: EventArgs
  class EventArgs;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::Cryptography::RSAManaged_::KeyGeneratedEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::RSAManaged_::KeyGeneratedEventHandler*, "Mono.Security.Cryptography", "RSAManaged/KeyGeneratedEventHandler");
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Cryptography.RSAManaged/Mono.Security.Cryptography.KeyGeneratedEventHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class RSAManaged_::KeyGeneratedEventHandler : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xE57D10
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RSAManaged_::KeyGeneratedEventHandler* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::Cryptography::RSAManaged_::KeyGeneratedEventHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RSAManaged_::KeyGeneratedEventHandler*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Object sender, System.EventArgs e)
    // Offset: 0xE57D20
    void Invoke(::Il2CppObject* sender, ::System::EventArgs* e);
    // public System.IAsyncResult BeginInvoke(System.Object sender, System.EventArgs e, System.AsyncCallback callback, System.Object object)
    // Offset: 0xE580B0
    ::System::IAsyncResult* BeginInvoke(::Il2CppObject* sender, ::System::EventArgs* e, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0xE580E0
    void EndInvoke(::System::IAsyncResult* result);
  }; // Mono.Security.Cryptography.RSAManaged/Mono.Security.Cryptography.KeyGeneratedEventHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Cryptography::RSAManaged_::KeyGeneratedEventHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Cryptography::RSAManaged_::KeyGeneratedEventHandler::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::RSAManaged_::KeyGeneratedEventHandler::*)(::Il2CppObject*, ::System::EventArgs*)>(&Mono::Security::Cryptography::RSAManaged_::KeyGeneratedEventHandler::Invoke)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System", "EventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::RSAManaged_::KeyGeneratedEventHandler*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::RSAManaged_::KeyGeneratedEventHandler::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Mono::Security::Cryptography::RSAManaged_::KeyGeneratedEventHandler::*)(::Il2CppObject*, ::System::EventArgs*, ::System::AsyncCallback*, ::Il2CppObject*)>(&Mono::Security::Cryptography::RSAManaged_::KeyGeneratedEventHandler::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System", "EventArgs")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::RSAManaged_::KeyGeneratedEventHandler*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e, callback, object});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::RSAManaged_::KeyGeneratedEventHandler::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::RSAManaged_::KeyGeneratedEventHandler::*)(::System::IAsyncResult*)>(&Mono::Security::Cryptography::RSAManaged_::KeyGeneratedEventHandler::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::RSAManaged_::KeyGeneratedEventHandler*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
