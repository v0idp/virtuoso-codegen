// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessageSink
  class IMessageSink;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: IEnvoyInfo
  class IEnvoyInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::IEnvoyInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::IEnvoyInfo*, "System.Runtime.Remoting", "IEnvoyInfo");
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.IEnvoyInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 57BE90
  class IEnvoyInfo {
    public:
    // public System.Runtime.Remoting.Messaging.IMessageSink get_EnvoySinks()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Runtime::Remoting::Messaging::IMessageSink* get_EnvoySinks();
  }; // System.Runtime.Remoting.IEnvoyInfo
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::IEnvoyInfo::get_EnvoySinks
// Il2CppName: get_EnvoySinks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessageSink* (System::Runtime::Remoting::IEnvoyInfo::*)()>(&System::Runtime::Remoting::IEnvoyInfo::get_EnvoySinks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::IEnvoyInfo*), "get_EnvoySinks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
