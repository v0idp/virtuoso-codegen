// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.CullingGroup
#include "UnityEngine/CullingGroup.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CullingGroupEvent
  struct CullingGroupEvent;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::CullingGroup::StateChanged);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CullingGroup::StateChanged*, "UnityEngine", "CullingGroup/StateChanged");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.CullingGroup/UnityEngine.StateChanged
  // [TokenAttribute] Offset: FFFFFFFF
  class CullingGroup::StateChanged : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1842734
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CullingGroup::StateChanged* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::CullingGroup::StateChanged::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CullingGroup::StateChanged*, creationType>(object, method)));
    }
    // public System.Void Invoke(UnityEngine.CullingGroupEvent sphere)
    // Offset: 0x1842744
    void Invoke(::UnityEngine::CullingGroupEvent sphere);
    // public System.IAsyncResult BeginInvoke(UnityEngine.CullingGroupEvent sphere, System.AsyncCallback callback, System.Object object)
    // Offset: 0x184298C
    ::System::IAsyncResult* BeginInvoke(::UnityEngine::CullingGroupEvent sphere, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1842A14
    void EndInvoke(::System::IAsyncResult* result);
  }; // UnityEngine.CullingGroup/UnityEngine.StateChanged
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::CullingGroup::StateChanged::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::CullingGroup::StateChanged::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CullingGroup::StateChanged::*)(::UnityEngine::CullingGroupEvent)>(&UnityEngine::CullingGroup::StateChanged::Invoke)> {
  static const MethodInfo* get() {
    static auto* sphere = &::il2cpp_utils::GetClassFromName("UnityEngine", "CullingGroupEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CullingGroup::StateChanged*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sphere});
  }
};
// Writing MetadataGetter for method: UnityEngine::CullingGroup::StateChanged::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (UnityEngine::CullingGroup::StateChanged::*)(::UnityEngine::CullingGroupEvent, ::System::AsyncCallback*, ::Il2CppObject*)>(&UnityEngine::CullingGroup::StateChanged::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* sphere = &::il2cpp_utils::GetClassFromName("UnityEngine", "CullingGroupEvent")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CullingGroup::StateChanged*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sphere, callback, object});
  }
};
// Writing MetadataGetter for method: UnityEngine::CullingGroup::StateChanged::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CullingGroup::StateChanged::*)(::System::IAsyncResult*)>(&UnityEngine::CullingGroup::StateChanged::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CullingGroup::StateChanged*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
