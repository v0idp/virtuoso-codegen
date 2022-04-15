// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Behaviour
#include "UnityEngine/Behaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TerrainData
  class TerrainData;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Terrain
  class Terrain;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Terrain);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Terrain*, "UnityEngine", "Terrain");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Terrain
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 6DC5F0
  // [StaticAccessorAttribute] Offset: 6DC5F0
  // [UsedByNativeCodeAttribute] Offset: 6DC5F0
  // [NativeHeaderAttribute] Offset: 6DC5F0
  // [NativeHeaderAttribute] Offset: 6DC5F0
  class Terrain : public ::UnityEngine::Behaviour {
    public:
    // public UnityEngine.TerrainData get_terrainData()
    // Offset: 0x18E45C8
    ::UnityEngine::TerrainData* get_terrainData();
    // public System.Boolean get_allowAutoConnect()
    // Offset: 0x18E4608
    bool get_allowAutoConnect();
    // public System.Int32 get_groupingID()
    // Offset: 0x18E4648
    int get_groupingID();
    // static public UnityEngine.Terrain[] get_activeTerrains()
    // Offset: 0x18E46F8
    static ::ArrayW<::UnityEngine::Terrain*> get_activeTerrains();
    // public System.Void .ctor()
    // Offset: 0x18E472C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Terrain* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Terrain::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Terrain*, creationType>()));
    }
    // public System.Void SetNeighbors(UnityEngine.Terrain left, UnityEngine.Terrain top, UnityEngine.Terrain right, UnityEngine.Terrain bottom)
    // Offset: 0x18E4688
    void SetNeighbors(::UnityEngine::Terrain* left, ::UnityEngine::Terrain* top, ::UnityEngine::Terrain* right, ::UnityEngine::Terrain* bottom);
  }; // UnityEngine.Terrain
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Terrain::get_terrainData
// Il2CppName: get_terrainData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TerrainData* (UnityEngine::Terrain::*)()>(&UnityEngine::Terrain::get_terrainData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Terrain*), "get_terrainData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Terrain::get_allowAutoConnect
// Il2CppName: get_allowAutoConnect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Terrain::*)()>(&UnityEngine::Terrain::get_allowAutoConnect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Terrain*), "get_allowAutoConnect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Terrain::get_groupingID
// Il2CppName: get_groupingID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Terrain::*)()>(&UnityEngine::Terrain::get_groupingID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Terrain*), "get_groupingID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Terrain::get_activeTerrains
// Il2CppName: get_activeTerrains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Terrain*> (*)()>(&UnityEngine::Terrain::get_activeTerrains)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Terrain*), "get_activeTerrains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Terrain::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Terrain::SetNeighbors
// Il2CppName: SetNeighbors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Terrain::*)(::UnityEngine::Terrain*, ::UnityEngine::Terrain*, ::UnityEngine::Terrain*, ::UnityEngine::Terrain*)>(&UnityEngine::Terrain::SetNeighbors)> {
  static const MethodInfo* get() {
    static auto* left = &::il2cpp_utils::GetClassFromName("UnityEngine", "Terrain")->byval_arg;
    static auto* top = &::il2cpp_utils::GetClassFromName("UnityEngine", "Terrain")->byval_arg;
    static auto* right = &::il2cpp_utils::GetClassFromName("UnityEngine", "Terrain")->byval_arg;
    static auto* bottom = &::il2cpp_utils::GetClassFromName("UnityEngine", "Terrain")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Terrain*), "SetNeighbors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{left, top, right, bottom});
  }
};
