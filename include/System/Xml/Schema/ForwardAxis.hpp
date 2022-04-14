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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: DoubleLinkAxis
  class DoubleLinkAxis;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: ForwardAxis
  class ForwardAxis;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::ForwardAxis);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::ForwardAxis*, "System.Xml.Schema", "ForwardAxis");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x23
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.ForwardAxis
  // [TokenAttribute] Offset: FFFFFFFF
  class ForwardAxis : public ::Il2CppObject {
    public:
    public:
    // private System.Xml.Schema.DoubleLinkAxis topNode
    // Size: 0x8
    // Offset: 0x10
    ::System::Xml::Schema::DoubleLinkAxis* topNode;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::DoubleLinkAxis*) == 0x8);
    // private System.Xml.Schema.DoubleLinkAxis rootNode
    // Size: 0x8
    // Offset: 0x18
    ::System::Xml::Schema::DoubleLinkAxis* rootNode;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::DoubleLinkAxis*) == 0x8);
    // private System.Boolean isAttribute
    // Size: 0x1
    // Offset: 0x20
    bool isAttribute;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean isDss
    // Size: 0x1
    // Offset: 0x21
    bool isDss;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean isSelfAxis
    // Size: 0x1
    // Offset: 0x22
    bool isSelfAxis;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Xml.Schema.DoubleLinkAxis topNode
    [[deprecated]] ::System::Xml::Schema::DoubleLinkAxis*& dyn_topNode();
    // Get instance field reference: private System.Xml.Schema.DoubleLinkAxis rootNode
    [[deprecated]] ::System::Xml::Schema::DoubleLinkAxis*& dyn_rootNode();
    // Get instance field reference: private System.Boolean isAttribute
    [[deprecated]] bool& dyn_isAttribute();
    // Get instance field reference: private System.Boolean isDss
    [[deprecated]] bool& dyn_isDss();
    // Get instance field reference: private System.Boolean isSelfAxis
    [[deprecated]] bool& dyn_isSelfAxis();
    // System.Xml.Schema.DoubleLinkAxis get_RootNode()
    // Offset: 0xAEE884
    ::System::Xml::Schema::DoubleLinkAxis* get_RootNode();
    // System.Xml.Schema.DoubleLinkAxis get_TopNode()
    // Offset: 0xAEE88C
    ::System::Xml::Schema::DoubleLinkAxis* get_TopNode();
    // System.Boolean get_IsAttribute()
    // Offset: 0xAEE894
    bool get_IsAttribute();
    // System.Boolean get_IsDss()
    // Offset: 0xAEE89C
    bool get_IsDss();
    // System.Boolean get_IsSelfAxis()
    // Offset: 0xAEE8A4
    bool get_IsSelfAxis();
    // public System.Void .ctor(System.Xml.Schema.DoubleLinkAxis axis, System.Boolean isdesorself)
    // Offset: 0xAEE8AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ForwardAxis* New_ctor(::System::Xml::Schema::DoubleLinkAxis* axis, bool isdesorself) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::ForwardAxis::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ForwardAxis*, creationType>(axis, isdesorself)));
    }
  }; // System.Xml.Schema.ForwardAxis
  #pragma pack(pop)
  static check_size<sizeof(ForwardAxis), 34 + sizeof(bool)> __System_Xml_Schema_ForwardAxisSizeCheck;
  static_assert(sizeof(ForwardAxis) == 0x23);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::ForwardAxis::get_RootNode
// Il2CppName: get_RootNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::DoubleLinkAxis* (System::Xml::Schema::ForwardAxis::*)()>(&System::Xml::Schema::ForwardAxis::get_RootNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::ForwardAxis*), "get_RootNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::ForwardAxis::get_TopNode
// Il2CppName: get_TopNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::DoubleLinkAxis* (System::Xml::Schema::ForwardAxis::*)()>(&System::Xml::Schema::ForwardAxis::get_TopNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::ForwardAxis*), "get_TopNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::ForwardAxis::get_IsAttribute
// Il2CppName: get_IsAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::ForwardAxis::*)()>(&System::Xml::Schema::ForwardAxis::get_IsAttribute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::ForwardAxis*), "get_IsAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::ForwardAxis::get_IsDss
// Il2CppName: get_IsDss
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::ForwardAxis::*)()>(&System::Xml::Schema::ForwardAxis::get_IsDss)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::ForwardAxis*), "get_IsDss", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::ForwardAxis::get_IsSelfAxis
// Il2CppName: get_IsSelfAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::ForwardAxis::*)()>(&System::Xml::Schema::ForwardAxis::get_IsSelfAxis)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::ForwardAxis*), "get_IsSelfAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::ForwardAxis::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
