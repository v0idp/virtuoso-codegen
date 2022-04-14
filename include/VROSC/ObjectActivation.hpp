// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: ObjectActivation
  class ObjectActivation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::ObjectActivation);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ObjectActivation*, "VROSC", "ObjectActivation");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.ObjectActivation
  // [TokenAttribute] Offset: FFFFFFFF
  class ObjectActivation : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Collections.Generic.List`1<UnityEngine.GameObject> _gameObjects
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* gameObjects;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.GameObject> _gameObjects
    [[deprecated]] ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*& dyn__gameObjects();
    // public System.Collections.Generic.List`1<UnityEngine.GameObject> get_GameObjects()
    // Offset: 0xC637C0
    ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* get_GameObjects();
    // public System.Void ActivateByPercentage(System.Single percentage)
    // Offset: 0xC637C8
    void ActivateByPercentage(float percentage);
    // public System.Void .ctor()
    // Offset: 0xC63918
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectActivation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::ObjectActivation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectActivation*, creationType>()));
    }
  }; // VROSC.ObjectActivation
  #pragma pack(pop)
  static check_size<sizeof(ObjectActivation), 24 + sizeof(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*)> __VROSC_ObjectActivationSizeCheck;
  static_assert(sizeof(ObjectActivation) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::ObjectActivation::get_GameObjects
// Il2CppName: get_GameObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* (VROSC::ObjectActivation::*)()>(&VROSC::ObjectActivation::get_GameObjects)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ObjectActivation*), "get_GameObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ObjectActivation::ActivateByPercentage
// Il2CppName: ActivateByPercentage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ObjectActivation::*)(float)>(&VROSC::ObjectActivation::ActivateByPercentage)> {
  static const MethodInfo* get() {
    static auto* percentage = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ObjectActivation*), "ActivateByPercentage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{percentage});
  }
};
// Writing MetadataGetter for method: VROSC::ObjectActivation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
