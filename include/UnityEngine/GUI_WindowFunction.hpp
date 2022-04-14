// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.GUI
#include "UnityEngine/GUI.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::GUI::WindowFunction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUI::WindowFunction*, "UnityEngine", "GUI/WindowFunction");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.GUI/UnityEngine.WindowFunction
  // [TokenAttribute] Offset: FFFFFFFF
  class GUI::WindowFunction : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x18813F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GUI::WindowFunction* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::GUI::WindowFunction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GUI::WindowFunction*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Int32 id)
    // Offset: 0x18792EC
    void Invoke(int id);
    // public System.IAsyncResult BeginInvoke(System.Int32 id, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1881404
    ::System::IAsyncResult* BeginInvoke(int id, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x188148C
    void EndInvoke(::System::IAsyncResult* result);
  }; // UnityEngine.GUI/UnityEngine.WindowFunction
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::GUI::WindowFunction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::GUI::WindowFunction::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::GUI::WindowFunction::*)(int)>(&UnityEngine::GUI::WindowFunction::Invoke)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUI::WindowFunction*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUI::WindowFunction::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (UnityEngine::GUI::WindowFunction::*)(int, ::System::AsyncCallback*, ::Il2CppObject*)>(&UnityEngine::GUI::WindowFunction::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUI::WindowFunction*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id, callback, object});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUI::WindowFunction::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::GUI::WindowFunction::*)(::System::IAsyncResult*)>(&UnityEngine::GUI::WindowFunction::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUI::WindowFunction*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
