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
// Completed includes
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Shared`1<T>
  template<typename T>
  class Shared_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::Tasks::Shared_1, "System.Threading.Tasks", "Shared`1");
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Threading.Tasks.Shared`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class Shared_1 : public ::Il2CppObject {
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
    // T Value
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T Value;
    public:
    // Autogenerated instance field getter
    // Get instance field: T Value
    T& dyn_Value() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::Shared_1::dyn_Value");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Value"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // System.Void .ctor(T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Shared_1<T>* New_ctor(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::Shared_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Shared_1<T>*, creationType>(value)));
    }
  }; // System.Threading.Tasks.Shared`1
  // Could not write size check! Type: System.Threading.Tasks.Shared`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
