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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ITypeDescriptorContext
  class ITypeDescriptorContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: TypeConverter
  class TypeConverter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::TypeConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::TypeConverter*, "System.ComponentModel", "TypeConverter");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.TypeConverter
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 69CF84
  class TypeConverter : public ::Il2CppObject {
    public:
    // Nested type: ::System::ComponentModel::TypeConverter::StandardValuesCollection
    class StandardValuesCollection;
    // static field const value: static private System.String s_UseCompatibleTypeConverterBehavior
    static constexpr const char* s_UseCompatibleTypeConverterBehavior = "UseCompatibleTypeConverterBehavior";
    // Get static field: static private System.String s_UseCompatibleTypeConverterBehavior
    static ::StringW _get_s_UseCompatibleTypeConverterBehavior();
    // Set static field: static private System.String s_UseCompatibleTypeConverterBehavior
    static void _set_s_UseCompatibleTypeConverterBehavior(::StringW value);
    // Get static field: static private System.Boolean useCompatibleTypeConversion
    static bool _get_useCompatibleTypeConversion();
    // Set static field: static private System.Boolean useCompatibleTypeConversion
    static void _set_useCompatibleTypeConversion(bool value);
    // public System.Void .ctor()
    // Offset: 0xDA712C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeConverter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::TypeConverter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeConverter*, creationType>()));
    }
    // public System.Boolean CanConvertFrom(System.Type sourceType)
    // Offset: 0xDA9DFC
    bool CanConvertFrom(::System::Type* sourceType);
    // public System.Boolean CanConvertFrom(System.ComponentModel.ITypeDescriptorContext context, System.Type sourceType)
    // Offset: 0xDA6F88
    bool CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType);
    // public System.Boolean CanConvertTo(System.Type destinationType)
    // Offset: 0xDA9E10
    bool CanConvertTo(::System::Type* destinationType);
    // public System.Boolean CanConvertTo(System.ComponentModel.ITypeDescriptorContext context, System.Type destinationType)
    // Offset: 0xDA8B48
    bool CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType);
    // public System.Object ConvertFrom(System.ComponentModel.ITypeDescriptorContext context, System.Globalization.CultureInfo culture, System.Object value)
    // Offset: 0xDA70AC
    ::Il2CppObject* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::Il2CppObject* value);
    // public System.Object ConvertFromString(System.String text)
    // Offset: 0xDA9F4C
    ::Il2CppObject* ConvertFromString(::StringW text);
    // public System.Object ConvertTo(System.ComponentModel.ITypeDescriptorContext context, System.Globalization.CultureInfo culture, System.Object value, System.Type destinationType)
    // Offset: 0xDA9158
    ::Il2CppObject* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::Il2CppObject* value, ::System::Type* destinationType);
    // public System.String ConvertToInvariantString(System.Object value)
    // Offset: 0xDAA0D4
    ::StringW ConvertToInvariantString(::Il2CppObject* value);
    // public System.String ConvertToInvariantString(System.ComponentModel.ITypeDescriptorContext context, System.Object value)
    // Offset: 0xDAA23C
    ::StringW ConvertToInvariantString(::System::ComponentModel::ITypeDescriptorContext* context, ::Il2CppObject* value);
    // public System.String ConvertToString(System.Object value)
    // Offset: 0xDAA2C0
    ::StringW ConvertToString(::Il2CppObject* value);
    // public System.String ConvertToString(System.ComponentModel.ITypeDescriptorContext context, System.Globalization.CultureInfo culture, System.Object value)
    // Offset: 0xDAA154
    ::StringW ConvertToString(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::Il2CppObject* value);
    // protected System.Exception GetConvertFromException(System.Object value)
    // Offset: 0xDA9E24
    ::System::Exception* GetConvertFromException(::Il2CppObject* value);
    // protected System.Exception GetConvertToException(System.Object value, System.Type destinationType)
    // Offset: 0xDA9F64
    ::System::Exception* GetConvertToException(::Il2CppObject* value, ::System::Type* destinationType);
  }; // System.ComponentModel.TypeConverter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::TypeConverter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::TypeConverter::CanConvertFrom
// Il2CppName: CanConvertFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::TypeConverter::*)(::System::Type*)>(&System::ComponentModel::TypeConverter::CanConvertFrom)> {
  static const MethodInfo* get() {
    static auto* sourceType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeConverter*), "CanConvertFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourceType});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeConverter::CanConvertFrom
// Il2CppName: CanConvertFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::TypeConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*)>(&System::ComponentModel::TypeConverter::CanConvertFrom)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    static auto* sourceType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeConverter*), "CanConvertFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, sourceType});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeConverter::CanConvertTo
// Il2CppName: CanConvertTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::TypeConverter::*)(::System::Type*)>(&System::ComponentModel::TypeConverter::CanConvertTo)> {
  static const MethodInfo* get() {
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeConverter*), "CanConvertTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{destinationType});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeConverter::CanConvertTo
// Il2CppName: CanConvertTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::TypeConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*)>(&System::ComponentModel::TypeConverter::CanConvertTo)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeConverter*), "CanConvertTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, destinationType});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeConverter::ConvertFrom
// Il2CppName: ConvertFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::TypeConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::Il2CppObject*)>(&System::ComponentModel::TypeConverter::ConvertFrom)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeConverter*), "ConvertFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, culture, value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeConverter::ConvertFromString
// Il2CppName: ConvertFromString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::TypeConverter::*)(::StringW)>(&System::ComponentModel::TypeConverter::ConvertFromString)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeConverter*), "ConvertFromString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeConverter::ConvertTo
// Il2CppName: ConvertTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::TypeConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::Il2CppObject*, ::System::Type*)>(&System::ComponentModel::TypeConverter::ConvertTo)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeConverter*), "ConvertTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, culture, value, destinationType});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeConverter::ConvertToInvariantString
// Il2CppName: ConvertToInvariantString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::TypeConverter::*)(::Il2CppObject*)>(&System::ComponentModel::TypeConverter::ConvertToInvariantString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeConverter*), "ConvertToInvariantString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeConverter::ConvertToInvariantString
// Il2CppName: ConvertToInvariantString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::TypeConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::Il2CppObject*)>(&System::ComponentModel::TypeConverter::ConvertToInvariantString)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeConverter*), "ConvertToInvariantString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeConverter::ConvertToString
// Il2CppName: ConvertToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::TypeConverter::*)(::Il2CppObject*)>(&System::ComponentModel::TypeConverter::ConvertToString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeConverter*), "ConvertToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeConverter::ConvertToString
// Il2CppName: ConvertToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::TypeConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::Il2CppObject*)>(&System::ComponentModel::TypeConverter::ConvertToString)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeConverter*), "ConvertToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, culture, value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeConverter::GetConvertFromException
// Il2CppName: GetConvertFromException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (System::ComponentModel::TypeConverter::*)(::Il2CppObject*)>(&System::ComponentModel::TypeConverter::GetConvertFromException)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeConverter*), "GetConvertFromException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeConverter::GetConvertToException
// Il2CppName: GetConvertToException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (System::ComponentModel::TypeConverter::*)(::Il2CppObject*, ::System::Type*)>(&System::ComponentModel::TypeConverter::GetConvertToException)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeConverter*), "GetConvertToException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, destinationType});
  }
};
