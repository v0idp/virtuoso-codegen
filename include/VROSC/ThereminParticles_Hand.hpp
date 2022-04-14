// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.ThereminParticles
#include "VROSC/ThereminParticles.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ParticleSystemForceField
  class ParticleSystemForceField;
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: InputDevice
  class InputDevice;
  // Forward declaring type: ControllerInputNode
  class ControllerInputNode;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::ThereminParticles::Hand);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ThereminParticles::Hand*, "VROSC", "ThereminParticles/Hand");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.ThereminParticles/VROSC.Hand
  // [TokenAttribute] Offset: FFFFFFFF
  class ThereminParticles::Hand : public ::Il2CppObject {
    public:
    public:
    // private UnityEngine.ParticleSystemForceField _forceField
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::ParticleSystemForceField* forceField;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystemForceField*) == 0x8);
    // private System.Boolean _isLeft
    // Size: 0x1
    // Offset: 0x18
    bool isLeft;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isLeft and: inputDevice
    char __padding1[0x7] = {};
    // private VROSC.InputDevice _inputDevice
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::InputDevice* inputDevice;
    // Field size check
    static_assert(sizeof(::VROSC::InputDevice*) == 0x8);
    // private System.Boolean _isHandInside
    // Size: 0x1
    // Offset: 0x28
    bool isHandInside;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isPlaying
    // Size: 0x1
    // Offset: 0x29
    bool isPlaying;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isPlaying and: initialEndRange
    char __padding4[0x2] = {};
    // private System.Single _initialEndRange
    // Size: 0x4
    // Offset: 0x2C
    float initialEndRange;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private VROSC.ControllerInputNode _input
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::ControllerInputNode* input;
    // Field size check
    static_assert(sizeof(::VROSC::ControllerInputNode*) == 0x8);
    // private System.Single _scaling
    // Size: 0x4
    // Offset: 0x38
    float scaling;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: scaling and: players
    char __padding7[0x4] = {};
    // private System.Collections.Generic.List`1<System.Object> _players
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::List_1<::Il2CppObject*>* players;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Il2CppObject*>*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.ParticleSystemForceField _forceField
    [[deprecated]] ::UnityEngine::ParticleSystemForceField*& dyn__forceField();
    // Get instance field reference: private System.Boolean _isLeft
    [[deprecated]] bool& dyn__isLeft();
    // Get instance field reference: private VROSC.InputDevice _inputDevice
    [[deprecated]] ::VROSC::InputDevice*& dyn__inputDevice();
    // Get instance field reference: private System.Boolean _isHandInside
    [[deprecated]] bool& dyn__isHandInside();
    // Get instance field reference: private System.Boolean _isPlaying
    [[deprecated]] bool& dyn__isPlaying();
    // Get instance field reference: private System.Single _initialEndRange
    [[deprecated]] float& dyn__initialEndRange();
    // Get instance field reference: private VROSC.ControllerInputNode _input
    [[deprecated]] ::VROSC::ControllerInputNode*& dyn__input();
    // Get instance field reference: private System.Single _scaling
    [[deprecated]] float& dyn__scaling();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Object> _players
    [[deprecated]] ::System::Collections::Generic::List_1<::Il2CppObject*>*& dyn__players();
    // public System.Void Setup(System.Boolean isLeft, VROSC.InputDevice inputDevice, VROSC.ControllerInputNode input)
    // Offset: 0x8DCAD0
    void Setup(bool isLeft, ::VROSC::InputDevice* inputDevice, ::VROSC::ControllerInputNode* input);
    // private System.Void HoverEnd(VROSC.InputDevice inputDevice)
    // Offset: 0x8DCC78
    void HoverEnd(::VROSC::InputDevice* inputDevice);
    // private System.Void HoverBegin(VROSC.InputDevice inputDevice)
    // Offset: 0x8DCCFC
    void HoverBegin(::VROSC::InputDevice* inputDevice);
    // public System.Void SetNewScale(System.Single scale)
    // Offset: 0x8DCD84
    void SetNewScale(float scale);
    // public System.Void ObjectIsPlaying(System.Boolean playing, System.Object source)
    // Offset: 0x8DCDC0
    void ObjectIsPlaying(bool playing, ::Il2CppObject* source);
    // private System.Void SetIsPlaying(System.Boolean playing)
    // Offset: 0x8DCC3C
    void SetIsPlaying(bool playing);
    // public System.Void Update()
    // Offset: 0x8DCEC8
    void Update();
    // public System.Void .ctor()
    // Offset: 0x8DD148
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ThereminParticles::Hand* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::ThereminParticles::Hand::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ThereminParticles::Hand*, creationType>()));
    }
  }; // VROSC.ThereminParticles/VROSC.Hand
  #pragma pack(pop)
  static check_size<sizeof(ThereminParticles::Hand), 64 + sizeof(::System::Collections::Generic::List_1<::Il2CppObject*>*)> __VROSC_ThereminParticles_HandSizeCheck;
  static_assert(sizeof(ThereminParticles::Hand) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::ThereminParticles::Hand::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ThereminParticles::Hand::*)(bool, ::VROSC::InputDevice*, ::VROSC::ControllerInputNode*)>(&VROSC::ThereminParticles::Hand::Setup)> {
  static const MethodInfo* get() {
    static auto* isLeft = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* inputDevice = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* input = &::il2cpp_utils::GetClassFromName("VROSC", "ControllerInputNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ThereminParticles::Hand*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isLeft, inputDevice, input});
  }
};
// Writing MetadataGetter for method: VROSC::ThereminParticles::Hand::HoverEnd
// Il2CppName: HoverEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ThereminParticles::Hand::*)(::VROSC::InputDevice*)>(&VROSC::ThereminParticles::Hand::HoverEnd)> {
  static const MethodInfo* get() {
    static auto* inputDevice = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ThereminParticles::Hand*), "HoverEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputDevice});
  }
};
// Writing MetadataGetter for method: VROSC::ThereminParticles::Hand::HoverBegin
// Il2CppName: HoverBegin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ThereminParticles::Hand::*)(::VROSC::InputDevice*)>(&VROSC::ThereminParticles::Hand::HoverBegin)> {
  static const MethodInfo* get() {
    static auto* inputDevice = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ThereminParticles::Hand*), "HoverBegin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputDevice});
  }
};
// Writing MetadataGetter for method: VROSC::ThereminParticles::Hand::SetNewScale
// Il2CppName: SetNewScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ThereminParticles::Hand::*)(float)>(&VROSC::ThereminParticles::Hand::SetNewScale)> {
  static const MethodInfo* get() {
    static auto* scale = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ThereminParticles::Hand*), "SetNewScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scale});
  }
};
// Writing MetadataGetter for method: VROSC::ThereminParticles::Hand::ObjectIsPlaying
// Il2CppName: ObjectIsPlaying
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ThereminParticles::Hand::*)(bool, ::Il2CppObject*)>(&VROSC::ThereminParticles::Hand::ObjectIsPlaying)> {
  static const MethodInfo* get() {
    static auto* playing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* source = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ThereminParticles::Hand*), "ObjectIsPlaying", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playing, source});
  }
};
// Writing MetadataGetter for method: VROSC::ThereminParticles::Hand::SetIsPlaying
// Il2CppName: SetIsPlaying
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ThereminParticles::Hand::*)(bool)>(&VROSC::ThereminParticles::Hand::SetIsPlaying)> {
  static const MethodInfo* get() {
    static auto* playing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::ThereminParticles::Hand*), "SetIsPlaying", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playing});
  }
};
// Writing MetadataGetter for method: VROSC::ThereminParticles::Hand::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ThereminParticles::Hand::*)()>(&VROSC::ThereminParticles::Hand::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ThereminParticles::Hand*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ThereminParticles::Hand::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
