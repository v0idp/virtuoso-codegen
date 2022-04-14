// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.FrameVisuals
#include "VROSC/FrameVisuals.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: NoteFieldMonitor
  class NoteFieldMonitor;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Renderer
  class Renderer;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: BoardFrameVisuals2
  class BoardFrameVisuals2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::BoardFrameVisuals2);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::BoardFrameVisuals2*, "VROSC", "BoardFrameVisuals2");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.BoardFrameVisuals2
  // [TokenAttribute] Offset: FFFFFFFF
  class BoardFrameVisuals2 : public ::VROSC::FrameVisuals {
    public:
    // Writing base type padding for base size: 0x24 to desired offset: 0x28
    char ___base_padding[0x4] = {};
    public:
    // private VROSC.NoteFieldMonitor _monitor
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::NoteFieldMonitor* monitor;
    // Field size check
    static_assert(sizeof(::VROSC::NoteFieldMonitor*) == 0x8);
    // private UnityEngine.Renderer _renderer
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Renderer* renderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::Renderer*) == 0x8);
    // [RangeAttribute] Offset: 0x78BC08
    // private System.Single _speed
    // Size: 0x4
    // Offset: 0x38
    float speed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: speed and: flowColors
    char __padding2[0x4] = {};
    // private UnityEngine.Color[,] _flowColors
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::UnityEngine::Color> flowColors;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Color>) == 0x8);
    // private System.Single _lastFlowMove
    // Size: 0x4
    // Offset: 0x48
    float lastFlowMove;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: lastFlowMove and: flowAsVectorsCached
    char __padding4[0x4] = {};
    // private UnityEngine.Vector4[] _flowAsVectorsCached
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::UnityEngine::Vector4> flowAsVectorsCached;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector4>) == 0x8);
    // private UnityEngine.Color[] _currentFlowColors
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<::UnityEngine::Color> currentFlowColors;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Color>) == 0x8);
    // private System.Single[] _x
    // Size: 0x8
    // Offset: 0x60
    ::ArrayW<float> x;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // private System.Single[] _z
    // Size: 0x8
    // Offset: 0x68
    ::ArrayW<float> z;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    public:
    // static field const value: static private System.Int32 _FlowX
    static constexpr const int _FlowX = 32;
    // Get static field: static private System.Int32 _FlowX
    static int _get__FlowX();
    // Set static field: static private System.Int32 _FlowX
    static void _set__FlowX(int value);
    // static field const value: static private System.Int32 _FlowY
    static constexpr const int _FlowY = 6;
    // Get static field: static private System.Int32 _FlowY
    static int _get__FlowY();
    // Set static field: static private System.Int32 _FlowY
    static void _set__FlowY(int value);
    // Get instance field reference: private VROSC.NoteFieldMonitor _monitor
    [[deprecated]] ::VROSC::NoteFieldMonitor*& dyn__monitor();
    // Get instance field reference: private UnityEngine.Renderer _renderer
    [[deprecated]] ::UnityEngine::Renderer*& dyn__renderer();
    // Get instance field reference: private System.Single _speed
    [[deprecated]] float& dyn__speed();
    // Get instance field reference: private UnityEngine.Color[,] _flowColors
    [[deprecated]] ::ArrayW<::UnityEngine::Color>& dyn__flowColors();
    // Get instance field reference: private System.Single _lastFlowMove
    [[deprecated]] float& dyn__lastFlowMove();
    // Get instance field reference: private UnityEngine.Vector4[] _flowAsVectorsCached
    [[deprecated]] ::ArrayW<::UnityEngine::Vector4>& dyn__flowAsVectorsCached();
    // Get instance field reference: private UnityEngine.Color[] _currentFlowColors
    [[deprecated]] ::ArrayW<::UnityEngine::Color>& dyn__currentFlowColors();
    // Get instance field reference: private System.Single[] _x
    [[deprecated]] ::ArrayW<float>& dyn__x();
    // Get instance field reference: private System.Single[] _z
    [[deprecated]] ::ArrayW<float>& dyn__z();
    // private System.Void Start()
    // Offset: 0x938618
    void Start();
    // private System.Void Update()
    // Offset: 0x938690
    void Update();
    // private System.Void MoveFlowColors(UnityEngine.Color[] colors)
    // Offset: 0x93885C
    void MoveFlowColors(::ArrayW<::UnityEngine::Color> colors);
    // private System.Void UpdateRenderer()
    // Offset: 0x93892C
    void UpdateRenderer();
    // private System.Void UpdateFlowColors()
    // Offset: 0x9389DC
    void UpdateFlowColors();
    // public System.Void .ctor()
    // Offset: 0x938AAC
    // Implemented from: VROSC.FrameVisuals
    // Base method: System.Void FrameVisuals::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BoardFrameVisuals2* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::BoardFrameVisuals2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BoardFrameVisuals2*, creationType>()));
    }
  }; // VROSC.BoardFrameVisuals2
  #pragma pack(pop)
  static check_size<sizeof(BoardFrameVisuals2), 104 + sizeof(::ArrayW<float>)> __VROSC_BoardFrameVisuals2SizeCheck;
  static_assert(sizeof(BoardFrameVisuals2) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::BoardFrameVisuals2::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BoardFrameVisuals2::*)()>(&VROSC::BoardFrameVisuals2::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::BoardFrameVisuals2*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::BoardFrameVisuals2::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BoardFrameVisuals2::*)()>(&VROSC::BoardFrameVisuals2::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::BoardFrameVisuals2*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::BoardFrameVisuals2::MoveFlowColors
// Il2CppName: MoveFlowColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BoardFrameVisuals2::*)(::ArrayW<::UnityEngine::Color>)>(&VROSC::BoardFrameVisuals2::MoveFlowColors)> {
  static const MethodInfo* get() {
    static auto* colors = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Color"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::BoardFrameVisuals2*), "MoveFlowColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{colors});
  }
};
// Writing MetadataGetter for method: VROSC::BoardFrameVisuals2::UpdateRenderer
// Il2CppName: UpdateRenderer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BoardFrameVisuals2::*)()>(&VROSC::BoardFrameVisuals2::UpdateRenderer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::BoardFrameVisuals2*), "UpdateRenderer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::BoardFrameVisuals2::UpdateFlowColors
// Il2CppName: UpdateFlowColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::BoardFrameVisuals2::*)()>(&VROSC::BoardFrameVisuals2::UpdateFlowColors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::BoardFrameVisuals2*), "UpdateFlowColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::BoardFrameVisuals2::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
