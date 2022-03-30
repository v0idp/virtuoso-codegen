// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: Oculus.Platform.Samples.VrBoardGame.GamePiece
#include "Oculus/Platform/Samples/VrBoardGame/GamePiece.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Samples::VrBoardGame
namespace Oculus::Platform::Samples::VrBoardGame {
  // Skipping declaration: GameState because it is already included!
  // Forward declaring type: MatchmakingManager
  class MatchmakingManager;
  // Forward declaring type: GameBoard
  class GameBoard;
  // Forward declaring type: BoardPosition
  class BoardPosition;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Text
  class Text;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Samples.VrBoardGame
namespace Oculus::Platform::Samples::VrBoardGame {
  // Forward declaring type: GameController
  class GameController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Samples::VrBoardGame::GameController);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Samples::VrBoardGame::GameController*, "Oculus.Platform.Samples.VrBoardGame", "GameController");
// Type namespace: Oculus.Platform.Samples.VrBoardGame
namespace Oculus::Platform::Samples::VrBoardGame {
  // Size: 0xC8
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Samples.VrBoardGame.GameController
  // [TokenAttribute] Offset: FFFFFFFF
  class GameController : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::Oculus::Platform::Samples::VrBoardGame::GameController::GameState
    struct GameState;
    // Size: 0x14
    #pragma pack(push, 1)
    // Autogenerated type: Oculus.Platform.Samples.VrBoardGame.GameController/Oculus.Platform.Samples.VrBoardGame.GameState
    // [TokenAttribute] Offset: FFFFFFFF
    struct GameState/*, public ::System::Enum*/ {
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
      // Creating value type constructor for type: GameState
      constexpr GameState(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Oculus.Platform.Samples.VrBoardGame.GameController/Oculus.Platform.Samples.VrBoardGame.GameState None
      static constexpr const int None = 0;
      // Get static field: static public Oculus.Platform.Samples.VrBoardGame.GameController/Oculus.Platform.Samples.VrBoardGame.GameState None
      static ::Oculus::Platform::Samples::VrBoardGame::GameController::GameState _get_None();
      // Set static field: static public Oculus.Platform.Samples.VrBoardGame.GameController/Oculus.Platform.Samples.VrBoardGame.GameState None
      static void _set_None(::Oculus::Platform::Samples::VrBoardGame::GameController::GameState value);
      // static field const value: static public Oculus.Platform.Samples.VrBoardGame.GameController/Oculus.Platform.Samples.VrBoardGame.GameState PracticingMyTurn
      static constexpr const int PracticingMyTurn = 1;
      // Get static field: static public Oculus.Platform.Samples.VrBoardGame.GameController/Oculus.Platform.Samples.VrBoardGame.GameState PracticingMyTurn
      static ::Oculus::Platform::Samples::VrBoardGame::GameController::GameState _get_PracticingMyTurn();
      // Set static field: static public Oculus.Platform.Samples.VrBoardGame.GameController/Oculus.Platform.Samples.VrBoardGame.GameState PracticingMyTurn
      static void _set_PracticingMyTurn(::Oculus::Platform::Samples::VrBoardGame::GameController::GameState value);
      // static field const value: static public Oculus.Platform.Samples.VrBoardGame.GameController/Oculus.Platform.Samples.VrBoardGame.GameState PracticingAiTurn
      static constexpr const int PracticingAiTurn = 2;
      // Get static field: static public Oculus.Platform.Samples.VrBoardGame.GameController/Oculus.Platform.Samples.VrBoardGame.GameState PracticingAiTurn
      static ::Oculus::Platform::Samples::VrBoardGame::GameController::GameState _get_PracticingAiTurn();
      // Set static field: static public Oculus.Platform.Samples.VrBoardGame.GameController/Oculus.Platform.Samples.VrBoardGame.GameState PracticingAiTurn
      static void _set_PracticingAiTurn(::Oculus::Platform::Samples::VrBoardGame::GameController::GameState value);
      // static field const value: static public Oculus.Platform.Samples.VrBoardGame.GameController/Oculus.Platform.Samples.VrBoardGame.GameState OnlineMatchMyTurn
      static constexpr const int OnlineMatchMyTurn = 3;
      // Get static field: static public Oculus.Platform.Samples.VrBoardGame.GameController/Oculus.Platform.Samples.VrBoardGame.GameState OnlineMatchMyTurn
      static ::Oculus::Platform::Samples::VrBoardGame::GameController::GameState _get_OnlineMatchMyTurn();
      // Set static field: static public Oculus.Platform.Samples.VrBoardGame.GameController/Oculus.Platform.Samples.VrBoardGame.GameState OnlineMatchMyTurn
      static void _set_OnlineMatchMyTurn(::Oculus::Platform::Samples::VrBoardGame::GameController::GameState value);
      // static field const value: static public Oculus.Platform.Samples.VrBoardGame.GameController/Oculus.Platform.Samples.VrBoardGame.GameState OnlineMatchRemoteTurn
      static constexpr const int OnlineMatchRemoteTurn = 4;
      // Get static field: static public Oculus.Platform.Samples.VrBoardGame.GameController/Oculus.Platform.Samples.VrBoardGame.GameState OnlineMatchRemoteTurn
      static ::Oculus::Platform::Samples::VrBoardGame::GameController::GameState _get_OnlineMatchRemoteTurn();
      // Set static field: static public Oculus.Platform.Samples.VrBoardGame.GameController/Oculus.Platform.Samples.VrBoardGame.GameState OnlineMatchRemoteTurn
      static void _set_OnlineMatchRemoteTurn(::Oculus::Platform::Samples::VrBoardGame::GameController::GameState value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // Oculus.Platform.Samples.VrBoardGame.GameController/Oculus.Platform.Samples.VrBoardGame.GameState
    #pragma pack(pop)
    static check_size<sizeof(GameController::GameState), 16 + sizeof(int)> __Oculus_Platform_Samples_VrBoardGame_GameController_GameStateSizeCheck;
    static_assert(sizeof(GameController::GameState) == 0x14);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private Oculus.Platform.Samples.VrBoardGame.MatchmakingManager m_matchmaking
    // Size: 0x8
    // Offset: 0x18
    ::Oculus::Platform::Samples::VrBoardGame::MatchmakingManager* m_matchmaking;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Samples::VrBoardGame::MatchmakingManager*) == 0x8);
    // private Oculus.Platform.Samples.VrBoardGame.GameBoard m_board
    // Size: 0x8
    // Offset: 0x20
    ::Oculus::Platform::Samples::VrBoardGame::GameBoard* m_board;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Samples::VrBoardGame::GameBoard*) == 0x8);
    // private Oculus.Platform.Samples.VrBoardGame.GamePiece m_pieceA
    // Size: 0x8
    // Offset: 0x28
    ::Oculus::Platform::Samples::VrBoardGame::GamePiece* m_pieceA;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Samples::VrBoardGame::GamePiece*) == 0x8);
    // private Oculus.Platform.Samples.VrBoardGame.GamePiece m_pieceB
    // Size: 0x8
    // Offset: 0x30
    ::Oculus::Platform::Samples::VrBoardGame::GamePiece* m_pieceB;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Samples::VrBoardGame::GamePiece*) == 0x8);
    // private Oculus.Platform.Samples.VrBoardGame.GamePiece m_powerPiece
    // Size: 0x8
    // Offset: 0x38
    ::Oculus::Platform::Samples::VrBoardGame::GamePiece* m_powerPiece;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Samples::VrBoardGame::GamePiece*) == 0x8);
    // private UnityEngine.Color m_unusableColor
    // Size: 0x10
    // Offset: 0x40
    ::UnityEngine::Color m_unusableColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color m_unselectedColor
    // Size: 0x10
    // Offset: 0x50
    ::UnityEngine::Color m_unselectedColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color m_selectedColor
    // Size: 0x10
    // Offset: 0x60
    ::UnityEngine::Color m_selectedColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color m_highlightedColor
    // Size: 0x10
    // Offset: 0x70
    ::UnityEngine::Color m_highlightedColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.UI.Text m_ballCountText
    // Size: 0x8
    // Offset: 0x80
    ::UnityEngine::UI::Text* m_ballCountText;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    // private UnityEngine.UI.Text m_player0Text
    // Size: 0x8
    // Offset: 0x88
    ::UnityEngine::UI::Text* m_player0Text;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    // private UnityEngine.UI.Text m_player1Text
    // Size: 0x8
    // Offset: 0x90
    ::UnityEngine::UI::Text* m_player1Text;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    // private Oculus.Platform.Samples.VrBoardGame.GameController/Oculus.Platform.Samples.VrBoardGame.GameState m_state
    // Size: 0x14
    // Offset: 0x98
    ::Oculus::Platform::Samples::VrBoardGame::GameController::GameState m_state;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Samples::VrBoardGame::GameController::GameState) == 0x14);
    // private Oculus.Platform.Samples.VrBoardGame.GamePiece m_interestedPiece
    // Size: 0x8
    // Offset: 0xA0
    ::Oculus::Platform::Samples::VrBoardGame::GamePiece* m_interestedPiece;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Samples::VrBoardGame::GamePiece*) == 0x8);
    // private Oculus.Platform.Samples.VrBoardGame.GamePiece m_selectedPiece
    // Size: 0x8
    // Offset: 0xA8
    ::Oculus::Platform::Samples::VrBoardGame::GamePiece* m_selectedPiece;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Samples::VrBoardGame::GamePiece*) == 0x8);
    // private Oculus.Platform.Samples.VrBoardGame.GamePiece m_proposedPiece
    // Size: 0x8
    // Offset: 0xB0
    ::Oculus::Platform::Samples::VrBoardGame::GamePiece* m_proposedPiece;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Samples::VrBoardGame::GamePiece*) == 0x8);
    // private System.UInt32 m_powerBallcount
    // Size: 0x4
    // Offset: 0xB8
    uint m_powerBallcount;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: m_powerBallcount and: m_opponentName
    char __padding16[0x4] = {};
    // private System.String m_opponentName
    // Size: 0x8
    // Offset: 0xC0
    ::StringW m_opponentName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private Oculus.Platform.Samples.VrBoardGame.MatchmakingManager m_matchmaking
    ::Oculus::Platform::Samples::VrBoardGame::MatchmakingManager*& dyn_m_matchmaking();
    // Get instance field reference: private Oculus.Platform.Samples.VrBoardGame.GameBoard m_board
    ::Oculus::Platform::Samples::VrBoardGame::GameBoard*& dyn_m_board();
    // Get instance field reference: private Oculus.Platform.Samples.VrBoardGame.GamePiece m_pieceA
    ::Oculus::Platform::Samples::VrBoardGame::GamePiece*& dyn_m_pieceA();
    // Get instance field reference: private Oculus.Platform.Samples.VrBoardGame.GamePiece m_pieceB
    ::Oculus::Platform::Samples::VrBoardGame::GamePiece*& dyn_m_pieceB();
    // Get instance field reference: private Oculus.Platform.Samples.VrBoardGame.GamePiece m_powerPiece
    ::Oculus::Platform::Samples::VrBoardGame::GamePiece*& dyn_m_powerPiece();
    // Get instance field reference: private UnityEngine.Color m_unusableColor
    ::UnityEngine::Color& dyn_m_unusableColor();
    // Get instance field reference: private UnityEngine.Color m_unselectedColor
    ::UnityEngine::Color& dyn_m_unselectedColor();
    // Get instance field reference: private UnityEngine.Color m_selectedColor
    ::UnityEngine::Color& dyn_m_selectedColor();
    // Get instance field reference: private UnityEngine.Color m_highlightedColor
    ::UnityEngine::Color& dyn_m_highlightedColor();
    // Get instance field reference: private UnityEngine.UI.Text m_ballCountText
    ::UnityEngine::UI::Text*& dyn_m_ballCountText();
    // Get instance field reference: private UnityEngine.UI.Text m_player0Text
    ::UnityEngine::UI::Text*& dyn_m_player0Text();
    // Get instance field reference: private UnityEngine.UI.Text m_player1Text
    ::UnityEngine::UI::Text*& dyn_m_player1Text();
    // Get instance field reference: private Oculus.Platform.Samples.VrBoardGame.GameController/Oculus.Platform.Samples.VrBoardGame.GameState m_state
    ::Oculus::Platform::Samples::VrBoardGame::GameController::GameState& dyn_m_state();
    // Get instance field reference: private Oculus.Platform.Samples.VrBoardGame.GamePiece m_interestedPiece
    ::Oculus::Platform::Samples::VrBoardGame::GamePiece*& dyn_m_interestedPiece();
    // Get instance field reference: private Oculus.Platform.Samples.VrBoardGame.GamePiece m_selectedPiece
    ::Oculus::Platform::Samples::VrBoardGame::GamePiece*& dyn_m_selectedPiece();
    // Get instance field reference: private Oculus.Platform.Samples.VrBoardGame.GamePiece m_proposedPiece
    ::Oculus::Platform::Samples::VrBoardGame::GamePiece*& dyn_m_proposedPiece();
    // Get instance field reference: private System.UInt32 m_powerBallcount
    uint& dyn_m_powerBallcount();
    // Get instance field reference: private System.String m_opponentName
    ::StringW& dyn_m_opponentName();
    // private System.Void Start()
    // Offset: 0x7E9B58
    void Start();
    // private System.Void Update()
    // Offset: 0x7E9CC0
    void Update();
    // private System.Void TransitionToState(Oculus.Platform.Samples.VrBoardGame.GameController/Oculus.Platform.Samples.VrBoardGame.GameState state)
    // Offset: 0x7E9B80
    void TransitionToState(::Oculus::Platform::Samples::VrBoardGame::GameController::GameState state);
    // private System.Void TransitionToNextState()
    // Offset: 0x7EA0EC
    void TransitionToNextState();
    // private System.Void PerFrameStateUpdate()
    // Offset: 0x7E9CC4
    void PerFrameStateUpdate();
    // public System.Void PracticeButtonPressed()
    // Offset: 0x7EA674
    void PracticeButtonPressed();
    // private System.Void MakeAIMove(System.Int32 player)
    // Offset: 0x7EA1D4
    void MakeAIMove(int player);
    // public System.Void StartOnlineMatch(System.String opponentName, System.Boolean localUserGoesFirst)
    // Offset: 0x7EA79C
    void StartOnlineMatch(::StringW opponentName, bool localUserGoesFirst);
    // public System.Void MakeRemoteMove(Oculus.Platform.Samples.VrBoardGame.GamePiece/Oculus.Platform.Samples.VrBoardGame.Piece piece, System.Int32 x, System.Int32 y)
    // Offset: 0x7EA7FC
    void MakeRemoteMove(::Oculus::Platform::Samples::VrBoardGame::GamePiece::Piece piece, int x, int y);
    // public System.Void MarkRemoteTurnComplete()
    // Offset: 0x7EA8A0
    void MarkRemoteTurnComplete();
    // public System.Void RemoteMatchEnded()
    // Offset: 0x7EA8B4
    void RemoteMatchEnded();
    // public System.Void StartedLookingAtPiece(Oculus.Platform.Samples.VrBoardGame.GamePiece piece)
    // Offset: 0x7E8850
    void StartedLookingAtPiece(::Oculus::Platform::Samples::VrBoardGame::GamePiece* piece);
    // public System.Void StoppedLookingAtPiece()
    // Offset: 0x7E8848
    void StoppedLookingAtPiece();
    // public System.Void StartedLookingAtPosition(Oculus.Platform.Samples.VrBoardGame.BoardPosition position)
    // Offset: 0x7E8858
    void StartedLookingAtPosition(::Oculus::Platform::Samples::VrBoardGame::BoardPosition* position);
    // public System.Void ClearProposedMove()
    // Offset: 0x7E8AD0
    void ClearProposedMove();
    // public System.Void TrySelectPiece()
    // Offset: 0x7EA3E4
    void TrySelectPiece();
    // public System.Void TryPlacePiece()
    // Offset: 0x7EA4EC
    void TryPlacePiece();
    // public System.Void QuitButtonPressed()
    // Offset: 0x7EA914
    void QuitButtonPressed();
    // public System.Void AddPowerballs(System.UInt32 count)
    // Offset: 0x7EA91C
    void AddPowerballs(uint count);
    // private System.Void UpdateScores()
    // Offset: 0x7E9B88
    void UpdateScores();
    // private System.Void UpdateGamePieceColors()
    // Offset: 0x7E9D78
    void UpdateGamePieceColors();
    // public System.Void .ctor()
    // Offset: 0x7EA9B8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Samples::VrBoardGame::GameController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameController*, creationType>()));
    }
  }; // Oculus.Platform.Samples.VrBoardGame.GameController
  #pragma pack(pop)
  static check_size<sizeof(GameController), 192 + sizeof(::StringW)> __Oculus_Platform_Samples_VrBoardGame_GameControllerSizeCheck;
  static_assert(sizeof(GameController) == 0xC8);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Samples::VrBoardGame::GameController::GameState, "Oculus.Platform.Samples.VrBoardGame", "GameController/GameState");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::GameController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrBoardGame::GameController::*)()>(&Oculus::Platform::Samples::VrBoardGame::GameController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::GameController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::GameController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrBoardGame::GameController::*)()>(&Oculus::Platform::Samples::VrBoardGame::GameController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::GameController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::GameController::TransitionToState
// Il2CppName: TransitionToState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrBoardGame::GameController::*)(::Oculus::Platform::Samples::VrBoardGame::GameController::GameState)>(&Oculus::Platform::Samples::VrBoardGame::GameController::TransitionToState)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("Oculus.Platform.Samples.VrBoardGame", "GameController/GameState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::GameController*), "TransitionToState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::GameController::TransitionToNextState
// Il2CppName: TransitionToNextState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrBoardGame::GameController::*)()>(&Oculus::Platform::Samples::VrBoardGame::GameController::TransitionToNextState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::GameController*), "TransitionToNextState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::GameController::PerFrameStateUpdate
// Il2CppName: PerFrameStateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrBoardGame::GameController::*)()>(&Oculus::Platform::Samples::VrBoardGame::GameController::PerFrameStateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::GameController*), "PerFrameStateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::GameController::PracticeButtonPressed
// Il2CppName: PracticeButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrBoardGame::GameController::*)()>(&Oculus::Platform::Samples::VrBoardGame::GameController::PracticeButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::GameController*), "PracticeButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::GameController::MakeAIMove
// Il2CppName: MakeAIMove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrBoardGame::GameController::*)(int)>(&Oculus::Platform::Samples::VrBoardGame::GameController::MakeAIMove)> {
  static const MethodInfo* get() {
    static auto* player = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::GameController*), "MakeAIMove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{player});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::GameController::StartOnlineMatch
// Il2CppName: StartOnlineMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrBoardGame::GameController::*)(::StringW, bool)>(&Oculus::Platform::Samples::VrBoardGame::GameController::StartOnlineMatch)> {
  static const MethodInfo* get() {
    static auto* opponentName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localUserGoesFirst = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::GameController*), "StartOnlineMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{opponentName, localUserGoesFirst});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::GameController::MakeRemoteMove
// Il2CppName: MakeRemoteMove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrBoardGame::GameController::*)(::Oculus::Platform::Samples::VrBoardGame::GamePiece::Piece, int, int)>(&Oculus::Platform::Samples::VrBoardGame::GameController::MakeRemoteMove)> {
  static const MethodInfo* get() {
    static auto* piece = &::il2cpp_utils::GetClassFromName("Oculus.Platform.Samples.VrBoardGame", "GamePiece/Piece")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::GameController*), "MakeRemoteMove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{piece, x, y});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::GameController::MarkRemoteTurnComplete
// Il2CppName: MarkRemoteTurnComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrBoardGame::GameController::*)()>(&Oculus::Platform::Samples::VrBoardGame::GameController::MarkRemoteTurnComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::GameController*), "MarkRemoteTurnComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::GameController::RemoteMatchEnded
// Il2CppName: RemoteMatchEnded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrBoardGame::GameController::*)()>(&Oculus::Platform::Samples::VrBoardGame::GameController::RemoteMatchEnded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::GameController*), "RemoteMatchEnded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::GameController::StartedLookingAtPiece
// Il2CppName: StartedLookingAtPiece
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrBoardGame::GameController::*)(::Oculus::Platform::Samples::VrBoardGame::GamePiece*)>(&Oculus::Platform::Samples::VrBoardGame::GameController::StartedLookingAtPiece)> {
  static const MethodInfo* get() {
    static auto* piece = &::il2cpp_utils::GetClassFromName("Oculus.Platform.Samples.VrBoardGame", "GamePiece")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::GameController*), "StartedLookingAtPiece", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{piece});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::GameController::StoppedLookingAtPiece
// Il2CppName: StoppedLookingAtPiece
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrBoardGame::GameController::*)()>(&Oculus::Platform::Samples::VrBoardGame::GameController::StoppedLookingAtPiece)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::GameController*), "StoppedLookingAtPiece", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::GameController::StartedLookingAtPosition
// Il2CppName: StartedLookingAtPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrBoardGame::GameController::*)(::Oculus::Platform::Samples::VrBoardGame::BoardPosition*)>(&Oculus::Platform::Samples::VrBoardGame::GameController::StartedLookingAtPosition)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("Oculus.Platform.Samples.VrBoardGame", "BoardPosition")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::GameController*), "StartedLookingAtPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::GameController::ClearProposedMove
// Il2CppName: ClearProposedMove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrBoardGame::GameController::*)()>(&Oculus::Platform::Samples::VrBoardGame::GameController::ClearProposedMove)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::GameController*), "ClearProposedMove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::GameController::TrySelectPiece
// Il2CppName: TrySelectPiece
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrBoardGame::GameController::*)()>(&Oculus::Platform::Samples::VrBoardGame::GameController::TrySelectPiece)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::GameController*), "TrySelectPiece", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::GameController::TryPlacePiece
// Il2CppName: TryPlacePiece
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrBoardGame::GameController::*)()>(&Oculus::Platform::Samples::VrBoardGame::GameController::TryPlacePiece)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::GameController*), "TryPlacePiece", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::GameController::QuitButtonPressed
// Il2CppName: QuitButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrBoardGame::GameController::*)()>(&Oculus::Platform::Samples::VrBoardGame::GameController::QuitButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::GameController*), "QuitButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::GameController::AddPowerballs
// Il2CppName: AddPowerballs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrBoardGame::GameController::*)(uint)>(&Oculus::Platform::Samples::VrBoardGame::GameController::AddPowerballs)> {
  static const MethodInfo* get() {
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::GameController*), "AddPowerballs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{count});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::GameController::UpdateScores
// Il2CppName: UpdateScores
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrBoardGame::GameController::*)()>(&Oculus::Platform::Samples::VrBoardGame::GameController::UpdateScores)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::GameController*), "UpdateScores", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::GameController::UpdateGamePieceColors
// Il2CppName: UpdateGamePieceColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrBoardGame::GameController::*)()>(&Oculus::Platform::Samples::VrBoardGame::GameController::UpdateGamePieceColors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::GameController*), "UpdateGamePieceColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::GameController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
