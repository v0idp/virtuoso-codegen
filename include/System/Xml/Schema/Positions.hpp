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
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: Position
  struct Position;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: Positions
  class Positions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::Positions);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Positions*, "System.Xml.Schema", "Positions");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.Positions
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 6A4798
  class Positions : public ::Il2CppObject {
    public:
    public:
    // private System.Collections.ArrayList positions
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::ArrayList* positions;
    // Field size check
    static_assert(sizeof(::System::Collections::ArrayList*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::ArrayList*
    constexpr operator ::System::Collections::ArrayList*() const noexcept {
      return positions;
    }
    // Get instance field reference: private System.Collections.ArrayList positions
    [[deprecated("Use field access instead!")]] ::System::Collections::ArrayList*& dyn_positions();
    // public System.Xml.Schema.Position get_Item(System.Int32 pos)
    // Offset: 0xAF745C
    ::System::Xml::Schema::Position get_Item(int pos);
    // public System.Int32 get_Count()
    // Offset: 0xAFB950
    int get_Count();
    // public System.Void .ctor()
    // Offset: 0xAFA9F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Positions* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::Positions::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Positions*, creationType>()));
    }
    // public System.Int32 Add(System.Int32 symbol, System.Object particle)
    // Offset: 0xAF6FA4
    int Add(int symbol, ::Il2CppObject* particle);
  }; // System.Xml.Schema.Positions
  #pragma pack(pop)
  static check_size<sizeof(Positions), 16 + sizeof(::System::Collections::ArrayList*)> __System_Xml_Schema_PositionsSizeCheck;
  static_assert(sizeof(Positions) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::Positions::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::Position (System::Xml::Schema::Positions::*)(int)>(&System::Xml::Schema::Positions::get_Item)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Positions*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Positions::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::Positions::*)()>(&System::Xml::Schema::Positions::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Positions*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::Positions::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::Positions::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Schema::Positions::*)(int, ::Il2CppObject*)>(&System::Xml::Schema::Positions::Add)> {
  static const MethodInfo* get() {
    static auto* symbol = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* particle = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::Positions*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{symbol, particle});
  }
};
