// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.ObjectReader
#include "System/Runtime/Serialization/Formatters/Binary/ObjectReader.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::ObjectReader::TopLevelAssemblyTypeResolver);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::ObjectReader::TopLevelAssemblyTypeResolver*, "System.Runtime.Serialization.Formatters.Binary", "ObjectReader/TopLevelAssemblyTypeResolver");
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.ObjectReader/System.Runtime.Serialization.Formatters.Binary.TopLevelAssemblyTypeResolver
  // [TokenAttribute] Offset: FFFFFFFF
  class ObjectReader::TopLevelAssemblyTypeResolver : public ::Il2CppObject {
    public:
    public:
    // private System.Reflection.Assembly m_topLevelAssembly
    // Size: 0x8
    // Offset: 0x10
    ::System::Reflection::Assembly* m_topLevelAssembly;
    // Field size check
    static_assert(sizeof(::System::Reflection::Assembly*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Reflection::Assembly*
    constexpr operator ::System::Reflection::Assembly*() const noexcept {
      return m_topLevelAssembly;
    }
    // Get instance field reference: private System.Reflection.Assembly m_topLevelAssembly
    [[deprecated]] ::System::Reflection::Assembly*& dyn_m_topLevelAssembly();
    // public System.Void .ctor(System.Reflection.Assembly topLevelAssembly)
    // Offset: 0xE55924
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectReader::TopLevelAssemblyTypeResolver* New_ctor(::System::Reflection::Assembly* topLevelAssembly) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::Formatters::Binary::ObjectReader::TopLevelAssemblyTypeResolver::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectReader::TopLevelAssemblyTypeResolver*, creationType>(topLevelAssembly)));
    }
    // public System.Type ResolveType(System.Reflection.Assembly assembly, System.String simpleTypeName, System.Boolean ignoreCase)
    // Offset: 0xE55950
    ::System::Type* ResolveType(::System::Reflection::Assembly* assembly, ::StringW simpleTypeName, bool ignoreCase);
  }; // System.Runtime.Serialization.Formatters.Binary.ObjectReader/System.Runtime.Serialization.Formatters.Binary.TopLevelAssemblyTypeResolver
  #pragma pack(pop)
  static check_size<sizeof(ObjectReader::TopLevelAssemblyTypeResolver), 16 + sizeof(::System::Reflection::Assembly*)> __System_Runtime_Serialization_Formatters_Binary_ObjectReader_TopLevelAssemblyTypeResolverSizeCheck;
  static_assert(sizeof(ObjectReader::TopLevelAssemblyTypeResolver) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ObjectReader::TopLevelAssemblyTypeResolver::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ObjectReader::TopLevelAssemblyTypeResolver::ResolveType
// Il2CppName: ResolveType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Runtime::Serialization::Formatters::Binary::ObjectReader::TopLevelAssemblyTypeResolver::*)(::System::Reflection::Assembly*, ::StringW, bool)>(&System::Runtime::Serialization::Formatters::Binary::ObjectReader::TopLevelAssemblyTypeResolver::ResolveType)> {
  static const MethodInfo* get() {
    static auto* assembly = &::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly")->byval_arg;
    static auto* simpleTypeName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ignoreCase = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ObjectReader::TopLevelAssemblyTypeResolver*), "ResolveType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assembly, simpleTypeName, ignoreCase});
  }
};
