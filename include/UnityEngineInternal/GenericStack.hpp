// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Stack
#include "System/Collections/Stack.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngineInternal
namespace UnityEngineInternal {
  // Forward declaring type: GenericStack
  class GenericStack;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngineInternal::GenericStack);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngineInternal::GenericStack*, "UnityEngineInternal", "GenericStack");
// Type namespace: UnityEngineInternal
namespace UnityEngineInternal {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngineInternal.GenericStack
  // [TokenAttribute] Offset: FFFFFFFF
  class GenericStack : public ::System::Collections::Stack {
    public:
    // public System.Void .ctor()
    // Offset: 0x1128064
    // Implemented from: System.Collections.Stack
    // Base method: System.Void Stack::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GenericStack* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngineInternal::GenericStack::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GenericStack*, creationType>()));
    }
  }; // UnityEngineInternal.GenericStack
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngineInternal::GenericStack::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
