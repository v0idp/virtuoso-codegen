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
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: Oculus::Platform::Samples::VrBoardGame
namespace Oculus::Platform::Samples::VrBoardGame {
  // Forward declaring type: BoardPosition
  class BoardPosition;
  // Skipping declaration: Piece because it is already included!
}
// Completed forward declares
// Type namespace: Oculus.Platform.Samples.VrBoardGame
namespace Oculus::Platform::Samples::VrBoardGame {
  // Forward declaring type: GamePiece
  class GamePiece;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Samples::VrBoardGame::GamePiece);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Samples::VrBoardGame::GamePiece*, "Oculus.Platform.Samples.VrBoardGame", "GamePiece");
// Type namespace: Oculus.Platform.Samples.VrBoardGame
namespace Oculus::Platform::Samples::VrBoardGame {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Samples.VrBoardGame.GamePiece
  // [TokenAttribute] Offset: FFFFFFFF
  class GamePiece : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::Oculus::Platform::Samples::VrBoardGame::GamePiece::Piece
    struct Piece;
    // Size: 0x14
    #pragma pack(push, 1)
    // Autogenerated type: Oculus.Platform.Samples.VrBoardGame.GamePiece/Oculus.Platform.Samples.VrBoardGame.Piece
    // [TokenAttribute] Offset: FFFFFFFF
    struct Piece/*, public ::System::Enum*/ {
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
      // Creating value type constructor for type: Piece
      constexpr Piece(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Oculus.Platform.Samples.VrBoardGame.GamePiece/Oculus.Platform.Samples.VrBoardGame.Piece A
      static constexpr const int A = 0;
      // Get static field: static public Oculus.Platform.Samples.VrBoardGame.GamePiece/Oculus.Platform.Samples.VrBoardGame.Piece A
      static ::Oculus::Platform::Samples::VrBoardGame::GamePiece::Piece _get_A();
      // Set static field: static public Oculus.Platform.Samples.VrBoardGame.GamePiece/Oculus.Platform.Samples.VrBoardGame.Piece A
      static void _set_A(::Oculus::Platform::Samples::VrBoardGame::GamePiece::Piece value);
      // static field const value: static public Oculus.Platform.Samples.VrBoardGame.GamePiece/Oculus.Platform.Samples.VrBoardGame.Piece B
      static constexpr const int B = 1;
      // Get static field: static public Oculus.Platform.Samples.VrBoardGame.GamePiece/Oculus.Platform.Samples.VrBoardGame.Piece B
      static ::Oculus::Platform::Samples::VrBoardGame::GamePiece::Piece _get_B();
      // Set static field: static public Oculus.Platform.Samples.VrBoardGame.GamePiece/Oculus.Platform.Samples.VrBoardGame.Piece B
      static void _set_B(::Oculus::Platform::Samples::VrBoardGame::GamePiece::Piece value);
      // static field const value: static public Oculus.Platform.Samples.VrBoardGame.GamePiece/Oculus.Platform.Samples.VrBoardGame.Piece PowerBall
      static constexpr const int PowerBall = 2;
      // Get static field: static public Oculus.Platform.Samples.VrBoardGame.GamePiece/Oculus.Platform.Samples.VrBoardGame.Piece PowerBall
      static ::Oculus::Platform::Samples::VrBoardGame::GamePiece::Piece _get_PowerBall();
      // Set static field: static public Oculus.Platform.Samples.VrBoardGame.GamePiece/Oculus.Platform.Samples.VrBoardGame.Piece PowerBall
      static void _set_PowerBall(::Oculus::Platform::Samples::VrBoardGame::GamePiece::Piece value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // Oculus.Platform.Samples.VrBoardGame.GamePiece/Oculus.Platform.Samples.VrBoardGame.Piece
    #pragma pack(pop)
    static check_size<sizeof(GamePiece::Piece), 16 + sizeof(int)> __Oculus_Platform_Samples_VrBoardGame_GamePiece_PieceSizeCheck;
    static_assert(sizeof(GamePiece::Piece) == 0x14);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private Oculus.Platform.Samples.VrBoardGame.GamePiece/Oculus.Platform.Samples.VrBoardGame.Piece m_type
    // Size: 0x14
    // Offset: 0x18
    ::Oculus::Platform::Samples::VrBoardGame::GamePiece::Piece m_type;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Samples::VrBoardGame::GamePiece::Piece) == 0x14);
    // private UnityEngine.GameObject m_prefabA
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* m_prefabA;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject m_prefabB
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::GameObject* m_prefabB;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject m_prefabPower
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::GameObject* m_prefabPower;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private Oculus.Platform.Samples.VrBoardGame.BoardPosition m_position
    // Size: 0x8
    // Offset: 0x38
    ::Oculus::Platform::Samples::VrBoardGame::BoardPosition* m_position;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Samples::VrBoardGame::BoardPosition*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private Oculus.Platform.Samples.VrBoardGame.GamePiece/Oculus.Platform.Samples.VrBoardGame.Piece m_type
    ::Oculus::Platform::Samples::VrBoardGame::GamePiece::Piece& dyn_m_type();
    // Get instance field reference: private UnityEngine.GameObject m_prefabA
    ::UnityEngine::GameObject*& dyn_m_prefabA();
    // Get instance field reference: private UnityEngine.GameObject m_prefabB
    ::UnityEngine::GameObject*& dyn_m_prefabB();
    // Get instance field reference: private UnityEngine.GameObject m_prefabPower
    ::UnityEngine::GameObject*& dyn_m_prefabPower();
    // Get instance field reference: private Oculus.Platform.Samples.VrBoardGame.BoardPosition m_position
    ::Oculus::Platform::Samples::VrBoardGame::BoardPosition*& dyn_m_position();
    // public Oculus.Platform.Samples.VrBoardGame.GamePiece/Oculus.Platform.Samples.VrBoardGame.Piece get_Type()
    // Offset: 0x7EAA1C
    ::Oculus::Platform::Samples::VrBoardGame::GamePiece::Piece get_Type();
    // public Oculus.Platform.Samples.VrBoardGame.BoardPosition get_Position()
    // Offset: 0x7EAA24
    ::Oculus::Platform::Samples::VrBoardGame::BoardPosition* get_Position();
    // public System.Void set_Position(Oculus.Platform.Samples.VrBoardGame.BoardPosition value)
    // Offset: 0x7EAA2C
    void set_Position(::Oculus::Platform::Samples::VrBoardGame::BoardPosition* value);
    // public UnityEngine.GameObject get_Prefab()
    // Offset: 0x7EA770
    ::UnityEngine::GameObject* get_Prefab();
    // public UnityEngine.GameObject PrefabFor(Oculus.Platform.Samples.VrBoardGame.GamePiece/Oculus.Platform.Samples.VrBoardGame.Piece p)
    // Offset: 0x7EA878
    ::UnityEngine::GameObject* PrefabFor(::Oculus::Platform::Samples::VrBoardGame::GamePiece::Piece p);
    // public System.Void .ctor()
    // Offset: 0x7EAA34
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GamePiece* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Samples::VrBoardGame::GamePiece::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GamePiece*, creationType>()));
    }
  }; // Oculus.Platform.Samples.VrBoardGame.GamePiece
  #pragma pack(pop)
  static check_size<sizeof(GamePiece), 56 + sizeof(::Oculus::Platform::Samples::VrBoardGame::BoardPosition*)> __Oculus_Platform_Samples_VrBoardGame_GamePieceSizeCheck;
  static_assert(sizeof(GamePiece) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Samples::VrBoardGame::GamePiece::Piece, "Oculus.Platform.Samples.VrBoardGame", "GamePiece/Piece");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::GamePiece::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Samples::VrBoardGame::GamePiece::Piece (Oculus::Platform::Samples::VrBoardGame::GamePiece::*)()>(&Oculus::Platform::Samples::VrBoardGame::GamePiece::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::GamePiece*), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::GamePiece::get_Position
// Il2CppName: get_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Samples::VrBoardGame::BoardPosition* (Oculus::Platform::Samples::VrBoardGame::GamePiece::*)()>(&Oculus::Platform::Samples::VrBoardGame::GamePiece::get_Position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::GamePiece*), "get_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::GamePiece::set_Position
// Il2CppName: set_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrBoardGame::GamePiece::*)(::Oculus::Platform::Samples::VrBoardGame::BoardPosition*)>(&Oculus::Platform::Samples::VrBoardGame::GamePiece::set_Position)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Platform.Samples.VrBoardGame", "BoardPosition")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::GamePiece*), "set_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::GamePiece::get_Prefab
// Il2CppName: get_Prefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (Oculus::Platform::Samples::VrBoardGame::GamePiece::*)()>(&Oculus::Platform::Samples::VrBoardGame::GamePiece::get_Prefab)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::GamePiece*), "get_Prefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::GamePiece::PrefabFor
// Il2CppName: PrefabFor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (Oculus::Platform::Samples::VrBoardGame::GamePiece::*)(::Oculus::Platform::Samples::VrBoardGame::GamePiece::Piece)>(&Oculus::Platform::Samples::VrBoardGame::GamePiece::PrefabFor)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Oculus.Platform.Samples.VrBoardGame", "GamePiece/Piece")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::GamePiece*), "PrefabFor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::GamePiece::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
