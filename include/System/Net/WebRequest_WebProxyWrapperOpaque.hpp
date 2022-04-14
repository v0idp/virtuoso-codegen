// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.WebRequest
#include "System/Net/WebRequest.hpp"
// Including type: System.Net.IWebProxy
#include "System/Net/IWebProxy.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebProxy
  class WebProxy;
  // Forward declaring type: ICredentials
  class ICredentials;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::WebRequest::WebProxyWrapperOpaque);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebRequest::WebProxyWrapperOpaque*, "System.Net", "WebRequest/WebProxyWrapperOpaque");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebRequest/System.Net.WebProxyWrapperOpaque
  // [TokenAttribute] Offset: FFFFFFFF
  class WebRequest::WebProxyWrapperOpaque : public ::Il2CppObject/*, public ::System::Net::IWebProxy*/ {
    public:
    public:
    // protected readonly System.Net.WebProxy webProxy
    // Size: 0x8
    // Offset: 0x10
    ::System::Net::WebProxy* webProxy;
    // Field size check
    static_assert(sizeof(::System::Net::WebProxy*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Net::IWebProxy
    operator ::System::Net::IWebProxy() noexcept {
      return *reinterpret_cast<::System::Net::IWebProxy*>(this);
    }
    // Creating conversion operator: operator ::System::Net::WebProxy*
    constexpr operator ::System::Net::WebProxy*() const noexcept {
      return webProxy;
    }
    // Get instance field reference: protected readonly System.Net.WebProxy webProxy
    [[deprecated]] ::System::Net::WebProxy*& dyn_webProxy();
    // public System.Net.ICredentials get_Credentials()
    // Offset: 0xA09774
    ::System::Net::ICredentials* get_Credentials();
    // public System.Uri GetProxy(System.Uri destination)
    // Offset: 0xA0973C
    ::System::Uri* GetProxy(::System::Uri* destination);
    // public System.Boolean IsBypassed(System.Uri host)
    // Offset: 0xA09758
    bool IsBypassed(::System::Uri* host);
  }; // System.Net.WebRequest/System.Net.WebProxyWrapperOpaque
  #pragma pack(pop)
  static check_size<sizeof(WebRequest::WebProxyWrapperOpaque), 16 + sizeof(::System::Net::WebProxy*)> __System_Net_WebRequest_WebProxyWrapperOpaqueSizeCheck;
  static_assert(sizeof(WebRequest::WebProxyWrapperOpaque) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::WebRequest::WebProxyWrapperOpaque::get_Credentials
// Il2CppName: get_Credentials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ICredentials* (System::Net::WebRequest::WebProxyWrapperOpaque::*)()>(&System::Net::WebRequest::WebProxyWrapperOpaque::get_Credentials)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest::WebProxyWrapperOpaque*), "get_Credentials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::WebProxyWrapperOpaque::GetProxy
// Il2CppName: GetProxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (System::Net::WebRequest::WebProxyWrapperOpaque::*)(::System::Uri*)>(&System::Net::WebRequest::WebProxyWrapperOpaque::GetProxy)> {
  static const MethodInfo* get() {
    static auto* destination = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest::WebProxyWrapperOpaque*), "GetProxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{destination});
  }
};
// Writing MetadataGetter for method: System::Net::WebRequest::WebProxyWrapperOpaque::IsBypassed
// Il2CppName: IsBypassed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebRequest::WebProxyWrapperOpaque::*)(::System::Uri*)>(&System::Net::WebRequest::WebProxyWrapperOpaque::IsBypassed)> {
  static const MethodInfo* get() {
    static auto* host = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebRequest::WebProxyWrapperOpaque*), "IsBypassed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{host});
  }
};
