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
  // Forward declaring type: ResourcesAPI
  class ResourcesAPI;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ResourcesAPI);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourcesAPI*, "UnityEngine", "ResourcesAPI");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourcesAPI
  // [TokenAttribute] Offset: FFFFFFFF
  class ResourcesAPI : public ::Il2CppObject {
    public:
    // Get static field: static private UnityEngine.ResourcesAPI s_DefaultAPI
    static ::UnityEngine::ResourcesAPI* _get_s_DefaultAPI();
    // Set static field: static private UnityEngine.ResourcesAPI s_DefaultAPI
    static void _set_s_DefaultAPI(::UnityEngine::ResourcesAPI* value);
    // [DebuggerBrowsableAttribute] Offset: 0x6653D4
    // Get static field: static private UnityEngine.ResourcesAPI <overrideAPI>k__BackingField
    static ::UnityEngine::ResourcesAPI* _get_$overrideAPI$k__BackingField();
    // Set static field: static private UnityEngine.ResourcesAPI <overrideAPI>k__BackingField
    static void _set_$overrideAPI$k__BackingField(::UnityEngine::ResourcesAPI* value);
    // static UnityEngine.ResourcesAPI get_ActiveAPI()
    // Offset: 0xBD0A5C
    static ::UnityEngine::ResourcesAPI* get_ActiveAPI();
    // static public UnityEngine.ResourcesAPI get_overrideAPI()
    // Offset: 0xBD0C7C
    static ::UnityEngine::ResourcesAPI* get_overrideAPI();
    // static private System.Void .cctor()
    // Offset: 0xBD0E88
    static void _cctor();
    // protected internal UnityEngine.Object[] FindObjectsOfTypeAll(System.Type systemTypeInstance)
    // Offset: 0xBD0CE8
    ::ArrayW<::UnityEngine::Object*> FindObjectsOfTypeAll(::System::Type* systemTypeInstance);
    // protected internal UnityEngine.Shader FindShaderByName(System.String name)
    // Offset: 0xBD0D68
    ::UnityEngine::Shader* FindShaderByName(::StringW name);
    // protected internal UnityEngine.Object Load(System.String path, System.Type systemTypeInstance)
    // Offset: 0xBD0DE8
    ::UnityEngine::Object* Load(::StringW path, ::System::Type* systemTypeInstance);
    // protected internal System.Void .ctor()
    // Offset: 0xBD0CE0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResourcesAPI* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourcesAPI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResourcesAPI*, creationType>()));
    }
  }; // UnityEngine.ResourcesAPI
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourcesAPI::get_ActiveAPI
// Il2CppName: get_ActiveAPI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourcesAPI* (*)()>(&UnityEngine::ResourcesAPI::get_ActiveAPI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourcesAPI*), "get_ActiveAPI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourcesAPI::get_overrideAPI
// Il2CppName: get_overrideAPI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourcesAPI* (*)()>(&UnityEngine::ResourcesAPI::get_overrideAPI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourcesAPI*), "get_overrideAPI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourcesAPI::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ResourcesAPI::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourcesAPI*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourcesAPI::FindObjectsOfTypeAll
// Il2CppName: FindObjectsOfTypeAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Object*> (UnityEngine::ResourcesAPI::*)(::System::Type*)>(&UnityEngine::ResourcesAPI::FindObjectsOfTypeAll)> {
  static const MethodInfo* get() {
    static auto* systemTypeInstance = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourcesAPI*), "FindObjectsOfTypeAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{systemTypeInstance});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourcesAPI::FindShaderByName
// Il2CppName: FindShaderByName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Shader* (UnityEngine::ResourcesAPI::*)(::StringW)>(&UnityEngine::ResourcesAPI::FindShaderByName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourcesAPI*), "FindShaderByName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourcesAPI::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (UnityEngine::ResourcesAPI::*)(::StringW, ::System::Type*)>(&UnityEngine::ResourcesAPI::Load)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* systemTypeInstance = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourcesAPI*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, systemTypeInstance});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourcesAPI::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
