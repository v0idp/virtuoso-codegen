// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Samples::VrHoops
namespace Oculus::Platform::Samples::VrHoops {
  // Skipping declaration: State because it is already included!
  // Forward declaring type: PlayerArea
  class PlayerArea;
  // Forward declaring type: Player
  class Player;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Text
  class Text;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: User
  class User;
  // Forward declaring type: LeaderboardEntry
  class LeaderboardEntry;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: SortedDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class SortedDictionary_2;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Samples.VrHoops
namespace Oculus::Platform::Samples::VrHoops {
  // Forward declaring type: MatchController
  class MatchController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Samples::VrHoops::MatchController);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Samples::VrHoops::MatchController*, "Oculus.Platform.Samples.VrHoops", "MatchController");
// Type namespace: Oculus.Platform.Samples.VrHoops
namespace Oculus::Platform::Samples::VrHoops {
  // Size: 0x7C
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Samples.VrHoops.MatchController
  // [TokenAttribute] Offset: FFFFFFFF
  class MatchController : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::Oculus::Platform::Samples::VrHoops::MatchController::State
    struct State;
    // Size: 0x14
    #pragma pack(push, 1)
    // Autogenerated type: Oculus.Platform.Samples.VrHoops.MatchController/Oculus.Platform.Samples.VrHoops.State
    // [TokenAttribute] Offset: FFFFFFFF
    struct State/*, public ::System::Enum*/ {
      public:
      // Writing base type padding for base size: 0x0 to desired offset: 0x10
      char ___base_padding[0x10] = {};
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x10
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: State
      constexpr State(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Oculus.Platform.Samples.VrHoops.MatchController/Oculus.Platform.Samples.VrHoops.State UNKNOWN
      static constexpr const int UNKNOWN = 0;
      // Get static field: static public Oculus.Platform.Samples.VrHoops.MatchController/Oculus.Platform.Samples.VrHoops.State UNKNOWN
      static ::Oculus::Platform::Samples::VrHoops::MatchController::State _get_UNKNOWN();
      // Set static field: static public Oculus.Platform.Samples.VrHoops.MatchController/Oculus.Platform.Samples.VrHoops.State UNKNOWN
      static void _set_UNKNOWN(::Oculus::Platform::Samples::VrHoops::MatchController::State value);
      // static field const value: static public Oculus.Platform.Samples.VrHoops.MatchController/Oculus.Platform.Samples.VrHoops.State NONE
      static constexpr const int NONE = 1;
      // Get static field: static public Oculus.Platform.Samples.VrHoops.MatchController/Oculus.Platform.Samples.VrHoops.State NONE
      static ::Oculus::Platform::Samples::VrHoops::MatchController::State _get_NONE();
      // Set static field: static public Oculus.Platform.Samples.VrHoops.MatchController/Oculus.Platform.Samples.VrHoops.State NONE
      static void _set_NONE(::Oculus::Platform::Samples::VrHoops::MatchController::State value);
      // static field const value: static public Oculus.Platform.Samples.VrHoops.MatchController/Oculus.Platform.Samples.VrHoops.State WAITING_TO_START_PRACTICE
      static constexpr const int WAITING_TO_START_PRACTICE = 2;
      // Get static field: static public Oculus.Platform.Samples.VrHoops.MatchController/Oculus.Platform.Samples.VrHoops.State WAITING_TO_START_PRACTICE
      static ::Oculus::Platform::Samples::VrHoops::MatchController::State _get_WAITING_TO_START_PRACTICE();
      // Set static field: static public Oculus.Platform.Samples.VrHoops.MatchController/Oculus.Platform.Samples.VrHoops.State WAITING_TO_START_PRACTICE
      static void _set_WAITING_TO_START_PRACTICE(::Oculus::Platform::Samples::VrHoops::MatchController::State value);
      // static field const value: static public Oculus.Platform.Samples.VrHoops.MatchController/Oculus.Platform.Samples.VrHoops.State PRACTICING
      static constexpr const int PRACTICING = 3;
      // Get static field: static public Oculus.Platform.Samples.VrHoops.MatchController/Oculus.Platform.Samples.VrHoops.State PRACTICING
      static ::Oculus::Platform::Samples::VrHoops::MatchController::State _get_PRACTICING();
      // Set static field: static public Oculus.Platform.Samples.VrHoops.MatchController/Oculus.Platform.Samples.VrHoops.State PRACTICING
      static void _set_PRACTICING(::Oculus::Platform::Samples::VrHoops::MatchController::State value);
      // static field const value: static public Oculus.Platform.Samples.VrHoops.MatchController/Oculus.Platform.Samples.VrHoops.State VIEWING_RESULTS_PRACTICE
      static constexpr const int VIEWING_RESULTS_PRACTICE = 4;
      // Get static field: static public Oculus.Platform.Samples.VrHoops.MatchController/Oculus.Platform.Samples.VrHoops.State VIEWING_RESULTS_PRACTICE
      static ::Oculus::Platform::Samples::VrHoops::MatchController::State _get_VIEWING_RESULTS_PRACTICE();
      // Set static field: static public Oculus.Platform.Samples.VrHoops.MatchController/Oculus.Platform.Samples.VrHoops.State VIEWING_RESULTS_PRACTICE
      static void _set_VIEWING_RESULTS_PRACTICE(::Oculus::Platform::Samples::VrHoops::MatchController::State value);
      // static field const value: static public Oculus.Platform.Samples.VrHoops.MatchController/Oculus.Platform.Samples.VrHoops.State WAITING_FOR_MATCH
      static constexpr const int WAITING_FOR_MATCH = 5;
      // Get static field: static public Oculus.Platform.Samples.VrHoops.MatchController/Oculus.Platform.Samples.VrHoops.State WAITING_FOR_MATCH
      static ::Oculus::Platform::Samples::VrHoops::MatchController::State _get_WAITING_FOR_MATCH();
      // Set static field: static public Oculus.Platform.Samples.VrHoops.MatchController/Oculus.Platform.Samples.VrHoops.State WAITING_FOR_MATCH
      static void _set_WAITING_FOR_MATCH(::Oculus::Platform::Samples::VrHoops::MatchController::State value);
      // static field const value: static public Oculus.Platform.Samples.VrHoops.MatchController/Oculus.Platform.Samples.VrHoops.State WAITING_TO_SETUP_MATCH
      static constexpr const int WAITING_TO_SETUP_MATCH = 6;
      // Get static field: static public Oculus.Platform.Samples.VrHoops.MatchController/Oculus.Platform.Samples.VrHoops.State WAITING_TO_SETUP_MATCH
      static ::Oculus::Platform::Samples::VrHoops::MatchController::State _get_WAITING_TO_SETUP_MATCH();
      // Set static field: static public Oculus.Platform.Samples.VrHoops.MatchController/Oculus.Platform.Samples.VrHoops.State WAITING_TO_SETUP_MATCH
      static void _set_WAITING_TO_SETUP_MATCH(::Oculus::Platform::Samples::VrHoops::MatchController::State value);
      // static field const value: static public Oculus.Platform.Samples.VrHoops.MatchController/Oculus.Platform.Samples.VrHoops.State PLAYING_MATCH
      static constexpr const int PLAYING_MATCH = 7;
      // Get static field: static public Oculus.Platform.Samples.VrHoops.MatchController/Oculus.Platform.Samples.VrHoops.State PLAYING_MATCH
      static ::Oculus::Platform::Samples::VrHoops::MatchController::State _get_PLAYING_MATCH();
      // Set static field: static public Oculus.Platform.Samples.VrHoops.MatchController/Oculus.Platform.Samples.VrHoops.State PLAYING_MATCH
      static void _set_PLAYING_MATCH(::Oculus::Platform::Samples::VrHoops::MatchController::State value);
      // static field const value: static public Oculus.Platform.Samples.VrHoops.MatchController/Oculus.Platform.Samples.VrHoops.State VIEWING_MATCH_RESULTS
      static constexpr const int VIEWING_MATCH_RESULTS = 8;
      // Get static field: static public Oculus.Platform.Samples.VrHoops.MatchController/Oculus.Platform.Samples.VrHoops.State VIEWING_MATCH_RESULTS
      static ::Oculus::Platform::Samples::VrHoops::MatchController::State _get_VIEWING_MATCH_RESULTS();
      // Set static field: static public Oculus.Platform.Samples.VrHoops.MatchController/Oculus.Platform.Samples.VrHoops.State VIEWING_MATCH_RESULTS
      static void _set_VIEWING_MATCH_RESULTS(::Oculus::Platform::Samples::VrHoops::MatchController::State value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // Oculus.Platform.Samples.VrHoops.MatchController/Oculus.Platform.Samples.VrHoops.State
    #pragma pack(pop)
    static check_size<sizeof(MatchController::State), 16 + sizeof(int)> __Oculus_Platform_Samples_VrHoops_MatchController_StateSizeCheck;
    static_assert(sizeof(MatchController::State) == 0x14);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private UnityEngine.UI.Text m_timerText
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::UI::Text* m_timerText;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    // private UnityEngine.Camera m_camera
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Camera* m_camera;
    // Field size check
    static_assert(sizeof(::UnityEngine::Camera*) == 0x8);
    // private UnityEngine.Transform m_idleCameraTransform
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Transform* m_idleCameraTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.UI.Text m_matchmakeButtonText
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::UI::Text* m_matchmakeButtonText;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    // private Oculus.Platform.Samples.VrHoops.PlayerArea[] m_playerAreas
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::Oculus::Platform::Samples::VrHoops::PlayerArea*> m_playerAreas;
    // Field size check
    static_assert(sizeof(::ArrayW<::Oculus::Platform::Samples::VrHoops::PlayerArea*>) == 0x8);
    // private System.UInt32 PRACTICE_WARMUP_TIME
    // Size: 0x4
    // Offset: 0x40
    uint PRACTICE_WARMUP_TIME;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 MATCH_WARMUP_TIME
    // Size: 0x4
    // Offset: 0x44
    uint MATCH_WARMUP_TIME;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 MATCH_TIME
    // Size: 0x4
    // Offset: 0x48
    uint MATCH_TIME;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 MATCH_COOLDOWN_TIME
    // Size: 0x4
    // Offset: 0x4C
    uint MATCH_COOLDOWN_TIME;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private UnityEngine.GameObject m_mostWinsLeaderboard
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::GameObject* m_mostWinsLeaderboard;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject m_highestScoresLeaderboard
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::GameObject* m_highestScoresLeaderboard;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject m_leaderboardEntryPrefab
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::GameObject* m_leaderboardEntryPrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject m_flytext
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::GameObject* m_flytext;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private Oculus.Platform.Samples.VrHoops.MatchController/Oculus.Platform.Samples.VrHoops.State m_currentState
    // Size: 0x14
    // Offset: 0x70
    ::Oculus::Platform::Samples::VrHoops::MatchController::State m_currentState;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Samples::VrHoops::MatchController::State) == 0x14);
    // private System.Single m_nextStateTransitionTime
    // Size: 0x4
    // Offset: 0x74
    float m_nextStateTransitionTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 m_localSlot
    // Size: 0x4
    // Offset: 0x78
    int m_localSlot;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.UI.Text m_timerText
    ::UnityEngine::UI::Text*& dyn_m_timerText();
    // Get instance field reference: private UnityEngine.Camera m_camera
    ::UnityEngine::Camera*& dyn_m_camera();
    // Get instance field reference: private UnityEngine.Transform m_idleCameraTransform
    ::UnityEngine::Transform*& dyn_m_idleCameraTransform();
    // Get instance field reference: private UnityEngine.UI.Text m_matchmakeButtonText
    ::UnityEngine::UI::Text*& dyn_m_matchmakeButtonText();
    // Get instance field reference: private Oculus.Platform.Samples.VrHoops.PlayerArea[] m_playerAreas
    ::ArrayW<::Oculus::Platform::Samples::VrHoops::PlayerArea*>& dyn_m_playerAreas();
    // Get instance field reference: private System.UInt32 PRACTICE_WARMUP_TIME
    uint& dyn_PRACTICE_WARMUP_TIME();
    // Get instance field reference: private System.UInt32 MATCH_WARMUP_TIME
    uint& dyn_MATCH_WARMUP_TIME();
    // Get instance field reference: private System.UInt32 MATCH_TIME
    uint& dyn_MATCH_TIME();
    // Get instance field reference: private System.UInt32 MATCH_COOLDOWN_TIME
    uint& dyn_MATCH_COOLDOWN_TIME();
    // Get instance field reference: private UnityEngine.GameObject m_mostWinsLeaderboard
    ::UnityEngine::GameObject*& dyn_m_mostWinsLeaderboard();
    // Get instance field reference: private UnityEngine.GameObject m_highestScoresLeaderboard
    ::UnityEngine::GameObject*& dyn_m_highestScoresLeaderboard();
    // Get instance field reference: private UnityEngine.GameObject m_leaderboardEntryPrefab
    ::UnityEngine::GameObject*& dyn_m_leaderboardEntryPrefab();
    // Get instance field reference: private UnityEngine.GameObject m_flytext
    ::UnityEngine::GameObject*& dyn_m_flytext();
    // Get instance field reference: private Oculus.Platform.Samples.VrHoops.MatchController/Oculus.Platform.Samples.VrHoops.State m_currentState
    ::Oculus::Platform::Samples::VrHoops::MatchController::State& dyn_m_currentState();
    // Get instance field reference: private System.Single m_nextStateTransitionTime
    float& dyn_m_nextStateTransitionTime();
    // Get instance field reference: private System.Int32 m_localSlot
    int& dyn_m_localSlot();
    // public System.Single get_MatchStartTime()
    // Offset: 0x96C504
    float get_MatchStartTime();
    // private System.Void set_MatchStartTime(System.Single value)
    // Offset: 0x96C524
    void set_MatchStartTime(float value);
    // private System.Void Start()
    // Offset: 0x96BCA4
    void Start();
    // private System.Void Update()
    // Offset: 0x96C25C
    void Update();
    // private System.Void TransitionToState(Oculus.Platform.Samples.VrHoops.MatchController/Oculus.Platform.Samples.VrHoops.State newState)
    // Offset: 0x96BF50
    void TransitionToState(::Oculus::Platform::Samples::VrHoops::MatchController::State newState);
    // private System.Void UpdateCheckForNextTimedTransition()
    // Offset: 0x96C280
    void UpdateCheckForNextTimedTransition();
    // private System.Void UpdateMatchTimer()
    // Offset: 0x96C324
    void UpdateMatchTimer();
    // private System.Void SetupForIdle()
    // Offset: 0x96C52C
    void SetupForIdle();
    // private System.Void SetupForPractice()
    // Offset: 0x96C7B8
    void SetupForPractice();
    // private Oculus.Platform.Samples.VrHoops.Player MatchPlayerAddedCallback(System.Int32 slot, Oculus.Platform.Models.User user)
    // Offset: 0x96CEE4
    ::Oculus::Platform::Samples::VrHoops::Player* MatchPlayerAddedCallback(int slot, ::Oculus::Platform::Models::User* user);
    // private System.Void MoveCameraToIdlePosition()
    // Offset: 0x96C5E0
    void MoveCameraToIdlePosition();
    // private System.Void MoveCameraToMatchPosition()
    // Offset: 0x96C8CC
    void MoveCameraToMatchPosition();
    // public System.Void StartPracticeMatch()
    // Offset: 0x96D190
    void StartPracticeMatch();
    // public System.Void PlayOnlineOrCancel()
    // Offset: 0x96D1A8
    void PlayOnlineOrCancel();
    // private System.Void OnMatchFoundCallback(System.Boolean success)
    // Offset: 0x96D380
    void OnMatchFoundCallback(bool success);
    // private System.Single StartTimeOfferCallback(System.Single remoteTime)
    // Offset: 0x96D394
    float StartTimeOfferCallback(float remoteTime);
    // private System.Void MostWinsLeaderboardCallback(System.Collections.Generic.SortedDictionary`2<System.Int32,Oculus.Platform.Models.LeaderboardEntry> entries)
    // Offset: 0x96D49C
    void MostWinsLeaderboardCallback(::System::Collections::Generic::SortedDictionary_2<int, ::Oculus::Platform::Models::LeaderboardEntry*>* entries);
    // private System.Void HighestScoreLeaderboardCallback(System.Collections.Generic.SortedDictionary`2<System.Int32,Oculus.Platform.Models.LeaderboardEntry> entries)
    // Offset: 0x96DA9C
    void HighestScoreLeaderboardCallback(::System::Collections::Generic::SortedDictionary_2<int, ::Oculus::Platform::Models::LeaderboardEntry*>* entries);
    // private System.Void CalculateMatchResults()
    // Offset: 0x96CA64
    void CalculateMatchResults();
    // private System.Void DisplayAchievementFlytext()
    // Offset: 0x96CFF4
    void DisplayAchievementFlytext();
    // public System.Void .ctor()
    // Offset: 0x96E0F4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MatchController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Samples::VrHoops::MatchController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MatchController*, creationType>()));
    }
  }; // Oculus.Platform.Samples.VrHoops.MatchController
  #pragma pack(pop)
  static check_size<sizeof(MatchController), 120 + sizeof(int)> __Oculus_Platform_Samples_VrHoops_MatchControllerSizeCheck;
  static_assert(sizeof(MatchController) == 0x7C);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Samples::VrHoops::MatchController::State, "Oculus.Platform.Samples.VrHoops", "MatchController/State");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::MatchController::get_MatchStartTime
// Il2CppName: get_MatchStartTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Platform::Samples::VrHoops::MatchController::*)()>(&Oculus::Platform::Samples::VrHoops::MatchController::get_MatchStartTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::MatchController*), "get_MatchStartTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::MatchController::set_MatchStartTime
// Il2CppName: set_MatchStartTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrHoops::MatchController::*)(float)>(&Oculus::Platform::Samples::VrHoops::MatchController::set_MatchStartTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::MatchController*), "set_MatchStartTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::MatchController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrHoops::MatchController::*)()>(&Oculus::Platform::Samples::VrHoops::MatchController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::MatchController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::MatchController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrHoops::MatchController::*)()>(&Oculus::Platform::Samples::VrHoops::MatchController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::MatchController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::MatchController::TransitionToState
// Il2CppName: TransitionToState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrHoops::MatchController::*)(::Oculus::Platform::Samples::VrHoops::MatchController::State)>(&Oculus::Platform::Samples::VrHoops::MatchController::TransitionToState)> {
  static const MethodInfo* get() {
    static auto* newState = &::il2cpp_utils::GetClassFromName("Oculus.Platform.Samples.VrHoops", "MatchController/State")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::MatchController*), "TransitionToState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newState});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::MatchController::UpdateCheckForNextTimedTransition
// Il2CppName: UpdateCheckForNextTimedTransition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrHoops::MatchController::*)()>(&Oculus::Platform::Samples::VrHoops::MatchController::UpdateCheckForNextTimedTransition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::MatchController*), "UpdateCheckForNextTimedTransition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::MatchController::UpdateMatchTimer
// Il2CppName: UpdateMatchTimer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrHoops::MatchController::*)()>(&Oculus::Platform::Samples::VrHoops::MatchController::UpdateMatchTimer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::MatchController*), "UpdateMatchTimer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::MatchController::SetupForIdle
// Il2CppName: SetupForIdle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrHoops::MatchController::*)()>(&Oculus::Platform::Samples::VrHoops::MatchController::SetupForIdle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::MatchController*), "SetupForIdle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::MatchController::SetupForPractice
// Il2CppName: SetupForPractice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrHoops::MatchController::*)()>(&Oculus::Platform::Samples::VrHoops::MatchController::SetupForPractice)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::MatchController*), "SetupForPractice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::MatchController::MatchPlayerAddedCallback
// Il2CppName: MatchPlayerAddedCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Samples::VrHoops::Player* (Oculus::Platform::Samples::VrHoops::MatchController::*)(int, ::Oculus::Platform::Models::User*)>(&Oculus::Platform::Samples::VrHoops::MatchController::MatchPlayerAddedCallback)> {
  static const MethodInfo* get() {
    static auto* slot = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* user = &::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "User")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::MatchController*), "MatchPlayerAddedCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{slot, user});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::MatchController::MoveCameraToIdlePosition
// Il2CppName: MoveCameraToIdlePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrHoops::MatchController::*)()>(&Oculus::Platform::Samples::VrHoops::MatchController::MoveCameraToIdlePosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::MatchController*), "MoveCameraToIdlePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::MatchController::MoveCameraToMatchPosition
// Il2CppName: MoveCameraToMatchPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrHoops::MatchController::*)()>(&Oculus::Platform::Samples::VrHoops::MatchController::MoveCameraToMatchPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::MatchController*), "MoveCameraToMatchPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::MatchController::StartPracticeMatch
// Il2CppName: StartPracticeMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrHoops::MatchController::*)()>(&Oculus::Platform::Samples::VrHoops::MatchController::StartPracticeMatch)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::MatchController*), "StartPracticeMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::MatchController::PlayOnlineOrCancel
// Il2CppName: PlayOnlineOrCancel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrHoops::MatchController::*)()>(&Oculus::Platform::Samples::VrHoops::MatchController::PlayOnlineOrCancel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::MatchController*), "PlayOnlineOrCancel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::MatchController::OnMatchFoundCallback
// Il2CppName: OnMatchFoundCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrHoops::MatchController::*)(bool)>(&Oculus::Platform::Samples::VrHoops::MatchController::OnMatchFoundCallback)> {
  static const MethodInfo* get() {
    static auto* success = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::MatchController*), "OnMatchFoundCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{success});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::MatchController::StartTimeOfferCallback
// Il2CppName: StartTimeOfferCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Platform::Samples::VrHoops::MatchController::*)(float)>(&Oculus::Platform::Samples::VrHoops::MatchController::StartTimeOfferCallback)> {
  static const MethodInfo* get() {
    static auto* remoteTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::MatchController*), "StartTimeOfferCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{remoteTime});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::MatchController::MostWinsLeaderboardCallback
// Il2CppName: MostWinsLeaderboardCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrHoops::MatchController::*)(::System::Collections::Generic::SortedDictionary_2<int, ::Oculus::Platform::Models::LeaderboardEntry*>*)>(&Oculus::Platform::Samples::VrHoops::MatchController::MostWinsLeaderboardCallback)> {
  static const MethodInfo* get() {
    static auto* entries = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "SortedDictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "LeaderboardEntry")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::MatchController*), "MostWinsLeaderboardCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{entries});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::MatchController::HighestScoreLeaderboardCallback
// Il2CppName: HighestScoreLeaderboardCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrHoops::MatchController::*)(::System::Collections::Generic::SortedDictionary_2<int, ::Oculus::Platform::Models::LeaderboardEntry*>*)>(&Oculus::Platform::Samples::VrHoops::MatchController::HighestScoreLeaderboardCallback)> {
  static const MethodInfo* get() {
    static auto* entries = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "SortedDictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "LeaderboardEntry")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::MatchController*), "HighestScoreLeaderboardCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{entries});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::MatchController::CalculateMatchResults
// Il2CppName: CalculateMatchResults
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrHoops::MatchController::*)()>(&Oculus::Platform::Samples::VrHoops::MatchController::CalculateMatchResults)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::MatchController*), "CalculateMatchResults", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::MatchController::DisplayAchievementFlytext
// Il2CppName: DisplayAchievementFlytext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrHoops::MatchController::*)()>(&Oculus::Platform::Samples::VrHoops::MatchController::DisplayAchievementFlytext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::MatchController*), "DisplayAchievementFlytext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::MatchController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
