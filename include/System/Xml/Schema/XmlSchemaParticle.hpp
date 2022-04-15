// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.XmlSchemaAnnotated
#include "System/Xml/Schema/XmlSchemaAnnotated.hpp"
// Including type: System.Decimal
#include "System/Decimal.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlQualifiedName
  class XmlQualifiedName;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaParticle
  class XmlSchemaParticle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaParticle);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaParticle*, "System.Xml.Schema", "XmlSchemaParticle");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x74
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlSchemaParticle
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlSchemaParticle : public ::System::Xml::Schema::XmlSchemaAnnotated {
    public:
    // Nested type: ::System::Xml::Schema::XmlSchemaParticle::Occurs
    struct Occurs;
    // Nested type: ::System::Xml::Schema::XmlSchemaParticle::EmptyParticle
    class EmptyParticle;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: System.Xml.Schema.XmlSchemaParticle/System.Xml.Schema.Occurs
    // [TokenAttribute] Offset: FFFFFFFF
    // [FlagsAttribute] Offset: FFFFFFFF
    struct Occurs/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Occurs
      constexpr Occurs(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public System.Xml.Schema.XmlSchemaParticle/System.Xml.Schema.Occurs None
      static constexpr const int None = 0;
      // Get static field: static public System.Xml.Schema.XmlSchemaParticle/System.Xml.Schema.Occurs None
      static ::System::Xml::Schema::XmlSchemaParticle::Occurs _get_None();
      // Set static field: static public System.Xml.Schema.XmlSchemaParticle/System.Xml.Schema.Occurs None
      static void _set_None(::System::Xml::Schema::XmlSchemaParticle::Occurs value);
      // static field const value: static public System.Xml.Schema.XmlSchemaParticle/System.Xml.Schema.Occurs Min
      static constexpr const int Min = 1;
      // Get static field: static public System.Xml.Schema.XmlSchemaParticle/System.Xml.Schema.Occurs Min
      static ::System::Xml::Schema::XmlSchemaParticle::Occurs _get_Min();
      // Set static field: static public System.Xml.Schema.XmlSchemaParticle/System.Xml.Schema.Occurs Min
      static void _set_Min(::System::Xml::Schema::XmlSchemaParticle::Occurs value);
      // static field const value: static public System.Xml.Schema.XmlSchemaParticle/System.Xml.Schema.Occurs Max
      static constexpr const int Max = 2;
      // Get static field: static public System.Xml.Schema.XmlSchemaParticle/System.Xml.Schema.Occurs Max
      static ::System::Xml::Schema::XmlSchemaParticle::Occurs _get_Max();
      // Set static field: static public System.Xml.Schema.XmlSchemaParticle/System.Xml.Schema.Occurs Max
      static void _set_Max(::System::Xml::Schema::XmlSchemaParticle::Occurs value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // System.Xml.Schema.XmlSchemaParticle/System.Xml.Schema.Occurs
    #pragma pack(pop)
    static check_size<sizeof(XmlSchemaParticle::Occurs), 0 + sizeof(int)> __System_Xml_Schema_XmlSchemaParticle_OccursSizeCheck;
    static_assert(sizeof(XmlSchemaParticle::Occurs) == 0x4);
    public:
    // private System.Decimal minOccurs
    // Size: 0x10
    // Offset: 0x50
    ::System::Decimal minOccurs;
    // Field size check
    static_assert(sizeof(::System::Decimal) == 0x10);
    // private System.Decimal maxOccurs
    // Size: 0x10
    // Offset: 0x60
    ::System::Decimal maxOccurs;
    // Field size check
    static_assert(sizeof(::System::Decimal) == 0x10);
    // private System.Xml.Schema.XmlSchemaParticle/System.Xml.Schema.Occurs flags
    // Size: 0x4
    // Offset: 0x70
    ::System::Xml::Schema::XmlSchemaParticle::Occurs flags;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XmlSchemaParticle::Occurs) == 0x4);
    public:
    // Get static field: static readonly System.Xml.Schema.XmlSchemaParticle Empty
    static ::System::Xml::Schema::XmlSchemaParticle* _get_Empty();
    // Set static field: static readonly System.Xml.Schema.XmlSchemaParticle Empty
    static void _set_Empty(::System::Xml::Schema::XmlSchemaParticle* value);
    // Get instance field reference: private System.Decimal minOccurs
    [[deprecated("Use field access instead!")]] ::System::Decimal& dyn_minOccurs();
    // Get instance field reference: private System.Decimal maxOccurs
    [[deprecated("Use field access instead!")]] ::System::Decimal& dyn_maxOccurs();
    // Get instance field reference: private System.Xml.Schema.XmlSchemaParticle/System.Xml.Schema.Occurs flags
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XmlSchemaParticle::Occurs& dyn_flags();
    // public System.String get_MinOccursString()
    // Offset: 0x111A468
    ::StringW get_MinOccursString();
    // public System.Void set_MinOccursString(System.String value)
    // Offset: 0x111A4EC
    void set_MinOccursString(::StringW value);
    // public System.String get_MaxOccursString()
    // Offset: 0x111A660
    ::StringW get_MaxOccursString();
    // public System.Void set_MaxOccursString(System.String value)
    // Offset: 0x111A778
    void set_MaxOccursString(::StringW value);
    // public System.Decimal get_MinOccurs()
    // Offset: 0x111A994
    ::System::Decimal get_MinOccurs();
    // public System.Void set_MinOccurs(System.Decimal value)
    // Offset: 0x110B7AC
    void set_MinOccurs(::System::Decimal value);
    // public System.Decimal get_MaxOccurs()
    // Offset: 0x111A9A0
    ::System::Decimal get_MaxOccurs();
    // public System.Void set_MaxOccurs(System.Decimal value)
    // Offset: 0x110B8E8
    void set_MaxOccurs(::System::Decimal value);
    // System.Boolean get_IsEmpty()
    // Offset: 0x11089A0
    bool get_IsEmpty();
    // System.String get_NameString()
    // Offset: 0x111A9AC
    ::StringW get_NameString();
    // static private System.Void .cctor()
    // Offset: 0x111AB94
    static void _cctor();
    // System.Xml.XmlQualifiedName GetQualifiedName()
    // Offset: 0x111A9F8
    ::System::Xml::XmlQualifiedName* GetQualifiedName();
    // protected System.Void .ctor()
    // Offset: 0x11092D4
    // Implemented from: System.Xml.Schema.XmlSchemaAnnotated
    // Base method: System.Void XmlSchemaAnnotated::.ctor()
    // Base method: System.Void XmlSchemaObject::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaParticle* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlSchemaParticle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaParticle*, creationType>()));
    }
  }; // System.Xml.Schema.XmlSchemaParticle
  #pragma pack(pop)
  static check_size<sizeof(XmlSchemaParticle), 112 + sizeof(::System::Xml::Schema::XmlSchemaParticle::Occurs)> __System_Xml_Schema_XmlSchemaParticleSizeCheck;
  static_assert(sizeof(XmlSchemaParticle) == 0x74);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaParticle::Occurs, "System.Xml.Schema", "XmlSchemaParticle/Occurs");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaParticle::get_MinOccursString
// Il2CppName: get_MinOccursString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::XmlSchemaParticle::*)()>(&System::Xml::Schema::XmlSchemaParticle::get_MinOccursString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaParticle*), "get_MinOccursString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaParticle::set_MinOccursString
// Il2CppName: set_MinOccursString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaParticle::*)(::StringW)>(&System::Xml::Schema::XmlSchemaParticle::set_MinOccursString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaParticle*), "set_MinOccursString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaParticle::get_MaxOccursString
// Il2CppName: get_MaxOccursString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::XmlSchemaParticle::*)()>(&System::Xml::Schema::XmlSchemaParticle::get_MaxOccursString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaParticle*), "get_MaxOccursString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaParticle::set_MaxOccursString
// Il2CppName: set_MaxOccursString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaParticle::*)(::StringW)>(&System::Xml::Schema::XmlSchemaParticle::set_MaxOccursString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaParticle*), "set_MaxOccursString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaParticle::get_MinOccurs
// Il2CppName: get_MinOccurs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (System::Xml::Schema::XmlSchemaParticle::*)()>(&System::Xml::Schema::XmlSchemaParticle::get_MinOccurs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaParticle*), "get_MinOccurs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaParticle::set_MinOccurs
// Il2CppName: set_MinOccurs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaParticle::*)(::System::Decimal)>(&System::Xml::Schema::XmlSchemaParticle::set_MinOccurs)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Decimal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaParticle*), "set_MinOccurs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaParticle::get_MaxOccurs
// Il2CppName: get_MaxOccurs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (System::Xml::Schema::XmlSchemaParticle::*)()>(&System::Xml::Schema::XmlSchemaParticle::get_MaxOccurs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaParticle*), "get_MaxOccurs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaParticle::set_MaxOccurs
// Il2CppName: set_MaxOccurs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaParticle::*)(::System::Decimal)>(&System::Xml::Schema::XmlSchemaParticle::set_MaxOccurs)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Decimal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaParticle*), "set_MaxOccurs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaParticle::get_IsEmpty
// Il2CppName: get_IsEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::XmlSchemaParticle::*)()>(&System::Xml::Schema::XmlSchemaParticle::get_IsEmpty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaParticle*), "get_IsEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaParticle::get_NameString
// Il2CppName: get_NameString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::XmlSchemaParticle::*)()>(&System::Xml::Schema::XmlSchemaParticle::get_NameString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaParticle*), "get_NameString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaParticle::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Xml::Schema::XmlSchemaParticle::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaParticle*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaParticle::GetQualifiedName
// Il2CppName: GetQualifiedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlQualifiedName* (System::Xml::Schema::XmlSchemaParticle::*)()>(&System::Xml::Schema::XmlSchemaParticle::GetQualifiedName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaParticle*), "GetQualifiedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaParticle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
