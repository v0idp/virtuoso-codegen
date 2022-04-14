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
  // Forward declaring type: DesignTimeVisibleAttribute
  class DesignTimeVisibleAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::DesignTimeVisibleAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DesignTimeVisibleAttribute*, "System.ComponentModel", "DesignTimeVisibleAttribute");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.DesignTimeVisibleAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 69CAC8
  class DesignTimeVisibleAttribute : public ::System::Attribute {
    public:
    public:
    // private System.Boolean visible
    // Size: 0x1
    // Offset: 0x10
    bool visible;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return visible;
    }
    // Get static field: static public readonly System.ComponentModel.DesignTimeVisibleAttribute Yes
    static ::System::ComponentModel::DesignTimeVisibleAttribute* _get_Yes();
    // Set static field: static public readonly System.ComponentModel.DesignTimeVisibleAttribute Yes
    static void _set_Yes(::System::ComponentModel::DesignTimeVisibleAttribute* value);
    // Get static field: static public readonly System.ComponentModel.DesignTimeVisibleAttribute No
    static ::System::ComponentModel::DesignTimeVisibleAttribute* _get_No();
    // Set static field: static public readonly System.ComponentModel.DesignTimeVisibleAttribute No
    static void _set_No(::System::ComponentModel::DesignTimeVisibleAttribute* value);
    // Get static field: static public readonly System.ComponentModel.DesignTimeVisibleAttribute Default
    static ::System::ComponentModel::DesignTimeVisibleAttribute* _get_Default();
    // Set static field: static public readonly System.ComponentModel.DesignTimeVisibleAttribute Default
    static void _set_Default(::System::ComponentModel::DesignTimeVisibleAttribute* value);
    // Get instance field reference: private System.Boolean visible
    [[deprecated]] bool& dyn_visible();
    // public System.Boolean get_Visible()
    // Offset: 0xEF8424
    bool get_Visible();
    // public System.Void .ctor(System.Boolean visible)
    // Offset: 0xEF83F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DesignTimeVisibleAttribute* New_ctor(bool visible) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::DesignTimeVisibleAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DesignTimeVisibleAttribute*, creationType>(visible)));
    }
    // static private System.Void .cctor()
    // Offset: 0xEF85FC
    static void _cctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xEF842C
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xEF84D0
    // Implemented from: System.Attribute
    // Base method: System.Int32 Attribute::GetHashCode()
    int GetHashCode();
    // public override System.Boolean IsDefaultAttribute()
    // Offset: 0xEF8570
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::IsDefaultAttribute()
    bool IsDefaultAttribute();
  }; // System.ComponentModel.DesignTimeVisibleAttribute
  #pragma pack(pop)
  static check_size<sizeof(DesignTimeVisibleAttribute), 16 + sizeof(bool)> __System_ComponentModel_DesignTimeVisibleAttributeSizeCheck;
  static_assert(sizeof(DesignTimeVisibleAttribute) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::DesignTimeVisibleAttribute::get_Visible
// Il2CppName: get_Visible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::DesignTimeVisibleAttribute::*)()>(&System::ComponentModel::DesignTimeVisibleAttribute::get_Visible)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DesignTimeVisibleAttribute*), "get_Visible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DesignTimeVisibleAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::DesignTimeVisibleAttribute::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::ComponentModel::DesignTimeVisibleAttribute::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DesignTimeVisibleAttribute*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DesignTimeVisibleAttribute::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::DesignTimeVisibleAttribute::*)(::Il2CppObject*)>(&System::ComponentModel::DesignTimeVisibleAttribute::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DesignTimeVisibleAttribute*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DesignTimeVisibleAttribute::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::DesignTimeVisibleAttribute::*)()>(&System::ComponentModel::DesignTimeVisibleAttribute::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DesignTimeVisibleAttribute*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DesignTimeVisibleAttribute::IsDefaultAttribute
// Il2CppName: IsDefaultAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::DesignTimeVisibleAttribute::*)()>(&System::ComponentModel::DesignTimeVisibleAttribute::IsDefaultAttribute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DesignTimeVisibleAttribute*), "IsDefaultAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};