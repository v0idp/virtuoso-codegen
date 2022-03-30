// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.Node
#include "VROSC/Node.hpp"
// Including type: VROSC.NoteBoardNote
#include "VROSC/NoteBoardNote.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: ControllerInputNode
  class ControllerInputNode;
  // Forward declaring type: ScaleNode
  class ScaleNode;
  // Forward declaring type: NoteField
  class NoteField;
  // Forward declaring type: NoteBoardNoteController
  class NoteBoardNoteController;
  // Forward declaring type: NoteFieldParameters
  class NoteFieldParameters;
  // Forward declaring type: InputDevice
  class InputDevice;
  // Forward declaring type: NoteFieldNoteData
  class NoteFieldNoteData;
  // Forward declaring type: Scale
  struct Scale;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: NoteBoard
  class NoteBoard;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::NoteBoard);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteBoard*, "VROSC", "NoteBoard");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.NoteBoard
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteBoard : public ::VROSC::Node {
    public:
    // Nested type: ::VROSC::NoteBoard::Axis
    struct Axis;
    // Nested type: ::VROSC::NoteBoard::PlayAxis
    struct PlayAxis;
    // Nested type: ::VROSC::NoteBoard::NoteAxis
    class NoteAxis;
    // Size: 0x14
    #pragma pack(push, 1)
    // Autogenerated type: VROSC.NoteBoard/VROSC.Axis
    // [TokenAttribute] Offset: FFFFFFFF
    struct Axis/*, public ::System::Enum*/ {
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
      // Creating value type constructor for type: Axis
      constexpr Axis(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public VROSC.NoteBoard/VROSC.Axis X
      static constexpr const int X = 0;
      // Get static field: static public VROSC.NoteBoard/VROSC.Axis X
      static ::VROSC::NoteBoard::Axis _get_X();
      // Set static field: static public VROSC.NoteBoard/VROSC.Axis X
      static void _set_X(::VROSC::NoteBoard::Axis value);
      // static field const value: static public VROSC.NoteBoard/VROSC.Axis Y
      static constexpr const int Y = 1;
      // Get static field: static public VROSC.NoteBoard/VROSC.Axis Y
      static ::VROSC::NoteBoard::Axis _get_Y();
      // Set static field: static public VROSC.NoteBoard/VROSC.Axis Y
      static void _set_Y(::VROSC::NoteBoard::Axis value);
      // static field const value: static public VROSC.NoteBoard/VROSC.Axis Z
      static constexpr const int Z = 2;
      // Get static field: static public VROSC.NoteBoard/VROSC.Axis Z
      static ::VROSC::NoteBoard::Axis _get_Z();
      // Set static field: static public VROSC.NoteBoard/VROSC.Axis Z
      static void _set_Z(::VROSC::NoteBoard::Axis value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // VROSC.NoteBoard/VROSC.Axis
    #pragma pack(pop)
    static check_size<sizeof(NoteBoard::Axis), 16 + sizeof(int)> __VROSC_NoteBoard_AxisSizeCheck;
    static_assert(sizeof(NoteBoard::Axis) == 0x14);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private VROSC.ScaleNode _scale
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::ScaleNode* scale;
    // Field size check
    static_assert(sizeof(::VROSC::ScaleNode*) == 0x8);
    // private VROSC.NoteField _startNote
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::NoteField* startNote;
    // Field size check
    static_assert(sizeof(::VROSC::NoteField*) == 0x8);
    // private VROSC.NoteBoard/VROSC.NoteAxis _noteAxisX
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::NoteBoard::NoteAxis* noteAxisX;
    // Field size check
    static_assert(sizeof(::VROSC::NoteBoard::NoteAxis*) == 0x8);
    // private VROSC.NoteBoard/VROSC.NoteAxis _noteAxisY
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::NoteBoard::NoteAxis* noteAxisY;
    // Field size check
    static_assert(sizeof(::VROSC::NoteBoard::NoteAxis*) == 0x8);
    // private VROSC.NoteBoard/VROSC.NoteAxis _noteAxisZ
    // Size: 0x8
    // Offset: 0x38
    ::VROSC::NoteBoard::NoteAxis* noteAxisZ;
    // Field size check
    static_assert(sizeof(::VROSC::NoteBoard::NoteAxis*) == 0x8);
    // private VROSC.NoteBoard/VROSC.NoteAxis[] _noteAxes
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::VROSC::NoteBoard::NoteAxis*> noteAxes;
    // Field size check
    static_assert(sizeof(::ArrayW<::VROSC::NoteBoard::NoteAxis*>) == 0x8);
    // private VROSC.NoteBoard/VROSC.Axis _primaryAxis
    // Size: 0x14
    // Offset: 0x48
    ::VROSC::NoteBoard::Axis primaryAxis;
    // Field size check
    static_assert(sizeof(::VROSC::NoteBoard::Axis) == 0x14);
    // private VROSC.ControllerInputNode _controllerInputNode
    // Size: 0x8
    // Offset: 0x50
    ::VROSC::ControllerInputNode* controllerInputNode;
    // Field size check
    static_assert(sizeof(::VROSC::ControllerInputNode*) == 0x8);
    // private VROSC.NoteBoardNoteController _notefieldController
    // Size: 0x8
    // Offset: 0x58
    ::VROSC::NoteBoardNoteController* notefieldController;
    // Field size check
    static_assert(sizeof(::VROSC::NoteBoardNoteController*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.ScaleNode _scale
    ::VROSC::ScaleNode*& dyn__scale();
    // Get instance field reference: private VROSC.NoteField _startNote
    ::VROSC::NoteField*& dyn__startNote();
    // Get instance field reference: private VROSC.NoteBoard/VROSC.NoteAxis _noteAxisX
    ::VROSC::NoteBoard::NoteAxis*& dyn__noteAxisX();
    // Get instance field reference: private VROSC.NoteBoard/VROSC.NoteAxis _noteAxisY
    ::VROSC::NoteBoard::NoteAxis*& dyn__noteAxisY();
    // Get instance field reference: private VROSC.NoteBoard/VROSC.NoteAxis _noteAxisZ
    ::VROSC::NoteBoard::NoteAxis*& dyn__noteAxisZ();
    // Get instance field reference: private VROSC.NoteBoard/VROSC.NoteAxis[] _noteAxes
    ::ArrayW<::VROSC::NoteBoard::NoteAxis*>& dyn__noteAxes();
    // Get instance field reference: private VROSC.NoteBoard/VROSC.Axis _primaryAxis
    ::VROSC::NoteBoard::Axis& dyn__primaryAxis();
    // Get instance field reference: private VROSC.ControllerInputNode _controllerInputNode
    ::VROSC::ControllerInputNode*& dyn__controllerInputNode();
    // Get instance field reference: private VROSC.NoteBoardNoteController _notefieldController
    ::VROSC::NoteBoardNoteController*& dyn__notefieldController();
    // protected System.Void Awake()
    // Offset: 0xA104BC
    void Awake();
    // protected System.Void LateUpdate()
    // Offset: 0xA107CC
    void LateUpdate();
    // private System.Void Setup()
    // Offset: 0xA104C0
    void Setup();
    // private System.Void CheckScaleAndBase()
    // Offset: 0xA10800
    void CheckScaleAndBase();
    // private System.Void UpdateScaleAndBase()
    // Offset: 0xA10834
    void UpdateScaleAndBase();
    // public System.Boolean UpdateAxisesAndReturnIfDirty()
    // Offset: 0xA10870
    bool UpdateAxisesAndReturnIfDirty();
    // public VROSC.NoteFieldParameters CreateNoteFieldParameters()
    // Offset: 0xA10990
    ::VROSC::NoteFieldParameters* CreateNoteFieldParameters();
    // private System.Void HoverBegin(VROSC.InputDevice device)
    // Offset: 0xA10E40
    void HoverBegin(::VROSC::InputDevice* device);
    // private System.Void Hover(VROSC.InputDevice device)
    // Offset: 0xA10EC4
    void Hover(::VROSC::InputDevice* device);
    // private System.Void HoverEnd(VROSC.InputDevice device)
    // Offset: 0xA11338
    void HoverEnd(::VROSC::InputDevice* device);
    // public VROSC.NoteFieldNoteData GetNoteField(UnityEngine.Vector3 position)
    // Offset: 0xA10F18
    ::VROSC::NoteFieldNoteData* GetNoteField(::UnityEngine::Vector3 position);
    // public System.Int32 GetNote(UnityEngine.Vector3 position, VROSC.NoteBoard/VROSC.PlayAxis playMode)
    // Offset: 0xA11718
    int GetNote(::UnityEngine::Vector3 position, ::VROSC::NoteBoard::PlayAxis playMode);
    // public VROSC.Scale GetScale(VROSC.NoteBoard/VROSC.PlayAxis playAxis)
    // Offset: 0xA11790
    ::VROSC::Scale GetScale(::VROSC::NoteBoard::PlayAxis playAxis);
    // static public UnityEngine.Vector3 NoteAxisToVector(VROSC.NoteBoard/VROSC.PlayAxis playAxis)
    // Offset: 0xA11844
    static ::UnityEngine::Vector3 NoteAxisToVector(::VROSC::NoteBoard::PlayAxis playAxis);
    // static public UnityEngine.Vector3 NoteAxisToVector(VROSC.NoteBoard/VROSC.PlayAxis playAxis, VROSC.NoteBoardNote/VROSC.Coloring coloring)
    // Offset: 0xA1187C
    static ::UnityEngine::Vector3 NoteAxisToVector(::VROSC::NoteBoard::PlayAxis playAxis, ::VROSC::NoteBoardNote::Coloring coloring);
    // public System.Void .ctor()
    // Offset: 0xA118B0
    // Implemented from: VROSC.Node
    // Base method: System.Void Node::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteBoard* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::NoteBoard::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteBoard*, creationType>()));
    }
  }; // VROSC.NoteBoard
  #pragma pack(pop)
  static check_size<sizeof(NoteBoard), 88 + sizeof(::VROSC::NoteBoardNoteController*)> __VROSC_NoteBoardSizeCheck;
  static_assert(sizeof(NoteBoard) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteBoard::Axis, "VROSC", "NoteBoard/Axis");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::NoteBoard::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoard::*)()>(&VROSC::NoteBoard::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoard*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoard::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoard::*)()>(&VROSC::NoteBoard::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoard*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoard::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoard::*)()>(&VROSC::NoteBoard::Setup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoard*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoard::CheckScaleAndBase
// Il2CppName: CheckScaleAndBase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoard::*)()>(&VROSC::NoteBoard::CheckScaleAndBase)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoard*), "CheckScaleAndBase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoard::UpdateScaleAndBase
// Il2CppName: UpdateScaleAndBase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoard::*)()>(&VROSC::NoteBoard::UpdateScaleAndBase)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoard*), "UpdateScaleAndBase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoard::UpdateAxisesAndReturnIfDirty
// Il2CppName: UpdateAxisesAndReturnIfDirty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::NoteBoard::*)()>(&VROSC::NoteBoard::UpdateAxisesAndReturnIfDirty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoard*), "UpdateAxisesAndReturnIfDirty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoard::CreateNoteFieldParameters
// Il2CppName: CreateNoteFieldParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::NoteFieldParameters* (VROSC::NoteBoard::*)()>(&VROSC::NoteBoard::CreateNoteFieldParameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoard*), "CreateNoteFieldParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoard::HoverBegin
// Il2CppName: HoverBegin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoard::*)(::VROSC::InputDevice*)>(&VROSC::NoteBoard::HoverBegin)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoard*), "HoverBegin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoard::Hover
// Il2CppName: Hover
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoard::*)(::VROSC::InputDevice*)>(&VROSC::NoteBoard::Hover)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoard*), "Hover", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoard::HoverEnd
// Il2CppName: HoverEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoard::*)(::VROSC::InputDevice*)>(&VROSC::NoteBoard::HoverEnd)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoard*), "HoverEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoard::GetNoteField
// Il2CppName: GetNoteField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::NoteFieldNoteData* (VROSC::NoteBoard::*)(::UnityEngine::Vector3)>(&VROSC::NoteBoard::GetNoteField)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoard*), "GetNoteField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoard::GetNote
// Il2CppName: GetNote
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::NoteBoard::*)(::UnityEngine::Vector3, ::VROSC::NoteBoard::PlayAxis)>(&VROSC::NoteBoard::GetNote)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* playMode = &::il2cpp_utils::GetClassFromName("VROSC", "NoteBoard/PlayAxis")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoard*), "GetNote", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, playMode});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoard::GetScale
// Il2CppName: GetScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::Scale (VROSC::NoteBoard::*)(::VROSC::NoteBoard::PlayAxis)>(&VROSC::NoteBoard::GetScale)> {
  static const MethodInfo* get() {
    static auto* playAxis = &::il2cpp_utils::GetClassFromName("VROSC", "NoteBoard/PlayAxis")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoard*), "GetScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playAxis});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoard::NoteAxisToVector
// Il2CppName: NoteAxisToVector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::VROSC::NoteBoard::PlayAxis)>(&VROSC::NoteBoard::NoteAxisToVector)> {
  static const MethodInfo* get() {
    static auto* playAxis = &::il2cpp_utils::GetClassFromName("VROSC", "NoteBoard/PlayAxis")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoard*), "NoteAxisToVector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playAxis});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoard::NoteAxisToVector
// Il2CppName: NoteAxisToVector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::VROSC::NoteBoard::PlayAxis, ::VROSC::NoteBoardNote::Coloring)>(&VROSC::NoteBoard::NoteAxisToVector)> {
  static const MethodInfo* get() {
    static auto* playAxis = &::il2cpp_utils::GetClassFromName("VROSC", "NoteBoard/PlayAxis")->byval_arg;
    static auto* coloring = &::il2cpp_utils::GetClassFromName("VROSC", "NoteBoardNote/Coloring")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoard*), "NoteAxisToVector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playAxis, coloring});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoard::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
