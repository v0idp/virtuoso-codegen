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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Renderer
  class Renderer;
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: NoteBoardNoteController
  class NoteBoardNoteController;
  // Forward declaring type: NoteFieldData
  class NoteFieldData;
  // Forward declaring type: NoteFieldParameters
  class NoteFieldParameters;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: HarpFrameVisuals
  class HarpFrameVisuals;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::HarpFrameVisuals);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::HarpFrameVisuals*, "VROSC", "HarpFrameVisuals");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0xA8
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.HarpFrameVisuals
  // [TokenAttribute] Offset: FFFFFFFF
  class HarpFrameVisuals : public ::VROSC::FrameVisuals {
    public:
    public:
    // private UnityEngine.Color _xColor
    // Size: 0x10
    // Offset: 0x24
    ::UnityEngine::Color xColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _zColor
    // Size: 0x10
    // Offset: 0x34
    ::UnityEngine::Color zColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Boolean _scaleWithVelocity
    // Size: 0x1
    // Offset: 0x44
    bool scaleWithVelocity;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: scaleWithVelocity and: renderer
    char __padding2[0x3] = {};
    // private UnityEngine.Renderer _renderer
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Renderer* renderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::Renderer*) == 0x8);
    // private UnityEngine.Renderer[] _fractures
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::UnityEngine::Renderer*> fractures;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Renderer*>) == 0x8);
    // [RangeAttribute] Offset: 0x78BD10
    // private System.Single _speed
    // Size: 0x4
    // Offset: 0x58
    float speed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: speed and: noteBoardNoteController
    char __padding5[0x4] = {};
    // private VROSC.NoteBoardNoteController _noteBoardNoteController
    // Size: 0x8
    // Offset: 0x60
    ::VROSC::NoteBoardNoteController* noteBoardNoteController;
    // Field size check
    static_assert(sizeof(::VROSC::NoteBoardNoteController*) == 0x8);
    // private UnityEngine.Color[,] _flowColors
    // Size: 0x8
    // Offset: 0x68
    ::ArrayW<::UnityEngine::Color> flowColors;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Color>) == 0x8);
    // private System.Single _lastFlowMove
    // Size: 0x4
    // Offset: 0x70
    float lastFlowMove;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _noteCount
    // Size: 0x4
    // Offset: 0x74
    int noteCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.Vector4[] _playingCached
    // Size: 0x8
    // Offset: 0x78
    ::ArrayW<::UnityEngine::Vector4> playingCached;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector4>) == 0x8);
    // private UnityEngine.Vector4[] _flowAsVectorsCached
    // Size: 0x8
    // Offset: 0x80
    ::ArrayW<::UnityEngine::Vector4> flowAsVectorsCached;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector4>) == 0x8);
    // private UnityEngine.Color[] _stringColors
    // Size: 0x8
    // Offset: 0x88
    ::ArrayW<::UnityEngine::Color> stringColors;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Color>) == 0x8);
    // private UnityEngine.Color[] _currentFlowColors
    // Size: 0x8
    // Offset: 0x90
    ::ArrayW<::UnityEngine::Color> currentFlowColors;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Color>) == 0x8);
    // private System.Single[] _x
    // Size: 0x8
    // Offset: 0x98
    ::ArrayW<float> x;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // private System.Single[] _z
    // Size: 0x8
    // Offset: 0xA0
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
    static constexpr const int _FlowY = 4;
    // Get static field: static private System.Int32 _FlowY
    static int _get__FlowY();
    // Set static field: static private System.Int32 _FlowY
    static void _set__FlowY(int value);
    // Get instance field reference: private UnityEngine.Color _xColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__xColor();
    // Get instance field reference: private UnityEngine.Color _zColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__zColor();
    // Get instance field reference: private System.Boolean _scaleWithVelocity
    [[deprecated("Use field access instead!")]] bool& dyn__scaleWithVelocity();
    // Get instance field reference: private UnityEngine.Renderer _renderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::Renderer*& dyn__renderer();
    // Get instance field reference: private UnityEngine.Renderer[] _fractures
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Renderer*>& dyn__fractures();
    // Get instance field reference: private System.Single _speed
    [[deprecated("Use field access instead!")]] float& dyn__speed();
    // Get instance field reference: private VROSC.NoteBoardNoteController _noteBoardNoteController
    [[deprecated("Use field access instead!")]] ::VROSC::NoteBoardNoteController*& dyn__noteBoardNoteController();
    // Get instance field reference: private UnityEngine.Color[,] _flowColors
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Color>& dyn__flowColors();
    // Get instance field reference: private System.Single _lastFlowMove
    [[deprecated("Use field access instead!")]] float& dyn__lastFlowMove();
    // Get instance field reference: private System.Int32 _noteCount
    [[deprecated("Use field access instead!")]] int& dyn__noteCount();
    // Get instance field reference: private UnityEngine.Vector4[] _playingCached
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector4>& dyn__playingCached();
    // Get instance field reference: private UnityEngine.Vector4[] _flowAsVectorsCached
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector4>& dyn__flowAsVectorsCached();
    // Get instance field reference: private UnityEngine.Color[] _stringColors
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Color>& dyn__stringColors();
    // Get instance field reference: private UnityEngine.Color[] _currentFlowColors
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Color>& dyn__currentFlowColors();
    // Get instance field reference: private System.Single[] _x
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn__x();
    // Get instance field reference: private System.Single[] _z
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn__z();
    // private System.Void Awake()
    // Offset: 0x19AC050
    void Awake();
    // private System.Void UpdateCount(VROSC.NoteFieldData data, VROSC.NoteFieldParameters noteFieldParameters)
    // Offset: 0x19AC124
    void UpdateCount(::VROSC::NoteFieldData* data, ::VROSC::NoteFieldParameters* noteFieldParameters);
    // private System.Void Update()
    // Offset: 0x19AC254
    void Update();
    // private System.Void MoveFlowColors(UnityEngine.Color[] colors)
    // Offset: 0x19AC5E0
    void MoveFlowColors(::ArrayW<::UnityEngine::Color> colors);
    // private System.Void UpdateRenderer(UnityEngine.Color[] stringColors)
    // Offset: 0x19AC6B0
    void UpdateRenderer(::ArrayW<::UnityEngine::Color> stringColors);
    // private System.Void UpdateFlowColors()
    // Offset: 0x19AC8F8
    void UpdateFlowColors();
    // private System.Void UpdatePlayingColors(UnityEngine.Color[] colors)
    // Offset: 0x19AC84C
    void UpdatePlayingColors(::ArrayW<::UnityEngine::Color> colors);
    // public System.Void .ctor()
    // Offset: 0x19AC9C8
    // Implemented from: VROSC.FrameVisuals
    // Base method: System.Void FrameVisuals::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HarpFrameVisuals* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::HarpFrameVisuals::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HarpFrameVisuals*, creationType>()));
    }
  }; // VROSC.HarpFrameVisuals
  #pragma pack(pop)
  static check_size<sizeof(HarpFrameVisuals), 160 + sizeof(::ArrayW<float>)> __VROSC_HarpFrameVisualsSizeCheck;
  static_assert(sizeof(HarpFrameVisuals) == 0xA8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::HarpFrameVisuals::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::HarpFrameVisuals::*)()>(&VROSC::HarpFrameVisuals::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::HarpFrameVisuals*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::HarpFrameVisuals::UpdateCount
// Il2CppName: UpdateCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::HarpFrameVisuals::*)(::VROSC::NoteFieldData*, ::VROSC::NoteFieldParameters*)>(&VROSC::HarpFrameVisuals::UpdateCount)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("VROSC", "NoteFieldData")->byval_arg;
    static auto* noteFieldParameters = &::il2cpp_utils::GetClassFromName("VROSC", "NoteFieldParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::HarpFrameVisuals*), "UpdateCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, noteFieldParameters});
  }
};
// Writing MetadataGetter for method: VROSC::HarpFrameVisuals::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::HarpFrameVisuals::*)()>(&VROSC::HarpFrameVisuals::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::HarpFrameVisuals*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::HarpFrameVisuals::MoveFlowColors
// Il2CppName: MoveFlowColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::HarpFrameVisuals::*)(::ArrayW<::UnityEngine::Color>)>(&VROSC::HarpFrameVisuals::MoveFlowColors)> {
  static const MethodInfo* get() {
    static auto* colors = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Color"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::HarpFrameVisuals*), "MoveFlowColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{colors});
  }
};
// Writing MetadataGetter for method: VROSC::HarpFrameVisuals::UpdateRenderer
// Il2CppName: UpdateRenderer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::HarpFrameVisuals::*)(::ArrayW<::UnityEngine::Color>)>(&VROSC::HarpFrameVisuals::UpdateRenderer)> {
  static const MethodInfo* get() {
    static auto* stringColors = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Color"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::HarpFrameVisuals*), "UpdateRenderer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stringColors});
  }
};
// Writing MetadataGetter for method: VROSC::HarpFrameVisuals::UpdateFlowColors
// Il2CppName: UpdateFlowColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::HarpFrameVisuals::*)()>(&VROSC::HarpFrameVisuals::UpdateFlowColors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::HarpFrameVisuals*), "UpdateFlowColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::HarpFrameVisuals::UpdatePlayingColors
// Il2CppName: UpdatePlayingColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::HarpFrameVisuals::*)(::ArrayW<::UnityEngine::Color>)>(&VROSC::HarpFrameVisuals::UpdatePlayingColors)> {
  static const MethodInfo* get() {
    static auto* colors = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Color"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::HarpFrameVisuals*), "UpdatePlayingColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{colors});
  }
};
// Writing MetadataGetter for method: VROSC::HarpFrameVisuals::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
