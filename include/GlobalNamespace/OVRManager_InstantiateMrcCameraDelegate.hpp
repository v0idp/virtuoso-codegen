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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MrcCameraType
  struct OVRManager_MrcCameraType;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: InstantiateMrcCameraDelegate
  class OVRManager_InstantiateMrcCameraDelegate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*, "", "OVRManager/InstantiateMrcCameraDelegate");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVRManager/InstantiateMrcCameraDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRManager_InstantiateMrcCameraDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x8528B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRManager_InstantiateMrcCameraDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRManager_InstantiateMrcCameraDelegate*, creationType>(object, method)));
    }
    // public UnityEngine.GameObject Invoke(UnityEngine.GameObject mainCameraGameObject, OVRManager/MrcCameraType cameraType)
    // Offset: 0x8528C0
    ::UnityEngine::GameObject* Invoke(::UnityEngine::GameObject* mainCameraGameObject, ::GlobalNamespace::OVRManager_MrcCameraType cameraType);
    // public System.IAsyncResult BeginInvoke(UnityEngine.GameObject mainCameraGameObject, OVRManager/MrcCameraType cameraType, System.AsyncCallback callback, System.Object object)
    // Offset: 0x852C58
    ::System::IAsyncResult* BeginInvoke(::UnityEngine::GameObject* mainCameraGameObject, ::GlobalNamespace::OVRManager_MrcCameraType cameraType, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public UnityEngine.GameObject EndInvoke(System.IAsyncResult result)
    // Offset: 0x852CF0
    ::UnityEngine::GameObject* EndInvoke(::System::IAsyncResult* result);
  }; // OVRManager/InstantiateMrcCameraDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate::*)(::UnityEngine::GameObject*, ::GlobalNamespace::OVRManager_MrcCameraType)>(&GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* mainCameraGameObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* cameraType = &::il2cpp_utils::GetClassFromName("", "OVRManager/MrcCameraType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mainCameraGameObject, cameraType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate::*)(::UnityEngine::GameObject*, ::GlobalNamespace::OVRManager_MrcCameraType, ::System::AsyncCallback*, ::Il2CppObject*)>(&GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* mainCameraGameObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* cameraType = &::il2cpp_utils::GetClassFromName("", "OVRManager/MrcCameraType")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mainCameraGameObject, cameraType, callback, object});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate::*)(::System::IAsyncResult*)>(&GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
