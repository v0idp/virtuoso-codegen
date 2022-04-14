// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: DesignOnlyAttribute
  class DesignOnlyAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::DesignOnlyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DesignOnlyAttribute*, "System.ComponentModel", "DesignOnlyAttribute");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.DesignOnlyAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 69CAB4
  class DesignOnlyAttribute : public ::System::Attribute {
    public:
    public:
    // private System.Boolean isDesignOnly
    // Size: 0x1
    // Offset: 0x10
    bool isDesignOnly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return isDesignOnly;
    }
    // Get static field: static public readonly System.ComponentModel.DesignOnlyAttribute Yes
    static ::System::ComponentModel::DesignOnlyAttribute* _get_Yes();
    // Set static field: static public readonly System.ComponentModel.DesignOnlyAttribute Yes
    static void _set_Yes(::System::ComponentModel::DesignOnlyAttribute* value);
    // Get static field: static public readonly System.ComponentModel.DesignOnlyAttribute No
    static ::System::ComponentModel::DesignOnlyAttribute* _get_No();
    // Set static field: static public readonly System.ComponentModel.DesignOnlyAttribute No
    static void _set_No(::System::ComponentModel::DesignOnlyAttribute* value);
    // Get static field: static public readonly System.ComponentModel.DesignOnlyAttribute Default
    static ::System::ComponentModel::DesignOnlyAttribute* _get_Default();
    // Set static field: static public readonly System.ComponentModel.DesignOnlyAttribute Default
    static void _set_Default(::System::ComponentModel::DesignOnlyAttribute* value);
    // Get instance field reference: private System.Boolean isDesignOnly
    [[deprecated]] bool& dyn_isDesignOnly();
    // public System.Boolean get_IsDesignOnly()
    // Offset: 0xEF8218
    bool get_IsDesignOnly();
    // public System.Void .ctor(System.Boolean isDesignOnly)
    // Offset: 0xEF81E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DesignOnlyAttribute* New_ctor(bool isDesignOnly) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::DesignOnlyAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DesignOnlyAttribute*, creationType>(isDesignOnly)));
    }
    // static private System.Void .cctor()
    // Offset: 0xEF835C
    static void _cctor();
    // public override System.Boolean IsDefaultAttribute()
    // Offset: 0xEF8220
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::IsDefaultAttribute()
    bool IsDefaultAttribute();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xEF82AC
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xEF8350
    // Implemented from: System.Attribute
    // Base method: System.Int32 Attribute::GetHashCode()
    int GetHashCode();
  }; // System.ComponentModel.DesignOnlyAttribute
  #pragma pack(pop)
  static check_size<sizeof(DesignOnlyAttribute), 16 + sizeof(bool)> __System_ComponentModel_DesignOnlyAttributeSizeCheck;
  static_assert(sizeof(DesignOnlyAttribute) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::DesignOnlyAttribute::get_IsDesignOnly
// Il2CppName: get_IsDesignOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::DesignOnlyAttribute::*)()>(&System::ComponentModel::DesignOnlyAttribute::get_IsDesignOnly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DesignOnlyAttribute*), "get_IsDesignOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DesignOnlyAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::DesignOnlyAttribute::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::ComponentModel::DesignOnlyAttribute::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DesignOnlyAttribute*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DesignOnlyAttribute::IsDefaultAttribute
// Il2CppName: IsDefaultAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::DesignOnlyAttribute::*)()>(&System::ComponentModel::DesignOnlyAttribute::IsDefaultAttribute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DesignOnlyAttribute*), "IsDefaultAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DesignOnlyAttribute::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::DesignOnlyAttribute::*)(::Il2CppObject*)>(&System::ComponentModel::DesignOnlyAttribute::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DesignOnlyAttribute*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DesignOnlyAttribute::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::DesignOnlyAttribute::*)()>(&System::ComponentModel::DesignOnlyAttribute::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DesignOnlyAttribute*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
