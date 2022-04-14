// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.ComponentModel.RefreshProperties
#include "System/ComponentModel/RefreshProperties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: RefreshPropertiesAttribute
  class RefreshPropertiesAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::RefreshPropertiesAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::RefreshPropertiesAttribute*, "System.ComponentModel", "RefreshPropertiesAttribute");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.RefreshPropertiesAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 69D054
  class RefreshPropertiesAttribute : public ::System::Attribute {
    public:
    public:
    // private System.ComponentModel.RefreshProperties refresh
    // Size: 0x4
    // Offset: 0x10
    ::System::ComponentModel::RefreshProperties refresh;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::RefreshProperties) == 0x4);
    public:
    // Creating conversion operator: operator ::System::ComponentModel::RefreshProperties
    constexpr operator ::System::ComponentModel::RefreshProperties() const noexcept {
      return refresh;
    }
    // Get static field: static public readonly System.ComponentModel.RefreshPropertiesAttribute All
    static ::System::ComponentModel::RefreshPropertiesAttribute* _get_All();
    // Set static field: static public readonly System.ComponentModel.RefreshPropertiesAttribute All
    static void _set_All(::System::ComponentModel::RefreshPropertiesAttribute* value);
    // Get static field: static public readonly System.ComponentModel.RefreshPropertiesAttribute Repaint
    static ::System::ComponentModel::RefreshPropertiesAttribute* _get_Repaint();
    // Set static field: static public readonly System.ComponentModel.RefreshPropertiesAttribute Repaint
    static void _set_Repaint(::System::ComponentModel::RefreshPropertiesAttribute* value);
    // Get static field: static public readonly System.ComponentModel.RefreshPropertiesAttribute Default
    static ::System::ComponentModel::RefreshPropertiesAttribute* _get_Default();
    // Set static field: static public readonly System.ComponentModel.RefreshPropertiesAttribute Default
    static void _set_Default(::System::ComponentModel::RefreshPropertiesAttribute* value);
    // Get instance field reference: private System.ComponentModel.RefreshProperties refresh
    [[deprecated]] ::System::ComponentModel::RefreshProperties& dyn_refresh();
    // public System.ComponentModel.RefreshProperties get_RefreshProperties()
    // Offset: 0x1417E78
    ::System::ComponentModel::RefreshProperties get_RefreshProperties();
    // public System.Void .ctor(System.ComponentModel.RefreshProperties refresh)
    // Offset: 0x1417E4C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RefreshPropertiesAttribute* New_ctor(::System::ComponentModel::RefreshProperties refresh) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::RefreshPropertiesAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RefreshPropertiesAttribute*, creationType>(refresh)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1417F78
    static void _cctor();
    // public override System.Boolean Equals(System.Object value)
    // Offset: 0x1417E80
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::Equals(System.Object value)
    bool Equals(::Il2CppObject* value);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1417EFC
    // Implemented from: System.Attribute
    // Base method: System.Int32 Attribute::GetHashCode()
    int GetHashCode();
    // public override System.Boolean IsDefaultAttribute()
    // Offset: 0x1417F04
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::IsDefaultAttribute()
    bool IsDefaultAttribute();
  }; // System.ComponentModel.RefreshPropertiesAttribute
  #pragma pack(pop)
  static check_size<sizeof(RefreshPropertiesAttribute), 16 + sizeof(::System::ComponentModel::RefreshProperties)> __System_ComponentModel_RefreshPropertiesAttributeSizeCheck;
  static_assert(sizeof(RefreshPropertiesAttribute) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::RefreshPropertiesAttribute::get_RefreshProperties
// Il2CppName: get_RefreshProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::RefreshProperties (System::ComponentModel::RefreshPropertiesAttribute::*)()>(&System::ComponentModel::RefreshPropertiesAttribute::get_RefreshProperties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::RefreshPropertiesAttribute*), "get_RefreshProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::RefreshPropertiesAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::RefreshPropertiesAttribute::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::ComponentModel::RefreshPropertiesAttribute::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::RefreshPropertiesAttribute*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::RefreshPropertiesAttribute::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::RefreshPropertiesAttribute::*)(::Il2CppObject*)>(&System::ComponentModel::RefreshPropertiesAttribute::Equals)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::RefreshPropertiesAttribute*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::RefreshPropertiesAttribute::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::RefreshPropertiesAttribute::*)()>(&System::ComponentModel::RefreshPropertiesAttribute::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::RefreshPropertiesAttribute*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::RefreshPropertiesAttribute::IsDefaultAttribute
// Il2CppName: IsDefaultAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::RefreshPropertiesAttribute::*)()>(&System::ComponentModel::RefreshPropertiesAttribute::IsDefaultAttribute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::RefreshPropertiesAttribute*), "IsDefaultAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};