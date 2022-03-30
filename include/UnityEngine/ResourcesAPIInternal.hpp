// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
  // Forward declaring type: Shader
  class Shader;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ResourcesAPIInternal
  class ResourcesAPIInternal;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ResourcesAPIInternal);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourcesAPIInternal*, "UnityEngine", "ResourcesAPIInternal");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourcesAPIInternal
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 566D50
  // [NativeHeaderAttribute] Offset: 566D50
  class ResourcesAPIInternal : public ::Il2CppObject {
    public:
    // static public UnityEngine.Object[] FindObjectsOfTypeAll(System.Type type)
    // Offset: 0x9DBF80
    static ::ArrayW<::UnityEngine::Object*> FindObjectsOfTypeAll(::System::Type* type);
    // static public UnityEngine.Shader FindShaderByName(System.String name)
    // Offset: 0x9DC000
    static ::UnityEngine::Shader* FindShaderByName(::StringW name);
    // static public UnityEngine.Object Load(System.String path, System.Type systemTypeInstance)
    // Offset: 0x9DC090
    static ::UnityEngine::Object* Load(::StringW path, ::System::Type* systemTypeInstance);
  }; // UnityEngine.ResourcesAPIInternal
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourcesAPIInternal::FindObjectsOfTypeAll
// Il2CppName: FindObjectsOfTypeAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Object*> (*)(::System::Type*)>(&UnityEngine::ResourcesAPIInternal::FindObjectsOfTypeAll)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourcesAPIInternal*), "FindObjectsOfTypeAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourcesAPIInternal::FindShaderByName
// Il2CppName: FindShaderByName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Shader* (*)(::StringW)>(&UnityEngine::ResourcesAPIInternal::FindShaderByName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourcesAPIInternal*), "FindShaderByName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourcesAPIInternal::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (*)(::StringW, ::System::Type*)>(&UnityEngine::ResourcesAPIInternal::Load)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* systemTypeInstance = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourcesAPIInternal*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, systemTypeInstance});
  }
};
