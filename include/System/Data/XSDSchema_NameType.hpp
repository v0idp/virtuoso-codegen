// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Data.XSDSchema
#include "System/Data/XSDSchema.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
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
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::XSDSchema::NameType);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::XSDSchema::NameType*, "System.Data", "XSDSchema/NameType");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.XSDSchema/System.Data.NameType
  // [TokenAttribute] Offset: FFFFFFFF
  class XSDSchema::NameType : public ::Il2CppObject/*, public ::System::IComparable*/ {
    public:
    public:
    // public readonly System.String name
    // Size: 0x8
    // Offset: 0x10
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.Type type
    // Size: 0x8
    // Offset: 0x18
    ::System::Type* type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IComparable
    operator ::System::IComparable() noexcept {
      return *reinterpret_cast<::System::IComparable*>(this);
    }
    // Get instance field reference: public readonly System.String name
    [[deprecated]] ::StringW& dyn_name();
    // Get instance field reference: public readonly System.Type type
    [[deprecated]] ::System::Type*& dyn_type();
    // public System.Void .ctor(System.String n, System.Type t)
    // Offset: 0x18CE5F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XSDSchema::NameType* New_ctor(::StringW n, ::System::Type* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::XSDSchema::NameType::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XSDSchema::NameType*, creationType>(n, t)));
    }
    // public System.Int32 CompareTo(System.Object obj)
    // Offset: 0x18CE628
    int CompareTo(::Il2CppObject* obj);
  }; // System.Data.XSDSchema/System.Data.NameType
  #pragma pack(pop)
  static check_size<sizeof(XSDSchema::NameType), 24 + sizeof(::System::Type*)> __System_Data_XSDSchema_NameTypeSizeCheck;
  static_assert(sizeof(XSDSchema::NameType) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::XSDSchema::NameType::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::XSDSchema::NameType::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::XSDSchema::NameType::*)(::Il2CppObject*)>(&System::Data::XSDSchema::NameType::CompareTo)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::XSDSchema::NameType*), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
