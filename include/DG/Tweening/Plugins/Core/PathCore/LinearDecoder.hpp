// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DG.Tweening.Plugins.Core.PathCore.ABSPathDecoder
#include "DG/Tweening/Plugins/Core/PathCore/ABSPathDecoder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: DG::Tweening::Plugins::Core::PathCore
namespace DG::Tweening::Plugins::Core::PathCore {
  // Forward declaring type: Path
  class Path;
}
// Completed forward declares
// Type namespace: DG.Tweening.Plugins.Core.PathCore
namespace DG::Tweening::Plugins::Core::PathCore {
  // Forward declaring type: LinearDecoder
  class LinearDecoder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DG::Tweening::Plugins::Core::PathCore::LinearDecoder);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Plugins::Core::PathCore::LinearDecoder*, "DG.Tweening.Plugins.Core.PathCore", "LinearDecoder");
// Type namespace: DG.Tweening.Plugins.Core.PathCore
namespace DG::Tweening::Plugins::Core::PathCore {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.Plugins.Core.PathCore.LinearDecoder
  // [TokenAttribute] Offset: FFFFFFFF
  class LinearDecoder : public ::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder {
    public:
    // System.Void SetTimeToLengthTables(DG.Tweening.Plugins.Core.PathCore.Path p, System.Int32 subdivisions)
    // Offset: 0x15E0378
    void SetTimeToLengthTables(::DG::Tweening::Plugins::Core::PathCore::Path* p, int subdivisions);
    // System.Void SetWaypointsLengths(DG.Tweening.Plugins.Core.PathCore.Path p, System.Int32 subdivisions)
    // Offset: 0x15E0664
    void SetWaypointsLengths(::DG::Tweening::Plugins::Core::PathCore::Path* p, int subdivisions);
    // public System.Void .ctor()
    // Offset: 0x15E0668
    // Implemented from: DG.Tweening.Plugins.Core.PathCore.ABSPathDecoder
    // Base method: System.Void ABSPathDecoder::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LinearDecoder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DG::Tweening::Plugins::Core::PathCore::LinearDecoder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LinearDecoder*, creationType>()));
    }
    // override System.Void FinalizePath(DG.Tweening.Plugins.Core.PathCore.Path p, UnityEngine.Vector3[] wps, System.Boolean isClosedPath)
    // Offset: 0x15E0348
    // Implemented from: DG.Tweening.Plugins.Core.PathCore.ABSPathDecoder
    // Base method: System.Void ABSPathDecoder::FinalizePath(DG.Tweening.Plugins.Core.PathCore.Path p, UnityEngine.Vector3[] wps, System.Boolean isClosedPath)
    void FinalizePath(::DG::Tweening::Plugins::Core::PathCore::Path* p, ::ArrayW<::UnityEngine::Vector3> wps, bool isClosedPath);
    // override UnityEngine.Vector3 GetPoint(System.Single perc, UnityEngine.Vector3[] wps, DG.Tweening.Plugins.Core.PathCore.Path p, DG.Tweening.Plugins.Core.PathCore.ControlPoint[] controlPoints)
    // Offset: 0x15E0534
    // Implemented from: DG.Tweening.Plugins.Core.PathCore.ABSPathDecoder
    // Base method: UnityEngine.Vector3 ABSPathDecoder::GetPoint(System.Single perc, UnityEngine.Vector3[] wps, DG.Tweening.Plugins.Core.PathCore.Path p, DG.Tweening.Plugins.Core.PathCore.ControlPoint[] controlPoints)
    ::UnityEngine::Vector3 GetPoint(float perc, ::ArrayW<::UnityEngine::Vector3> wps, ::DG::Tweening::Plugins::Core::PathCore::Path* p, ::ArrayW<::DG::Tweening::Plugins::Core::PathCore::ControlPoint> controlPoints);
  }; // DG.Tweening.Plugins.Core.PathCore.LinearDecoder
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DG::Tweening::Plugins::Core::PathCore::LinearDecoder::SetTimeToLengthTables
// Il2CppName: SetTimeToLengthTables
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::Plugins::Core::PathCore::LinearDecoder::*)(::DG::Tweening::Plugins::Core::PathCore::Path*, int)>(&DG::Tweening::Plugins::Core::PathCore::LinearDecoder::SetTimeToLengthTables)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Core.PathCore", "Path")->byval_arg;
    static auto* subdivisions = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::Core::PathCore::LinearDecoder*), "SetTimeToLengthTables", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, subdivisions});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Plugins::Core::PathCore::LinearDecoder::SetWaypointsLengths
// Il2CppName: SetWaypointsLengths
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::Plugins::Core::PathCore::LinearDecoder::*)(::DG::Tweening::Plugins::Core::PathCore::Path*, int)>(&DG::Tweening::Plugins::Core::PathCore::LinearDecoder::SetWaypointsLengths)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Core.PathCore", "Path")->byval_arg;
    static auto* subdivisions = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::Core::PathCore::LinearDecoder*), "SetWaypointsLengths", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, subdivisions});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Plugins::Core::PathCore::LinearDecoder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: DG::Tweening::Plugins::Core::PathCore::LinearDecoder::FinalizePath
// Il2CppName: FinalizePath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::Plugins::Core::PathCore::LinearDecoder::*)(::DG::Tweening::Plugins::Core::PathCore::Path*, ::ArrayW<::UnityEngine::Vector3>, bool)>(&DG::Tweening::Plugins::Core::PathCore::LinearDecoder::FinalizePath)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Core.PathCore", "Path")->byval_arg;
    static auto* wps = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* isClosedPath = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::Core::PathCore::LinearDecoder*), "FinalizePath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, wps, isClosedPath});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Plugins::Core::PathCore::LinearDecoder::GetPoint
// Il2CppName: GetPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (DG::Tweening::Plugins::Core::PathCore::LinearDecoder::*)(float, ::ArrayW<::UnityEngine::Vector3>, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::ArrayW<::DG::Tweening::Plugins::Core::PathCore::ControlPoint>)>(&DG::Tweening::Plugins::Core::PathCore::LinearDecoder::GetPoint)> {
  static const MethodInfo* get() {
    static auto* perc = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* wps = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* p = &::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Core.PathCore", "Path")->byval_arg;
    static auto* controlPoints = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Core.PathCore", "ControlPoint"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::Core::PathCore::LinearDecoder*), "GetPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{perc, wps, p, controlPoints});
  }
};
