// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.DSA
#include "System/Security/Cryptography/DSA.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::Cryptography
namespace Mono::Security::Cryptography {
  // Forward declaring type: KeyPairPersistence
  class KeyPairPersistence;
  // Forward declaring type: DSAManaged
  class DSAManaged;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: EventArgs
  class EventArgs;
}
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: DSAParameters
  struct DSAParameters;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: DSACryptoServiceProvider
  class DSACryptoServiceProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::DSACryptoServiceProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::DSACryptoServiceProvider*, "System.Security.Cryptography", "DSACryptoServiceProvider");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.DSACryptoServiceProvider
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 6848CC
  class DSACryptoServiceProvider : public ::System::Security::Cryptography::DSA {
    public:
    public:
    // private Mono.Security.Cryptography.KeyPairPersistence store
    // Size: 0x8
    // Offset: 0x20
    ::Mono::Security::Cryptography::KeyPairPersistence* store;
    // Field size check
    static_assert(sizeof(::Mono::Security::Cryptography::KeyPairPersistence*) == 0x8);
    // private System.Boolean persistKey
    // Size: 0x1
    // Offset: 0x28
    bool persistKey;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean persisted
    // Size: 0x1
    // Offset: 0x29
    bool persisted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean privateKeyExportable
    // Size: 0x1
    // Offset: 0x2A
    bool privateKeyExportable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_disposed
    // Size: 0x1
    // Offset: 0x2B
    bool m_disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_disposed and: dsa
    char __padding4[0x4] = {};
    // private Mono.Security.Cryptography.DSAManaged dsa
    // Size: 0x8
    // Offset: 0x30
    ::Mono::Security::Cryptography::DSAManaged* dsa;
    // Field size check
    static_assert(sizeof(::Mono::Security::Cryptography::DSAManaged*) == 0x8);
    public:
    // Get static field: static private System.Boolean useMachineKeyStore
    static bool _get_useMachineKeyStore();
    // Set static field: static private System.Boolean useMachineKeyStore
    static void _set_useMachineKeyStore(bool value);
    // Get instance field reference: private Mono.Security.Cryptography.KeyPairPersistence store
    [[deprecated]] ::Mono::Security::Cryptography::KeyPairPersistence*& dyn_store();
    // Get instance field reference: private System.Boolean persistKey
    [[deprecated]] bool& dyn_persistKey();
    // Get instance field reference: private System.Boolean persisted
    [[deprecated]] bool& dyn_persisted();
    // Get instance field reference: private System.Boolean privateKeyExportable
    [[deprecated]] bool& dyn_privateKeyExportable();
    // Get instance field reference: private System.Boolean m_disposed
    [[deprecated]] bool& dyn_m_disposed();
    // Get instance field reference: private Mono.Security.Cryptography.DSAManaged dsa
    [[deprecated]] ::Mono::Security::Cryptography::DSAManaged*& dyn_dsa();
    // public System.Boolean get_PublicOnly()
    // Offset: 0xFC7EA4
    bool get_PublicOnly();
    // public System.Void .ctor(System.Int32 dwKeySize)
    // Offset: 0xFC7A28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DSACryptoServiceProvider* New_ctor(int dwKeySize) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::DSACryptoServiceProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DSACryptoServiceProvider*, creationType>(dwKeySize)));
    }
    // private System.Void Common(System.Int32 dwKeySize, System.Boolean parameters)
    // Offset: 0xFC7A64
    void Common(int dwKeySize, bool parameters);
    // private System.Void OnKeyGenerated(System.Object sender, System.EventArgs e)
    // Offset: 0xFC80A8
    void OnKeyGenerated(::Il2CppObject* sender, ::System::EventArgs* e);
    // public override System.Int32 get_KeySize()
    // Offset: 0xFC7E84
    // Implemented from: System.Security.Cryptography.AsymmetricAlgorithm
    // Base method: System.Int32 AsymmetricAlgorithm::get_KeySize()
    int get_KeySize();
    // public System.Void .ctor()
    // Offset: 0xFC6E94
    // Implemented from: System.Security.Cryptography.DSA
    // Base method: System.Void DSA::.ctor()
    // Base method: System.Void AsymmetricAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DSACryptoServiceProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::DSACryptoServiceProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DSACryptoServiceProvider*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0xFC7E10
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public override System.Security.Cryptography.DSAParameters ExportParameters(System.Boolean includePrivateParameters)
    // Offset: 0xFC7F40
    // Implemented from: System.Security.Cryptography.DSA
    // Base method: System.Security.Cryptography.DSAParameters DSA::ExportParameters(System.Boolean includePrivateParameters)
    ::System::Security::Cryptography::DSAParameters ExportParameters(bool includePrivateParameters);
    // public override System.Void ImportParameters(System.Security.Cryptography.DSAParameters parameters)
    // Offset: 0xFC7FF0
    // Implemented from: System.Security.Cryptography.DSA
    // Base method: System.Void DSA::ImportParameters(System.Security.Cryptography.DSAParameters parameters)
    void ImportParameters(::System::Security::Cryptography::DSAParameters parameters);
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0xFC8048
    // Implemented from: System.Security.Cryptography.AsymmetricAlgorithm
    // Base method: System.Void AsymmetricAlgorithm::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
  }; // System.Security.Cryptography.DSACryptoServiceProvider
  #pragma pack(pop)
  static check_size<sizeof(DSACryptoServiceProvider), 48 + sizeof(::Mono::Security::Cryptography::DSAManaged*)> __System_Security_Cryptography_DSACryptoServiceProviderSizeCheck;
  static_assert(sizeof(DSACryptoServiceProvider) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::DSACryptoServiceProvider::get_PublicOnly
// Il2CppName: get_PublicOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::DSACryptoServiceProvider::*)()>(&System::Security::Cryptography::DSACryptoServiceProvider::get_PublicOnly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DSACryptoServiceProvider*), "get_PublicOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::DSACryptoServiceProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::DSACryptoServiceProvider::Common
// Il2CppName: Common
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::DSACryptoServiceProvider::*)(int, bool)>(&System::Security::Cryptography::DSACryptoServiceProvider::Common)> {
  static const MethodInfo* get() {
    static auto* dwKeySize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DSACryptoServiceProvider*), "Common", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dwKeySize, parameters});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::DSACryptoServiceProvider::OnKeyGenerated
// Il2CppName: OnKeyGenerated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::DSACryptoServiceProvider::*)(::Il2CppObject*, ::System::EventArgs*)>(&System::Security::Cryptography::DSACryptoServiceProvider::OnKeyGenerated)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System", "EventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DSACryptoServiceProvider*), "OnKeyGenerated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::DSACryptoServiceProvider::get_KeySize
// Il2CppName: get_KeySize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::DSACryptoServiceProvider::*)()>(&System::Security::Cryptography::DSACryptoServiceProvider::get_KeySize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DSACryptoServiceProvider*), "get_KeySize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::DSACryptoServiceProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::DSACryptoServiceProvider::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::DSACryptoServiceProvider::*)()>(&System::Security::Cryptography::DSACryptoServiceProvider::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DSACryptoServiceProvider*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::DSACryptoServiceProvider::ExportParameters
// Il2CppName: ExportParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::DSAParameters (System::Security::Cryptography::DSACryptoServiceProvider::*)(bool)>(&System::Security::Cryptography::DSACryptoServiceProvider::ExportParameters)> {
  static const MethodInfo* get() {
    static auto* includePrivateParameters = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DSACryptoServiceProvider*), "ExportParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{includePrivateParameters});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::DSACryptoServiceProvider::ImportParameters
// Il2CppName: ImportParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::DSACryptoServiceProvider::*)(::System::Security::Cryptography::DSAParameters)>(&System::Security::Cryptography::DSACryptoServiceProvider::ImportParameters)> {
  static const MethodInfo* get() {
    static auto* parameters = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "DSAParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DSACryptoServiceProvider*), "ImportParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameters});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::DSACryptoServiceProvider::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::DSACryptoServiceProvider::*)(bool)>(&System::Security::Cryptography::DSACryptoServiceProvider::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DSACryptoServiceProvider*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
