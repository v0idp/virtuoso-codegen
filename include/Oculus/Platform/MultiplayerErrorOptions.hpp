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
  // Forward declaring type: MultiplayerErrorErrorKey
  struct MultiplayerErrorErrorKey;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: MultiplayerErrorOptions
  class MultiplayerErrorOptions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::MultiplayerErrorOptions);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MultiplayerErrorOptions*, "Oculus.Platform", "MultiplayerErrorOptions");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.MultiplayerErrorOptions
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerErrorOptions : public ::Il2CppObject {
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
    ::System::IntPtr& dyn_Handle();
    // public System.Void SetErrorKey(Oculus.Platform.MultiplayerErrorErrorKey value)
    // Offset: 0x97E950
    void SetErrorKey(::Oculus::Platform::MultiplayerErrorErrorKey value);
    // static public System.IntPtr op_Explicit(Oculus.Platform.MultiplayerErrorOptions options)
    // Offset: 0x97E9C8
    // ABORTED: conflicts with another method.  explicit operator ::System::IntPtr();
    // public System.Void .ctor()
    // Offset: 0x97E8DC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerErrorOptions* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::MultiplayerErrorOptions::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerErrorOptions*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x97EA14
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Oculus.Platform.MultiplayerErrorOptions
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerErrorOptions), 16 + sizeof(::System::IntPtr)> __Oculus_Platform_MultiplayerErrorOptionsSizeCheck;
  static_assert(sizeof(MultiplayerErrorOptions) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MultiplayerErrorOptions::SetErrorKey
// Il2CppName: SetErrorKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::MultiplayerErrorOptions::*)(::Oculus::Platform::MultiplayerErrorErrorKey)>(&Oculus::Platform::MultiplayerErrorOptions::SetErrorKey)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "MultiplayerErrorErrorKey")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MultiplayerErrorOptions*), "SetErrorKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MultiplayerErrorOptions::operator ::System::IntPtr
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Oculus::Platform::MultiplayerErrorOptions::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MultiplayerErrorOptions::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::MultiplayerErrorOptions::*)()>(&Oculus::Platform::MultiplayerErrorOptions::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MultiplayerErrorOptions*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
