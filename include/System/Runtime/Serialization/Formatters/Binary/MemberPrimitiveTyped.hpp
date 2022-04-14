// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE
#include "System/Runtime/Serialization/Formatters/Binary/InternalPrimitiveTypeE.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: __BinaryWriter
  class __BinaryWriter;
  // Forward declaring type: __BinaryParser
  class __BinaryParser;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: MemberPrimitiveTyped
  class MemberPrimitiveTyped;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped*, "System.Runtime.Serialization.Formatters.Binary", "MemberPrimitiveTyped");
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.MemberPrimitiveTyped
  // [TokenAttribute] Offset: FFFFFFFF
  class MemberPrimitiveTyped : public ::Il2CppObject {
    public:
    public:
    // System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE primitiveTypeEnum
    // Size: 0x4
    // Offset: 0x10
    ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE primitiveTypeEnum;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE) == 0x4);
    // Padding between fields: primitiveTypeEnum and: value
    char __padding0[0x4] = {};
    // System.Object value
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* value;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Get instance field reference: System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE primitiveTypeEnum
    [[deprecated]] ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE& dyn_primitiveTypeEnum();
    // Get instance field reference: System.Object value
    [[deprecated]] ::Il2CppObject*& dyn_value();
    // System.Void Set(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE primitiveTypeEnum, System.Object value)
    // Offset: 0xFFE3E0
    void Set(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE primitiveTypeEnum, ::Il2CppObject* value);
    // public System.Void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0xFFE3EC
    void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
    // public System.Void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
    // Offset: 0xFFE444
    void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);
    // public System.Void Dump()
    // Offset: 0xFFE490
    void Dump();
    // System.Void .ctor()
    // Offset: 0xFFE3D8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MemberPrimitiveTyped* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MemberPrimitiveTyped*, creationType>()));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.MemberPrimitiveTyped
  #pragma pack(pop)
  static check_size<sizeof(MemberPrimitiveTyped), 24 + sizeof(::Il2CppObject*)> __System_Runtime_Serialization_Formatters_Binary_MemberPrimitiveTypedSizeCheck;
  static_assert(sizeof(MemberPrimitiveTyped) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped::Set
// Il2CppName: Set
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped::*)(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, ::Il2CppObject*)>(&System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped::Set)> {
  static const MethodInfo* get() {
    static auto* primitiveTypeEnum = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "InternalPrimitiveTypeE")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped*), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{primitiveTypeEnum, value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped::*)(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*)>(&System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped::Write)> {
  static const MethodInfo* get() {
    static auto* sout = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "__BinaryWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sout});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped::*)(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*)>(&System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped::Read)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "__BinaryParser")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped::Dump
// Il2CppName: Dump
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped::*)()>(&System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped::Dump)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped*), "Dump", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
