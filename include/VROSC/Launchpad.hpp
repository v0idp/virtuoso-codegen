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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: TransformMover
  class TransformMover;
  // Forward declaring type: PadUI
  class PadUI;
  // Forward declaring type: LaunchPadEffectOnSignal
  class LaunchPadEffectOnSignal;
  // Forward declaring type: PredictiveHittable
  class PredictiveHittable;
  // Forward declaring type: LaunchpadSpawner
  class LaunchpadSpawner;
  // Forward declaring type: Signal
  class Signal;
  // Forward declaring type: GrabData
  class GrabData;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider
  class Collider;
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: Launchpad
  class Launchpad;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::Launchpad);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Launchpad*, "VROSC", "Launchpad");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x84
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.Launchpad
  // [TokenAttribute] Offset: FFFFFFFF
  class Launchpad : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::VROSC::Launchpad::$LaunchpadHit$d__27
    struct $LaunchpadHit$d__27;
    public:
    // private VROSC.TransformMover _mover
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::TransformMover* mover;
    // Field size check
    static_assert(sizeof(::VROSC::TransformMover*) == 0x8);
    // private VROSC.PadUI _UI
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::PadUI* UI;
    // Field size check
    static_assert(sizeof(::VROSC::PadUI*) == 0x8);
    // protected VROSC.LaunchPadEffectOnSignal _visual
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::LaunchPadEffectOnSignal* visual;
    // Field size check
    static_assert(sizeof(::VROSC::LaunchPadEffectOnSignal*) == 0x8);
    // private VROSC.PredictiveHittable _hittable
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::PredictiveHittable* hittable;
    // Field size check
    static_assert(sizeof(::VROSC::PredictiveHittable*) == 0x8);
    // private TMPro.TextMeshPro _trackName
    // Size: 0x8
    // Offset: 0x38
    ::TMPro::TextMeshPro* trackName;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshPro*) == 0x8);
    // private VROSC.LaunchpadSpawner _launchpadSpawner
    // Size: 0x8
    // Offset: 0x40
    ::VROSC::LaunchpadSpawner* launchpadSpawner;
    // Field size check
    static_assert(sizeof(::VROSC::LaunchpadSpawner*) == 0x8);
    // public System.Action`1<VROSC.Launchpad> OnLaunchPadHit
    // Size: 0x8
    // Offset: 0x48
    ::System::Action_1<::VROSC::Launchpad*>* OnLaunchPadHit;
    // Field size check
    static_assert(sizeof(::System::Action_1<::VROSC::Launchpad*>*) == 0x8);
    // public System.Action`1<VROSC.Launchpad> OnLaunchPadMoved
    // Size: 0x8
    // Offset: 0x50
    ::System::Action_1<::VROSC::Launchpad*>* OnLaunchPadMoved;
    // Field size check
    static_assert(sizeof(::System::Action_1<::VROSC::Launchpad*>*) == 0x8);
    // public System.Action`1<VROSC.Launchpad> OnLaunchPadDeletedByUser
    // Size: 0x8
    // Offset: 0x58
    ::System::Action_1<::VROSC::Launchpad*>* OnLaunchPadDeletedByUser;
    // Field size check
    static_assert(sizeof(::System::Action_1<::VROSC::Launchpad*>*) == 0x8);
    // private System.String <ID>k__BackingField
    // Size: 0x8
    // Offset: 0x60
    ::StringW _ID;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <TargetID>k__BackingField
    // Size: 0x8
    // Offset: 0x68
    ::StringW TargetID;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private UnityEngine.Collider[] _overlaps
    // Size: 0x8
    // Offset: 0x70
    ::ArrayW<::UnityEngine::Collider*> overlaps;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Collider*>) == 0x8);
    // private VROSC.LaunchpadSpawner _overlappingSpawner
    // Size: 0x8
    // Offset: 0x78
    ::VROSC::LaunchpadSpawner* overlappingSpawner;
    // Field size check
    static_assert(sizeof(::VROSC::LaunchpadSpawner*) == 0x8);
    // private System.Single _spawnerDeleteDistance
    // Size: 0x4
    // Offset: 0x80
    float spawnerDeleteDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.TransformMover _mover
    [[deprecated("Use field access instead!")]] ::VROSC::TransformMover*& dyn__mover();
    // Get instance field reference: private VROSC.PadUI _UI
    [[deprecated("Use field access instead!")]] ::VROSC::PadUI*& dyn__UI();
    // Get instance field reference: protected VROSC.LaunchPadEffectOnSignal _visual
    [[deprecated("Use field access instead!")]] ::VROSC::LaunchPadEffectOnSignal*& dyn__visual();
    // Get instance field reference: private VROSC.PredictiveHittable _hittable
    [[deprecated("Use field access instead!")]] ::VROSC::PredictiveHittable*& dyn__hittable();
    // Get instance field reference: private TMPro.TextMeshPro _trackName
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshPro*& dyn__trackName();
    // Get instance field reference: private VROSC.LaunchpadSpawner _launchpadSpawner
    [[deprecated("Use field access instead!")]] ::VROSC::LaunchpadSpawner*& dyn__launchpadSpawner();
    // Get instance field reference: public System.Action`1<VROSC.Launchpad> OnLaunchPadHit
    [[deprecated("Use field access instead!")]] ::System::Action_1<::VROSC::Launchpad*>*& dyn_OnLaunchPadHit();
    // Get instance field reference: public System.Action`1<VROSC.Launchpad> OnLaunchPadMoved
    [[deprecated("Use field access instead!")]] ::System::Action_1<::VROSC::Launchpad*>*& dyn_OnLaunchPadMoved();
    // Get instance field reference: public System.Action`1<VROSC.Launchpad> OnLaunchPadDeletedByUser
    [[deprecated("Use field access instead!")]] ::System::Action_1<::VROSC::Launchpad*>*& dyn_OnLaunchPadDeletedByUser();
    // Get instance field reference: private System.String <ID>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$ID$k__BackingField();
    // Get instance field reference: private System.String <TargetID>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$TargetID$k__BackingField();
    // Get instance field reference: private UnityEngine.Collider[] _overlaps
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Collider*>& dyn__overlaps();
    // Get instance field reference: private VROSC.LaunchpadSpawner _overlappingSpawner
    [[deprecated("Use field access instead!")]] ::VROSC::LaunchpadSpawner*& dyn__overlappingSpawner();
    // Get instance field reference: private System.Single _spawnerDeleteDistance
    [[deprecated("Use field access instead!")]] float& dyn__spawnerDeleteDistance();
    // public VROSC.TransformMover get_Mover()
    // Offset: 0x194E140
    ::VROSC::TransformMover* get_Mover();
    // public System.String get_ID()
    // Offset: 0x194E150
    ::StringW get_ID();
    // private System.Void set_ID(System.String value)
    // Offset: 0x194E148
    void set_ID(::StringW value);
    // public System.String get_TargetID()
    // Offset: 0x194E160
    ::StringW get_TargetID();
    // private System.Void set_TargetID(System.String value)
    // Offset: 0x194E158
    void set_TargetID(::StringW value);
    // public System.Void .ctor()
    // Offset: 0x194EB54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Launchpad* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::Launchpad::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Launchpad*, creationType>()));
    }
    // private System.Void Awake()
    // Offset: 0x194E168
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x194E2B4
    void OnDestroy();
    // public System.Void Setup(VROSC.LaunchpadSpawner launchpadSpawner, System.String id, System.String targetID, System.String displayName, UnityEngine.Color color)
    // Offset: 0x194E518
    void Setup(::VROSC::LaunchpadSpawner* launchpadSpawner, ::StringW id, ::StringW targetID, ::StringW displayName, ::UnityEngine::Color color);
    // public System.Void SetColor(UnityEngine.Color color)
    // Offset: 0x194E714
    void SetColor(::UnityEngine::Color color);
    // public System.Void SetDisplayName(System.String newName)
    // Offset: 0x194E6F0
    void SetDisplayName(::StringW newName);
    // public System.Void LaunchpadHit(VROSC.Signal signal)
    // Offset: 0x194E780
    void LaunchpadHit(::VROSC::Signal* signal);
    // public System.Void Grab(VROSC.GrabData grabData, System.Boolean grabbing)
    // Offset: 0x194E848
    void Grab(::VROSC::GrabData* grabData, bool grabbing);
    // public System.Void GrabEnded(VROSC.TransformMover mover)
    // Offset: 0x194E86C
    void GrabEnded(::VROSC::TransformMover* mover);
    // private System.Void DeletePressed()
    // Offset: 0x194EAF8
    void DeletePressed();
    // public System.Void Delete()
    // Offset: 0x194E9B8
    void Delete();
  }; // VROSC.Launchpad
  #pragma pack(pop)
  static check_size<sizeof(Launchpad), 128 + sizeof(float)> __VROSC_LaunchpadSizeCheck;
  static_assert(sizeof(Launchpad) == 0x84);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::Launchpad::get_Mover
// Il2CppName: get_Mover
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::TransformMover* (VROSC::Launchpad::*)()>(&VROSC::Launchpad::get_Mover)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Launchpad*), "get_Mover", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Launchpad::get_ID
// Il2CppName: get_ID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VROSC::Launchpad::*)()>(&VROSC::Launchpad::get_ID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Launchpad*), "get_ID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Launchpad::set_ID
// Il2CppName: set_ID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Launchpad::*)(::StringW)>(&VROSC::Launchpad::set_ID)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Launchpad*), "set_ID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::Launchpad::get_TargetID
// Il2CppName: get_TargetID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VROSC::Launchpad::*)()>(&VROSC::Launchpad::get_TargetID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Launchpad*), "get_TargetID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Launchpad::set_TargetID
// Il2CppName: set_TargetID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Launchpad::*)(::StringW)>(&VROSC::Launchpad::set_TargetID)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Launchpad*), "set_TargetID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::Launchpad::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::Launchpad::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Launchpad::*)()>(&VROSC::Launchpad::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Launchpad*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Launchpad::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Launchpad::*)()>(&VROSC::Launchpad::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Launchpad*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Launchpad::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Launchpad::*)(::VROSC::LaunchpadSpawner*, ::StringW, ::StringW, ::StringW, ::UnityEngine::Color)>(&VROSC::Launchpad::Setup)> {
  static const MethodInfo* get() {
    static auto* launchpadSpawner = &::il2cpp_utils::GetClassFromName("VROSC", "LaunchpadSpawner")->byval_arg;
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* targetID = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* displayName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Launchpad*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{launchpadSpawner, id, targetID, displayName, color});
  }
};
// Writing MetadataGetter for method: VROSC::Launchpad::SetColor
// Il2CppName: SetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Launchpad::*)(::UnityEngine::Color)>(&VROSC::Launchpad::SetColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Launchpad*), "SetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: VROSC::Launchpad::SetDisplayName
// Il2CppName: SetDisplayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Launchpad::*)(::StringW)>(&VROSC::Launchpad::SetDisplayName)> {
  static const MethodInfo* get() {
    static auto* newName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Launchpad*), "SetDisplayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newName});
  }
};
// Writing MetadataGetter for method: VROSC::Launchpad::LaunchpadHit
// Il2CppName: LaunchpadHit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Launchpad::*)(::VROSC::Signal*)>(&VROSC::Launchpad::LaunchpadHit)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Launchpad*), "LaunchpadHit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
// Writing MetadataGetter for method: VROSC::Launchpad::Grab
// Il2CppName: Grab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Launchpad::*)(::VROSC::GrabData*, bool)>(&VROSC::Launchpad::Grab)> {
  static const MethodInfo* get() {
    static auto* grabData = &::il2cpp_utils::GetClassFromName("VROSC", "GrabData")->byval_arg;
    static auto* grabbing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Launchpad*), "Grab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{grabData, grabbing});
  }
};
// Writing MetadataGetter for method: VROSC::Launchpad::GrabEnded
// Il2CppName: GrabEnded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Launchpad::*)(::VROSC::TransformMover*)>(&VROSC::Launchpad::GrabEnded)> {
  static const MethodInfo* get() {
    static auto* mover = &::il2cpp_utils::GetClassFromName("VROSC", "TransformMover")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Launchpad*), "GrabEnded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mover});
  }
};
// Writing MetadataGetter for method: VROSC::Launchpad::DeletePressed
// Il2CppName: DeletePressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Launchpad::*)()>(&VROSC::Launchpad::DeletePressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Launchpad*), "DeletePressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Launchpad::Delete
// Il2CppName: Delete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Launchpad::*)()>(&VROSC::Launchpad::Delete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Launchpad*), "Delete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
