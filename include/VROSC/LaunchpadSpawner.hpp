// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.Grabable
#include "VROSC/Grabable.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: Launchpad
  class Launchpad;
  // Forward declaring type: TransformDataController
  class TransformDataController;
  // Forward declaring type: GrabData
  class GrabData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: LaunchpadSpawner
  class LaunchpadSpawner;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::LaunchpadSpawner);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LaunchpadSpawner*, "VROSC", "LaunchpadSpawner");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0xE8
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.LaunchpadSpawner
  // [TokenAttribute] Offset: FFFFFFFF
  class LaunchpadSpawner : public ::VROSC::Grabable {
    public:
    // Writing base type padding for base size: 0x69 to desired offset: 0x70
    char ___base_padding[0x7] = {};
    public:
    // private VROSC.Launchpad _launchpadPrefab
    // Size: 0x8
    // Offset: 0x70
    ::VROSC::Launchpad* launchpadPrefab;
    // Field size check
    static_assert(sizeof(::VROSC::Launchpad*) == 0x8);
    // private UnityEngine.Transform _spawnPoint
    // Size: 0x8
    // Offset: 0x78
    ::UnityEngine::Transform* spawnPoint;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Collections.Generic.List`1<VROSC.Launchpad> _spawnedLaunchPads
    // Size: 0x8
    // Offset: 0x80
    ::System::Collections::Generic::List_1<::VROSC::Launchpad*>* spawnedLaunchPads;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::VROSC::Launchpad*>*) == 0x8);
    // public System.Action`1<VROSC.Launchpad> OnLaunchPadCreated
    // Size: 0x8
    // Offset: 0x88
    ::System::Action_1<::VROSC::Launchpad*>* OnLaunchPadCreated;
    // Field size check
    static_assert(sizeof(::System::Action_1<::VROSC::Launchpad*>*) == 0x8);
    // public System.Action`1<VROSC.Launchpad> OnLaunchPadMoved
    // Size: 0x8
    // Offset: 0x90
    ::System::Action_1<::VROSC::Launchpad*>* OnLaunchPadMoved;
    // Field size check
    static_assert(sizeof(::System::Action_1<::VROSC::Launchpad*>*) == 0x8);
    // public System.Action`1<VROSC.Launchpad> OnLaunchPadDeleted
    // Size: 0x8
    // Offset: 0x98
    ::System::Action_1<::VROSC::Launchpad*>* OnLaunchPadDeleted;
    // Field size check
    static_assert(sizeof(::System::Action_1<::VROSC::Launchpad*>*) == 0x8);
    // public System.Action`1<VROSC.Launchpad> OnLaunchPadHit
    // Size: 0x8
    // Offset: 0xA0
    ::System::Action_1<::VROSC::Launchpad*>* OnLaunchPadHit;
    // Field size check
    static_assert(sizeof(::System::Action_1<::VROSC::Launchpad*>*) == 0x8);
    // public System.Action`1<UnityEngine.Color> OnTargetColorChanged
    // Size: 0x8
    // Offset: 0xA8
    ::System::Action_1<::UnityEngine::Color>* OnTargetColorChanged;
    // Field size check
    static_assert(sizeof(::System::Action_1<::UnityEngine::Color>*) == 0x8);
    // public System.Action`1<System.String> OnTargetNameChanged
    // Size: 0x8
    // Offset: 0xB0
    ::System::Action_1<::StringW>* OnTargetNameChanged;
    // Field size check
    static_assert(sizeof(::System::Action_1<::StringW>*) == 0x8);
    // private System.String <CurrentName>k__BackingField
    // Size: 0x8
    // Offset: 0xB8
    ::StringW CurrentName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private UnityEngine.Color <CurrentColor>k__BackingField
    // Size: 0x10
    // Offset: 0xC0
    ::UnityEngine::Color CurrentColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.String _targetID
    // Size: 0x8
    // Offset: 0xD0
    ::StringW targetID;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private UnityEngine.Transform _launchPadParent
    // Size: 0x8
    // Offset: 0xD8
    ::UnityEngine::Transform* launchPadParent;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private VROSC.Launchpad _currentlyHeldLaunchpad
    // Size: 0x8
    // Offset: 0xE0
    ::VROSC::Launchpad* currentlyHeldLaunchpad;
    // Field size check
    static_assert(sizeof(::VROSC::Launchpad*) == 0x8);
    public:
    // Get instance field reference: private VROSC.Launchpad _launchpadPrefab
    [[deprecated("Use field access instead!")]] ::VROSC::Launchpad*& dyn__launchpadPrefab();
    // Get instance field reference: private UnityEngine.Transform _spawnPoint
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__spawnPoint();
    // Get instance field reference: private System.Collections.Generic.List`1<VROSC.Launchpad> _spawnedLaunchPads
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::VROSC::Launchpad*>*& dyn__spawnedLaunchPads();
    // Get instance field reference: public System.Action`1<VROSC.Launchpad> OnLaunchPadCreated
    [[deprecated("Use field access instead!")]] ::System::Action_1<::VROSC::Launchpad*>*& dyn_OnLaunchPadCreated();
    // Get instance field reference: public System.Action`1<VROSC.Launchpad> OnLaunchPadMoved
    [[deprecated("Use field access instead!")]] ::System::Action_1<::VROSC::Launchpad*>*& dyn_OnLaunchPadMoved();
    // Get instance field reference: public System.Action`1<VROSC.Launchpad> OnLaunchPadDeleted
    [[deprecated("Use field access instead!")]] ::System::Action_1<::VROSC::Launchpad*>*& dyn_OnLaunchPadDeleted();
    // Get instance field reference: public System.Action`1<VROSC.Launchpad> OnLaunchPadHit
    [[deprecated("Use field access instead!")]] ::System::Action_1<::VROSC::Launchpad*>*& dyn_OnLaunchPadHit();
    // Get instance field reference: public System.Action`1<UnityEngine.Color> OnTargetColorChanged
    [[deprecated("Use field access instead!")]] ::System::Action_1<::UnityEngine::Color>*& dyn_OnTargetColorChanged();
    // Get instance field reference: public System.Action`1<System.String> OnTargetNameChanged
    [[deprecated("Use field access instead!")]] ::System::Action_1<::StringW>*& dyn_OnTargetNameChanged();
    // Get instance field reference: private System.String <CurrentName>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$CurrentName$k__BackingField();
    // Get instance field reference: private UnityEngine.Color <CurrentColor>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_$CurrentColor$k__BackingField();
    // Get instance field reference: private System.String _targetID
    [[deprecated("Use field access instead!")]] ::StringW& dyn__targetID();
    // Get instance field reference: private UnityEngine.Transform _launchPadParent
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__launchPadParent();
    // Get instance field reference: private VROSC.Launchpad _currentlyHeldLaunchpad
    [[deprecated("Use field access instead!")]] ::VROSC::Launchpad*& dyn__currentlyHeldLaunchpad();
    // public System.String get_CurrentName()
    // Offset: 0x194EBC4
    ::StringW get_CurrentName();
    // private System.Void set_CurrentName(System.String value)
    // Offset: 0x194EBBC
    void set_CurrentName(::StringW value);
    // public UnityEngine.Color get_CurrentColor()
    // Offset: 0x194EBD8
    ::UnityEngine::Color get_CurrentColor();
    // private System.Void set_CurrentColor(UnityEngine.Color value)
    // Offset: 0x194EBCC
    void set_CurrentColor(::UnityEngine::Color value);
    // public System.Void Setup(System.String targetID, UnityEngine.Transform launchPadParent, System.String displayName)
    // Offset: 0x194EBE4
    void Setup(::StringW targetID, ::UnityEngine::Transform* launchPadParent, ::StringW displayName);
    // private VROSC.Launchpad SpawnLaunchpad(System.String padID, UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Vector3 localScale)
    // Offset: 0x194EEBC
    ::VROSC::Launchpad* SpawnLaunchpad(::StringW padID, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 localScale);
    // private System.Void LaunchPadHit(VROSC.Launchpad launchpad)
    // Offset: 0x194F1B0
    void LaunchPadHit(::VROSC::Launchpad* launchpad);
    // private System.Void LaunchPadMoved(VROSC.Launchpad launchpad)
    // Offset: 0x194F220
    void LaunchPadMoved(::VROSC::Launchpad* launchpad);
    // private System.Void LaunchPadDeleted(VROSC.Launchpad launchpad)
    // Offset: 0x194F290
    void LaunchPadDeleted(::VROSC::Launchpad* launchpad);
    // public VROSC.Launchpad LoadLaunchPad(System.String padID, VROSC.TransformDataController transformData)
    // Offset: 0x194F47C
    ::VROSC::Launchpad* LoadLaunchPad(::StringW padID, ::VROSC::TransformDataController* transformData);
    // public System.Void SetLaunchpadColor(UnityEngine.Color color)
    // Offset: 0x194F570
    void SetLaunchpadColor(::UnityEngine::Color color);
    // public System.Void SetLaunchpadDisplayName(System.String name)
    // Offset: 0x194EBF0
    void SetLaunchpadDisplayName(::StringW name);
    // public System.Void TearDown()
    // Offset: 0x194F60C
    void TearDown();
    // public System.Void .ctor()
    // Offset: 0x194F910
    // Implemented from: VROSC.Grabable
    // Base method: System.Void Grabable::.ctor()
    // Base method: System.Void Interactable::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LaunchpadSpawner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::LaunchpadSpawner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LaunchpadSpawner*, creationType>()));
    }
    // public override System.Void Grab(VROSC.GrabData grabData, System.Boolean grabbing)
    // Offset: 0x194EC64
    // Implemented from: VROSC.Grabable
    // Base method: System.Void Grabable::Grab(VROSC.GrabData grabData, System.Boolean grabbing)
    void Grab(::VROSC::GrabData* grabData, bool grabbing);
  }; // VROSC.LaunchpadSpawner
  #pragma pack(pop)
  static check_size<sizeof(LaunchpadSpawner), 224 + sizeof(::VROSC::Launchpad*)> __VROSC_LaunchpadSpawnerSizeCheck;
  static_assert(sizeof(LaunchpadSpawner) == 0xE8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::LaunchpadSpawner::get_CurrentName
// Il2CppName: get_CurrentName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VROSC::LaunchpadSpawner::*)()>(&VROSC::LaunchpadSpawner::get_CurrentName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LaunchpadSpawner*), "get_CurrentName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LaunchpadSpawner::set_CurrentName
// Il2CppName: set_CurrentName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LaunchpadSpawner::*)(::StringW)>(&VROSC::LaunchpadSpawner::set_CurrentName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LaunchpadSpawner*), "set_CurrentName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::LaunchpadSpawner::get_CurrentColor
// Il2CppName: get_CurrentColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (VROSC::LaunchpadSpawner::*)()>(&VROSC::LaunchpadSpawner::get_CurrentColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LaunchpadSpawner*), "get_CurrentColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LaunchpadSpawner::set_CurrentColor
// Il2CppName: set_CurrentColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LaunchpadSpawner::*)(::UnityEngine::Color)>(&VROSC::LaunchpadSpawner::set_CurrentColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LaunchpadSpawner*), "set_CurrentColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::LaunchpadSpawner::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LaunchpadSpawner::*)(::StringW, ::UnityEngine::Transform*, ::StringW)>(&VROSC::LaunchpadSpawner::Setup)> {
  static const MethodInfo* get() {
    static auto* targetID = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* launchPadParent = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* displayName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LaunchpadSpawner*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetID, launchPadParent, displayName});
  }
};
// Writing MetadataGetter for method: VROSC::LaunchpadSpawner::SpawnLaunchpad
// Il2CppName: SpawnLaunchpad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::Launchpad* (VROSC::LaunchpadSpawner::*)(::StringW, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&VROSC::LaunchpadSpawner::SpawnLaunchpad)> {
  static const MethodInfo* get() {
    static auto* padID = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* localScale = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LaunchpadSpawner*), "SpawnLaunchpad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{padID, position, rotation, localScale});
  }
};
// Writing MetadataGetter for method: VROSC::LaunchpadSpawner::LaunchPadHit
// Il2CppName: LaunchPadHit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LaunchpadSpawner::*)(::VROSC::Launchpad*)>(&VROSC::LaunchpadSpawner::LaunchPadHit)> {
  static const MethodInfo* get() {
    static auto* launchpad = &::il2cpp_utils::GetClassFromName("VROSC", "Launchpad")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LaunchpadSpawner*), "LaunchPadHit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{launchpad});
  }
};
// Writing MetadataGetter for method: VROSC::LaunchpadSpawner::LaunchPadMoved
// Il2CppName: LaunchPadMoved
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LaunchpadSpawner::*)(::VROSC::Launchpad*)>(&VROSC::LaunchpadSpawner::LaunchPadMoved)> {
  static const MethodInfo* get() {
    static auto* launchpad = &::il2cpp_utils::GetClassFromName("VROSC", "Launchpad")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LaunchpadSpawner*), "LaunchPadMoved", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{launchpad});
  }
};
// Writing MetadataGetter for method: VROSC::LaunchpadSpawner::LaunchPadDeleted
// Il2CppName: LaunchPadDeleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LaunchpadSpawner::*)(::VROSC::Launchpad*)>(&VROSC::LaunchpadSpawner::LaunchPadDeleted)> {
  static const MethodInfo* get() {
    static auto* launchpad = &::il2cpp_utils::GetClassFromName("VROSC", "Launchpad")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LaunchpadSpawner*), "LaunchPadDeleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{launchpad});
  }
};
// Writing MetadataGetter for method: VROSC::LaunchpadSpawner::LoadLaunchPad
// Il2CppName: LoadLaunchPad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::Launchpad* (VROSC::LaunchpadSpawner::*)(::StringW, ::VROSC::TransformDataController*)>(&VROSC::LaunchpadSpawner::LoadLaunchPad)> {
  static const MethodInfo* get() {
    static auto* padID = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* transformData = &::il2cpp_utils::GetClassFromName("VROSC", "TransformDataController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LaunchpadSpawner*), "LoadLaunchPad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{padID, transformData});
  }
};
// Writing MetadataGetter for method: VROSC::LaunchpadSpawner::SetLaunchpadColor
// Il2CppName: SetLaunchpadColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LaunchpadSpawner::*)(::UnityEngine::Color)>(&VROSC::LaunchpadSpawner::SetLaunchpadColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LaunchpadSpawner*), "SetLaunchpadColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: VROSC::LaunchpadSpawner::SetLaunchpadDisplayName
// Il2CppName: SetLaunchpadDisplayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LaunchpadSpawner::*)(::StringW)>(&VROSC::LaunchpadSpawner::SetLaunchpadDisplayName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LaunchpadSpawner*), "SetLaunchpadDisplayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: VROSC::LaunchpadSpawner::TearDown
// Il2CppName: TearDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LaunchpadSpawner::*)()>(&VROSC::LaunchpadSpawner::TearDown)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LaunchpadSpawner*), "TearDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LaunchpadSpawner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::LaunchpadSpawner::Grab
// Il2CppName: Grab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LaunchpadSpawner::*)(::VROSC::GrabData*, bool)>(&VROSC::LaunchpadSpawner::Grab)> {
  static const MethodInfo* get() {
    static auto* grabData = &::il2cpp_utils::GetClassFromName("VROSC", "GrabData")->byval_arg;
    static auto* grabbing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LaunchpadSpawner*), "Grab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{grabData, grabbing});
  }
};
