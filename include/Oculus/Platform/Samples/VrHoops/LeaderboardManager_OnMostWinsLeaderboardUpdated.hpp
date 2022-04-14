// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.Samples.VrHoops.LeaderboardManager
#include "Oculus/Platform/Samples/VrHoops/LeaderboardManager.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: SortedDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class SortedDictionary_2;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: LeaderboardEntry
  class LeaderboardEntry;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Samples::VrHoops::LeaderboardManager::OnMostWinsLeaderboardUpdated);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Samples::VrHoops::LeaderboardManager::OnMostWinsLeaderboardUpdated*, "Oculus.Platform.Samples.VrHoops", "LeaderboardManager/OnMostWinsLeaderboardUpdated");
// Type namespace: Oculus.Platform.Samples.VrHoops
namespace Oculus::Platform::Samples::VrHoops {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Samples.VrHoops.LeaderboardManager/Oculus.Platform.Samples.VrHoops.OnMostWinsLeaderboardUpdated
  // [TokenAttribute] Offset: FFFFFFFF
  class LeaderboardManager::OnMostWinsLeaderboardUpdated : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1721EF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeaderboardManager::OnMostWinsLeaderboardUpdated* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Samples::VrHoops::LeaderboardManager::OnMostWinsLeaderboardUpdated::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeaderboardManager::OnMostWinsLeaderboardUpdated*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Collections.Generic.SortedDictionary`2<System.Int32,Oculus.Platform.Models.LeaderboardEntry> entries)
    // Offset: 0x1721F00
    void Invoke(::System::Collections::Generic::SortedDictionary_2<int, ::Oculus::Platform::Models::LeaderboardEntry*>* entries);
    // public System.IAsyncResult BeginInvoke(System.Collections.Generic.SortedDictionary`2<System.Int32,Oculus.Platform.Models.LeaderboardEntry> entries, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1722274
    ::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::SortedDictionary_2<int, ::Oculus::Platform::Models::LeaderboardEntry*>* entries, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1722298
    void EndInvoke(::System::IAsyncResult* result);
  }; // Oculus.Platform.Samples.VrHoops.LeaderboardManager/Oculus.Platform.Samples.VrHoops.OnMostWinsLeaderboardUpdated
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::LeaderboardManager::OnMostWinsLeaderboardUpdated::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::LeaderboardManager::OnMostWinsLeaderboardUpdated::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrHoops::LeaderboardManager::OnMostWinsLeaderboardUpdated::*)(::System::Collections::Generic::SortedDictionary_2<int, ::Oculus::Platform::Models::LeaderboardEntry*>*)>(&Oculus::Platform::Samples::VrHoops::LeaderboardManager::OnMostWinsLeaderboardUpdated::Invoke)> {
  static const MethodInfo* get() {
    static auto* entries = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "SortedDictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "LeaderboardEntry")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::LeaderboardManager::OnMostWinsLeaderboardUpdated*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{entries});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::LeaderboardManager::OnMostWinsLeaderboardUpdated::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Oculus::Platform::Samples::VrHoops::LeaderboardManager::OnMostWinsLeaderboardUpdated::*)(::System::Collections::Generic::SortedDictionary_2<int, ::Oculus::Platform::Models::LeaderboardEntry*>*, ::System::AsyncCallback*, ::Il2CppObject*)>(&Oculus::Platform::Samples::VrHoops::LeaderboardManager::OnMostWinsLeaderboardUpdated::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* entries = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "SortedDictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "LeaderboardEntry")})->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::LeaderboardManager::OnMostWinsLeaderboardUpdated*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{entries, callback, object});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::LeaderboardManager::OnMostWinsLeaderboardUpdated::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrHoops::LeaderboardManager::OnMostWinsLeaderboardUpdated::*)(::System::IAsyncResult*)>(&Oculus::Platform::Samples::VrHoops::LeaderboardManager::OnMostWinsLeaderboardUpdated::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::LeaderboardManager::OnMostWinsLeaderboardUpdated*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
