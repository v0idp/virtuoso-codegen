// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.Sockets.SocketTaskExtensions
#include "System/Net/Sockets/SocketTaskExtensions.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`4<T1, T2, T3, TResult>
  template<typename T1, typename T2, typename T3, typename TResult>
  class Func_4;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: EndPoint
  class EndPoint;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Sockets::SocketTaskExtensions::$$c);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::SocketTaskExtensions::$$c*, "System.Net.Sockets", "SocketTaskExtensions/<>c");
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Sockets.SocketTaskExtensions/System.Net.Sockets.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SocketTaskExtensions::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Net.Sockets.SocketTaskExtensions/System.Net.Sockets.<>c <>9
    static ::System::Net::Sockets::SocketTaskExtensions::$$c* _get_$$9();
    // Set static field: static public readonly System.Net.Sockets.SocketTaskExtensions/System.Net.Sockets.<>c <>9
    static void _set_$$9(::System::Net::Sockets::SocketTaskExtensions::$$c* value);
    // Get static field: static public System.Func`4<System.Net.EndPoint,System.AsyncCallback,System.Object,System.IAsyncResult> <>9__2_0
    static ::System::Func_4<::System::Net::EndPoint*, ::System::AsyncCallback*, ::Il2CppObject*, ::System::IAsyncResult*>* _get_$$9__2_0();
    // Set static field: static public System.Func`4<System.Net.EndPoint,System.AsyncCallback,System.Object,System.IAsyncResult> <>9__2_0
    static void _set_$$9__2_0(::System::Func_4<::System::Net::EndPoint*, ::System::AsyncCallback*, ::Il2CppObject*, ::System::IAsyncResult*>* value);
    // Get static field: static public System.Action`1<System.IAsyncResult> <>9__2_1
    static ::System::Action_1<::System::IAsyncResult*>* _get_$$9__2_1();
    // Set static field: static public System.Action`1<System.IAsyncResult> <>9__2_1
    static void _set_$$9__2_1(::System::Action_1<::System::IAsyncResult*>* value);
    // static private System.Void .cctor()
    // Offset: 0x8E5228
    static void _cctor();
    // System.IAsyncResult <ConnectAsync>b__2_0(System.Net.EndPoint targetEndPoint, System.AsyncCallback callback, System.Object state)
    // Offset: 0x8E5290
    ::System::IAsyncResult* $ConnectAsync$b__2_0(::System::Net::EndPoint* targetEndPoint, ::System::AsyncCallback* callback, ::Il2CppObject* state);
    // System.Void <ConnectAsync>b__2_1(System.IAsyncResult asyncResult)
    // Offset: 0x8E5334
    void $ConnectAsync$b__2_1(::System::IAsyncResult* asyncResult);
    // public System.Void .ctor()
    // Offset: 0x8E5288
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SocketTaskExtensions::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Sockets::SocketTaskExtensions::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SocketTaskExtensions::$$c*, creationType>()));
    }
  }; // System.Net.Sockets.SocketTaskExtensions/System.Net.Sockets.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Sockets::SocketTaskExtensions::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::Sockets::SocketTaskExtensions::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketTaskExtensions::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketTaskExtensions::$$c::$ConnectAsync$b__2_0
// Il2CppName: <ConnectAsync>b__2_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::Net::Sockets::SocketTaskExtensions::$$c::*)(::System::Net::EndPoint*, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::Net::Sockets::SocketTaskExtensions::$$c::$ConnectAsync$b__2_0)> {
  static const MethodInfo* get() {
    static auto* targetEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "EndPoint")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketTaskExtensions::$$c*), "<ConnectAsync>b__2_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetEndPoint, callback, state});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketTaskExtensions::$$c::$ConnectAsync$b__2_1
// Il2CppName: <ConnectAsync>b__2_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketTaskExtensions::$$c::*)(::System::IAsyncResult*)>(&System::Net::Sockets::SocketTaskExtensions::$$c::$ConnectAsync$b__2_1)> {
  static const MethodInfo* get() {
    static auto* asyncResult = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketTaskExtensions::$$c*), "<ConnectAsync>b__2_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncResult});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketTaskExtensions::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
