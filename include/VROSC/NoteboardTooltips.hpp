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
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: NoteBoardNoteController
  class NoteBoardNoteController;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: NoteboardTooltips
  class NoteboardTooltips;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::NoteboardTooltips);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteboardTooltips*, "VROSC", "NoteboardTooltips");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x23
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.NoteboardTooltips
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteboardTooltips : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private VROSC.NoteBoardNoteController _noteboardController
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::NoteBoardNoteController* noteboardController;
    // Field size check
    static_assert(sizeof(::VROSC::NoteBoardNoteController*) == 0x8);
    // private System.Boolean _xAxis
    // Size: 0x1
    // Offset: 0x20
    bool xAxis;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _yAxis
    // Size: 0x1
    // Offset: 0x21
    bool yAxis;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _zAxis
    // Size: 0x1
    // Offset: 0x22
    bool zAxis;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.NoteBoardNoteController _noteboardController
    [[deprecated]] ::VROSC::NoteBoardNoteController*& dyn__noteboardController();
    // Get instance field reference: private System.Boolean _xAxis
    [[deprecated]] bool& dyn__xAxis();
    // Get instance field reference: private System.Boolean _yAxis
    [[deprecated]] bool& dyn__yAxis();
    // Get instance field reference: private System.Boolean _zAxis
    [[deprecated]] bool& dyn__zAxis();
    // public System.Void .ctor()
    // Offset: 0xC5AFBC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteboardTooltips* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::NoteboardTooltips::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteboardTooltips*, creationType>()));
    }
  }; // VROSC.NoteboardTooltips
  #pragma pack(pop)
  static check_size<sizeof(NoteboardTooltips), 34 + sizeof(bool)> __VROSC_NoteboardTooltipsSizeCheck;
  static_assert(sizeof(NoteboardTooltips) == 0x23);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::NoteboardTooltips::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
