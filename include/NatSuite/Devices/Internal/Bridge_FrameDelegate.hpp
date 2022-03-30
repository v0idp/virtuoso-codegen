// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NatSuite.Devices.Internal.Bridge
#include "NatSuite/Devices/Internal/Bridge.hpp"
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
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NatSuite::Devices::Internal::Bridge::FrameDelegate);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::Internal::Bridge::FrameDelegate*, "NatSuite.Devices.Internal", "Bridge/FrameDelegate");
// Type namespace: NatSuite.Devices.Internal
namespace NatSuite::Devices::Internal {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: NatSuite.Devices.Internal.Bridge/NatSuite.Devices.Internal.FrameDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class Bridge::FrameDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x135B970
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Bridge::FrameDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::NatSuite::Devices::Internal::Bridge::FrameDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Bridge::FrameDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.IntPtr context, System.IntPtr pixelBuffer, System.Int32 width, System.Int32 height, System.Int64 timestamp)
    // Offset: 0x135B980
    void Invoke(::System::IntPtr context, ::System::IntPtr pixelBuffer, int width, int height, int64_t timestamp);
    // public System.IAsyncResult BeginInvoke(System.IntPtr context, System.IntPtr pixelBuffer, System.Int32 width, System.Int32 height, System.Int64 timestamp, System.AsyncCallback callback, System.Object object)
    // Offset: 0x135BC04
    ::System::IAsyncResult* BeginInvoke(::System::IntPtr context, ::System::IntPtr pixelBuffer, int width, int height, int64_t timestamp, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x135BD10
    void EndInvoke(::System::IAsyncResult* result);
  }; // NatSuite.Devices.Internal.Bridge/NatSuite.Devices.Internal.FrameDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NatSuite::Devices::Internal::Bridge::FrameDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NatSuite::Devices::Internal::Bridge::FrameDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NatSuite::Devices::Internal::Bridge::FrameDelegate::*)(::System::IntPtr, ::System::IntPtr, int, int, int64_t)>(&NatSuite::Devices::Internal::Bridge::FrameDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* pixelBuffer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* timestamp = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Devices::Internal::Bridge::FrameDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, pixelBuffer, width, height, timestamp});
  }
};
// Writing MetadataGetter for method: NatSuite::Devices::Internal::Bridge::FrameDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (NatSuite::Devices::Internal::Bridge::FrameDelegate::*)(::System::IntPtr, ::System::IntPtr, int, int, int64_t, ::System::AsyncCallback*, ::Il2CppObject*)>(&NatSuite::Devices::Internal::Bridge::FrameDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* pixelBuffer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* timestamp = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Devices::Internal::Bridge::FrameDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, pixelBuffer, width, height, timestamp, callback, object});
  }
};
// Writing MetadataGetter for method: NatSuite::Devices::Internal::Bridge::FrameDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NatSuite::Devices::Internal::Bridge::FrameDelegate::*)(::System::IAsyncResult*)>(&NatSuite::Devices::Internal::Bridge::FrameDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Devices::Internal::Bridge::FrameDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
