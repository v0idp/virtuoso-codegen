// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.RuntimeType
#include "System/RuntimeType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: RuntimeTypeHandle because it is already included!
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: ReflectionOnlyType
  class ReflectionOnlyType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ReflectionOnlyType);
DEFINE_IL2CPP_ARG_TYPE(::System::ReflectionOnlyType*, "System", "ReflectionOnlyType");
// Type namespace: System
namespace System {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.ReflectionOnlyType
  // [TokenAttribute] Offset: FFFFFFFF
  class ReflectionOnlyType : public ::System::RuntimeType {
    public:
    // public override System.RuntimeTypeHandle get_TypeHandle()
    // Offset: 0xD404EC
    // Implemented from: System.RuntimeType
    // Base method: System.RuntimeTypeHandle RuntimeType::get_TypeHandle()
    ::System::RuntimeTypeHandle get_TypeHandle();
    // private System.Void .ctor()
    // Offset: 0xD40488
    // Implemented from: System.RuntimeType
    // Base method: System.Void RuntimeType::.ctor()
    // Base method: System.Void TypeInfo::.ctor()
    // Base method: System.Void Type::.ctor()
    // Base method: System.Void MemberInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionOnlyType* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ReflectionOnlyType::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionOnlyType*, creationType>()));
    }
  }; // System.ReflectionOnlyType
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ReflectionOnlyType::get_TypeHandle
// Il2CppName: get_TypeHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::RuntimeTypeHandle (System::ReflectionOnlyType::*)()>(&System::ReflectionOnlyType::get_TypeHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ReflectionOnlyType*), "get_TypeHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ReflectionOnlyType::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
