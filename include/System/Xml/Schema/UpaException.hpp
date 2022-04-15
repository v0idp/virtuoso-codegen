// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: UpaException
  class UpaException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::UpaException);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::UpaException*, "System.Xml.Schema", "UpaException");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.UpaException
  // [TokenAttribute] Offset: FFFFFFFF
  class UpaException : public ::System::Exception {
    public:
    public:
    // private System.Object particle1
    // Size: 0x8
    // Offset: 0x88
    ::Il2CppObject* particle1;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Object particle2
    // Size: 0x8
    // Offset: 0x90
    ::Il2CppObject* particle2;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Get instance field reference: private System.Object particle1
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_particle1();
    // Get instance field reference: private System.Object particle2
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_particle2();
    // public System.Object get_Particle1()
    // Offset: 0xF7897C
    ::Il2CppObject* get_Particle1();
    // public System.Object get_Particle2()
    // Offset: 0xF78984
    ::Il2CppObject* get_Particle2();
    // public System.Void .ctor(System.Object particle1, System.Object particle2)
    // Offset: 0xF78900
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UpaException* New_ctor(::Il2CppObject* particle1, ::Il2CppObject* particle2) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::UpaException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UpaException*, creationType>(particle1, particle2)));
    }
  }; // System.Xml.Schema.UpaException
  #pragma pack(pop)
  static check_size<sizeof(UpaException), 144 + sizeof(::Il2CppObject*)> __System_Xml_Schema_UpaExceptionSizeCheck;
  static_assert(sizeof(UpaException) == 0x98);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::UpaException::get_Particle1
// Il2CppName: get_Particle1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::UpaException::*)()>(&System::Xml::Schema::UpaException::get_Particle1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::UpaException*), "get_Particle1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::UpaException::get_Particle2
// Il2CppName: get_Particle2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::UpaException::*)()>(&System::Xml::Schema::UpaException::get_Particle2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::UpaException*), "get_Particle2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::UpaException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
