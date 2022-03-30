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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
}
// Forward declaring namespace: UnityEngine::SceneManagement
namespace UnityEngine::SceneManagement {
  // Forward declaring type: LoadSceneParameters
  struct LoadSceneParameters;
}
// Completed forward declares
// Type namespace: UnityEngine.SceneManagement
namespace UnityEngine::SceneManagement {
  // Forward declaring type: SceneManagerAPI
  class SceneManagerAPI;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::SceneManagement::SceneManagerAPI);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SceneManagement::SceneManagerAPI*, "UnityEngine.SceneManagement", "SceneManagerAPI");
// Type namespace: UnityEngine.SceneManagement
namespace UnityEngine::SceneManagement {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.SceneManagement.SceneManagerAPI
  // [TokenAttribute] Offset: FFFFFFFF
  class SceneManagerAPI : public ::Il2CppObject {
    public:
    // Get static field: static private UnityEngine.SceneManagement.SceneManagerAPI s_DefaultAPI
    static ::UnityEngine::SceneManagement::SceneManagerAPI* _get_s_DefaultAPI();
    // Set static field: static private UnityEngine.SceneManagement.SceneManagerAPI s_DefaultAPI
    static void _set_s_DefaultAPI(::UnityEngine::SceneManagement::SceneManagerAPI* value);
    // [DebuggerBrowsableAttribute] Offset: 0x56BCD4
    // Get static field: static private UnityEngine.SceneManagement.SceneManagerAPI <overrideAPI>k__BackingField
    static ::UnityEngine::SceneManagement::SceneManagerAPI* _get_$overrideAPI$k__BackingField();
    // Set static field: static private UnityEngine.SceneManagement.SceneManagerAPI <overrideAPI>k__BackingField
    static void _set_$overrideAPI$k__BackingField(::UnityEngine::SceneManagement::SceneManagerAPI* value);
    // static UnityEngine.SceneManagement.SceneManagerAPI get_ActiveAPI()
    // Offset: 0x9DCD14
    static ::UnityEngine::SceneManagement::SceneManagerAPI* get_ActiveAPI();
    // static public UnityEngine.SceneManagement.SceneManagerAPI get_overrideAPI()
    // Offset: 0x9DD590
    static ::UnityEngine::SceneManagement::SceneManagerAPI* get_overrideAPI();
    // static private System.Void .cctor()
    // Offset: 0x9DD6DC
    static void _cctor();
    // protected internal UnityEngine.AsyncOperation LoadSceneAsyncByNameOrIndex(System.String sceneName, System.Int32 sceneBuildIndex, UnityEngine.SceneManagement.LoadSceneParameters parameters, System.Boolean mustCompleteNextFrame)
    // Offset: 0x9DD5FC
    ::UnityEngine::AsyncOperation* LoadSceneAsyncByNameOrIndex(::StringW sceneName, int sceneBuildIndex, ::UnityEngine::SceneManagement::LoadSceneParameters parameters, bool mustCompleteNextFrame);
    // protected internal UnityEngine.AsyncOperation LoadFirstScene(System.Boolean mustLoadAsync)
    // Offset: 0x9DD6D4
    ::UnityEngine::AsyncOperation* LoadFirstScene(bool mustLoadAsync);
    // protected internal System.Void .ctor()
    // Offset: 0x9DD5F4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneManagerAPI* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::SceneManagement::SceneManagerAPI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneManagerAPI*, creationType>()));
    }
  }; // UnityEngine.SceneManagement.SceneManagerAPI
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::SceneManagement::SceneManagerAPI::get_ActiveAPI
// Il2CppName: get_ActiveAPI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::SceneManagement::SceneManagerAPI* (*)()>(&UnityEngine::SceneManagement::SceneManagerAPI::get_ActiveAPI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::SceneManagerAPI*), "get_ActiveAPI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::SceneManagerAPI::get_overrideAPI
// Il2CppName: get_overrideAPI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::SceneManagement::SceneManagerAPI* (*)()>(&UnityEngine::SceneManagement::SceneManagerAPI::get_overrideAPI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::SceneManagerAPI*), "get_overrideAPI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::SceneManagerAPI::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::SceneManagement::SceneManagerAPI::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::SceneManagerAPI*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::SceneManagerAPI::LoadSceneAsyncByNameOrIndex
// Il2CppName: LoadSceneAsyncByNameOrIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AsyncOperation* (UnityEngine::SceneManagement::SceneManagerAPI::*)(::StringW, int, ::UnityEngine::SceneManagement::LoadSceneParameters, bool)>(&UnityEngine::SceneManagement::SceneManagerAPI::LoadSceneAsyncByNameOrIndex)> {
  static const MethodInfo* get() {
    static auto* sceneName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* sceneBuildIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneParameters")->byval_arg;
    static auto* mustCompleteNextFrame = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::SceneManagerAPI*), "LoadSceneAsyncByNameOrIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneName, sceneBuildIndex, parameters, mustCompleteNextFrame});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::SceneManagerAPI::LoadFirstScene
// Il2CppName: LoadFirstScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AsyncOperation* (UnityEngine::SceneManagement::SceneManagerAPI::*)(bool)>(&UnityEngine::SceneManagement::SceneManagerAPI::LoadFirstScene)> {
  static const MethodInfo* get() {
    static auto* mustLoadAsync = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::SceneManagerAPI*), "LoadFirstScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mustLoadAsync});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::SceneManagerAPI::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
