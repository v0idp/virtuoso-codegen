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
// Type namespace: Oculus.Platform.Samples.VrBoardGame
namespace Oculus::Platform::Samples::VrBoardGame {
  // Forward declaring type: BoardPosition
  class BoardPosition;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Samples::VrBoardGame::BoardPosition);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Samples::VrBoardGame::BoardPosition*, "Oculus.Platform.Samples.VrBoardGame", "BoardPosition");
// Type namespace: Oculus.Platform.Samples.VrBoardGame
namespace Oculus::Platform::Samples::VrBoardGame {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Samples.VrBoardGame.BoardPosition
  // [TokenAttribute] Offset: FFFFFFFF
  class BoardPosition : public ::UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [RangeAttribute] Offset: 0x5A568C
    // public System.Int32 x
    // Size: 0x4
    // Offset: 0x18
    int x;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [RangeAttribute] Offset: 0x5A56CC
    // public System.Int32 y
    // Size: 0x4
    // Offset: 0x1C
    int y;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Int32 x
    int& dyn_x();
    // Get instance field reference: public System.Int32 y
    int& dyn_y();
    // public System.Void .ctor()
    // Offset: 0x7B63C0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BoardPosition* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Samples::VrBoardGame::BoardPosition::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BoardPosition*, creationType>()));
    }
  }; // Oculus.Platform.Samples.VrBoardGame.BoardPosition
  #pragma pack(pop)
  static check_size<sizeof(BoardPosition), 28 + sizeof(int)> __Oculus_Platform_Samples_VrBoardGame_BoardPositionSizeCheck;
  static_assert(sizeof(BoardPosition) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::BoardPosition::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
