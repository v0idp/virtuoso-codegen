// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ThreadAndSerializationSafeAttribute
  class ThreadAndSerializationSafeAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ThreadAndSerializationSafeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ThreadAndSerializationSafeAttribute*, "UnityEngine", "ThreadAndSerializationSafeAttribute");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ThreadAndSerializationSafeAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 5BA264
  // [VisibleToOtherModulesAttribute] Offset: 5BA264
  class ThreadAndSerializationSafeAttribute : public ::System::Attribute {
    public:
    // public System.Void .ctor()
    // Offset: 0x12FA5A8
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ThreadAndSerializationSafeAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ThreadAndSerializationSafeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ThreadAndSerializationSafeAttribute*, creationType>()));
    }
  }; // UnityEngine.ThreadAndSerializationSafeAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ThreadAndSerializationSafeAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
