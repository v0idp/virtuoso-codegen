// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: DG.Tweening.Plugins.Core.PathCore.ControlPoint
#include "DG/Tweening/Plugins/Core/PathCore/ControlPoint.hpp"
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
  // Forward declaring type: ABSPathDecoder
  class ABSPathDecoder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder*, "DG.Tweening.Plugins.Core.PathCore", "ABSPathDecoder");
// Type namespace: DG.Tweening.Plugins.Core.PathCore
namespace DG::Tweening::Plugins::Core::PathCore {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.Plugins.Core.PathCore.ABSPathDecoder
  // [TokenAttribute] Offset: FFFFFFFF
  class ABSPathDecoder : public ::Il2CppObject {
    public:
    // System.Void FinalizePath(DG.Tweening.Plugins.Core.PathCore.Path p, UnityEngine.Vector3[] wps, System.Boolean isClosedPath)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void FinalizePath(::DG::Tweening::Plugins::Core::PathCore::Path* p, ::ArrayW<::UnityEngine::Vector3> wps, bool isClosedPath);
    // UnityEngine.Vector3 GetPoint(System.Single perc, UnityEngine.Vector3[] wps, DG.Tweening.Plugins.Core.PathCore.Path p, DG.Tweening.Plugins.Core.PathCore.ControlPoint[] controlPoints)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Vector3 GetPoint(float perc, ::ArrayW<::UnityEngine::Vector3> wps, ::DG::Tweening::Plugins::Core::PathCore::Path* p, ::ArrayW<::DG::Tweening::Plugins::Core::PathCore::ControlPoint> controlPoints);
    // protected System.Void .ctor()
    // Offset: 0x1090D0C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ABSPathDecoder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ABSPathDecoder*, creationType>()));
    }
  }; // DG.Tweening.Plugins.Core.PathCore.ABSPathDecoder
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder::FinalizePath
// Il2CppName: FinalizePath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder::*)(::DG::Tweening::Plugins::Core::PathCore::Path*, ::ArrayW<::UnityEngine::Vector3>, bool)>(&DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder::FinalizePath)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Core.PathCore", "Path")->byval_arg;
    static auto* wps = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* isClosedPath = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder*), "FinalizePath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, wps, isClosedPath});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder::GetPoint
// Il2CppName: GetPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder::*)(float, ::ArrayW<::UnityEngine::Vector3>, ::DG::Tweening::Plugins::Core::PathCore::Path*, ::ArrayW<::DG::Tweening::Plugins::Core::PathCore::ControlPoint>)>(&DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder::GetPoint)> {
  static const MethodInfo* get() {
    static auto* perc = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* wps = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* p = &::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Core.PathCore", "Path")->byval_arg;
    static auto* controlPoints = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Core.PathCore", "ControlPoint"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder*), "GetPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{perc, wps, p, controlPoints});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!