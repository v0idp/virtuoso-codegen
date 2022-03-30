// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Analytics.AnalyticsSessionInfo
#include "UnityEngine/Analytics/AnalyticsSessionInfo.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
NEED_NO_BOX(::UnityEngine::Analytics::AnalyticsSessionInfo::IdentityTokenChanged);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Analytics::AnalyticsSessionInfo::IdentityTokenChanged*, "UnityEngine.Analytics", "AnalyticsSessionInfo/IdentityTokenChanged");
// Type namespace: UnityEngine.Analytics
namespace UnityEngine::Analytics {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Analytics.AnalyticsSessionInfo/UnityEngine.Analytics.IdentityTokenChanged
  // [TokenAttribute] Offset: FFFFFFFF
  class AnalyticsSessionInfo::IdentityTokenChanged : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x12FDA34
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnalyticsSessionInfo::IdentityTokenChanged* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Analytics::AnalyticsSessionInfo::IdentityTokenChanged::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnalyticsSessionInfo::IdentityTokenChanged*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.String token)
    // Offset: 0x12FCEF8
    void Invoke(::StringW token);
    // public System.IAsyncResult BeginInvoke(System.String token, System.AsyncCallback callback, System.Object object)
    // Offset: 0x12FDA44
    ::System::IAsyncResult* BeginInvoke(::StringW token, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x12FDA68
    void EndInvoke(::System::IAsyncResult* result);
  }; // UnityEngine.Analytics.AnalyticsSessionInfo/UnityEngine.Analytics.IdentityTokenChanged
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Analytics::AnalyticsSessionInfo::IdentityTokenChanged::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Analytics::AnalyticsSessionInfo::IdentityTokenChanged::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Analytics::AnalyticsSessionInfo::IdentityTokenChanged::*)(::StringW)>(&UnityEngine::Analytics::AnalyticsSessionInfo::IdentityTokenChanged::Invoke)> {
  static const MethodInfo* get() {
    static auto* token = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Analytics::AnalyticsSessionInfo::IdentityTokenChanged*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{token});
  }
};
// Writing MetadataGetter for method: UnityEngine::Analytics::AnalyticsSessionInfo::IdentityTokenChanged::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (UnityEngine::Analytics::AnalyticsSessionInfo::IdentityTokenChanged::*)(::StringW, ::System::AsyncCallback*, ::Il2CppObject*)>(&UnityEngine::Analytics::AnalyticsSessionInfo::IdentityTokenChanged::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* token = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Analytics::AnalyticsSessionInfo::IdentityTokenChanged*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{token, callback, object});
  }
};
// Writing MetadataGetter for method: UnityEngine::Analytics::AnalyticsSessionInfo::IdentityTokenChanged::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Analytics::AnalyticsSessionInfo::IdentityTokenChanged::*)(::System::IAsyncResult*)>(&UnityEngine::Analytics::AnalyticsSessionInfo::IdentityTokenChanged::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Analytics::AnalyticsSessionInfo::IdentityTokenChanged*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
