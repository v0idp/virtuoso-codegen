// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Serialization.IXmlSerializable
#include "System/Xml/Serialization/IXmlSerializable.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Data.SqlTypes.INullable
#include "System/Data/SqlTypes/INullable.hpp"
// Including type: System.Data.SqlTypes.SqlBytesCharsState
#include "System/Data/SqlTypes/SqlBytesCharsState.hpp"
// Including type: System.Data.SqlTypes.SqlBinary
#include "System/Data/SqlTypes/SqlBinary.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchema
  class XmlSchema;
  // Forward declaring type: XmlSchemaSet
  class XmlSchemaSet;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlReader
  class XmlReader;
  // Forward declaring type: XmlWriter
  class XmlWriter;
  // Forward declaring type: XmlQualifiedName
  class XmlQualifiedName;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Data.SqlTypes
namespace System::Data::SqlTypes {
  // Forward declaring type: SqlBytes
  class SqlBytes;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::SqlTypes::SqlBytes);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SqlTypes::SqlBytes*, "System.Data.SqlTypes", "SqlBytes");
// Type namespace: System.Data.SqlTypes
namespace System::Data::SqlTypes {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.SqlTypes.SqlBytes
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 6BA678
  // [XmlSchemaProviderAttribute] Offset: 6BA678
  class SqlBytes : public ::Il2CppObject/*, public ::System::Xml::Serialization::IXmlSerializable, public ::System::Runtime::Serialization::ISerializable, public ::System::Data::SqlTypes::INullable*/ {
    public:
    public:
    // System.Byte[] _rgbBuf
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> rgbBuf;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Int64 _lCurLen
    // Size: 0x8
    // Offset: 0x18
    int64_t lCurLen;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // System.IO.Stream _stream
    // Size: 0x8
    // Offset: 0x20
    ::System::IO::Stream* stream;
    // Field size check
    static_assert(sizeof(::System::IO::Stream*) == 0x8);
    // private System.Data.SqlTypes.SqlBytesCharsState _state
    // Size: 0x4
    // Offset: 0x28
    ::System::Data::SqlTypes::SqlBytesCharsState state;
    // Field size check
    static_assert(sizeof(::System::Data::SqlTypes::SqlBytesCharsState) == 0x4);
    // Padding between fields: state and: rgbWorkBuf
    char __padding3[0x4] = {};
    // private System.Byte[] _rgbWorkBuf
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<uint8_t> rgbWorkBuf;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Xml::Serialization::IXmlSerializable
    operator ::System::Xml::Serialization::IXmlSerializable() noexcept {
      return *reinterpret_cast<::System::Xml::Serialization::IXmlSerializable*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::Serialization::ISerializable
    operator ::System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<::System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating interface conversion operator: operator ::System::Data::SqlTypes::INullable
    operator ::System::Data::SqlTypes::INullable() noexcept {
      return *reinterpret_cast<::System::Data::SqlTypes::INullable*>(this);
    }
    // Get instance field reference: System.Byte[] _rgbBuf
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__rgbBuf();
    // Get instance field reference: private System.Int64 _lCurLen
    [[deprecated("Use field access instead!")]] int64_t& dyn__lCurLen();
    // Get instance field reference: System.IO.Stream _stream
    [[deprecated("Use field access instead!")]] ::System::IO::Stream*& dyn__stream();
    // Get instance field reference: private System.Data.SqlTypes.SqlBytesCharsState _state
    [[deprecated("Use field access instead!")]] ::System::Data::SqlTypes::SqlBytesCharsState& dyn__state();
    // Get instance field reference: private System.Byte[] _rgbWorkBuf
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__rgbWorkBuf();
    // public System.Boolean get_IsNull()
    // Offset: 0x12258BC
    bool get_IsNull();
    // public System.Byte[] get_Buffer()
    // Offset: 0x12258CC
    ::ArrayW<uint8_t> get_Buffer();
    // public System.Int64 get_Length()
    // Offset: 0x1225A5C
    int64_t get_Length();
    // public System.Byte[] get_Value()
    // Offset: 0x1225ADC
    ::ArrayW<uint8_t> get_Value();
    // static public System.Data.SqlTypes.SqlBytes get_Null()
    // Offset: 0x122611C
    static ::System::Data::SqlTypes::SqlBytes* get_Null();
    // public System.Void .ctor()
    // Offset: 0x12257EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SqlBytes* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::SqlTypes::SqlBytes::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SqlBytes*, creationType>()));
    }
    // public System.Void .ctor(System.Byte[] buffer)
    // Offset: 0x122582C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SqlBytes* New_ctor(::ArrayW<uint8_t> buffer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::SqlTypes::SqlBytes::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SqlBytes*, creationType>(buffer)));
    }
    // public System.Void .ctor(System.Data.SqlTypes.SqlBinary value)
    // Offset: 0x1225880
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SqlBytes* New_ctor(::System::Data::SqlTypes::SqlBinary value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::SqlTypes::SqlBytes::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SqlBytes*, creationType>(value)));
    }
    // public System.Void SetNull()
    // Offset: 0x122581C
    void SetNull();
    // private System.Void CopyStreamToBuffer()
    // Offset: 0x1225910
    void CopyStreamToBuffer();
    // System.Boolean FStream()
    // Offset: 0x1225900
    bool FStream();
    // private System.Void SetBuffer(System.Byte[] buffer)
    // Offset: 0x1225CC4
    void SetBuffer(::ArrayW<uint8_t> buffer);
    // private System.Xml.Schema.XmlSchema System.Xml.Serialization.IXmlSerializable.GetSchema()
    // Offset: 0x1225CEC
    ::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema();
    // private System.Void System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader r)
    // Offset: 0x1225CF4
    void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* r);
    // private System.Void System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter writer)
    // Offset: 0x1225F14
    void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer);
    // static public System.Xml.XmlQualifiedName GetXsdType(System.Xml.Schema.XmlSchemaSet schemaSet)
    // Offset: 0x1226054
    static ::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet);
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x12260DC
    void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
  }; // System.Data.SqlTypes.SqlBytes
  #pragma pack(pop)
  static check_size<sizeof(SqlBytes), 48 + sizeof(::ArrayW<uint8_t>)> __System_Data_SqlTypes_SqlBytesSizeCheck;
  static_assert(sizeof(SqlBytes) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlBytes::get_IsNull
// Il2CppName: get_IsNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::SqlTypes::SqlBytes::*)()>(&System::Data::SqlTypes::SqlBytes::get_IsNull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlBytes*), "get_IsNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlBytes::get_Buffer
// Il2CppName: get_Buffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Data::SqlTypes::SqlBytes::*)()>(&System::Data::SqlTypes::SqlBytes::get_Buffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlBytes*), "get_Buffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlBytes::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Data::SqlTypes::SqlBytes::*)()>(&System::Data::SqlTypes::SqlBytes::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlBytes*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlBytes::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Data::SqlTypes::SqlBytes::*)()>(&System::Data::SqlTypes::SqlBytes::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlBytes*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlBytes::get_Null
// Il2CppName: get_Null
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::SqlTypes::SqlBytes* (*)()>(&System::Data::SqlTypes::SqlBytes::get_Null)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlBytes*), "get_Null", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlBytes::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlBytes::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlBytes::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlBytes::SetNull
// Il2CppName: SetNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::SqlTypes::SqlBytes::*)()>(&System::Data::SqlTypes::SqlBytes::SetNull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlBytes*), "SetNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlBytes::CopyStreamToBuffer
// Il2CppName: CopyStreamToBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::SqlTypes::SqlBytes::*)()>(&System::Data::SqlTypes::SqlBytes::CopyStreamToBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlBytes*), "CopyStreamToBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlBytes::FStream
// Il2CppName: FStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::SqlTypes::SqlBytes::*)()>(&System::Data::SqlTypes::SqlBytes::FStream)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlBytes*), "FStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlBytes::SetBuffer
// Il2CppName: SetBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::SqlTypes::SqlBytes::*)(::ArrayW<uint8_t>)>(&System::Data::SqlTypes::SqlBytes::SetBuffer)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlBytes*), "SetBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlBytes::System_Xml_Serialization_IXmlSerializable_GetSchema
// Il2CppName: System.Xml.Serialization.IXmlSerializable.GetSchema
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchema* (System::Data::SqlTypes::SqlBytes::*)()>(&System::Data::SqlTypes::SqlBytes::System_Xml_Serialization_IXmlSerializable_GetSchema)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlBytes*), "System.Xml.Serialization.IXmlSerializable.GetSchema", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlBytes::System_Xml_Serialization_IXmlSerializable_ReadXml
// Il2CppName: System.Xml.Serialization.IXmlSerializable.ReadXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::SqlTypes::SqlBytes::*)(::System::Xml::XmlReader*)>(&System::Data::SqlTypes::SqlBytes::System_Xml_Serialization_IXmlSerializable_ReadXml)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlBytes*), "System.Xml.Serialization.IXmlSerializable.ReadXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlBytes::System_Xml_Serialization_IXmlSerializable_WriteXml
// Il2CppName: System.Xml.Serialization.IXmlSerializable.WriteXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::SqlTypes::SqlBytes::*)(::System::Xml::XmlWriter*)>(&System::Data::SqlTypes::SqlBytes::System_Xml_Serialization_IXmlSerializable_WriteXml)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlBytes*), "System.Xml.Serialization.IXmlSerializable.WriteXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlBytes::GetXsdType
// Il2CppName: GetXsdType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlQualifiedName* (*)(::System::Xml::Schema::XmlSchemaSet*)>(&System::Data::SqlTypes::SqlBytes::GetXsdType)> {
  static const MethodInfo* get() {
    static auto* schemaSet = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaSet")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlBytes*), "GetXsdType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{schemaSet});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlBytes::System_Runtime_Serialization_ISerializable_GetObjectData
// Il2CppName: System.Runtime.Serialization.ISerializable.GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::SqlTypes::SqlBytes::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Data::SqlTypes::SqlBytes::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlBytes*), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
