// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Contexts
namespace System::Runtime::Remoting::Contexts {
  // Forward declaring type: IDynamicMessageSink
  class IDynamicMessageSink;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Contexts
namespace System::Runtime::Remoting::Contexts {
  // Forward declaring type: IContributeDynamicSink
  class IContributeDynamicSink;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Contexts::IContributeDynamicSink);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Contexts::IContributeDynamicSink*, "System.Runtime.Remoting.Contexts", "IContributeDynamicSink");
// Type namespace: System.Runtime.Remoting.Contexts
namespace System::Runtime::Remoting::Contexts {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Contexts.IContributeDynamicSink
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 57C0B0
  class IContributeDynamicSink {
    public:
    // public System.Runtime.Remoting.Contexts.IDynamicMessageSink GetDynamicSink()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Runtime::Remoting::Contexts::IDynamicMessageSink* GetDynamicSink();
  }; // System.Runtime.Remoting.Contexts.IContributeDynamicSink
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Contexts::IContributeDynamicSink::GetDynamicSink
// Il2CppName: GetDynamicSink
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Contexts::IDynamicMessageSink* (System::Runtime::Remoting::Contexts::IContributeDynamicSink::*)()>(&System::Runtime::Remoting::Contexts::IContributeDynamicSink::GetDynamicSink)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Contexts::IContributeDynamicSink*), "GetDynamicSink", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
