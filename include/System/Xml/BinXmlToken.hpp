// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: BinXmlToken
  struct BinXmlToken;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::BinXmlToken, "System.Xml", "BinXmlToken");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.BinXmlToken
  // [TokenAttribute] Offset: FFFFFFFF
  struct BinXmlToken/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: BinXmlToken
    constexpr BinXmlToken(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Xml.BinXmlToken Error
    static constexpr const int Error = 0;
    // Get static field: static public System.Xml.BinXmlToken Error
    static ::System::Xml::BinXmlToken _get_Error();
    // Set static field: static public System.Xml.BinXmlToken Error
    static void _set_Error(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken NotImpl
    static constexpr const int NotImpl = -2;
    // Get static field: static public System.Xml.BinXmlToken NotImpl
    static ::System::Xml::BinXmlToken _get_NotImpl();
    // Set static field: static public System.Xml.BinXmlToken NotImpl
    static void _set_NotImpl(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken EOF
    static constexpr const int _EOF = -1;
    // Get static field: static public System.Xml.BinXmlToken EOF
    static ::System::Xml::BinXmlToken _get_EOF();
    // Set static field: static public System.Xml.BinXmlToken EOF
    static void _set_EOF(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken XmlDecl
    static constexpr const int XmlDecl = 254;
    // Get static field: static public System.Xml.BinXmlToken XmlDecl
    static ::System::Xml::BinXmlToken _get_XmlDecl();
    // Set static field: static public System.Xml.BinXmlToken XmlDecl
    static void _set_XmlDecl(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken Encoding
    static constexpr const int Encoding = 253;
    // Get static field: static public System.Xml.BinXmlToken Encoding
    static ::System::Xml::BinXmlToken _get_Encoding();
    // Set static field: static public System.Xml.BinXmlToken Encoding
    static void _set_Encoding(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken DocType
    static constexpr const int DocType = 252;
    // Get static field: static public System.Xml.BinXmlToken DocType
    static ::System::Xml::BinXmlToken _get_DocType();
    // Set static field: static public System.Xml.BinXmlToken DocType
    static void _set_DocType(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken System
    static constexpr const int System = 251;
    // Get static field: static public System.Xml.BinXmlToken System
    static ::System::Xml::BinXmlToken _get_System();
    // Set static field: static public System.Xml.BinXmlToken System
    static void _set_System(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken Public
    static constexpr const int Public = 250;
    // Get static field: static public System.Xml.BinXmlToken Public
    static ::System::Xml::BinXmlToken _get_Public();
    // Set static field: static public System.Xml.BinXmlToken Public
    static void _set_Public(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken Subset
    static constexpr const int Subset = 249;
    // Get static field: static public System.Xml.BinXmlToken Subset
    static ::System::Xml::BinXmlToken _get_Subset();
    // Set static field: static public System.Xml.BinXmlToken Subset
    static void _set_Subset(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken Element
    static constexpr const int Element = 248;
    // Get static field: static public System.Xml.BinXmlToken Element
    static ::System::Xml::BinXmlToken _get_Element();
    // Set static field: static public System.Xml.BinXmlToken Element
    static void _set_Element(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken EndElem
    static constexpr const int EndElem = 247;
    // Get static field: static public System.Xml.BinXmlToken EndElem
    static ::System::Xml::BinXmlToken _get_EndElem();
    // Set static field: static public System.Xml.BinXmlToken EndElem
    static void _set_EndElem(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken Attr
    static constexpr const int Attr = 246;
    // Get static field: static public System.Xml.BinXmlToken Attr
    static ::System::Xml::BinXmlToken _get_Attr();
    // Set static field: static public System.Xml.BinXmlToken Attr
    static void _set_Attr(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken EndAttrs
    static constexpr const int EndAttrs = 245;
    // Get static field: static public System.Xml.BinXmlToken EndAttrs
    static ::System::Xml::BinXmlToken _get_EndAttrs();
    // Set static field: static public System.Xml.BinXmlToken EndAttrs
    static void _set_EndAttrs(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken PI
    static constexpr const int PI = 244;
    // Get static field: static public System.Xml.BinXmlToken PI
    static ::System::Xml::BinXmlToken _get_PI();
    // Set static field: static public System.Xml.BinXmlToken PI
    static void _set_PI(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken Comment
    static constexpr const int Comment = 243;
    // Get static field: static public System.Xml.BinXmlToken Comment
    static ::System::Xml::BinXmlToken _get_Comment();
    // Set static field: static public System.Xml.BinXmlToken Comment
    static void _set_Comment(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken CData
    static constexpr const int CData = 242;
    // Get static field: static public System.Xml.BinXmlToken CData
    static ::System::Xml::BinXmlToken _get_CData();
    // Set static field: static public System.Xml.BinXmlToken CData
    static void _set_CData(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken EndCData
    static constexpr const int EndCData = 241;
    // Get static field: static public System.Xml.BinXmlToken EndCData
    static ::System::Xml::BinXmlToken _get_EndCData();
    // Set static field: static public System.Xml.BinXmlToken EndCData
    static void _set_EndCData(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken Name
    static constexpr const int Name = 240;
    // Get static field: static public System.Xml.BinXmlToken Name
    static ::System::Xml::BinXmlToken _get_Name();
    // Set static field: static public System.Xml.BinXmlToken Name
    static void _set_Name(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken QName
    static constexpr const int QName = 239;
    // Get static field: static public System.Xml.BinXmlToken QName
    static ::System::Xml::BinXmlToken _get_QName();
    // Set static field: static public System.Xml.BinXmlToken QName
    static void _set_QName(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken XmlText
    static constexpr const int XmlText = 237;
    // Get static field: static public System.Xml.BinXmlToken XmlText
    static ::System::Xml::BinXmlToken _get_XmlText();
    // Set static field: static public System.Xml.BinXmlToken XmlText
    static void _set_XmlText(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken Nest
    static constexpr const int Nest = 236;
    // Get static field: static public System.Xml.BinXmlToken Nest
    static ::System::Xml::BinXmlToken _get_Nest();
    // Set static field: static public System.Xml.BinXmlToken Nest
    static void _set_Nest(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken EndNest
    static constexpr const int EndNest = 235;
    // Get static field: static public System.Xml.BinXmlToken EndNest
    static ::System::Xml::BinXmlToken _get_EndNest();
    // Set static field: static public System.Xml.BinXmlToken EndNest
    static void _set_EndNest(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken Extn
    static constexpr const int Extn = 234;
    // Get static field: static public System.Xml.BinXmlToken Extn
    static ::System::Xml::BinXmlToken _get_Extn();
    // Set static field: static public System.Xml.BinXmlToken Extn
    static void _set_Extn(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken NmFlush
    static constexpr const int NmFlush = 233;
    // Get static field: static public System.Xml.BinXmlToken NmFlush
    static ::System::Xml::BinXmlToken _get_NmFlush();
    // Set static field: static public System.Xml.BinXmlToken NmFlush
    static void _set_NmFlush(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken SQL_BIT
    static constexpr const int SQL_BIT = 6;
    // Get static field: static public System.Xml.BinXmlToken SQL_BIT
    static ::System::Xml::BinXmlToken _get_SQL_BIT();
    // Set static field: static public System.Xml.BinXmlToken SQL_BIT
    static void _set_SQL_BIT(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken SQL_TINYINT
    static constexpr const int SQL_TINYINT = 7;
    // Get static field: static public System.Xml.BinXmlToken SQL_TINYINT
    static ::System::Xml::BinXmlToken _get_SQL_TINYINT();
    // Set static field: static public System.Xml.BinXmlToken SQL_TINYINT
    static void _set_SQL_TINYINT(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken SQL_SMALLINT
    static constexpr const int SQL_SMALLINT = 1;
    // Get static field: static public System.Xml.BinXmlToken SQL_SMALLINT
    static ::System::Xml::BinXmlToken _get_SQL_SMALLINT();
    // Set static field: static public System.Xml.BinXmlToken SQL_SMALLINT
    static void _set_SQL_SMALLINT(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken SQL_INT
    static constexpr const int SQL_INT = 2;
    // Get static field: static public System.Xml.BinXmlToken SQL_INT
    static ::System::Xml::BinXmlToken _get_SQL_INT();
    // Set static field: static public System.Xml.BinXmlToken SQL_INT
    static void _set_SQL_INT(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken SQL_BIGINT
    static constexpr const int SQL_BIGINT = 8;
    // Get static field: static public System.Xml.BinXmlToken SQL_BIGINT
    static ::System::Xml::BinXmlToken _get_SQL_BIGINT();
    // Set static field: static public System.Xml.BinXmlToken SQL_BIGINT
    static void _set_SQL_BIGINT(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken SQL_REAL
    static constexpr const int SQL_REAL = 3;
    // Get static field: static public System.Xml.BinXmlToken SQL_REAL
    static ::System::Xml::BinXmlToken _get_SQL_REAL();
    // Set static field: static public System.Xml.BinXmlToken SQL_REAL
    static void _set_SQL_REAL(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken SQL_FLOAT
    static constexpr const int SQL_FLOAT = 4;
    // Get static field: static public System.Xml.BinXmlToken SQL_FLOAT
    static ::System::Xml::BinXmlToken _get_SQL_FLOAT();
    // Set static field: static public System.Xml.BinXmlToken SQL_FLOAT
    static void _set_SQL_FLOAT(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken SQL_MONEY
    static constexpr const int SQL_MONEY = 5;
    // Get static field: static public System.Xml.BinXmlToken SQL_MONEY
    static ::System::Xml::BinXmlToken _get_SQL_MONEY();
    // Set static field: static public System.Xml.BinXmlToken SQL_MONEY
    static void _set_SQL_MONEY(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken SQL_SMALLMONEY
    static constexpr const int SQL_SMALLMONEY = 20;
    // Get static field: static public System.Xml.BinXmlToken SQL_SMALLMONEY
    static ::System::Xml::BinXmlToken _get_SQL_SMALLMONEY();
    // Set static field: static public System.Xml.BinXmlToken SQL_SMALLMONEY
    static void _set_SQL_SMALLMONEY(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken SQL_DATETIME
    static constexpr const int SQL_DATETIME = 18;
    // Get static field: static public System.Xml.BinXmlToken SQL_DATETIME
    static ::System::Xml::BinXmlToken _get_SQL_DATETIME();
    // Set static field: static public System.Xml.BinXmlToken SQL_DATETIME
    static void _set_SQL_DATETIME(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken SQL_SMALLDATETIME
    static constexpr const int SQL_SMALLDATETIME = 19;
    // Get static field: static public System.Xml.BinXmlToken SQL_SMALLDATETIME
    static ::System::Xml::BinXmlToken _get_SQL_SMALLDATETIME();
    // Set static field: static public System.Xml.BinXmlToken SQL_SMALLDATETIME
    static void _set_SQL_SMALLDATETIME(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken SQL_DECIMAL
    static constexpr const int SQL_DECIMAL = 10;
    // Get static field: static public System.Xml.BinXmlToken SQL_DECIMAL
    static ::System::Xml::BinXmlToken _get_SQL_DECIMAL();
    // Set static field: static public System.Xml.BinXmlToken SQL_DECIMAL
    static void _set_SQL_DECIMAL(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken SQL_NUMERIC
    static constexpr const int SQL_NUMERIC = 11;
    // Get static field: static public System.Xml.BinXmlToken SQL_NUMERIC
    static ::System::Xml::BinXmlToken _get_SQL_NUMERIC();
    // Set static field: static public System.Xml.BinXmlToken SQL_NUMERIC
    static void _set_SQL_NUMERIC(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken SQL_UUID
    static constexpr const int SQL_UUID = 9;
    // Get static field: static public System.Xml.BinXmlToken SQL_UUID
    static ::System::Xml::BinXmlToken _get_SQL_UUID();
    // Set static field: static public System.Xml.BinXmlToken SQL_UUID
    static void _set_SQL_UUID(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken SQL_VARBINARY
    static constexpr const int SQL_VARBINARY = 15;
    // Get static field: static public System.Xml.BinXmlToken SQL_VARBINARY
    static ::System::Xml::BinXmlToken _get_SQL_VARBINARY();
    // Set static field: static public System.Xml.BinXmlToken SQL_VARBINARY
    static void _set_SQL_VARBINARY(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken SQL_BINARY
    static constexpr const int SQL_BINARY = 12;
    // Get static field: static public System.Xml.BinXmlToken SQL_BINARY
    static ::System::Xml::BinXmlToken _get_SQL_BINARY();
    // Set static field: static public System.Xml.BinXmlToken SQL_BINARY
    static void _set_SQL_BINARY(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken SQL_IMAGE
    static constexpr const int SQL_IMAGE = 23;
    // Get static field: static public System.Xml.BinXmlToken SQL_IMAGE
    static ::System::Xml::BinXmlToken _get_SQL_IMAGE();
    // Set static field: static public System.Xml.BinXmlToken SQL_IMAGE
    static void _set_SQL_IMAGE(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken SQL_CHAR
    static constexpr const int SQL_CHAR = 13;
    // Get static field: static public System.Xml.BinXmlToken SQL_CHAR
    static ::System::Xml::BinXmlToken _get_SQL_CHAR();
    // Set static field: static public System.Xml.BinXmlToken SQL_CHAR
    static void _set_SQL_CHAR(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken SQL_VARCHAR
    static constexpr const int SQL_VARCHAR = 16;
    // Get static field: static public System.Xml.BinXmlToken SQL_VARCHAR
    static ::System::Xml::BinXmlToken _get_SQL_VARCHAR();
    // Set static field: static public System.Xml.BinXmlToken SQL_VARCHAR
    static void _set_SQL_VARCHAR(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken SQL_TEXT
    static constexpr const int SQL_TEXT = 22;
    // Get static field: static public System.Xml.BinXmlToken SQL_TEXT
    static ::System::Xml::BinXmlToken _get_SQL_TEXT();
    // Set static field: static public System.Xml.BinXmlToken SQL_TEXT
    static void _set_SQL_TEXT(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken SQL_NVARCHAR
    static constexpr const int SQL_NVARCHAR = 17;
    // Get static field: static public System.Xml.BinXmlToken SQL_NVARCHAR
    static ::System::Xml::BinXmlToken _get_SQL_NVARCHAR();
    // Set static field: static public System.Xml.BinXmlToken SQL_NVARCHAR
    static void _set_SQL_NVARCHAR(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken SQL_NCHAR
    static constexpr const int SQL_NCHAR = 14;
    // Get static field: static public System.Xml.BinXmlToken SQL_NCHAR
    static ::System::Xml::BinXmlToken _get_SQL_NCHAR();
    // Set static field: static public System.Xml.BinXmlToken SQL_NCHAR
    static void _set_SQL_NCHAR(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken SQL_NTEXT
    static constexpr const int SQL_NTEXT = 24;
    // Get static field: static public System.Xml.BinXmlToken SQL_NTEXT
    static ::System::Xml::BinXmlToken _get_SQL_NTEXT();
    // Set static field: static public System.Xml.BinXmlToken SQL_NTEXT
    static void _set_SQL_NTEXT(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken SQL_UDT
    static constexpr const int SQL_UDT = 27;
    // Get static field: static public System.Xml.BinXmlToken SQL_UDT
    static ::System::Xml::BinXmlToken _get_SQL_UDT();
    // Set static field: static public System.Xml.BinXmlToken SQL_UDT
    static void _set_SQL_UDT(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken XSD_KATMAI_DATE
    static constexpr const int XSD_KATMAI_DATE = 127;
    // Get static field: static public System.Xml.BinXmlToken XSD_KATMAI_DATE
    static ::System::Xml::BinXmlToken _get_XSD_KATMAI_DATE();
    // Set static field: static public System.Xml.BinXmlToken XSD_KATMAI_DATE
    static void _set_XSD_KATMAI_DATE(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken XSD_KATMAI_DATETIME
    static constexpr const int XSD_KATMAI_DATETIME = 126;
    // Get static field: static public System.Xml.BinXmlToken XSD_KATMAI_DATETIME
    static ::System::Xml::BinXmlToken _get_XSD_KATMAI_DATETIME();
    // Set static field: static public System.Xml.BinXmlToken XSD_KATMAI_DATETIME
    static void _set_XSD_KATMAI_DATETIME(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken XSD_KATMAI_TIME
    static constexpr const int XSD_KATMAI_TIME = 125;
    // Get static field: static public System.Xml.BinXmlToken XSD_KATMAI_TIME
    static ::System::Xml::BinXmlToken _get_XSD_KATMAI_TIME();
    // Set static field: static public System.Xml.BinXmlToken XSD_KATMAI_TIME
    static void _set_XSD_KATMAI_TIME(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken XSD_KATMAI_DATEOFFSET
    static constexpr const int XSD_KATMAI_DATEOFFSET = 124;
    // Get static field: static public System.Xml.BinXmlToken XSD_KATMAI_DATEOFFSET
    static ::System::Xml::BinXmlToken _get_XSD_KATMAI_DATEOFFSET();
    // Set static field: static public System.Xml.BinXmlToken XSD_KATMAI_DATEOFFSET
    static void _set_XSD_KATMAI_DATEOFFSET(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken XSD_KATMAI_DATETIMEOFFSET
    static constexpr const int XSD_KATMAI_DATETIMEOFFSET = 123;
    // Get static field: static public System.Xml.BinXmlToken XSD_KATMAI_DATETIMEOFFSET
    static ::System::Xml::BinXmlToken _get_XSD_KATMAI_DATETIMEOFFSET();
    // Set static field: static public System.Xml.BinXmlToken XSD_KATMAI_DATETIMEOFFSET
    static void _set_XSD_KATMAI_DATETIMEOFFSET(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken XSD_KATMAI_TIMEOFFSET
    static constexpr const int XSD_KATMAI_TIMEOFFSET = 122;
    // Get static field: static public System.Xml.BinXmlToken XSD_KATMAI_TIMEOFFSET
    static ::System::Xml::BinXmlToken _get_XSD_KATMAI_TIMEOFFSET();
    // Set static field: static public System.Xml.BinXmlToken XSD_KATMAI_TIMEOFFSET
    static void _set_XSD_KATMAI_TIMEOFFSET(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken XSD_BOOLEAN
    static constexpr const int XSD_BOOLEAN = 134;
    // Get static field: static public System.Xml.BinXmlToken XSD_BOOLEAN
    static ::System::Xml::BinXmlToken _get_XSD_BOOLEAN();
    // Set static field: static public System.Xml.BinXmlToken XSD_BOOLEAN
    static void _set_XSD_BOOLEAN(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken XSD_TIME
    static constexpr const int XSD_TIME = 129;
    // Get static field: static public System.Xml.BinXmlToken XSD_TIME
    static ::System::Xml::BinXmlToken _get_XSD_TIME();
    // Set static field: static public System.Xml.BinXmlToken XSD_TIME
    static void _set_XSD_TIME(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken XSD_DATETIME
    static constexpr const int XSD_DATETIME = 130;
    // Get static field: static public System.Xml.BinXmlToken XSD_DATETIME
    static ::System::Xml::BinXmlToken _get_XSD_DATETIME();
    // Set static field: static public System.Xml.BinXmlToken XSD_DATETIME
    static void _set_XSD_DATETIME(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken XSD_DATE
    static constexpr const int XSD_DATE = 131;
    // Get static field: static public System.Xml.BinXmlToken XSD_DATE
    static ::System::Xml::BinXmlToken _get_XSD_DATE();
    // Set static field: static public System.Xml.BinXmlToken XSD_DATE
    static void _set_XSD_DATE(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken XSD_BINHEX
    static constexpr const int XSD_BINHEX = 132;
    // Get static field: static public System.Xml.BinXmlToken XSD_BINHEX
    static ::System::Xml::BinXmlToken _get_XSD_BINHEX();
    // Set static field: static public System.Xml.BinXmlToken XSD_BINHEX
    static void _set_XSD_BINHEX(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken XSD_BASE64
    static constexpr const int XSD_BASE64 = 133;
    // Get static field: static public System.Xml.BinXmlToken XSD_BASE64
    static ::System::Xml::BinXmlToken _get_XSD_BASE64();
    // Set static field: static public System.Xml.BinXmlToken XSD_BASE64
    static void _set_XSD_BASE64(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken XSD_DECIMAL
    static constexpr const int XSD_DECIMAL = 135;
    // Get static field: static public System.Xml.BinXmlToken XSD_DECIMAL
    static ::System::Xml::BinXmlToken _get_XSD_DECIMAL();
    // Set static field: static public System.Xml.BinXmlToken XSD_DECIMAL
    static void _set_XSD_DECIMAL(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken XSD_BYTE
    static constexpr const int XSD_BYTE = 136;
    // Get static field: static public System.Xml.BinXmlToken XSD_BYTE
    static ::System::Xml::BinXmlToken _get_XSD_BYTE();
    // Set static field: static public System.Xml.BinXmlToken XSD_BYTE
    static void _set_XSD_BYTE(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken XSD_UNSIGNEDSHORT
    static constexpr const int XSD_UNSIGNEDSHORT = 137;
    // Get static field: static public System.Xml.BinXmlToken XSD_UNSIGNEDSHORT
    static ::System::Xml::BinXmlToken _get_XSD_UNSIGNEDSHORT();
    // Set static field: static public System.Xml.BinXmlToken XSD_UNSIGNEDSHORT
    static void _set_XSD_UNSIGNEDSHORT(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken XSD_UNSIGNEDINT
    static constexpr const int XSD_UNSIGNEDINT = 138;
    // Get static field: static public System.Xml.BinXmlToken XSD_UNSIGNEDINT
    static ::System::Xml::BinXmlToken _get_XSD_UNSIGNEDINT();
    // Set static field: static public System.Xml.BinXmlToken XSD_UNSIGNEDINT
    static void _set_XSD_UNSIGNEDINT(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken XSD_UNSIGNEDLONG
    static constexpr const int XSD_UNSIGNEDLONG = 139;
    // Get static field: static public System.Xml.BinXmlToken XSD_UNSIGNEDLONG
    static ::System::Xml::BinXmlToken _get_XSD_UNSIGNEDLONG();
    // Set static field: static public System.Xml.BinXmlToken XSD_UNSIGNEDLONG
    static void _set_XSD_UNSIGNEDLONG(::System::Xml::BinXmlToken value);
    // static field const value: static public System.Xml.BinXmlToken XSD_QNAME
    static constexpr const int XSD_QNAME = 140;
    // Get static field: static public System.Xml.BinXmlToken XSD_QNAME
    static ::System::Xml::BinXmlToken _get_XSD_QNAME();
    // Set static field: static public System.Xml.BinXmlToken XSD_QNAME
    static void _set_XSD_QNAME(::System::Xml::BinXmlToken value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Xml.BinXmlToken
  #pragma pack(pop)
  static check_size<sizeof(BinXmlToken), 0 + sizeof(int)> __System_Xml_BinXmlTokenSizeCheck;
  static_assert(sizeof(BinXmlToken) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
