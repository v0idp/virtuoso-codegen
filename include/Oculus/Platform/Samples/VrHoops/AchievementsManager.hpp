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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: AchievementProgressList
  class AchievementProgressList;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Samples.VrHoops
namespace Oculus::Platform::Samples::VrHoops {
  // Forward declaring type: AchievementsManager
  class AchievementsManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Samples::VrHoops::AchievementsManager);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Samples::VrHoops::AchievementsManager*, "Oculus.Platform.Samples.VrHoops", "AchievementsManager");
// Type namespace: Oculus.Platform.Samples.VrHoops
namespace Oculus::Platform::Samples::VrHoops {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Samples.VrHoops.AchievementsManager
  // [TokenAttribute] Offset: FFFFFFFF
  class AchievementsManager : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Boolean m_likesToWinUnlocked
    // Size: 0x1
    // Offset: 0x10
    bool m_likesToWinUnlocked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return m_likesToWinUnlocked;
    }
    // static field const value: static private System.String LIKES_TO_WIN
    static constexpr const char* LIKES_TO_WIN = "LIKES_TO_WIN";
    // Get static field: static private System.String LIKES_TO_WIN
    static ::StringW _get_LIKES_TO_WIN();
    // Set static field: static private System.String LIKES_TO_WIN
    static void _set_LIKES_TO_WIN(::StringW value);
    // Get instance field reference: private System.Boolean m_likesToWinUnlocked
    bool& dyn_m_likesToWinUnlocked();
    // public System.Boolean get_LikesToWin()
    // Offset: 0x7B1464
    bool get_LikesToWin();
    // public System.Void CheckForAchievmentUpdates()
    // Offset: 0x7B146C
    void CheckForAchievmentUpdates();
    // public System.Void RecordWinForLocalUser()
    // Offset: 0x7B15B0
    void RecordWinForLocalUser();
    // private System.Void <CheckForAchievmentUpdates>b__4_0(Oculus.Platform.Message`1<Oculus.Platform.Models.AchievementProgressList> msg)
    // Offset: 0x7B160C
    void $CheckForAchievmentUpdates$b__4_0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementProgressList*>* msg);
    // public System.Void .ctor()
    // Offset: 0x7B1604
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AchievementsManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Samples::VrHoops::AchievementsManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AchievementsManager*, creationType>()));
    }
  }; // Oculus.Platform.Samples.VrHoops.AchievementsManager
  #pragma pack(pop)
  static check_size<sizeof(AchievementsManager), 16 + sizeof(bool)> __Oculus_Platform_Samples_VrHoops_AchievementsManagerSizeCheck;
  static_assert(sizeof(AchievementsManager) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::AchievementsManager::get_LikesToWin
// Il2CppName: get_LikesToWin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Platform::Samples::VrHoops::AchievementsManager::*)()>(&Oculus::Platform::Samples::VrHoops::AchievementsManager::get_LikesToWin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::AchievementsManager*), "get_LikesToWin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::AchievementsManager::CheckForAchievmentUpdates
// Il2CppName: CheckForAchievmentUpdates
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrHoops::AchievementsManager::*)()>(&Oculus::Platform::Samples::VrHoops::AchievementsManager::CheckForAchievmentUpdates)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::AchievementsManager*), "CheckForAchievmentUpdates", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::AchievementsManager::RecordWinForLocalUser
// Il2CppName: RecordWinForLocalUser
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrHoops::AchievementsManager::*)()>(&Oculus::Platform::Samples::VrHoops::AchievementsManager::RecordWinForLocalUser)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::AchievementsManager*), "RecordWinForLocalUser", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::AchievementsManager::$CheckForAchievmentUpdates$b__4_0
// Il2CppName: <CheckForAchievmentUpdates>b__4_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrHoops::AchievementsManager::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementProgressList*>*)>(&Oculus::Platform::Samples::VrHoops::AchievementsManager::$CheckForAchievmentUpdates$b__4_0)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "AchievementProgressList")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrHoops::AchievementsManager*), "<CheckForAchievmentUpdates>b__4_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrHoops::AchievementsManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
