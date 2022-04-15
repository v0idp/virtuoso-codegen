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
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: __BinaryParser
  class __BinaryParser;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: BinaryCrossAppDomainString
  class BinaryCrossAppDomainString;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString*, "System.Runtime.Serialization.Formatters.Binary", "BinaryCrossAppDomainString");
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.BinaryCrossAppDomainString
  // [TokenAttribute] Offset: FFFFFFFF
  class BinaryCrossAppDomainString : public ::Il2CppObject {
    public:
    public:
    // System.Int32 objectId
    // Size: 0x4
    // Offset: 0x10
    int objectId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 value
    // Size: 0x4
    // Offset: 0x14
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: System.Int32 objectId
    [[deprecated("Use field access instead!")]] int& dyn_objectId();
    // Get instance field reference: System.Int32 value
    [[deprecated("Use field access instead!")]] int& dyn_value();
    // public System.Void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
    // Offset: 0xFE7888
    void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);
    // public System.Void Dump()
    // Offset: 0xFE78D0
    void Dump();
    // System.Void .ctor()
    // Offset: 0xFE7880
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryCrossAppDomainString* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryCrossAppDomainString*, creationType>()));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.BinaryCrossAppDomainString
  #pragma pack(pop)
  static check_size<sizeof(BinaryCrossAppDomainString), 20 + sizeof(int)> __System_Runtime_Serialization_Formatters_Binary_BinaryCrossAppDomainStringSizeCheck;
  static_assert(sizeof(BinaryCrossAppDomainString) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString::*)(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*)>(&System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString::Read)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "__BinaryParser")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString::Dump
// Il2CppName: Dump
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString::*)()>(&System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString::Dump)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString*), "Dump", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
