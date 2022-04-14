// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.EventArgs
#include "System/EventArgs.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: AssemblyLoadEventArgs
  class AssemblyLoadEventArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::AssemblyLoadEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::AssemblyLoadEventArgs*, "System", "AssemblyLoadEventArgs");
// Type namespace: System
namespace System {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.AssemblyLoadEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 681E4C
  class AssemblyLoadEventArgs : public ::System::EventArgs {
    public:
    public:
    // private System.Reflection.Assembly m_loadedAssembly
    // Size: 0x8
    // Offset: 0x10
    ::System::Reflection::Assembly* m_loadedAssembly;
    // Field size check
    static_assert(sizeof(::System::Reflection::Assembly*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Reflection::Assembly*
    constexpr operator ::System::Reflection::Assembly*() const noexcept {
      return m_loadedAssembly;
    }
    // Get instance field reference: private System.Reflection.Assembly m_loadedAssembly
    [[deprecated]] ::System::Reflection::Assembly*& dyn_m_loadedAssembly();
    // public System.Void .ctor(System.Reflection.Assembly loadedAssembly)
    // Offset: 0x113C110
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssemblyLoadEventArgs* New_ctor(::System::Reflection::Assembly* loadedAssembly) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::AssemblyLoadEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssemblyLoadEventArgs*, creationType>(loadedAssembly)));
    }
  }; // System.AssemblyLoadEventArgs
  #pragma pack(pop)
  static check_size<sizeof(AssemblyLoadEventArgs), 16 + sizeof(::System::Reflection::Assembly*)> __System_AssemblyLoadEventArgsSizeCheck;
  static_assert(sizeof(AssemblyLoadEventArgs) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::AssemblyLoadEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
