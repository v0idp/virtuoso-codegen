// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Oculus.Platform.Samples.VrBoardGame.GamePiece
#include "Oculus/Platform/Samples/VrBoardGame/GamePiece.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: Oculus::Platform::Samples::VrBoardGame
namespace Oculus::Platform::Samples::VrBoardGame {
  // Forward declaring type: GameController
  class GameController;
  // Skipping declaration: MatchRoomState because it is already included!
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Text
  class Text;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: User
  class User;
  // Forward declaring type: Room
  class Room;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message
  class Message;
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Samples.VrBoardGame
namespace Oculus::Platform::Samples::VrBoardGame {
  // Forward declaring type: MatchmakingManager
  class MatchmakingManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Samples::VrBoardGame::MatchmakingManager);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Samples::VrBoardGame::MatchmakingManager*, "Oculus.Platform.Samples.VrBoardGame", "MatchmakingManager");
// Type namespace: Oculus.Platform.Samples.VrBoardGame
namespace Oculus::Platform::Samples::VrBoardGame {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Samples.VrBoardGame.MatchmakingManager
  // [TokenAttribute] Offset: FFFFFFFF
  class MatchmakingManager : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::MatchRoomState
    struct MatchRoomState;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Oculus.Platform.Samples.VrBoardGame.MatchmakingManager/Oculus.Platform.Samples.VrBoardGame.MatchRoomState
    // [TokenAttribute] Offset: FFFFFFFF
    struct MatchRoomState/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: MatchRoomState
      constexpr MatchRoomState(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Oculus.Platform.Samples.VrBoardGame.MatchmakingManager/Oculus.Platform.Samples.VrBoardGame.MatchRoomState None
      static constexpr const int None = 0;
      // Get static field: static public Oculus.Platform.Samples.VrBoardGame.MatchmakingManager/Oculus.Platform.Samples.VrBoardGame.MatchRoomState None
      static ::Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::MatchRoomState _get_None();
      // Set static field: static public Oculus.Platform.Samples.VrBoardGame.MatchmakingManager/Oculus.Platform.Samples.VrBoardGame.MatchRoomState None
      static void _set_None(::Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::MatchRoomState value);
      // static field const value: static public Oculus.Platform.Samples.VrBoardGame.MatchmakingManager/Oculus.Platform.Samples.VrBoardGame.MatchRoomState Queued
      static constexpr const int Queued = 1;
      // Get static field: static public Oculus.Platform.Samples.VrBoardGame.MatchmakingManager/Oculus.Platform.Samples.VrBoardGame.MatchRoomState Queued
      static ::Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::MatchRoomState _get_Queued();
      // Set static field: static public Oculus.Platform.Samples.VrBoardGame.MatchmakingManager/Oculus.Platform.Samples.VrBoardGame.MatchRoomState Queued
      static void _set_Queued(::Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::MatchRoomState value);
      // static field const value: static public Oculus.Platform.Samples.VrBoardGame.MatchmakingManager/Oculus.Platform.Samples.VrBoardGame.MatchRoomState Configuring
      static constexpr const int Configuring = 2;
      // Get static field: static public Oculus.Platform.Samples.VrBoardGame.MatchmakingManager/Oculus.Platform.Samples.VrBoardGame.MatchRoomState Configuring
      static ::Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::MatchRoomState _get_Configuring();
      // Set static field: static public Oculus.Platform.Samples.VrBoardGame.MatchmakingManager/Oculus.Platform.Samples.VrBoardGame.MatchRoomState Configuring
      static void _set_Configuring(::Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::MatchRoomState value);
      // static field const value: static public Oculus.Platform.Samples.VrBoardGame.MatchmakingManager/Oculus.Platform.Samples.VrBoardGame.MatchRoomState MyTurn
      static constexpr const int MyTurn = 3;
      // Get static field: static public Oculus.Platform.Samples.VrBoardGame.MatchmakingManager/Oculus.Platform.Samples.VrBoardGame.MatchRoomState MyTurn
      static ::Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::MatchRoomState _get_MyTurn();
      // Set static field: static public Oculus.Platform.Samples.VrBoardGame.MatchmakingManager/Oculus.Platform.Samples.VrBoardGame.MatchRoomState MyTurn
      static void _set_MyTurn(::Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::MatchRoomState value);
      // static field const value: static public Oculus.Platform.Samples.VrBoardGame.MatchmakingManager/Oculus.Platform.Samples.VrBoardGame.MatchRoomState RemoteTurn
      static constexpr const int RemoteTurn = 4;
      // Get static field: static public Oculus.Platform.Samples.VrBoardGame.MatchmakingManager/Oculus.Platform.Samples.VrBoardGame.MatchRoomState RemoteTurn
      static ::Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::MatchRoomState _get_RemoteTurn();
      // Set static field: static public Oculus.Platform.Samples.VrBoardGame.MatchmakingManager/Oculus.Platform.Samples.VrBoardGame.MatchRoomState RemoteTurn
      static void _set_RemoteTurn(::Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::MatchRoomState value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // Oculus.Platform.Samples.VrBoardGame.MatchmakingManager/Oculus.Platform.Samples.VrBoardGame.MatchRoomState
    #pragma pack(pop)
    static check_size<sizeof(MatchmakingManager::MatchRoomState), 0 + sizeof(int)> __Oculus_Platform_Samples_VrBoardGame_MatchmakingManager_MatchRoomStateSizeCheck;
    static_assert(sizeof(MatchmakingManager::MatchRoomState) == 0x4);
    public:
    // private Oculus.Platform.Samples.VrBoardGame.GameController m_gameController
    // Size: 0x8
    // Offset: 0x18
    ::Oculus::Platform::Samples::VrBoardGame::GameController* m_gameController;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Samples::VrBoardGame::GameController*) == 0x8);
    // private UnityEngine.UI.Text m_matchButtonText
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::UI::Text* m_matchButtonText;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    // private UnityEngine.UI.Text m_infoText
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::UI::Text* m_infoText;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    // private System.UInt64 m_matchRoom
    // Size: 0x8
    // Offset: 0x30
    uint64_t m_matchRoom;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private Oculus.Platform.Models.User m_remotePlayer
    // Size: 0x8
    // Offset: 0x38
    ::Oculus::Platform::Models::User* m_remotePlayer;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Models::User*) == 0x8);
    // private System.Single m_lastUpdateTime
    // Size: 0x4
    // Offset: 0x40
    float m_lastUpdateTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private Oculus.Platform.Samples.VrBoardGame.MatchmakingManager/Oculus.Platform.Samples.VrBoardGame.MatchRoomState m_state
    // Size: 0x4
    // Offset: 0x44
    ::Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::MatchRoomState m_state;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::MatchRoomState) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.String POOL
    static constexpr const char* POOL = "VR_BOARD_GAME_POOL";
    // Get static field: static private System.String POOL
    static ::StringW _get_POOL();
    // Set static field: static private System.String POOL
    static void _set_POOL(::StringW value);
    // static field const value: static private System.Single POLL_FREQUENCY
    static constexpr const float POLL_FREQUENCY = 30;
    // Get static field: static private System.Single POLL_FREQUENCY
    static float _get_POLL_FREQUENCY();
    // Set static field: static private System.Single POLL_FREQUENCY
    static void _set_POLL_FREQUENCY(float value);
    // Get instance field reference: private Oculus.Platform.Samples.VrBoardGame.GameController m_gameController
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::Samples::VrBoardGame::GameController*& dyn_m_gameController();
    // Get instance field reference: private UnityEngine.UI.Text m_matchButtonText
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Text*& dyn_m_matchButtonText();
    // Get instance field reference: private UnityEngine.UI.Text m_infoText
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Text*& dyn_m_infoText();
    // Get instance field reference: private System.UInt64 m_matchRoom
    [[deprecated("Use field access instead!")]] uint64_t& dyn_m_matchRoom();
    // Get instance field reference: private Oculus.Platform.Models.User m_remotePlayer
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::Models::User*& dyn_m_remotePlayer();
    // Get instance field reference: private System.Single m_lastUpdateTime
    [[deprecated("Use field access instead!")]] float& dyn_m_lastUpdateTime();
    // Get instance field reference: private Oculus.Platform.Samples.VrBoardGame.MatchmakingManager/Oculus.Platform.Samples.VrBoardGame.MatchRoomState m_state
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::MatchRoomState& dyn_m_state();
    // public System.Void .ctor()
    // Offset: 0xB44A28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MatchmakingManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MatchmakingManager*, creationType>()));
    }
    // private System.Void Start()
    // Offset: 0xB42D9C
    void Start();
    // private System.Void Update()
    // Offset: 0xB43048
    void Update();
    // public System.Void MatchButtonPressed()
    // Offset: 0xB431A8
    void MatchButtonPressed();
    // public System.Void EndMatch(System.Int32 localScore, System.Int32 remoteScore)
    // Offset: 0xB431C0
    void EndMatch(int localScore, int remoteScore);
    // private System.Void OnApplicationQuit()
    // Offset: 0xB43448
    void OnApplicationQuit();
    // private System.Void TransitionToState(Oculus.Platform.Samples.VrBoardGame.MatchmakingManager/Oculus.Platform.Samples.VrBoardGame.MatchRoomState state)
    // Offset: 0xB42E78
    void TransitionToState(::Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::MatchRoomState state);
    // private System.Void MatchmakingEnqueueCallback(Oculus.Platform.Message untyped_msg)
    // Offset: 0xB43480
    void MatchmakingEnqueueCallback(::Oculus::Platform::Message* untyped_msg);
    // private System.Void MatchFoundCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.Room> msg)
    // Offset: 0xB43740
    void MatchFoundCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room*>* msg);
    // private System.Void MatchmakingJoinRoomCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.Room> msg)
    // Offset: 0xB438BC
    void MatchmakingJoinRoomCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room*>* msg);
    // private System.Void MatchmakingRoomUpdateCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.Room> msg)
    // Offset: 0xB43FD4
    void MatchmakingRoomUpdateCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room*>* msg);
    // private System.Void ProcessRoomData(Oculus.Platform.Models.Room room)
    // Offset: 0xB43A8C
    void ProcessRoomData(::Oculus::Platform::Models::Room* room);
    // private System.Void ProcessRemoteMove(System.String moveString)
    // Offset: 0xB44394
    void ProcessRemoteMove(::StringW moveString);
    // public System.Void SendLocalMove(Oculus.Platform.Samples.VrBoardGame.GamePiece/Oculus.Platform.Samples.VrBoardGame.Piece piece, System.Int32 boardX, System.Int32 boardY)
    // Offset: 0xB445C4
    void SendLocalMove(::Oculus::Platform::Samples::VrBoardGame::GamePiece::Piece piece, int boardX, int boardY);
    // private System.Void UpdateDataStoreCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.Room> msg)
    // Offset: 0xB4493C
    void UpdateDataStoreCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room*>* msg);
    // private System.Boolean DoesLocalUserGoFirst()
    // Offset: 0xB4434C
    bool DoesLocalUserGoFirst();
    // private System.Void GenericErrorCheckCallback(Oculus.Platform.Message msg)
    // Offset: 0xB44970
    void GenericErrorCheckCallback(::Oculus::Platform::Message* msg);
  }; // Oculus.Platform.Samples.VrBoardGame.MatchmakingManager
  #pragma pack(pop)
  static check_size<sizeof(MatchmakingManager), 68 + sizeof(::Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::MatchRoomState)> __Oculus_Platform_Samples_VrBoardGame_MatchmakingManagerSizeCheck;
  static_assert(sizeof(MatchmakingManager) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::MatchRoomState, "Oculus.Platform.Samples.VrBoardGame", "MatchmakingManager/MatchRoomState");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::*)()>(&Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::MatchmakingManager*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::*)()>(&Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::MatchmakingManager*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::MatchButtonPressed
// Il2CppName: MatchButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::*)()>(&Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::MatchButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::MatchmakingManager*), "MatchButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::EndMatch
// Il2CppName: EndMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::*)(int, int)>(&Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::EndMatch)> {
  static const MethodInfo* get() {
    static auto* localScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* remoteScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::MatchmakingManager*), "EndMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{localScore, remoteScore});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::OnApplicationQuit
// Il2CppName: OnApplicationQuit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::*)()>(&Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::OnApplicationQuit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::MatchmakingManager*), "OnApplicationQuit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::TransitionToState
// Il2CppName: TransitionToState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::*)(::Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::MatchRoomState)>(&Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::TransitionToState)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("Oculus.Platform.Samples.VrBoardGame", "MatchmakingManager/MatchRoomState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::MatchmakingManager*), "TransitionToState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::MatchmakingEnqueueCallback
// Il2CppName: MatchmakingEnqueueCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::*)(::Oculus::Platform::Message*)>(&Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::MatchmakingEnqueueCallback)> {
  static const MethodInfo* get() {
    static auto* untyped_msg = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::MatchmakingManager*), "MatchmakingEnqueueCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{untyped_msg});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::MatchFoundCallback
// Il2CppName: MatchFoundCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room*>*)>(&Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::MatchFoundCallback)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "Room")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::MatchmakingManager*), "MatchFoundCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::MatchmakingJoinRoomCallback
// Il2CppName: MatchmakingJoinRoomCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room*>*)>(&Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::MatchmakingJoinRoomCallback)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "Room")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::MatchmakingManager*), "MatchmakingJoinRoomCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::MatchmakingRoomUpdateCallback
// Il2CppName: MatchmakingRoomUpdateCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room*>*)>(&Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::MatchmakingRoomUpdateCallback)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "Room")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::MatchmakingManager*), "MatchmakingRoomUpdateCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::ProcessRoomData
// Il2CppName: ProcessRoomData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::*)(::Oculus::Platform::Models::Room*)>(&Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::ProcessRoomData)> {
  static const MethodInfo* get() {
    static auto* room = &::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "Room")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::MatchmakingManager*), "ProcessRoomData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{room});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::ProcessRemoteMove
// Il2CppName: ProcessRemoteMove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::*)(::StringW)>(&Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::ProcessRemoteMove)> {
  static const MethodInfo* get() {
    static auto* moveString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::MatchmakingManager*), "ProcessRemoteMove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{moveString});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::SendLocalMove
// Il2CppName: SendLocalMove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::*)(::Oculus::Platform::Samples::VrBoardGame::GamePiece::Piece, int, int)>(&Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::SendLocalMove)> {
  static const MethodInfo* get() {
    static auto* piece = &::il2cpp_utils::GetClassFromName("Oculus.Platform.Samples.VrBoardGame", "GamePiece/Piece")->byval_arg;
    static auto* boardX = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* boardY = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::MatchmakingManager*), "SendLocalMove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{piece, boardX, boardY});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::UpdateDataStoreCallback
// Il2CppName: UpdateDataStoreCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room*>*)>(&Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::UpdateDataStoreCallback)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "Room")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::MatchmakingManager*), "UpdateDataStoreCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::DoesLocalUserGoFirst
// Il2CppName: DoesLocalUserGoFirst
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::*)()>(&Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::DoesLocalUserGoFirst)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::MatchmakingManager*), "DoesLocalUserGoFirst", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::GenericErrorCheckCallback
// Il2CppName: GenericErrorCheckCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::*)(::Oculus::Platform::Message*)>(&Oculus::Platform::Samples::VrBoardGame::MatchmakingManager::GenericErrorCheckCallback)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::MatchmakingManager*), "GenericErrorCheckCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
