// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Reflection.RtFieldInfo
#include "System/Reflection/RtFieldInfo.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.RuntimeFieldHandle
#include "System/RuntimeFieldHandle.hpp"
// Including type: System.Reflection.FieldAttributes
#include "System/Reflection/FieldAttributes.hpp"
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
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: Binder
  class Binder;
  // Forward declaring type: CustomAttributeData
  class CustomAttributeData;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: MonoField
  class MonoField;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::MonoField);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::MonoField*, "System.Reflection", "MonoField");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x34
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Reflection.MonoField
  // [TokenAttribute] Offset: FFFFFFFF
  class MonoField : public ::System::Reflection::RtFieldInfo {
    public:
    public:
    // System.IntPtr klass
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr klass;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // System.RuntimeFieldHandle fhandle
    // Size: 0x8
    // Offset: 0x18
    ::System::RuntimeFieldHandle fhandle;
    // Field size check
    static_assert(sizeof(::System::RuntimeFieldHandle) == 0x8);
    // private System.String name
    // Size: 0x8
    // Offset: 0x20
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Type type
    // Size: 0x8
    // Offset: 0x28
    ::System::Type* type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private System.Reflection.FieldAttributes attrs
    // Size: 0x4
    // Offset: 0x30
    ::System::Reflection::FieldAttributes attrs;
    // Field size check
    static_assert(sizeof(::System::Reflection::FieldAttributes) == 0x4);
    public:
    // Get instance field reference: System.IntPtr klass
    [[deprecated]] ::System::IntPtr& dyn_klass();
    // Get instance field reference: System.RuntimeFieldHandle fhandle
    [[deprecated]] ::System::RuntimeFieldHandle& dyn_fhandle();
    // Get instance field reference: private System.String name
    [[deprecated]] ::StringW& dyn_name();
    // Get instance field reference: private System.Type type
    [[deprecated]] ::System::Type*& dyn_type();
    // Get instance field reference: private System.Reflection.FieldAttributes attrs
    [[deprecated]] ::System::Reflection::FieldAttributes& dyn_attrs();
    // private System.Type ResolveType()
    // Offset: 0x100B0C8
    ::System::Type* ResolveType();
    // private System.Type GetParentType(System.Boolean declaring)
    // Offset: 0x100B154
    ::System::Type* GetParentType(bool declaring);
    // private System.Object GetValueInternal(System.Object obj)
    // Offset: 0x100B2D8
    ::Il2CppObject* GetValueInternal(::Il2CppObject* obj);
    // static private System.Void SetValueInternal(System.Reflection.FieldInfo fi, System.Object obj, System.Object value)
    // Offset: 0x100B564
    static void SetValueInternal(::System::Reflection::FieldInfo* fi, ::Il2CppObject* obj, ::Il2CppObject* value);
    // private System.Void CheckGeneric()
    // Offset: 0x100B470
    void CheckGeneric();
    // public override System.Reflection.FieldAttributes get_Attributes()
    // Offset: 0x100B0B8
    // Implemented from: System.Reflection.FieldInfo
    // Base method: System.Reflection.FieldAttributes FieldInfo::get_Attributes()
    ::System::Reflection::FieldAttributes get_Attributes();
    // public override System.RuntimeFieldHandle get_FieldHandle()
    // Offset: 0x100B0C0
    // Implemented from: System.Reflection.FieldInfo
    // Base method: System.RuntimeFieldHandle FieldInfo::get_FieldHandle()
    ::System::RuntimeFieldHandle get_FieldHandle();
    // public override System.Type get_FieldType()
    // Offset: 0x100B0CC
    // Implemented from: System.Reflection.FieldInfo
    // Base method: System.Type FieldInfo::get_FieldType()
    ::System::Type* get_FieldType();
    // public override System.Type get_ReflectedType()
    // Offset: 0x100B15C
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Type MemberInfo::get_ReflectedType()
    ::System::Type* get_ReflectedType();
    // public override System.Type get_DeclaringType()
    // Offset: 0x100B164
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Type MemberInfo::get_DeclaringType()
    ::System::Type* get_DeclaringType();
    // public override System.String get_Name()
    // Offset: 0x100B16C
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.String MemberInfo::get_Name()
    ::StringW get_Name();
    // public System.Void .ctor()
    // Offset: 0x100B834
    // Implemented from: System.Reflection.RtFieldInfo
    // Base method: System.Void RtFieldInfo::.ctor()
    // Base method: System.Void RuntimeFieldInfo::.ctor()
    // Base method: System.Void FieldInfo::.ctor()
    // Base method: System.Void MemberInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoField* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::MonoField::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoField*, creationType>()));
    }
    // public override System.Boolean IsDefined(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x100B174
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Boolean MemberInfo::IsDefined(System.Type attributeType, System.Boolean inherit)
    bool IsDefined(::System::Type* attributeType, bool inherit);
    // public override System.Object[] GetCustomAttributes(System.Boolean inherit)
    // Offset: 0x100B1EC
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes(System.Boolean inherit)
    ::ArrayW<::Il2CppObject*> GetCustomAttributes(bool inherit);
    // public override System.Object[] GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x100B25C
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    ::ArrayW<::Il2CppObject*> GetCustomAttributes(::System::Type* attributeType, bool inherit);
    // override System.Int32 GetFieldOffset()
    // Offset: 0x100B2D4
    // Implemented from: System.Reflection.FieldInfo
    // Base method: System.Int32 FieldInfo::GetFieldOffset()
    int GetFieldOffset();
    // public override System.Object GetValue(System.Object obj)
    // Offset: 0x100B2DC
    // Implemented from: System.Reflection.FieldInfo
    // Base method: System.Object FieldInfo::GetValue(System.Object obj)
    ::Il2CppObject* GetValue(::Il2CppObject* obj);
    // public override System.String ToString()
    // Offset: 0x100B4F8
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
    // public override System.Void SetValue(System.Object obj, System.Object val, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Globalization.CultureInfo culture)
    // Offset: 0x100B568
    // Implemented from: System.Reflection.FieldInfo
    // Base method: System.Void FieldInfo::SetValue(System.Object obj, System.Object val, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Globalization.CultureInfo culture)
    void SetValue(::Il2CppObject* obj, ::Il2CppObject* val, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::System::Globalization::CultureInfo* culture);
    // public override System.Object GetRawConstantValue()
    // Offset: 0x100B828
    // Implemented from: System.Reflection.FieldInfo
    // Base method: System.Object FieldInfo::GetRawConstantValue()
    ::Il2CppObject* GetRawConstantValue();
    // public override System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> GetCustomAttributesData()
    // Offset: 0x100B82C
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> MemberInfo::GetCustomAttributesData()
    ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributesData();
  }; // System.Reflection.MonoField
  #pragma pack(pop)
  static check_size<sizeof(MonoField), 48 + sizeof(::System::Reflection::FieldAttributes)> __System_Reflection_MonoFieldSizeCheck;
  static_assert(sizeof(MonoField) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::MonoField::ResolveType
// Il2CppName: ResolveType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Reflection::MonoField::*)()>(&System::Reflection::MonoField::ResolveType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoField*), "ResolveType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoField::GetParentType
// Il2CppName: GetParentType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Reflection::MonoField::*)(bool)>(&System::Reflection::MonoField::GetParentType)> {
  static const MethodInfo* get() {
    static auto* declaring = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoField*), "GetParentType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{declaring});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoField::GetValueInternal
// Il2CppName: GetValueInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Reflection::MonoField::*)(::Il2CppObject*)>(&System::Reflection::MonoField::GetValueInternal)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoField*), "GetValueInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoField::SetValueInternal
// Il2CppName: SetValueInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Reflection::FieldInfo*, ::Il2CppObject*, ::Il2CppObject*)>(&System::Reflection::MonoField::SetValueInternal)> {
  static const MethodInfo* get() {
    static auto* fi = &::il2cpp_utils::GetClassFromName("System.Reflection", "FieldInfo")->byval_arg;
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoField*), "SetValueInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fi, obj, value});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoField::CheckGeneric
// Il2CppName: CheckGeneric
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::MonoField::*)()>(&System::Reflection::MonoField::CheckGeneric)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoField*), "CheckGeneric", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoField::get_Attributes
// Il2CppName: get_Attributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::FieldAttributes (System::Reflection::MonoField::*)()>(&System::Reflection::MonoField::get_Attributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoField*), "get_Attributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoField::get_FieldHandle
// Il2CppName: get_FieldHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::RuntimeFieldHandle (System::Reflection::MonoField::*)()>(&System::Reflection::MonoField::get_FieldHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoField*), "get_FieldHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoField::get_FieldType
// Il2CppName: get_FieldType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Reflection::MonoField::*)()>(&System::Reflection::MonoField::get_FieldType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoField*), "get_FieldType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoField::get_ReflectedType
// Il2CppName: get_ReflectedType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Reflection::MonoField::*)()>(&System::Reflection::MonoField::get_ReflectedType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoField*), "get_ReflectedType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoField::get_DeclaringType
// Il2CppName: get_DeclaringType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Reflection::MonoField::*)()>(&System::Reflection::MonoField::get_DeclaringType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoField*), "get_DeclaringType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoField::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Reflection::MonoField::*)()>(&System::Reflection::MonoField::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoField*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoField::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::MonoField::IsDefined
// Il2CppName: IsDefined
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::MonoField::*)(::System::Type*, bool)>(&System::Reflection::MonoField::IsDefined)> {
  static const MethodInfo* get() {
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoField*), "IsDefined", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributeType, inherit});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoField::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (System::Reflection::MonoField::*)(bool)>(&System::Reflection::MonoField::GetCustomAttributes)> {
  static const MethodInfo* get() {
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoField*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inherit});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoField::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (System::Reflection::MonoField::*)(::System::Type*, bool)>(&System::Reflection::MonoField::GetCustomAttributes)> {
  static const MethodInfo* get() {
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoField*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributeType, inherit});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoField::GetFieldOffset
// Il2CppName: GetFieldOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Reflection::MonoField::*)()>(&System::Reflection::MonoField::GetFieldOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoField*), "GetFieldOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoField::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Reflection::MonoField::*)(::Il2CppObject*)>(&System::Reflection::MonoField::GetValue)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoField*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoField::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Reflection::MonoField::*)()>(&System::Reflection::MonoField::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoField*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoField::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::MonoField::*)(::Il2CppObject*, ::Il2CppObject*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Globalization::CultureInfo*)>(&System::Reflection::MonoField::SetValue)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* invokeAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    static auto* binder = &::il2cpp_utils::GetClassFromName("System.Reflection", "Binder")->byval_arg;
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoField*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, val, invokeAttr, binder, culture});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoField::GetRawConstantValue
// Il2CppName: GetRawConstantValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Reflection::MonoField::*)()>(&System::Reflection::MonoField::GetRawConstantValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoField*), "GetRawConstantValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoField::GetCustomAttributesData
// Il2CppName: GetCustomAttributesData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* (System::Reflection::MonoField::*)()>(&System::Reflection::MonoField::GetCustomAttributesData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoField*), "GetCustomAttributesData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
