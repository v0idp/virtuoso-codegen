// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE
#include "System/Runtime/Serialization/Formatters/Binary/InternalParseTypeE.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.InternalObjectTypeE
#include "System/Runtime/Serialization/Formatters/Binary/InternalObjectTypeE.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE
#include "System/Runtime/Serialization/Formatters/Binary/InternalArrayTypeE.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.InternalMemberTypeE
#include "System/Runtime/Serialization/Formatters/Binary/InternalMemberTypeE.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.InternalMemberValueE
#include "System/Runtime/Serialization/Formatters/Binary/InternalMemberValueE.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.InternalObjectPositionE
#include "System/Runtime/Serialization/Formatters/Binary/InternalObjectPositionE.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE
#include "System/Runtime/Serialization/Formatters/Binary/InternalPrimitiveTypeE.hpp"
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
  // Forward declaring type: ReadObjectInfo
  class ReadObjectInfo;
  // Forward declaring type: PrimitiveArray
  class PrimitiveArray;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: ParseRecord
  class ParseRecord;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::ParseRecord);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, "System.Runtime.Serialization.Formatters.Binary", "ParseRecord");
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x11C
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.ParseRecord
  // [TokenAttribute] Offset: FFFFFFFF
  class ParseRecord : public ::Il2CppObject {
    public:
    public:
    // System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE PRparseTypeEnum
    // Size: 0x4
    // Offset: 0x10
    ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE PRparseTypeEnum;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE) == 0x4);
    // System.Runtime.Serialization.Formatters.Binary.InternalObjectTypeE PRobjectTypeEnum
    // Size: 0x4
    // Offset: 0x14
    ::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE PRobjectTypeEnum;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE) == 0x4);
    // System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE PRarrayTypeEnum
    // Size: 0x4
    // Offset: 0x18
    ::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE PRarrayTypeEnum;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE) == 0x4);
    // System.Runtime.Serialization.Formatters.Binary.InternalMemberTypeE PRmemberTypeEnum
    // Size: 0x4
    // Offset: 0x1C
    ::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE PRmemberTypeEnum;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE) == 0x4);
    // System.Runtime.Serialization.Formatters.Binary.InternalMemberValueE PRmemberValueEnum
    // Size: 0x4
    // Offset: 0x20
    ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE PRmemberValueEnum;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE) == 0x4);
    // System.Runtime.Serialization.Formatters.Binary.InternalObjectPositionE PRobjectPositionEnum
    // Size: 0x4
    // Offset: 0x24
    ::System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE PRobjectPositionEnum;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE) == 0x4);
    // System.String PRname
    // Size: 0x8
    // Offset: 0x28
    ::StringW PRname;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.String PRvalue
    // Size: 0x8
    // Offset: 0x30
    ::StringW PRvalue;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.Object PRvarValue
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppObject* PRvarValue;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // System.String PRkeyDt
    // Size: 0x8
    // Offset: 0x40
    ::StringW PRkeyDt;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.Type PRdtType
    // Size: 0x8
    // Offset: 0x48
    ::System::Type* PRdtType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE PRdtTypeCode
    // Size: 0x4
    // Offset: 0x50
    ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE PRdtTypeCode;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE) == 0x4);
    // System.Boolean PRisEnum
    // Size: 0x1
    // Offset: 0x54
    bool PRisEnum;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: PRisEnum and: PRobjectId
    char __padding12[0x3] = {};
    // System.Int64 PRobjectId
    // Size: 0x8
    // Offset: 0x58
    int64_t PRobjectId;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // System.Int64 PRidRef
    // Size: 0x8
    // Offset: 0x60
    int64_t PRidRef;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // System.String PRarrayElementTypeString
    // Size: 0x8
    // Offset: 0x68
    ::StringW PRarrayElementTypeString;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.Type PRarrayElementType
    // Size: 0x8
    // Offset: 0x70
    ::System::Type* PRarrayElementType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // System.Boolean PRisArrayVariant
    // Size: 0x1
    // Offset: 0x78
    bool PRisArrayVariant;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: PRisArrayVariant and: PRarrayElementTypeCode
    char __padding17[0x3] = {};
    // System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE PRarrayElementTypeCode
    // Size: 0x4
    // Offset: 0x7C
    ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE PRarrayElementTypeCode;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE) == 0x4);
    // System.Int32 PRrank
    // Size: 0x4
    // Offset: 0x80
    int PRrank;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: PRrank and: PRlengthA
    char __padding19[0x4] = {};
    // System.Int32[] PRlengthA
    // Size: 0x8
    // Offset: 0x88
    ::ArrayW<int> PRlengthA;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // System.Int32[] PRpositionA
    // Size: 0x8
    // Offset: 0x90
    ::ArrayW<int> PRpositionA;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // System.Int32[] PRlowerBoundA
    // Size: 0x8
    // Offset: 0x98
    ::ArrayW<int> PRlowerBoundA;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // System.Int32[] PRupperBoundA
    // Size: 0x8
    // Offset: 0xA0
    ::ArrayW<int> PRupperBoundA;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // System.Int32[] PRindexMap
    // Size: 0x8
    // Offset: 0xA8
    ::ArrayW<int> PRindexMap;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // System.Int32 PRmemberIndex
    // Size: 0x4
    // Offset: 0xB0
    int PRmemberIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 PRlinearlength
    // Size: 0x4
    // Offset: 0xB4
    int PRlinearlength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32[] PRrectangularMap
    // Size: 0x8
    // Offset: 0xB8
    ::ArrayW<int> PRrectangularMap;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // System.Boolean PRisLowerBound
    // Size: 0x1
    // Offset: 0xC0
    bool PRisLowerBound;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: PRisLowerBound and: PRtopId
    char __padding28[0x7] = {};
    // System.Int64 PRtopId
    // Size: 0x8
    // Offset: 0xC8
    int64_t PRtopId;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // System.Int64 PRheaderId
    // Size: 0x8
    // Offset: 0xD0
    int64_t PRheaderId;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo PRobjectInfo
    // Size: 0x8
    // Offset: 0xD8
    ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* PRobjectInfo;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*) == 0x8);
    // System.Boolean PRisValueTypeFixup
    // Size: 0x1
    // Offset: 0xE0
    bool PRisValueTypeFixup;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: PRisValueTypeFixup and: PRnewObj
    char __padding32[0x7] = {};
    // System.Object PRnewObj
    // Size: 0x8
    // Offset: 0xE8
    ::Il2CppObject* PRnewObj;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // System.Object[] PRobjectA
    // Size: 0x8
    // Offset: 0xF0
    ::ArrayW<::Il2CppObject*> PRobjectA;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppObject*>) == 0x8);
    // System.Runtime.Serialization.Formatters.Binary.PrimitiveArray PRprimitiveArray
    // Size: 0x8
    // Offset: 0xF8
    ::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray* PRprimitiveArray;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray*) == 0x8);
    // System.Boolean PRisRegistered
    // Size: 0x1
    // Offset: 0x100
    bool PRisRegistered;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: PRisRegistered and: PRmemberData
    char __padding36[0x7] = {};
    // System.Object[] PRmemberData
    // Size: 0x8
    // Offset: 0x108
    ::ArrayW<::Il2CppObject*> PRmemberData;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppObject*>) == 0x8);
    // System.Runtime.Serialization.SerializationInfo PRsi
    // Size: 0x8
    // Offset: 0x110
    ::System::Runtime::Serialization::SerializationInfo* PRsi;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::SerializationInfo*) == 0x8);
    // System.Int32 PRnullCount
    // Size: 0x4
    // Offset: 0x118
    int PRnullCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get static field: static System.Int32 parseRecordIdCount
    static int _get_parseRecordIdCount();
    // Set static field: static System.Int32 parseRecordIdCount
    static void _set_parseRecordIdCount(int value);
    // Get instance field reference: System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE PRparseTypeEnum
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE& dyn_PRparseTypeEnum();
    // Get instance field reference: System.Runtime.Serialization.Formatters.Binary.InternalObjectTypeE PRobjectTypeEnum
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE& dyn_PRobjectTypeEnum();
    // Get instance field reference: System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE PRarrayTypeEnum
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE& dyn_PRarrayTypeEnum();
    // Get instance field reference: System.Runtime.Serialization.Formatters.Binary.InternalMemberTypeE PRmemberTypeEnum
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE& dyn_PRmemberTypeEnum();
    // Get instance field reference: System.Runtime.Serialization.Formatters.Binary.InternalMemberValueE PRmemberValueEnum
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE& dyn_PRmemberValueEnum();
    // Get instance field reference: System.Runtime.Serialization.Formatters.Binary.InternalObjectPositionE PRobjectPositionEnum
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE& dyn_PRobjectPositionEnum();
    // Get instance field reference: System.String PRname
    [[deprecated("Use field access instead!")]] ::StringW& dyn_PRname();
    // Get instance field reference: System.String PRvalue
    [[deprecated("Use field access instead!")]] ::StringW& dyn_PRvalue();
    // Get instance field reference: System.Object PRvarValue
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_PRvarValue();
    // Get instance field reference: System.String PRkeyDt
    [[deprecated("Use field access instead!")]] ::StringW& dyn_PRkeyDt();
    // Get instance field reference: System.Type PRdtType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_PRdtType();
    // Get instance field reference: System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE PRdtTypeCode
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE& dyn_PRdtTypeCode();
    // Get instance field reference: System.Boolean PRisEnum
    [[deprecated("Use field access instead!")]] bool& dyn_PRisEnum();
    // Get instance field reference: System.Int64 PRobjectId
    [[deprecated("Use field access instead!")]] int64_t& dyn_PRobjectId();
    // Get instance field reference: System.Int64 PRidRef
    [[deprecated("Use field access instead!")]] int64_t& dyn_PRidRef();
    // Get instance field reference: System.String PRarrayElementTypeString
    [[deprecated("Use field access instead!")]] ::StringW& dyn_PRarrayElementTypeString();
    // Get instance field reference: System.Type PRarrayElementType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_PRarrayElementType();
    // Get instance field reference: System.Boolean PRisArrayVariant
    [[deprecated("Use field access instead!")]] bool& dyn_PRisArrayVariant();
    // Get instance field reference: System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE PRarrayElementTypeCode
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE& dyn_PRarrayElementTypeCode();
    // Get instance field reference: System.Int32 PRrank
    [[deprecated("Use field access instead!")]] int& dyn_PRrank();
    // Get instance field reference: System.Int32[] PRlengthA
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_PRlengthA();
    // Get instance field reference: System.Int32[] PRpositionA
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_PRpositionA();
    // Get instance field reference: System.Int32[] PRlowerBoundA
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_PRlowerBoundA();
    // Get instance field reference: System.Int32[] PRupperBoundA
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_PRupperBoundA();
    // Get instance field reference: System.Int32[] PRindexMap
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_PRindexMap();
    // Get instance field reference: System.Int32 PRmemberIndex
    [[deprecated("Use field access instead!")]] int& dyn_PRmemberIndex();
    // Get instance field reference: System.Int32 PRlinearlength
    [[deprecated("Use field access instead!")]] int& dyn_PRlinearlength();
    // Get instance field reference: System.Int32[] PRrectangularMap
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_PRrectangularMap();
    // Get instance field reference: System.Boolean PRisLowerBound
    [[deprecated("Use field access instead!")]] bool& dyn_PRisLowerBound();
    // Get instance field reference: System.Int64 PRtopId
    [[deprecated("Use field access instead!")]] int64_t& dyn_PRtopId();
    // Get instance field reference: System.Int64 PRheaderId
    [[deprecated("Use field access instead!")]] int64_t& dyn_PRheaderId();
    // Get instance field reference: System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo PRobjectInfo
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*& dyn_PRobjectInfo();
    // Get instance field reference: System.Boolean PRisValueTypeFixup
    [[deprecated("Use field access instead!")]] bool& dyn_PRisValueTypeFixup();
    // Get instance field reference: System.Object PRnewObj
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_PRnewObj();
    // Get instance field reference: System.Object[] PRobjectA
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppObject*>& dyn_PRobjectA();
    // Get instance field reference: System.Runtime.Serialization.Formatters.Binary.PrimitiveArray PRprimitiveArray
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray*& dyn_PRprimitiveArray();
    // Get instance field reference: System.Boolean PRisRegistered
    [[deprecated("Use field access instead!")]] bool& dyn_PRisRegistered();
    // Get instance field reference: System.Object[] PRmemberData
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppObject*>& dyn_PRmemberData();
    // Get instance field reference: System.Runtime.Serialization.SerializationInfo PRsi
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::SerializationInfo*& dyn_PRsi();
    // Get instance field reference: System.Int32 PRnullCount
    [[deprecated("Use field access instead!")]] int& dyn_PRnullCount();
    // static private System.Void .cctor()
    // Offset: 0x14C984C
    static void _cctor();
    // System.Void Init()
    // Offset: 0x14C97F0
    void Init();
    // System.Void .ctor()
    // Offset: 0x14C97E8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ParseRecord* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::Formatters::Binary::ParseRecord::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ParseRecord*, creationType>()));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.ParseRecord
  #pragma pack(pop)
  static check_size<sizeof(ParseRecord), 280 + sizeof(int)> __System_Runtime_Serialization_Formatters_Binary_ParseRecordSizeCheck;
  static_assert(sizeof(ParseRecord) == 0x11C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ParseRecord::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Runtime::Serialization::Formatters::Binary::ParseRecord::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ParseRecord*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ParseRecord::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ParseRecord::*)()>(&System::Runtime::Serialization::Formatters::Binary::ParseRecord::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ParseRecord*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ParseRecord::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
