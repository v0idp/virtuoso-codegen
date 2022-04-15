// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Net.CFNetwork
#include "Mono/Net/CFNetwork.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Net::CFNetwork::GetProxyData);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::CFNetwork::GetProxyData*, "Mono.Net", "CFNetwork/GetProxyData");
// Type namespace: Mono.Net
namespace Mono::Net {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.CFNetwork/Mono.Net.GetProxyData
  // [TokenAttribute] Offset: FFFFFFFF
  class CFNetwork::GetProxyData : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // public System.IntPtr script
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr script;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // public System.IntPtr targetUri
    // Size: 0x8
    // Offset: 0x18
    ::System::IntPtr targetUri;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // public System.IntPtr error
    // Size: 0x8
    // Offset: 0x20
    ::System::IntPtr error;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // public System.IntPtr result
    // Size: 0x8
    // Offset: 0x28
    ::System::IntPtr result;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // public System.Threading.ManualResetEvent evt
    // Size: 0x8
    // Offset: 0x30
    ::System::Threading::ManualResetEvent* evt;
    // Field size check
    static_assert(sizeof(::System::Threading::ManualResetEvent*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: public System.IntPtr script
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_script();
    // Get instance field reference: public System.IntPtr targetUri
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_targetUri();
    // Get instance field reference: public System.IntPtr error
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_error();
    // Get instance field reference: public System.IntPtr result
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_result();
    // Get instance field reference: public System.Threading.ManualResetEvent evt
    [[deprecated("Use field access instead!")]] ::System::Threading::ManualResetEvent*& dyn_evt();
    // public System.Void .ctor()
    // Offset: 0x9F4C58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CFNetwork::GetProxyData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Net::CFNetwork::GetProxyData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CFNetwork::GetProxyData*, creationType>()));
    }
    // public System.Void Dispose()
    // Offset: 0x9F4C34
    void Dispose();
  }; // Mono.Net.CFNetwork/Mono.Net.GetProxyData
  #pragma pack(pop)
  static check_size<sizeof(CFNetwork::GetProxyData), 48 + sizeof(::System::Threading::ManualResetEvent*)> __Mono_Net_CFNetwork_GetProxyDataSizeCheck;
  static_assert(sizeof(CFNetwork::GetProxyData) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Net::CFNetwork::GetProxyData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Net::CFNetwork::GetProxyData::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Net::CFNetwork::GetProxyData::*)()>(&Mono::Net::CFNetwork::GetProxyData::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFNetwork::GetProxyData*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
