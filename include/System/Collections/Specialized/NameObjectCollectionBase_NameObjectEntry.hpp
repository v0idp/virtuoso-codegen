// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Specialized.NameObjectCollectionBase
#include "System/Collections/Specialized/NameObjectCollectionBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Collections::Specialized::NameObjectCollectionBase::NameObjectEntry);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::NameObjectCollectionBase::NameObjectEntry*, "System.Collections.Specialized", "NameObjectCollectionBase/NameObjectEntry");
// Type namespace: System.Collections.Specialized
namespace System::Collections::Specialized {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Specialized.NameObjectCollectionBase/System.Collections.Specialized.NameObjectEntry
  // [TokenAttribute] Offset: FFFFFFFF
  class NameObjectCollectionBase::NameObjectEntry : public ::Il2CppObject {
    public:
    public:
    // System.String Key
    // Size: 0x8
    // Offset: 0x10
    ::StringW Key;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.Object Value
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* Value;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Get instance field reference: System.String Key
    [[deprecated]] ::StringW& dyn_Key();
    // Get instance field reference: System.Object Value
    [[deprecated]] ::Il2CppObject*& dyn_Value();
    // System.Void .ctor(System.String name, System.Object value)
    // Offset: 0x9FBBB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NameObjectCollectionBase::NameObjectEntry* New_ctor(::StringW name, ::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Specialized::NameObjectCollectionBase::NameObjectEntry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NameObjectCollectionBase::NameObjectEntry*, creationType>(name, value)));
    }
  }; // System.Collections.Specialized.NameObjectCollectionBase/System.Collections.Specialized.NameObjectEntry
  #pragma pack(pop)
  static check_size<sizeof(NameObjectCollectionBase::NameObjectEntry), 24 + sizeof(::Il2CppObject*)> __System_Collections_Specialized_NameObjectCollectionBase_NameObjectEntrySizeCheck;
  static_assert(sizeof(NameObjectCollectionBase::NameObjectEntry) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::Specialized::NameObjectCollectionBase::NameObjectEntry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
