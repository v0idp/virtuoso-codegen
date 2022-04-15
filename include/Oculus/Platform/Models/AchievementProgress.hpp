// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: AchievementProgress
  class AchievementProgress;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::AchievementProgress);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::AchievementProgress*, "Oculus.Platform.Models", "AchievementProgress");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.AchievementProgress
  // [TokenAttribute] Offset: FFFFFFFF
  class AchievementProgress : public ::Il2CppObject {
    public:
    public:
    // public readonly System.String Bitfield
    // Size: 0x8
    // Offset: 0x10
    ::StringW Bitfield;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.UInt64 Count
    // Size: 0x8
    // Offset: 0x18
    uint64_t Count;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly System.Boolean IsUnlocked
    // Size: 0x1
    // Offset: 0x20
    bool IsUnlocked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsUnlocked and: Name
    char __padding2[0x7] = {};
    // public readonly System.String Name
    // Size: 0x8
    // Offset: 0x28
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.DateTime UnlockTime
    // Size: 0x8
    // Offset: 0x30
    ::System::DateTime UnlockTime;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    public:
    // Get instance field reference: public readonly System.String Bitfield
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Bitfield();
    // Get instance field reference: public readonly System.UInt64 Count
    [[deprecated("Use field access instead!")]] uint64_t& dyn_Count();
    // Get instance field reference: public readonly System.Boolean IsUnlocked
    [[deprecated("Use field access instead!")]] bool& dyn_IsUnlocked();
    // Get instance field reference: public readonly System.String Name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Name();
    // Get instance field reference: public readonly System.DateTime UnlockTime
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_UnlockTime();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x8F5A9C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AchievementProgress* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::AchievementProgress::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AchievementProgress*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.AchievementProgress
  #pragma pack(pop)
  static check_size<sizeof(AchievementProgress), 48 + sizeof(::System::DateTime)> __Oculus_Platform_Models_AchievementProgressSizeCheck;
  static_assert(sizeof(AchievementProgress) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::AchievementProgress::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
