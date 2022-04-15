// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: TransformDataModel
  class TransformDataModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::TransformDataModel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TransformDataModel*, "VROSC", "TransformDataModel");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x2A
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.TransformDataModel
  // [TokenAttribute] Offset: FFFFFFFF
  class TransformDataModel : public ::Il2CppObject {
    public:
    public:
    // public System.Single[] Position
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<float> Position;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // public System.Single[] Rotation
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<float> Rotation;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // public System.Single[] Scale
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<float> Scale;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // public System.Boolean IsOpen
    // Size: 0x1
    // Offset: 0x28
    bool IsOpen;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean IsPinned
    // Size: 0x1
    // Offset: 0x29
    bool IsPinned;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.Single[] Position
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn_Position();
    // Get instance field reference: public System.Single[] Rotation
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn_Rotation();
    // Get instance field reference: public System.Single[] Scale
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn_Scale();
    // Get instance field reference: public System.Boolean IsOpen
    [[deprecated("Use field access instead!")]] bool& dyn_IsOpen();
    // Get instance field reference: public System.Boolean IsPinned
    [[deprecated("Use field access instead!")]] bool& dyn_IsPinned();
    // public System.Void .ctor()
    // Offset: 0xA22D0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TransformDataModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::TransformDataModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TransformDataModel*, creationType>()));
    }
    // public System.Void Reset()
    // Offset: 0xA226E4
    void Reset();
    // public UnityEngine.Vector3 GetPosition()
    // Offset: 0xA2A494
    ::UnityEngine::Vector3 GetPosition();
    // public UnityEngine.Quaternion GetRotation()
    // Offset: 0xA2A584
    ::UnityEngine::Quaternion GetRotation();
    // public UnityEngine.Vector3 GetScale()
    // Offset: 0xA2A6AC
    ::UnityEngine::Vector3 GetScale();
    // public System.Void SetPosition(UnityEngine.Vector3 position)
    // Offset: 0xA2A4DC
    void SetPosition(::UnityEngine::Vector3 position);
    // public System.Void SetRotation(UnityEngine.Quaternion rotation)
    // Offset: 0xA2A5F4
    void SetRotation(::UnityEngine::Quaternion rotation);
    // public System.Void SetScale(UnityEngine.Vector3 scale)
    // Offset: 0xA2A6F4
    void SetScale(::UnityEngine::Vector3 scale);
  }; // VROSC.TransformDataModel
  #pragma pack(pop)
  static check_size<sizeof(TransformDataModel), 41 + sizeof(bool)> __VROSC_TransformDataModelSizeCheck;
  static_assert(sizeof(TransformDataModel) == 0x2A);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::TransformDataModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::TransformDataModel::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TransformDataModel::*)()>(&VROSC::TransformDataModel::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TransformDataModel*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TransformDataModel::GetPosition
// Il2CppName: GetPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (VROSC::TransformDataModel::*)()>(&VROSC::TransformDataModel::GetPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TransformDataModel*), "GetPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TransformDataModel::GetRotation
// Il2CppName: GetRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (VROSC::TransformDataModel::*)()>(&VROSC::TransformDataModel::GetRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TransformDataModel*), "GetRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TransformDataModel::GetScale
// Il2CppName: GetScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (VROSC::TransformDataModel::*)()>(&VROSC::TransformDataModel::GetScale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TransformDataModel*), "GetScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TransformDataModel::SetPosition
// Il2CppName: SetPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TransformDataModel::*)(::UnityEngine::Vector3)>(&VROSC::TransformDataModel::SetPosition)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TransformDataModel*), "SetPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: VROSC::TransformDataModel::SetRotation
// Il2CppName: SetRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TransformDataModel::*)(::UnityEngine::Quaternion)>(&VROSC::TransformDataModel::SetRotation)> {
  static const MethodInfo* get() {
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TransformDataModel*), "SetRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rotation});
  }
};
// Writing MetadataGetter for method: VROSC::TransformDataModel::SetScale
// Il2CppName: SetScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TransformDataModel::*)(::UnityEngine::Vector3)>(&VROSC::TransformDataModel::SetScale)> {
  static const MethodInfo* get() {
    static auto* scale = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TransformDataModel*), "SetScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scale});
  }
};
