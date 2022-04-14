// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Security.Cryptography.CipherMode
#include "System/Security/Cryptography/CipherMode.hpp"
// Including type: System.Security.Cryptography.PaddingMode
#include "System/Security/Cryptography/PaddingMode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: KeySizes
  class KeySizes;
  // Forward declaring type: ICryptoTransform
  class ICryptoTransform;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: SymmetricAlgorithm
  class SymmetricAlgorithm;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::SymmetricAlgorithm);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::SymmetricAlgorithm*, "System.Security.Cryptography", "SymmetricAlgorithm");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.SymmetricAlgorithm
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 68487C
  class SymmetricAlgorithm : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // protected System.Int32 BlockSizeValue
    // Size: 0x4
    // Offset: 0x10
    int BlockSizeValue;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Int32 FeedbackSizeValue
    // Size: 0x4
    // Offset: 0x14
    int FeedbackSizeValue;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Byte[] IVValue
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> IVValue;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // protected System.Byte[] KeyValue
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<uint8_t> KeyValue;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // protected System.Security.Cryptography.KeySizes[] LegalBlockSizesValue
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::System::Security::Cryptography::KeySizes*> LegalBlockSizesValue;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Security::Cryptography::KeySizes*>) == 0x8);
    // protected System.Security.Cryptography.KeySizes[] LegalKeySizesValue
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::System::Security::Cryptography::KeySizes*> LegalKeySizesValue;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Security::Cryptography::KeySizes*>) == 0x8);
    // protected System.Int32 KeySizeValue
    // Size: 0x4
    // Offset: 0x38
    int KeySizeValue;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Security.Cryptography.CipherMode ModeValue
    // Size: 0x4
    // Offset: 0x3C
    ::System::Security::Cryptography::CipherMode ModeValue;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::CipherMode) == 0x4);
    // protected System.Security.Cryptography.PaddingMode PaddingValue
    // Size: 0x4
    // Offset: 0x40
    ::System::Security::Cryptography::PaddingMode PaddingValue;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::PaddingMode) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: protected System.Int32 BlockSizeValue
    [[deprecated]] int& dyn_BlockSizeValue();
    // Get instance field reference: protected System.Int32 FeedbackSizeValue
    [[deprecated]] int& dyn_FeedbackSizeValue();
    // Get instance field reference: protected System.Byte[] IVValue
    [[deprecated]] ::ArrayW<uint8_t>& dyn_IVValue();
    // Get instance field reference: protected System.Byte[] KeyValue
    [[deprecated]] ::ArrayW<uint8_t>& dyn_KeyValue();
    // Get instance field reference: protected System.Security.Cryptography.KeySizes[] LegalBlockSizesValue
    [[deprecated]] ::ArrayW<::System::Security::Cryptography::KeySizes*>& dyn_LegalBlockSizesValue();
    // Get instance field reference: protected System.Security.Cryptography.KeySizes[] LegalKeySizesValue
    [[deprecated]] ::ArrayW<::System::Security::Cryptography::KeySizes*>& dyn_LegalKeySizesValue();
    // Get instance field reference: protected System.Int32 KeySizeValue
    [[deprecated]] int& dyn_KeySizeValue();
    // Get instance field reference: protected System.Security.Cryptography.CipherMode ModeValue
    [[deprecated]] ::System::Security::Cryptography::CipherMode& dyn_ModeValue();
    // Get instance field reference: protected System.Security.Cryptography.PaddingMode PaddingValue
    [[deprecated]] ::System::Security::Cryptography::PaddingMode& dyn_PaddingValue();
    // public System.Int32 get_BlockSize()
    // Offset: 0x12690F4
    int get_BlockSize();
    // public System.Void set_BlockSize(System.Int32 value)
    // Offset: 0x12690FC
    void set_BlockSize(int value);
    // public System.Int32 get_FeedbackSize()
    // Offset: 0x12691F4
    int get_FeedbackSize();
    // public System.Byte[] get_IV()
    // Offset: 0x12691FC
    ::ArrayW<uint8_t> get_IV();
    // public System.Void set_IV(System.Byte[] value)
    // Offset: 0x1269294
    void set_IV(::ArrayW<uint8_t> value);
    // public System.Byte[] get_Key()
    // Offset: 0x12693D4
    ::ArrayW<uint8_t> get_Key();
    // public System.Void set_Key(System.Byte[] value)
    // Offset: 0x126946C
    void set_Key(::ArrayW<uint8_t> value);
    // public System.Security.Cryptography.KeySizes[] get_LegalKeySizes()
    // Offset: 0x1269660
    ::ArrayW<::System::Security::Cryptography::KeySizes*> get_LegalKeySizes();
    // public System.Int32 get_KeySize()
    // Offset: 0x12696DC
    int get_KeySize();
    // public System.Void set_KeySize(System.Int32 value)
    // Offset: 0x12696E4
    void set_KeySize(int value);
    // public System.Security.Cryptography.CipherMode get_Mode()
    // Offset: 0x1269764
    ::System::Security::Cryptography::CipherMode get_Mode();
    // public System.Void set_Mode(System.Security.Cryptography.CipherMode value)
    // Offset: 0x126976C
    void set_Mode(::System::Security::Cryptography::CipherMode value);
    // public System.Security.Cryptography.PaddingMode get_Padding()
    // Offset: 0x12697DC
    ::System::Security::Cryptography::PaddingMode get_Padding();
    // public System.Void set_Padding(System.Security.Cryptography.PaddingMode value)
    // Offset: 0x12697E4
    void set_Padding(::System::Security::Cryptography::PaddingMode value);
    // public System.Void Dispose()
    // Offset: 0x1268F84
    void Dispose();
    // public System.Void Clear()
    // Offset: 0x1268FFC
    void Clear();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x126909C
    void Dispose(bool disposing);
    // public System.Boolean ValidKeySize(System.Int32 bitLength)
    // Offset: 0x12695AC
    bool ValidKeySize(int bitLength);
    // static public System.Security.Cryptography.SymmetricAlgorithm Create(System.String algName)
    // Offset: 0x1269854
    static ::System::Security::Cryptography::SymmetricAlgorithm* Create(::StringW algName);
    // public System.Security.Cryptography.ICryptoTransform CreateEncryptor()
    // Offset: 0x12698D8
    ::System::Security::Cryptography::ICryptoTransform* CreateEncryptor();
    // public System.Security.Cryptography.ICryptoTransform CreateEncryptor(System.Byte[] rgbKey, System.Byte[] rgbIV)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::ArrayW<uint8_t> rgbKey, ::ArrayW<uint8_t> rgbIV);
    // public System.Security.Cryptography.ICryptoTransform CreateDecryptor()
    // Offset: 0x126992C
    ::System::Security::Cryptography::ICryptoTransform* CreateDecryptor();
    // public System.Security.Cryptography.ICryptoTransform CreateDecryptor(System.Byte[] rgbKey, System.Byte[] rgbIV)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::ArrayW<uint8_t> rgbKey, ::ArrayW<uint8_t> rgbIV);
    // public System.Void GenerateKey()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void GenerateKey();
    // public System.Void GenerateIV()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void GenerateIV();
    // protected System.Void .ctor()
    // Offset: 0x1268F54
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SymmetricAlgorithm* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::SymmetricAlgorithm::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SymmetricAlgorithm*, creationType>()));
    }
  }; // System.Security.Cryptography.SymmetricAlgorithm
  #pragma pack(pop)
  static check_size<sizeof(SymmetricAlgorithm), 64 + sizeof(::System::Security::Cryptography::PaddingMode)> __System_Security_Cryptography_SymmetricAlgorithmSizeCheck;
  static_assert(sizeof(SymmetricAlgorithm) == 0x44);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::SymmetricAlgorithm::get_BlockSize
// Il2CppName: get_BlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::SymmetricAlgorithm::*)()>(&System::Security::Cryptography::SymmetricAlgorithm::get_BlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SymmetricAlgorithm*), "get_BlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SymmetricAlgorithm::set_BlockSize
// Il2CppName: set_BlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SymmetricAlgorithm::*)(int)>(&System::Security::Cryptography::SymmetricAlgorithm::set_BlockSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SymmetricAlgorithm*), "set_BlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SymmetricAlgorithm::get_FeedbackSize
// Il2CppName: get_FeedbackSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::SymmetricAlgorithm::*)()>(&System::Security::Cryptography::SymmetricAlgorithm::get_FeedbackSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SymmetricAlgorithm*), "get_FeedbackSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SymmetricAlgorithm::get_IV
// Il2CppName: get_IV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::SymmetricAlgorithm::*)()>(&System::Security::Cryptography::SymmetricAlgorithm::get_IV)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SymmetricAlgorithm*), "get_IV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SymmetricAlgorithm::set_IV
// Il2CppName: set_IV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SymmetricAlgorithm::*)(::ArrayW<uint8_t>)>(&System::Security::Cryptography::SymmetricAlgorithm::set_IV)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SymmetricAlgorithm*), "set_IV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SymmetricAlgorithm::get_Key
// Il2CppName: get_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::SymmetricAlgorithm::*)()>(&System::Security::Cryptography::SymmetricAlgorithm::get_Key)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SymmetricAlgorithm*), "get_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SymmetricAlgorithm::set_Key
// Il2CppName: set_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SymmetricAlgorithm::*)(::ArrayW<uint8_t>)>(&System::Security::Cryptography::SymmetricAlgorithm::set_Key)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SymmetricAlgorithm*), "set_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SymmetricAlgorithm::get_LegalKeySizes
// Il2CppName: get_LegalKeySizes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Security::Cryptography::KeySizes*> (System::Security::Cryptography::SymmetricAlgorithm::*)()>(&System::Security::Cryptography::SymmetricAlgorithm::get_LegalKeySizes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SymmetricAlgorithm*), "get_LegalKeySizes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SymmetricAlgorithm::get_KeySize
// Il2CppName: get_KeySize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::SymmetricAlgorithm::*)()>(&System::Security::Cryptography::SymmetricAlgorithm::get_KeySize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SymmetricAlgorithm*), "get_KeySize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SymmetricAlgorithm::set_KeySize
// Il2CppName: set_KeySize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SymmetricAlgorithm::*)(int)>(&System::Security::Cryptography::SymmetricAlgorithm::set_KeySize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SymmetricAlgorithm*), "set_KeySize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SymmetricAlgorithm::get_Mode
// Il2CppName: get_Mode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::CipherMode (System::Security::Cryptography::SymmetricAlgorithm::*)()>(&System::Security::Cryptography::SymmetricAlgorithm::get_Mode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SymmetricAlgorithm*), "get_Mode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SymmetricAlgorithm::set_Mode
// Il2CppName: set_Mode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SymmetricAlgorithm::*)(::System::Security::Cryptography::CipherMode)>(&System::Security::Cryptography::SymmetricAlgorithm::set_Mode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "CipherMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SymmetricAlgorithm*), "set_Mode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SymmetricAlgorithm::get_Padding
// Il2CppName: get_Padding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::PaddingMode (System::Security::Cryptography::SymmetricAlgorithm::*)()>(&System::Security::Cryptography::SymmetricAlgorithm::get_Padding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SymmetricAlgorithm*), "get_Padding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SymmetricAlgorithm::set_Padding
// Il2CppName: set_Padding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SymmetricAlgorithm::*)(::System::Security::Cryptography::PaddingMode)>(&System::Security::Cryptography::SymmetricAlgorithm::set_Padding)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "PaddingMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SymmetricAlgorithm*), "set_Padding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SymmetricAlgorithm::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SymmetricAlgorithm::*)()>(&System::Security::Cryptography::SymmetricAlgorithm::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SymmetricAlgorithm*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SymmetricAlgorithm::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SymmetricAlgorithm::*)()>(&System::Security::Cryptography::SymmetricAlgorithm::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SymmetricAlgorithm*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SymmetricAlgorithm::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SymmetricAlgorithm::*)(bool)>(&System::Security::Cryptography::SymmetricAlgorithm::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SymmetricAlgorithm*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SymmetricAlgorithm::ValidKeySize
// Il2CppName: ValidKeySize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::SymmetricAlgorithm::*)(int)>(&System::Security::Cryptography::SymmetricAlgorithm::ValidKeySize)> {
  static const MethodInfo* get() {
    static auto* bitLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SymmetricAlgorithm*), "ValidKeySize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bitLength});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SymmetricAlgorithm::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::SymmetricAlgorithm* (*)(::StringW)>(&System::Security::Cryptography::SymmetricAlgorithm::Create)> {
  static const MethodInfo* get() {
    static auto* algName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SymmetricAlgorithm*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{algName});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SymmetricAlgorithm::CreateEncryptor
// Il2CppName: CreateEncryptor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::ICryptoTransform* (System::Security::Cryptography::SymmetricAlgorithm::*)()>(&System::Security::Cryptography::SymmetricAlgorithm::CreateEncryptor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SymmetricAlgorithm*), "CreateEncryptor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SymmetricAlgorithm::CreateEncryptor
// Il2CppName: CreateEncryptor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::ICryptoTransform* (System::Security::Cryptography::SymmetricAlgorithm::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&System::Security::Cryptography::SymmetricAlgorithm::CreateEncryptor)> {
  static const MethodInfo* get() {
    static auto* rgbKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* rgbIV = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SymmetricAlgorithm*), "CreateEncryptor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rgbKey, rgbIV});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SymmetricAlgorithm::CreateDecryptor
// Il2CppName: CreateDecryptor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::ICryptoTransform* (System::Security::Cryptography::SymmetricAlgorithm::*)()>(&System::Security::Cryptography::SymmetricAlgorithm::CreateDecryptor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SymmetricAlgorithm*), "CreateDecryptor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SymmetricAlgorithm::CreateDecryptor
// Il2CppName: CreateDecryptor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::ICryptoTransform* (System::Security::Cryptography::SymmetricAlgorithm::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&System::Security::Cryptography::SymmetricAlgorithm::CreateDecryptor)> {
  static const MethodInfo* get() {
    static auto* rgbKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* rgbIV = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SymmetricAlgorithm*), "CreateDecryptor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rgbKey, rgbIV});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SymmetricAlgorithm::GenerateKey
// Il2CppName: GenerateKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SymmetricAlgorithm::*)()>(&System::Security::Cryptography::SymmetricAlgorithm::GenerateKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SymmetricAlgorithm*), "GenerateKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SymmetricAlgorithm::GenerateIV
// Il2CppName: GenerateIV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SymmetricAlgorithm::*)()>(&System::Security::Cryptography::SymmetricAlgorithm::GenerateIV)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SymmetricAlgorithm*), "GenerateIV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SymmetricAlgorithm::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
