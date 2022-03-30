// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Security.X509.X509CertificateCollection
#include "Mono/Security/X509/X509CertificateCollection.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::X509
namespace Mono::Security::X509 {
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::X509::X509CertificateCollection::X509CertificateEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::X509CertificateCollection::X509CertificateEnumerator*, "Mono.Security.X509", "X509CertificateCollection/X509CertificateEnumerator");
// Type namespace: Mono.Security.X509
namespace Mono::Security::X509 {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.X509.X509CertificateCollection/Mono.Security.X509.X509CertificateEnumerator
  // [TokenAttribute] Offset: FFFFFFFF
  class X509CertificateCollection::X509CertificateEnumerator : public ::Il2CppObject/*, public ::System::Collections::IEnumerator*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Collections.IEnumerator enumerator
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::IEnumerator* enumerator;
    // Field size check
    static_assert(sizeof(::System::Collections::IEnumerator*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::IEnumerator
    operator ::System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<::System::Collections::IEnumerator*>(this);
    }
    // Creating conversion operator: operator ::System::Collections::IEnumerator*
    constexpr operator ::System::Collections::IEnumerator*() const noexcept {
      return enumerator;
    }
    // Get instance field reference: private System.Collections.IEnumerator enumerator
    ::System::Collections::IEnumerator*& dyn_enumerator();
    // public Mono.Security.X509.X509Certificate get_Current()
    // Offset: 0x12DFFA0
    ::Mono::Security::X509::X509Certificate* get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x12E009C
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(Mono.Security.X509.X509CertificateCollection mappings)
    // Offset: 0x12DFED8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509CertificateCollection::X509CertificateEnumerator* New_ctor(::Mono::Security::X509::X509CertificateCollection* mappings) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::X509::X509CertificateCollection::X509CertificateEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509CertificateCollection::X509CertificateEnumerator*, creationType>(mappings)));
    }
    // private System.Boolean System.Collections.IEnumerator.MoveNext()
    // Offset: 0x12E014C
    bool System_Collections_IEnumerator_MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x12E01F8
    void System_Collections_IEnumerator_Reset();
    // public System.Boolean MoveNext()
    // Offset: 0x12E02A8
    bool MoveNext();
  }; // Mono.Security.X509.X509CertificateCollection/Mono.Security.X509.X509CertificateEnumerator
  #pragma pack(pop)
  static check_size<sizeof(X509CertificateCollection::X509CertificateEnumerator), 16 + sizeof(::System::Collections::IEnumerator*)> __Mono_Security_X509_X509CertificateCollection_X509CertificateEnumeratorSizeCheck;
  static_assert(sizeof(X509CertificateCollection::X509CertificateEnumerator) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::X509::X509CertificateCollection::X509CertificateEnumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509Certificate* (Mono::Security::X509::X509CertificateCollection::X509CertificateEnumerator::*)()>(&Mono::Security::X509::X509CertificateCollection::X509CertificateEnumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509CertificateCollection::X509CertificateEnumerator*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509CertificateCollection::X509CertificateEnumerator::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Mono::Security::X509::X509CertificateCollection::X509CertificateEnumerator::*)()>(&Mono::Security::X509::X509CertificateCollection::X509CertificateEnumerator::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509CertificateCollection::X509CertificateEnumerator*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509CertificateCollection::X509CertificateEnumerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::X509::X509CertificateCollection::X509CertificateEnumerator::System_Collections_IEnumerator_MoveNext
// Il2CppName: System.Collections.IEnumerator.MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::X509::X509CertificateCollection::X509CertificateEnumerator::*)()>(&Mono::Security::X509::X509CertificateCollection::X509CertificateEnumerator::System_Collections_IEnumerator_MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509CertificateCollection::X509CertificateEnumerator*), "System.Collections.IEnumerator.MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509CertificateCollection::X509CertificateEnumerator::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::X509::X509CertificateCollection::X509CertificateEnumerator::*)()>(&Mono::Security::X509::X509CertificateCollection::X509CertificateEnumerator::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509CertificateCollection::X509CertificateEnumerator*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509CertificateCollection::X509CertificateEnumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::X509::X509CertificateCollection::X509CertificateEnumerator::*)()>(&Mono::Security::X509::X509CertificateCollection::X509CertificateEnumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509CertificateCollection::X509CertificateEnumerator*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
