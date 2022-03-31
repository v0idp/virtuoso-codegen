// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.NoteBoardNoteAnimator
#include "VROSC/NoteBoardNoteAnimator.hpp"
// Including type: VROSC.Axis
#include "VROSC/Axis.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: NoteBoardNote
  class NoteBoardNote;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: NoteBoardStringAnimator
  class NoteBoardStringAnimator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::NoteBoardStringAnimator);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteBoardStringAnimator*, "VROSC", "NoteBoardStringAnimator");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.NoteBoardStringAnimator
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteBoardStringAnimator : public ::VROSC::NoteBoardNoteAnimator {
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
    // private VROSC.Axis _axis
    // Size: 0x4
    // Offset: 0x78
    ::VROSC::Axis axis;
    // Field size check
    static_assert(sizeof(::VROSC::Axis) == 0x4);
    // private System.Single _width
    // Size: 0x4
    // Offset: 0x7C
    float width;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private VROSC.Axis _axis
    ::VROSC::Axis& dyn__axis();
    // Get instance field reference: private System.Single _width
    float& dyn__width();
    // private VROSC.Axis GetAxis(UnityEngine.Vector3 scale)
    // Offset: 0xA14E34
    ::VROSC::Axis GetAxis(::UnityEngine::Vector3 scale);
    // private System.Void SetRotation()
    // Offset: 0xA14EC4
    void SetRotation();
    // private UnityEngine.Vector3 GetScale(UnityEngine.Vector3 scale)
    // Offset: 0xA14E9C
    ::UnityEngine::Vector3 GetScale(::UnityEngine::Vector3 scale);
    // public System.Void .ctor()
    // Offset: 0xA14FA4
    // Implemented from: VROSC.NoteBoardNoteAnimator
    // Base method: System.Void NoteBoardNoteAnimator::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteBoardStringAnimator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::NoteBoardStringAnimator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteBoardStringAnimator*, creationType>()));
    }
    // public override System.Void Setup(VROSC.NoteBoardNote noteBoardNote, System.Int32[] numberOfFields, UnityEngine.Vector3 scale)
    // Offset: 0xA14D8C
    // Implemented from: VROSC.NoteBoardNoteAnimator
    // Base method: System.Void NoteBoardNoteAnimator::Setup(VROSC.NoteBoardNote noteBoardNote, System.Int32[] numberOfFields, UnityEngine.Vector3 scale)
    void Setup(::VROSC::NoteBoardNote* noteBoardNote, ::ArrayW<int> numberOfFields, ::UnityEngine::Vector3 scale);
  }; // VROSC.NoteBoardStringAnimator
  #pragma pack(pop)
  static check_size<sizeof(NoteBoardStringAnimator), 124 + sizeof(float)> __VROSC_NoteBoardStringAnimatorSizeCheck;
  static_assert(sizeof(NoteBoardStringAnimator) == 0x80);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::NoteBoardStringAnimator::GetAxis
// Il2CppName: GetAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::Axis (VROSC::NoteBoardStringAnimator::*)(::UnityEngine::Vector3)>(&VROSC::NoteBoardStringAnimator::GetAxis)> {
  static const MethodInfo* get() {
    static auto* scale = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardStringAnimator*), "GetAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scale});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardStringAnimator::SetRotation
// Il2CppName: SetRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardStringAnimator::*)()>(&VROSC::NoteBoardStringAnimator::SetRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardStringAnimator*), "SetRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardStringAnimator::GetScale
// Il2CppName: GetScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (VROSC::NoteBoardStringAnimator::*)(::UnityEngine::Vector3)>(&VROSC::NoteBoardStringAnimator::GetScale)> {
  static const MethodInfo* get() {
    static auto* scale = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardStringAnimator*), "GetScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scale});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardStringAnimator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::NoteBoardStringAnimator::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardStringAnimator::*)(::VROSC::NoteBoardNote*, ::ArrayW<int>, ::UnityEngine::Vector3)>(&VROSC::NoteBoardStringAnimator::Setup)> {
  static const MethodInfo* get() {
    static auto* noteBoardNote = &::il2cpp_utils::GetClassFromName("VROSC", "NoteBoardNote")->byval_arg;
    static auto* numberOfFields = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* scale = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardStringAnimator*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteBoardNote, numberOfFields, scale});
  }
};
