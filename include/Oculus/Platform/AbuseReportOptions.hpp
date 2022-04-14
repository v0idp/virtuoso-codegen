// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: AbuseReportType
  struct AbuseReportType;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: AbuseReportOptions
  class AbuseReportOptions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::AbuseReportOptions);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::AbuseReportOptions*, "Oculus.Platform", "AbuseReportOptions");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.AbuseReportOptions
  // [TokenAttribute] Offset: FFFFFFFF
  class AbuseReportOptions : public ::Il2CppObject {
    public:
    public:
    // private System.IntPtr Handle
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr Handle;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept {
      return Handle;
    }
    // Get instance field reference: private System.IntPtr Handle
    [[deprecated]] ::System::IntPtr& dyn_Handle();
    // public System.Void SetPreventPeopleChooser(System.Boolean value)
    // Offset: 0x8F5000
    void SetPreventPeopleChooser(bool value);
    // public System.Void SetReportType(Oculus.Platform.AbuseReportType value)
    // Offset: 0x8F5104
    void SetReportType(::Oculus::Platform::AbuseReportType value);
    // static public System.IntPtr op_Explicit(Oculus.Platform.AbuseReportOptions options)
    // Offset: 0x8F5208
    // ABORTED: conflicts with another method.  explicit operator ::System::IntPtr();
    // public System.Void .ctor()
    // Offset: 0x8F4F1C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AbuseReportOptions* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::AbuseReportOptions::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AbuseReportOptions*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x8F5254
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Oculus.Platform.AbuseReportOptions
  #pragma pack(pop)
  static check_size<sizeof(AbuseReportOptions), 16 + sizeof(::System::IntPtr)> __Oculus_Platform_AbuseReportOptionsSizeCheck;
  static_assert(sizeof(AbuseReportOptions) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::AbuseReportOptions::SetPreventPeopleChooser
// Il2CppName: SetPreventPeopleChooser
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::AbuseReportOptions::*)(bool)>(&Oculus::Platform::AbuseReportOptions::SetPreventPeopleChooser)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::AbuseReportOptions*), "SetPreventPeopleChooser", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::AbuseReportOptions::SetReportType
// Il2CppName: SetReportType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::AbuseReportOptions::*)(::Oculus::Platform::AbuseReportType)>(&Oculus::Platform::AbuseReportOptions::SetReportType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "AbuseReportType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::AbuseReportOptions*), "SetReportType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::AbuseReportOptions::operator ::System::IntPtr
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Oculus::Platform::AbuseReportOptions::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::AbuseReportOptions::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::AbuseReportOptions::*)()>(&Oculus::Platform::AbuseReportOptions::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::AbuseReportOptions*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
