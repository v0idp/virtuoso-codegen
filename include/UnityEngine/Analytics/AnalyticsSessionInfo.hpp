// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Analytics
namespace UnityEngine::Analytics {
  // Forward declaring type: AnalyticsSessionState
  struct AnalyticsSessionState;
}
// Completed forward declares
// Type namespace: UnityEngine.Analytics
namespace UnityEngine::Analytics {
  // Forward declaring type: AnalyticsSessionInfo
  class AnalyticsSessionInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Analytics::AnalyticsSessionInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Analytics::AnalyticsSessionInfo*, "UnityEngine.Analytics", "AnalyticsSessionInfo");
// Type namespace: UnityEngine.Analytics
namespace UnityEngine::Analytics {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Analytics.AnalyticsSessionInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 6DDFD8
  // [RequiredByNativeCodeAttribute] Offset: 6DDFD8
  // [NativeHeaderAttribute] Offset: 6DDFD8
  class AnalyticsSessionInfo : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::Analytics::AnalyticsSessionInfo::SessionStateChanged
    class SessionStateChanged;
    // Nested type: ::UnityEngine::Analytics::AnalyticsSessionInfo::IdentityTokenChanged
    class IdentityTokenChanged;
    // [DebuggerBrowsableAttribute] Offset: 0x6DE1F4
    // Get static field: static private UnityEngine.Analytics.AnalyticsSessionInfo/UnityEngine.Analytics.SessionStateChanged sessionStateChanged
    static ::UnityEngine::Analytics::AnalyticsSessionInfo::SessionStateChanged* _get_sessionStateChanged();
    // Set static field: static private UnityEngine.Analytics.AnalyticsSessionInfo/UnityEngine.Analytics.SessionStateChanged sessionStateChanged
    static void _set_sessionStateChanged(::UnityEngine::Analytics::AnalyticsSessionInfo::SessionStateChanged* value);
    // [DebuggerBrowsableAttribute] Offset: 0x6DE230
    // Get static field: static private UnityEngine.Analytics.AnalyticsSessionInfo/UnityEngine.Analytics.IdentityTokenChanged identityTokenChanged
    static ::UnityEngine::Analytics::AnalyticsSessionInfo::IdentityTokenChanged* _get_identityTokenChanged();
    // Set static field: static private UnityEngine.Analytics.AnalyticsSessionInfo/UnityEngine.Analytics.IdentityTokenChanged identityTokenChanged
    static void _set_identityTokenChanged(::UnityEngine::Analytics::AnalyticsSessionInfo::IdentityTokenChanged* value);
    // static public System.Int64 get_sessionId()
    // Offset: 0x190279C
    static int64_t get_sessionId();
    // static public System.Int64 get_sessionCount()
    // Offset: 0x19027D0
    static int64_t get_sessionCount();
    // static public System.String get_userId()
    // Offset: 0x1902804
    static ::StringW get_userId();
    // static System.Void CallSessionStateChanged(UnityEngine.Analytics.AnalyticsSessionState sessionState, System.Int64 sessionId, System.Int64 sessionElapsedTime, System.Boolean sessionChanged)
    // Offset: 0x190245C
    static void CallSessionStateChanged(::UnityEngine::Analytics::AnalyticsSessionState sessionState, int64_t sessionId, int64_t sessionElapsedTime, bool sessionChanged);
    // static System.Void CallIdentityTokenChanged(System.String token)
    // Offset: 0x1902838
    static void CallIdentityTokenChanged(::StringW token);
  }; // UnityEngine.Analytics.AnalyticsSessionInfo
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Analytics::AnalyticsSessionInfo::get_sessionId
// Il2CppName: get_sessionId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)()>(&UnityEngine::Analytics::AnalyticsSessionInfo::get_sessionId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Analytics::AnalyticsSessionInfo*), "get_sessionId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Analytics::AnalyticsSessionInfo::get_sessionCount
// Il2CppName: get_sessionCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)()>(&UnityEngine::Analytics::AnalyticsSessionInfo::get_sessionCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Analytics::AnalyticsSessionInfo*), "get_sessionCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Analytics::AnalyticsSessionInfo::get_userId
// Il2CppName: get_userId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&UnityEngine::Analytics::AnalyticsSessionInfo::get_userId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Analytics::AnalyticsSessionInfo*), "get_userId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Analytics::AnalyticsSessionInfo::CallSessionStateChanged
// Il2CppName: CallSessionStateChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Analytics::AnalyticsSessionState, int64_t, int64_t, bool)>(&UnityEngine::Analytics::AnalyticsSessionInfo::CallSessionStateChanged)> {
  static const MethodInfo* get() {
    static auto* sessionState = &::il2cpp_utils::GetClassFromName("UnityEngine.Analytics", "AnalyticsSessionState")->byval_arg;
    static auto* sessionId = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* sessionElapsedTime = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* sessionChanged = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Analytics::AnalyticsSessionInfo*), "CallSessionStateChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionState, sessionId, sessionElapsedTime, sessionChanged});
  }
};
// Writing MetadataGetter for method: UnityEngine::Analytics::AnalyticsSessionInfo::CallIdentityTokenChanged
// Il2CppName: CallIdentityTokenChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&UnityEngine::Analytics::AnalyticsSessionInfo::CallIdentityTokenChanged)> {
  static const MethodInfo* get() {
    static auto* token = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Analytics::AnalyticsSessionInfo*), "CallIdentityTokenChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{token});
  }
};
