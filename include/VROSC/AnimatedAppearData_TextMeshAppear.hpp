// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.AnimatedAppearData
#include "VROSC/AnimatedAppearData.hpp"
// Including type: VROSC.AnimatedAppearData/VROSC.AppearingObject
#include "VROSC/AnimatedAppearData_AppearingObject.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: MinMaxVector2
  class MinMaxVector2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::AnimatedAppearData::TextMeshAppear);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AnimatedAppearData::TextMeshAppear*, "VROSC", "AnimatedAppearData/TextMeshAppear");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.AnimatedAppearData/VROSC.TextMeshAppear
  // [TokenAttribute] Offset: FFFFFFFF
  class AnimatedAppearData::TextMeshAppear : public ::VROSC::AnimatedAppearData::AppearingObject {
    public:
    public:
    // private TMPro.TextMeshPro _textMesh
    // Size: 0x8
    // Offset: 0x20
    ::TMPro::TextMeshPro* textMesh;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshPro*) == 0x8);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x28
    ::UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Get instance field reference: private TMPro.TextMeshPro _textMesh
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshPro*& dyn__textMesh();
    // Get instance field reference: private UnityEngine.Color _color
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__color();
    // public System.Void .ctor(TMPro.TextMeshPro textMesh, VROSC.MinMaxVector2 minMax)
    // Offset: 0x956584
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimatedAppearData::TextMeshAppear* New_ctor(::TMPro::TextMeshPro* textMesh, ::VROSC::MinMaxVector2* minMax) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::AnimatedAppearData::TextMeshAppear::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimatedAppearData::TextMeshAppear*, creationType>(textMesh, minMax)));
    }
    // protected override System.Void UpdateObject(VROSC.AnimatedAppear/VROSC.Mode mode, System.Boolean useFlash)
    // Offset: 0x9565F0
    // Implemented from: VROSC.AnimatedAppearData/VROSC.AppearingObject
    // Base method: System.Void AppearingObject::UpdateObject(VROSC.AnimatedAppear/VROSC.Mode mode, System.Boolean useFlash)
    void UpdateObject(::VROSC::AnimatedAppear::Mode mode, bool useFlash);
  }; // VROSC.AnimatedAppearData/VROSC.TextMeshAppear
  #pragma pack(pop)
  static check_size<sizeof(AnimatedAppearData::TextMeshAppear), 40 + sizeof(::UnityEngine::Color)> __VROSC_AnimatedAppearData_TextMeshAppearSizeCheck;
  static_assert(sizeof(AnimatedAppearData::TextMeshAppear) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::AnimatedAppearData::TextMeshAppear::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::AnimatedAppearData::TextMeshAppear::UpdateObject
// Il2CppName: UpdateObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AnimatedAppearData::TextMeshAppear::*)(::VROSC::AnimatedAppear::Mode, bool)>(&VROSC::AnimatedAppearData::TextMeshAppear::UpdateObject)> {
  static const MethodInfo* get() {
    static auto* mode = &::il2cpp_utils::GetClassFromName("VROSC", "AnimatedAppear/Mode")->byval_arg;
    static auto* useFlash = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AnimatedAppearData::TextMeshAppear*), "UpdateObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mode, useFlash});
  }
};
