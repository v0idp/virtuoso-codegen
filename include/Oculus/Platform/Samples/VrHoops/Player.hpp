// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.UInt32
#include "System/UInt32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Text
  class Text;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: Oculus::Platform::Samples::VrHoops
namespace Oculus::Platform::Samples::VrHoops {
  // Forward declaring type: BallEjector
  class BallEjector;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Samples.VrHoops
namespace Oculus::Platform::Samples::VrHoops {
  // Forward declaring type: Player
  class Player;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Samples::VrHoops::Player);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Samples::VrHoops::Player*, "Oculus.Platform.Samples.VrHoops", "Player");
// Type namespace: Oculus.Platform.Samples.VrHoops
namespace Oculus::Platform::Samples::VrHoops {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Samples.VrHoops.Player
  // [TokenAttribute] Offset: FFFFFFFF
  class Player : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.UInt32 m_score
    // Size: 0x4
    // Offset: 0x18
    uint m_score;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: m_score and: m_scoreUI
    char __padding0[0x4] = {};
    // private UnityEngine.UI.Text m_scoreUI
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::UI::Text* m_scoreUI;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    // private UnityEngine.GameObject m_ballPrefab
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::GameObject* m_ballPrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private Oculus.Platform.Samples.VrHoops.BallEjector m_ballEjector
    // Size: 0x8
    // Offset: 0x30
    ::Oculus::Platform::Samples::VrHoops::BallEjector* m_ballEjector;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Samples::VrHoops::BallEjector*) == 0x8);
    // private System.Collections.Generic.Queue`1<UnityEngine.GameObject> m_balls
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::Queue_1<::UnityEngine::GameObject*>* m_balls;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Queue_1<::UnityEngine::GameObject*>*) == 0x8);
    // private UnityEngine.GameObject m_heldBall
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::GameObject* m_heldBall;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private System.Single m_nextSpawnTime
    // Size: 0x4
    // Offset: 0x48
    float m_nextSpawnTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static public System.UInt32 MAX_BALLS
    static constexpr const uint MAX_BALLS = 6u;
    // Get static field: static public System.UInt32 MAX_BALLS
    static uint _get_MAX_BALLS();
    // Set static field: static public System.UInt32 MAX_BALLS
    static void _set_MAX_BALLS(uint value);
    // static field const value: static private System.Single INITIAL_FORCE
    static constexpr const float INITIAL_FORCE = 870;
    // Get static field: static private System.Single INITIAL_FORCE
    static float _get_INITIAL_FORCE();
    // Set static field: static private System.Single INITIAL_FORCE
    static void _set_INITIAL_FORCE(float value);
    // static field const value: static private System.Single RESPAWN_SECONDS
    static constexpr const float RESPAWN_SECONDS = 2;
    // Get static field: static private System.Single RESPAWN_SECONDS
    static float _get_RESPAWN_SECONDS();
    // Set static field: static private System.Single RESPAWN_SECONDS
    static void _set_RESPAWN_SECONDS(float value);
    // Get instance field reference: private System.UInt32 m_score
    [[deprecated("Use field access instead!")]] uint& dyn_m_score();
    // Get instance field reference: private UnityEngine.UI.Text m_scoreUI
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Text*& dyn_m_scoreUI();
    // Get instance field reference: private UnityEngine.GameObject m_ballPrefab
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_m_ballPrefab();
    // Get instance field reference: private Oculus.Platform.Samples.VrHoops.BallEjector m_ballEjector
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::Samples::VrHoops::BallEjector*& dyn_m_ballEjector();
    // Get instance field reference: private System.Collections.Generic.Queue`1<UnityEngine.GameObject> m_balls
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Queue_1<::UnityEngine::GameObject*>*& dyn_m_balls();
    // Get instance field reference: private UnityEngine.GameObject m_heldBall
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_m_heldBall();
    // Get instance field reference: private System.Single m_nextSpawnTime
    [[deprecated("Use field access instead!")]] float& dyn_m_nextSpawnTime();
    // public System.UInt32 get_Score()
    // Offset: 0x17125BC
    uint get_Score();
    // public System.Void set_Score(System.UInt32 value)
    // Offset: 0x17125C4
    void set_Score(uint value);
    // public System.Void set_BallPrefab(UnityEngine.GameObject value)
    // Offset: 0x1712684
    void set_BallPrefab(::UnityEngine::GameObject* value);
    // protected System.Boolean get_HasBall()
    // Offset: 0x171268C
    bool get_HasBall();
    // protected System.Void .ctor()
    // Offset: 0x1712D00
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Player* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Samples::VrHoops::Player::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Player*, creationType>()));
    }
    // private System.Void Start()
    // Offset: 0x17126F8
    void Start();
    // public UnityEngine.GameObject CreateBall()
    // Offset: 0x17127C0
    ::UnityEngine::GameObject* CreateBall();
    // protected UnityEngine.GameObject CheckSpawnBall()
    // Offset: 0x17129E4
    ::UnityEngine::GameObject* CheckSpawnBall();
    // protected UnityEngine.GameObject ShootBall()
    // Offset: 0x1712A64
    ::UnityEngine::GameObject* ShootBall();
    // private System.Void OnDestroy()
    // Offset: 0x1712BA8
    void OnDestroy();
  }; // Oculus.Platform.Samples.VrHoops.Player
  #pragma pack(pop)
  static check_size<sizeof(Player), 72 + sizeof(float)> __Oculus_Platform_Samples_VrHoops_PlayerSizeCheck;
  static_assert(sizeof(Player) == 0x4C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::Player::get_Score
// Il2CppName: get_Score
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Oculus::Platform::Samples::VrHoops::Player::*)()>(&Oculus::Platform::Samples::VrHoops::Player::get_Score)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::Player*), "get_Score", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::Player::set_Score
// Il2CppName: set_Score
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrHoops::Player::*)(uint)>(&Oculus::Platform::Samples::VrHoops::Player::set_Score)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::Player*), "set_Score", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::Player::set_BallPrefab
// Il2CppName: set_BallPrefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrHoops::Player::*)(::UnityEngine::GameObject*)>(&Oculus::Platform::Samples::VrHoops::Player::set_BallPrefab)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::Player*), "set_BallPrefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::Player::get_HasBall
// Il2CppName: get_HasBall
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Platform::Samples::VrHoops::Player::*)()>(&Oculus::Platform::Samples::VrHoops::Player::get_HasBall)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::Player*), "get_HasBall", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::Player::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::Player::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrHoops::Player::*)()>(&Oculus::Platform::Samples::VrHoops::Player::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::Player*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::Player::CreateBall
// Il2CppName: CreateBall
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (Oculus::Platform::Samples::VrHoops::Player::*)()>(&Oculus::Platform::Samples::VrHoops::Player::CreateBall)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::Player*), "CreateBall", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::Player::CheckSpawnBall
// Il2CppName: CheckSpawnBall
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (Oculus::Platform::Samples::VrHoops::Player::*)()>(&Oculus::Platform::Samples::VrHoops::Player::CheckSpawnBall)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::Player*), "CheckSpawnBall", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::Player::ShootBall
// Il2CppName: ShootBall
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (Oculus::Platform::Samples::VrHoops::Player::*)()>(&Oculus::Platform::Samples::VrHoops::Player::ShootBall)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::Player*), "ShootBall", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::Player::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrHoops::Player::*)()>(&Oculus::Platform::Samples::VrHoops::Player::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::Player*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
