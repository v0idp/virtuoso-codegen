// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.ICryptoTransform
#include "System/Security/Cryptography/ICryptoTransform.hpp"
// Including type: System.Security.Cryptography.CipherMode
#include "System/Security/Cryptography/CipherMode.hpp"
// Including type: System.Security.Cryptography.PaddingMode
#include "System/Security/Cryptography/PaddingMode.hpp"
// Including type: System.Security.Cryptography.RijndaelManagedTransformMode
#include "System/Security/Cryptography/RijndaelManagedTransformMode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RijndaelManagedTransform
  class RijndaelManagedTransform;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::RijndaelManagedTransform);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RijndaelManagedTransform*, "System.Security.Cryptography", "RijndaelManagedTransform");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.RijndaelManagedTransform
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 57B818
  class RijndaelManagedTransform : public ::Il2CppObject/*, public ::System::Security::Cryptography::ICryptoTransform*/ {
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
    // private System.Security.Cryptography.CipherMode m_cipherMode
    // Size: 0x4
    // Offset: 0x10
    ::System::Security::Cryptography::CipherMode m_cipherMode;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::CipherMode) == 0x4);
    // private System.Security.Cryptography.PaddingMode m_paddingValue
    // Size: 0x4
    // Offset: 0x14
    ::System::Security::Cryptography::PaddingMode m_paddingValue;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::PaddingMode) == 0x4);
    // private System.Security.Cryptography.RijndaelManagedTransformMode m_transformMode
    // Size: 0x4
    // Offset: 0x18
    ::System::Security::Cryptography::RijndaelManagedTransformMode m_transformMode;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::RijndaelManagedTransformMode) == 0x4);
    // private System.Int32 m_blockSizeBits
    // Size: 0x4
    // Offset: 0x1C
    int m_blockSizeBits;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_blockSizeBytes
    // Size: 0x4
    // Offset: 0x20
    int m_blockSizeBytes;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_inputBlockSize
    // Size: 0x4
    // Offset: 0x24
    int m_inputBlockSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_outputBlockSize
    // Size: 0x4
    // Offset: 0x28
    int m_outputBlockSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_outputBlockSize and: m_encryptKeyExpansion
    char __padding6[0x4] = {};
    // private System.Int32[] m_encryptKeyExpansion
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<int> m_encryptKeyExpansion;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private System.Int32[] m_decryptKeyExpansion
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<int> m_decryptKeyExpansion;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private System.Int32 m_Nr
    // Size: 0x4
    // Offset: 0x40
    int m_Nr;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_Nb
    // Size: 0x4
    // Offset: 0x44
    int m_Nb;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_Nk
    // Size: 0x4
    // Offset: 0x48
    int m_Nk;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_Nk and: m_encryptindex
    char __padding11[0x4] = {};
    // private System.Int32[] m_encryptindex
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<int> m_encryptindex;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private System.Int32[] m_decryptindex
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<int> m_decryptindex;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private System.Int32[] m_IV
    // Size: 0x8
    // Offset: 0x60
    ::ArrayW<int> m_IV;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private System.Int32[] m_lastBlockBuffer
    // Size: 0x8
    // Offset: 0x68
    ::ArrayW<int> m_lastBlockBuffer;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private System.Byte[] m_depadBuffer
    // Size: 0x8
    // Offset: 0x70
    ::ArrayW<uint8_t> m_depadBuffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] m_shiftRegister
    // Size: 0x8
    // Offset: 0x78
    ::ArrayW<uint8_t> m_shiftRegister;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Security::Cryptography::ICryptoTransform
    operator ::System::Security::Cryptography::ICryptoTransform() noexcept {
      return *reinterpret_cast<::System::Security::Cryptography::ICryptoTransform*>(this);
    }
    // Get static field: static private readonly System.Byte[] s_Sbox
    static ::ArrayW<uint8_t> _get_s_Sbox();
    // Set static field: static private readonly System.Byte[] s_Sbox
    static void _set_s_Sbox(::ArrayW<uint8_t> value);
    // Get static field: static private readonly System.Int32[] s_Rcon
    static ::ArrayW<int> _get_s_Rcon();
    // Set static field: static private readonly System.Int32[] s_Rcon
    static void _set_s_Rcon(::ArrayW<int> value);
    // Get static field: static private readonly System.Int32[] s_T
    static ::ArrayW<int> _get_s_T();
    // Set static field: static private readonly System.Int32[] s_T
    static void _set_s_T(::ArrayW<int> value);
    // Get static field: static private readonly System.Int32[] s_TF
    static ::ArrayW<int> _get_s_TF();
    // Set static field: static private readonly System.Int32[] s_TF
    static void _set_s_TF(::ArrayW<int> value);
    // Get static field: static private readonly System.Int32[] s_iT
    static ::ArrayW<int> _get_s_iT();
    // Set static field: static private readonly System.Int32[] s_iT
    static void _set_s_iT(::ArrayW<int> value);
    // Get static field: static private readonly System.Int32[] s_iTF
    static ::ArrayW<int> _get_s_iTF();
    // Set static field: static private readonly System.Int32[] s_iTF
    static void _set_s_iTF(::ArrayW<int> value);
    // Get instance field reference: private System.Security.Cryptography.CipherMode m_cipherMode
    ::System::Security::Cryptography::CipherMode& dyn_m_cipherMode();
    // Get instance field reference: private System.Security.Cryptography.PaddingMode m_paddingValue
    ::System::Security::Cryptography::PaddingMode& dyn_m_paddingValue();
    // Get instance field reference: private System.Security.Cryptography.RijndaelManagedTransformMode m_transformMode
    ::System::Security::Cryptography::RijndaelManagedTransformMode& dyn_m_transformMode();
    // Get instance field reference: private System.Int32 m_blockSizeBits
    int& dyn_m_blockSizeBits();
    // Get instance field reference: private System.Int32 m_blockSizeBytes
    int& dyn_m_blockSizeBytes();
    // Get instance field reference: private System.Int32 m_inputBlockSize
    int& dyn_m_inputBlockSize();
    // Get instance field reference: private System.Int32 m_outputBlockSize
    int& dyn_m_outputBlockSize();
    // Get instance field reference: private System.Int32[] m_encryptKeyExpansion
    ::ArrayW<int>& dyn_m_encryptKeyExpansion();
    // Get instance field reference: private System.Int32[] m_decryptKeyExpansion
    ::ArrayW<int>& dyn_m_decryptKeyExpansion();
    // Get instance field reference: private System.Int32 m_Nr
    int& dyn_m_Nr();
    // Get instance field reference: private System.Int32 m_Nb
    int& dyn_m_Nb();
    // Get instance field reference: private System.Int32 m_Nk
    int& dyn_m_Nk();
    // Get instance field reference: private System.Int32[] m_encryptindex
    ::ArrayW<int>& dyn_m_encryptindex();
    // Get instance field reference: private System.Int32[] m_decryptindex
    ::ArrayW<int>& dyn_m_decryptindex();
    // Get instance field reference: private System.Int32[] m_IV
    ::ArrayW<int>& dyn_m_IV();
    // Get instance field reference: private System.Int32[] m_lastBlockBuffer
    ::ArrayW<int>& dyn_m_lastBlockBuffer();
    // Get instance field reference: private System.Byte[] m_depadBuffer
    ::ArrayW<uint8_t>& dyn_m_depadBuffer();
    // Get instance field reference: private System.Byte[] m_shiftRegister
    ::ArrayW<uint8_t>& dyn_m_shiftRegister();
    // public System.Int32 get_InputBlockSize()
    // Offset: 0xD5082C
    int get_InputBlockSize();
    // public System.Int32 get_OutputBlockSize()
    // Offset: 0xD50834
    int get_OutputBlockSize();
    // public System.Boolean get_CanTransformMultipleBlocks()
    // Offset: 0xD5083C
    bool get_CanTransformMultipleBlocks();
    // System.Void .ctor(System.Byte[] rgbKey, System.Security.Cryptography.CipherMode mode, System.Byte[] rgbIV, System.Int32 blockSize, System.Int32 feedbackSize, System.Security.Cryptography.PaddingMode PaddingValue, System.Security.Cryptography.RijndaelManagedTransformMode transformMode)
    // Offset: 0xD4FB6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RijndaelManagedTransform* New_ctor(::ArrayW<uint8_t> rgbKey, ::System::Security::Cryptography::CipherMode mode, ::ArrayW<uint8_t> rgbIV, int blockSize, int feedbackSize, ::System::Security::Cryptography::PaddingMode PaddingValue, ::System::Security::Cryptography::RijndaelManagedTransformMode transformMode) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::RijndaelManagedTransform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RijndaelManagedTransform*, creationType>(rgbKey, mode, rgbIV, blockSize, feedbackSize, PaddingValue, transformMode)));
    }
    // static private System.Void .cctor()
    // Offset: 0xD528A4
    static void _cctor();
    // public System.Void Dispose()
    // Offset: 0xD5075C
    void Dispose();
    // private System.Void Dispose(System.Boolean disposing)
    // Offset: 0xD50764
    void Dispose(bool disposing);
    // public System.Int32 TransformBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount, System.Byte[] outputBuffer, System.Int32 outputOffset)
    // Offset: 0xD50844
    int TransformBlock(::ArrayW<uint8_t> inputBuffer, int inputOffset, int inputCount, ::ArrayW<uint8_t> outputBuffer, int outputOffset);
    // public System.Byte[] TransformFinalBlock(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount)
    // Offset: 0xD520B8
    ::ArrayW<uint8_t> TransformFinalBlock(::ArrayW<uint8_t> inputBuffer, int inputOffset, int inputCount);
    // public System.Void Reset()
    // Offset: 0xD5238C
    void Reset();
    // private System.Int32 EncryptData(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount, ref System.Byte[] outputBuffer, System.Int32 outputOffset, System.Security.Cryptography.PaddingMode paddingMode, System.Boolean fLast)
    // Offset: 0xD50B10
    int EncryptData(::ArrayW<uint8_t> inputBuffer, int inputOffset, int inputCount, ByRef<::ArrayW<uint8_t>> outputBuffer, int outputOffset, ::System::Security::Cryptography::PaddingMode paddingMode, bool fLast);
    // private System.Int32 DecryptData(System.Byte[] inputBuffer, System.Int32 inputOffset, System.Int32 inputCount, ref System.Byte[] outputBuffer, System.Int32 outputOffset, System.Security.Cryptography.PaddingMode paddingMode, System.Boolean fLast)
    // Offset: 0xD51648
    int DecryptData(::ArrayW<uint8_t> inputBuffer, int inputOffset, int inputCount, ByRef<::ArrayW<uint8_t>> outputBuffer, int outputOffset, ::System::Security::Cryptography::PaddingMode paddingMode, bool fLast);
    // private System.Void Enc(System.Int32* encryptindex, System.Int32* encryptKeyExpansion, System.Int32* T, System.Int32* TF, System.Int32* work, System.Int32* temp)
    // Offset: 0xD52404
    void Enc(int* encryptindex, int* encryptKeyExpansion, int* T, int* TF, int* work, int* temp);
    // private System.Void Dec(System.Int32* decryptindex, System.Int32* decryptKeyExpansion, System.Int32* iT, System.Int32* iTF, System.Int32* work, System.Int32* temp)
    // Offset: 0xD525C0
    void Dec(int* decryptindex, int* decryptKeyExpansion, int* iT, int* iTF, int* work, int* temp);
    // private System.Void GenerateKeyExpansion(System.Byte[] rgbKey)
    // Offset: 0xD501A0
    void GenerateKeyExpansion(::ArrayW<uint8_t> rgbKey);
    // static private System.Int32 rot1(System.Int32 val)
    // Offset: 0xD5289C
    static int rot1(int val);
    // static private System.Int32 rot2(System.Int32 val)
    // Offset: 0xD52894
    static int rot2(int val);
    // static private System.Int32 rot3(System.Int32 val)
    // Offset: 0xD52790
    static int rot3(int val);
    // static private System.Int32 SubWord(System.Int32 a)
    // Offset: 0xD52798
    static int SubWord(int a);
    // static private System.Int32 MulX(System.Int32 x)
    // Offset: 0xD52870
    static int MulX(int x);
  }; // System.Security.Cryptography.RijndaelManagedTransform
  #pragma pack(pop)
  static check_size<sizeof(RijndaelManagedTransform), 120 + sizeof(::ArrayW<uint8_t>)> __System_Security_Cryptography_RijndaelManagedTransformSizeCheck;
  static_assert(sizeof(RijndaelManagedTransform) == 0x80);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::get_InputBlockSize
// Il2CppName: get_InputBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::RijndaelManagedTransform::*)()>(&System::Security::Cryptography::RijndaelManagedTransform::get_InputBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "get_InputBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::get_OutputBlockSize
// Il2CppName: get_OutputBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::RijndaelManagedTransform::*)()>(&System::Security::Cryptography::RijndaelManagedTransform::get_OutputBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "get_OutputBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::get_CanTransformMultipleBlocks
// Il2CppName: get_CanTransformMultipleBlocks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::RijndaelManagedTransform::*)()>(&System::Security::Cryptography::RijndaelManagedTransform::get_CanTransformMultipleBlocks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "get_CanTransformMultipleBlocks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Security::Cryptography::RijndaelManagedTransform::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RijndaelManagedTransform::*)()>(&System::Security::Cryptography::RijndaelManagedTransform::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RijndaelManagedTransform::*)(bool)>(&System::Security::Cryptography::RijndaelManagedTransform::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::TransformBlock
// Il2CppName: TransformBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::RijndaelManagedTransform::*)(::ArrayW<uint8_t>, int, int, ::ArrayW<uint8_t>, int)>(&System::Security::Cryptography::RijndaelManagedTransform::TransformBlock)> {
  static const MethodInfo* get() {
    static auto* inputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "TransformBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::TransformFinalBlock
// Il2CppName: TransformFinalBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::RijndaelManagedTransform::*)(::ArrayW<uint8_t>, int, int)>(&System::Security::Cryptography::RijndaelManagedTransform::TransformFinalBlock)> {
  static const MethodInfo* get() {
    static auto* inputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "TransformFinalBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputBuffer, inputOffset, inputCount});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RijndaelManagedTransform::*)()>(&System::Security::Cryptography::RijndaelManagedTransform::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::EncryptData
// Il2CppName: EncryptData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::RijndaelManagedTransform::*)(::ArrayW<uint8_t>, int, int, ByRef<::ArrayW<uint8_t>>, int, ::System::Security::Cryptography::PaddingMode, bool)>(&System::Security::Cryptography::RijndaelManagedTransform::EncryptData)> {
  static const MethodInfo* get() {
    static auto* inputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    static auto* outputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* paddingMode = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "PaddingMode")->byval_arg;
    static auto* fLast = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "EncryptData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset, paddingMode, fLast});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::DecryptData
// Il2CppName: DecryptData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::RijndaelManagedTransform::*)(::ArrayW<uint8_t>, int, int, ByRef<::ArrayW<uint8_t>>, int, ::System::Security::Cryptography::PaddingMode, bool)>(&System::Security::Cryptography::RijndaelManagedTransform::DecryptData)> {
  static const MethodInfo* get() {
    static auto* inputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outputBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    static auto* outputOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* paddingMode = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "PaddingMode")->byval_arg;
    static auto* fLast = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "DecryptData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset, paddingMode, fLast});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::Enc
// Il2CppName: Enc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RijndaelManagedTransform::*)(int*, int*, int*, int*, int*, int*)>(&System::Security::Cryptography::RijndaelManagedTransform::Enc)> {
  static const MethodInfo* get() {
    static auto* encryptindex = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    static auto* encryptKeyExpansion = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    static auto* T = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    static auto* TF = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    static auto* work = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    static auto* temp = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "Enc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{encryptindex, encryptKeyExpansion, T, TF, work, temp});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::Dec
// Il2CppName: Dec
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RijndaelManagedTransform::*)(int*, int*, int*, int*, int*, int*)>(&System::Security::Cryptography::RijndaelManagedTransform::Dec)> {
  static const MethodInfo* get() {
    static auto* decryptindex = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    static auto* decryptKeyExpansion = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    static auto* iT = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    static auto* iTF = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    static auto* work = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    static auto* temp = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "Dec", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{decryptindex, decryptKeyExpansion, iT, iTF, work, temp});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::GenerateKeyExpansion
// Il2CppName: GenerateKeyExpansion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RijndaelManagedTransform::*)(::ArrayW<uint8_t>)>(&System::Security::Cryptography::RijndaelManagedTransform::GenerateKeyExpansion)> {
  static const MethodInfo* get() {
    static auto* rgbKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "GenerateKeyExpansion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rgbKey});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::rot1
// Il2CppName: rot1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&System::Security::Cryptography::RijndaelManagedTransform::rot1)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "rot1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::rot2
// Il2CppName: rot2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&System::Security::Cryptography::RijndaelManagedTransform::rot2)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "rot2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::rot3
// Il2CppName: rot3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&System::Security::Cryptography::RijndaelManagedTransform::rot3)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "rot3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::SubWord
// Il2CppName: SubWord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&System::Security::Cryptography::RijndaelManagedTransform::SubWord)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "SubWord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RijndaelManagedTransform::MulX
// Il2CppName: MulX
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&System::Security::Cryptography::RijndaelManagedTransform::MulX)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RijndaelManagedTransform*), "MulX", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
