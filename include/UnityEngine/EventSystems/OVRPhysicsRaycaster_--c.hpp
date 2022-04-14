// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.OVRPhysicsRaycaster
#include "UnityEngine/EventSystems/OVRPhysicsRaycaster.hpp"
// Including type: UnityEngine.RaycastHit
#include "UnityEngine/RaycastHit.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::EventSystems::OVRPhysicsRaycaster::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::OVRPhysicsRaycaster::$$c*, "UnityEngine.EventSystems", "OVRPhysicsRaycaster/<>c");
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.OVRPhysicsRaycaster/UnityEngine.EventSystems.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class OVRPhysicsRaycaster::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.EventSystems.OVRPhysicsRaycaster/UnityEngine.EventSystems.<>c <>9
    static ::UnityEngine::EventSystems::OVRPhysicsRaycaster::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.EventSystems.OVRPhysicsRaycaster/UnityEngine.EventSystems.<>c <>9
    static void _set_$$9(::UnityEngine::EventSystems::OVRPhysicsRaycaster::$$c* value);
    // Get static field: static public System.Comparison`1<UnityEngine.RaycastHit> <>9__15_0
    static ::System::Comparison_1<::UnityEngine::RaycastHit>* _get_$$9__15_0();
    // Set static field: static public System.Comparison`1<UnityEngine.RaycastHit> <>9__15_0
    static void _set_$$9__15_0(::System::Comparison_1<::UnityEngine::RaycastHit>* value);
    // Get static field: static public System.Comparison`1<UnityEngine.RaycastHit> <>9__16_0
    static ::System::Comparison_1<::UnityEngine::RaycastHit>* _get_$$9__16_0();
    // Set static field: static public System.Comparison`1<UnityEngine.RaycastHit> <>9__16_0
    static void _set_$$9__16_0(::System::Comparison_1<::UnityEngine::RaycastHit>* value);
    // static private System.Void .cctor()
    // Offset: 0x855A10
    static void _cctor();
    // System.Int32 <Raycast>b__15_0(UnityEngine.RaycastHit r1, UnityEngine.RaycastHit r2)
    // Offset: 0x855A78
    int $Raycast$b__15_0(::UnityEngine::RaycastHit r1, ::UnityEngine::RaycastHit r2);
    // System.Int32 <Spherecast>b__16_0(UnityEngine.RaycastHit r1, UnityEngine.RaycastHit r2)
    // Offset: 0x855ABC
    int $Spherecast$b__16_0(::UnityEngine::RaycastHit r1, ::UnityEngine::RaycastHit r2);
    // public System.Void .ctor()
    // Offset: 0x855A70
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRPhysicsRaycaster::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::EventSystems::OVRPhysicsRaycaster::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRPhysicsRaycaster::$$c*, creationType>()));
    }
  }; // UnityEngine.EventSystems.OVRPhysicsRaycaster/UnityEngine.EventSystems.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::EventSystems::OVRPhysicsRaycaster::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::EventSystems::OVRPhysicsRaycaster::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::OVRPhysicsRaycaster::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::OVRPhysicsRaycaster::$$c::$Raycast$b__15_0
// Il2CppName: <Raycast>b__15_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::EventSystems::OVRPhysicsRaycaster::$$c::*)(::UnityEngine::RaycastHit, ::UnityEngine::RaycastHit)>(&UnityEngine::EventSystems::OVRPhysicsRaycaster::$$c::$Raycast$b__15_0)> {
  static const MethodInfo* get() {
    static auto* r1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit")->byval_arg;
    static auto* r2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::OVRPhysicsRaycaster::$$c*), "<Raycast>b__15_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r1, r2});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::OVRPhysicsRaycaster::$$c::$Spherecast$b__16_0
// Il2CppName: <Spherecast>b__16_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::EventSystems::OVRPhysicsRaycaster::$$c::*)(::UnityEngine::RaycastHit, ::UnityEngine::RaycastHit)>(&UnityEngine::EventSystems::OVRPhysicsRaycaster::$$c::$Spherecast$b__16_0)> {
  static const MethodInfo* get() {
    static auto* r1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit")->byval_arg;
    static auto* r2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::OVRPhysicsRaycaster::$$c*), "<Spherecast>b__16_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r1, r2});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::OVRPhysicsRaycaster::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
