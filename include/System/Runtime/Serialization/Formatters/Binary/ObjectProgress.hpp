// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum
#include "System/Runtime/Serialization/Formatters/Binary/BinaryTypeEnum.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.InternalObjectTypeE
#include "System/Runtime/Serialization/Formatters/Binary/InternalObjectTypeE.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.InternalMemberTypeE
#include "System/Runtime/Serialization/Formatters/Binary/InternalMemberTypeE.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.InternalMemberValueE
#include "System/Runtime/Serialization/Formatters/Binary/InternalMemberValueE.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: ParseRecord
  class ParseRecord;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: ObjectProgress
  class ObjectProgress;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::ObjectProgress);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::ObjectProgress*, "System.Runtime.Serialization.Formatters.Binary", "ObjectProgress");
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.ObjectProgress
  // [TokenAttribute] Offset: FFFFFFFF
  class ObjectProgress : public ::Il2CppObject {
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
    // System.Boolean isInitial
    // Size: 0x1
    // Offset: 0x10
    bool isInitial;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isInitial and: count
    char __padding0[0x3] = {};
    // System.Int32 count
    // Size: 0x4
    // Offset: 0x14
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum expectedType
    // Size: 0x14
    // Offset: 0x18
    ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum expectedType;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum) == 0x14);
    // System.Object expectedTypeInformation
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* expectedTypeInformation;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // System.String name
    // Size: 0x8
    // Offset: 0x28
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.Runtime.Serialization.Formatters.Binary.InternalObjectTypeE objectTypeEnum
    // Size: 0x14
    // Offset: 0x30
    ::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE objectTypeEnum;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE) == 0x14);
    // System.Runtime.Serialization.Formatters.Binary.InternalMemberTypeE memberTypeEnum
    // Size: 0x14
    // Offset: 0x34
    ::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE memberTypeEnum;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE) == 0x14);
    // System.Runtime.Serialization.Formatters.Binary.InternalMemberValueE memberValueEnum
    // Size: 0x14
    // Offset: 0x38
    ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE memberValueEnum;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE) == 0x14);
    // System.Type dtType
    // Size: 0x8
    // Offset: 0x40
    ::System::Type* dtType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // System.Int32 numItems
    // Size: 0x4
    // Offset: 0x48
    int numItems;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum binaryTypeEnum
    // Size: 0x14
    // Offset: 0x4C
    ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum) == 0x14);
    // System.Object typeInformation
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppObject* typeInformation;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // System.Int32 nullCount
    // Size: 0x4
    // Offset: 0x58
    int nullCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 memberLength
    // Size: 0x4
    // Offset: 0x5C
    int memberLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum[] binaryTypeEnumA
    // Size: 0x8
    // Offset: 0x60
    ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum> binaryTypeEnumA;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>) == 0x8);
    // System.Object[] typeInformationA
    // Size: 0x8
    // Offset: 0x68
    ::ArrayW<::Il2CppObject*> typeInformationA;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppObject*>) == 0x8);
    // System.String[] memberNames
    // Size: 0x8
    // Offset: 0x70
    ::ArrayW<::StringW> memberNames;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // System.Type[] memberTypes
    // Size: 0x8
    // Offset: 0x78
    ::ArrayW<::System::Type*> memberTypes;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Type*>) == 0x8);
    // System.Runtime.Serialization.Formatters.Binary.ParseRecord pr
    // Size: 0x8
    // Offset: 0x80
    ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::Formatters::Binary::ParseRecord*) == 0x8);
    public:
    // Get static field: static System.Int32 opRecordIdCount
    static int _get_opRecordIdCount();
    // Set static field: static System.Int32 opRecordIdCount
    static void _set_opRecordIdCount(int value);
    // Get instance field reference: System.Boolean isInitial
    bool& dyn_isInitial();
    // Get instance field reference: System.Int32 count
    int& dyn_count();
    // Get instance field reference: System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum expectedType
    ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum& dyn_expectedType();
    // Get instance field reference: System.Object expectedTypeInformation
    ::Il2CppObject*& dyn_expectedTypeInformation();
    // Get instance field reference: System.String name
    ::StringW& dyn_name();
    // Get instance field reference: System.Runtime.Serialization.Formatters.Binary.InternalObjectTypeE objectTypeEnum
    ::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE& dyn_objectTypeEnum();
    // Get instance field reference: System.Runtime.Serialization.Formatters.Binary.InternalMemberTypeE memberTypeEnum
    ::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE& dyn_memberTypeEnum();
    // Get instance field reference: System.Runtime.Serialization.Formatters.Binary.InternalMemberValueE memberValueEnum
    ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE& dyn_memberValueEnum();
    // Get instance field reference: System.Type dtType
    ::System::Type*& dyn_dtType();
    // Get instance field reference: System.Int32 numItems
    int& dyn_numItems();
    // Get instance field reference: System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum binaryTypeEnum
    ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum& dyn_binaryTypeEnum();
    // Get instance field reference: System.Object typeInformation
    ::Il2CppObject*& dyn_typeInformation();
    // Get instance field reference: System.Int32 nullCount
    int& dyn_nullCount();
    // Get instance field reference: System.Int32 memberLength
    int& dyn_memberLength();
    // Get instance field reference: System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum[] binaryTypeEnumA
    ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>& dyn_binaryTypeEnumA();
    // Get instance field reference: System.Object[] typeInformationA
    ::ArrayW<::Il2CppObject*>& dyn_typeInformationA();
    // Get instance field reference: System.String[] memberNames
    ::ArrayW<::StringW>& dyn_memberNames();
    // Get instance field reference: System.Type[] memberTypes
    ::ArrayW<::System::Type*>& dyn_memberTypes();
    // Get instance field reference: System.Runtime.Serialization.Formatters.Binary.ParseRecord pr
    ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*& dyn_pr();
    // static private System.Void .cctor()
    // Offset: 0xEB7C08
    static void _cctor();
    // System.Void Init()
    // Offset: 0xEB7A84
    void Init();
    // System.Void ArrayCountIncrement(System.Int32 value)
    // Offset: 0xEB7AD4
    void ArrayCountIncrement(int value);
    // System.Boolean GetNext(out System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum outBinaryTypeEnum, out System.Object outTypeInformation)
    // Offset: 0xEB7AE4
    bool GetNext(ByRef<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum> outBinaryTypeEnum, ByRef<::Il2CppObject*> outTypeInformation);
    // System.Void .ctor()
    // Offset: 0xEB7A18
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectProgress* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::Formatters::Binary::ObjectProgress::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectProgress*, creationType>()));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.ObjectProgress
  #pragma pack(pop)
  static check_size<sizeof(ObjectProgress), 128 + sizeof(::System::Runtime::Serialization::Formatters::Binary::ParseRecord*)> __System_Runtime_Serialization_Formatters_Binary_ObjectProgressSizeCheck;
  static_assert(sizeof(ObjectProgress) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ObjectProgress::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Runtime::Serialization::Formatters::Binary::ObjectProgress::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ObjectProgress*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ObjectProgress::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ObjectProgress::*)()>(&System::Runtime::Serialization::Formatters::Binary::ObjectProgress::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ObjectProgress*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ObjectProgress::ArrayCountIncrement
// Il2CppName: ArrayCountIncrement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ObjectProgress::*)(int)>(&System::Runtime::Serialization::Formatters::Binary::ObjectProgress::ArrayCountIncrement)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ObjectProgress*), "ArrayCountIncrement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ObjectProgress::GetNext
// Il2CppName: GetNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Serialization::Formatters::Binary::ObjectProgress::*)(ByRef<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>, ByRef<::Il2CppObject*>)>(&System::Runtime::Serialization::Formatters::Binary::ObjectProgress::GetNext)> {
  static const MethodInfo* get() {
    static auto* outBinaryTypeEnum = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "BinaryTypeEnum")->this_arg;
    static auto* outTypeInformation = &::il2cpp_utils::GetClassFromName("System", "Object")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ObjectProgress*), "GetNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{outBinaryTypeEnum, outTypeInformation});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ObjectProgress::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
