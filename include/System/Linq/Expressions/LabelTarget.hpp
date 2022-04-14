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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: LabelTarget
  class LabelTarget;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::LabelTarget);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::LabelTarget*, "System.Linq.Expressions", "LabelTarget");
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.LabelTarget
  // [TokenAttribute] Offset: FFFFFFFF
  class LabelTarget : public ::Il2CppObject {
    public:
    public:
    // private readonly System.String <Name>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.Type <Type>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::System::Type* Type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Get instance field reference: private readonly System.String <Name>k__BackingField
    [[deprecated]] ::StringW& dyn_$Name$k__BackingField();
    // Get instance field reference: private readonly System.Type <Type>k__BackingField
    [[deprecated]] ::System::Type*& dyn_$Type$k__BackingField();
    // public System.String get_Name()
    // Offset: 0xF20E70
    ::StringW get_Name();
    // public System.Type get_Type()
    // Offset: 0xF20E78
    ::System::Type* get_Type();
    // System.Void .ctor(System.Type type, System.String name)
    // Offset: 0xF20E38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LabelTarget* New_ctor(::System::Type* type, ::StringW name) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::LabelTarget::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LabelTarget*, creationType>(type, name)));
    }
    // public override System.String ToString()
    // Offset: 0xF20E80
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Linq.Expressions.LabelTarget
  #pragma pack(pop)
  static check_size<sizeof(LabelTarget), 24 + sizeof(::System::Type*)> __System_Linq_Expressions_LabelTargetSizeCheck;
  static_assert(sizeof(LabelTarget) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::LabelTarget::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Linq::Expressions::LabelTarget::*)()>(&System::Linq::Expressions::LabelTarget::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::LabelTarget*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::LabelTarget::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Linq::Expressions::LabelTarget::*)()>(&System::Linq::Expressions::LabelTarget::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::LabelTarget*), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::LabelTarget::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::LabelTarget::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Linq::Expressions::LabelTarget::*)()>(&System::Linq::Expressions::LabelTarget::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::LabelTarget*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
