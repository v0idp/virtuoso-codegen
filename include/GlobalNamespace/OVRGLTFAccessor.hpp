// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRGLTFType
#include "GlobalNamespace/OVRGLTFType.hpp"
// Including type: OVRGLTFComponentType
#include "GlobalNamespace/OVRGLTFComponentType.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: UnityEngine.Matrix4x4
#include "UnityEngine/Matrix4x4.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // Forward declaring type: JSONNode
  class JSONNode;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRBinaryChunk
  struct OVRBinaryChunk;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRGLTFAccessor
  class OVRGLTFAccessor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRGLTFAccessor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGLTFAccessor*, "", "OVRGLTFAccessor");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: OVRGLTFAccessor
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRGLTFAccessor : public ::Il2CppObject {
    public:
    public:
    // private System.Int32 byteOffset
    // Size: 0x4
    // Offset: 0x10
    int byteOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 byteLength
    // Size: 0x4
    // Offset: 0x14
    int byteLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 byteStride
    // Size: 0x4
    // Offset: 0x18
    int byteStride;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 bufferId
    // Size: 0x4
    // Offset: 0x1C
    int bufferId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 bufferLength
    // Size: 0x4
    // Offset: 0x20
    int bufferLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 additionalOffset
    // Size: 0x4
    // Offset: 0x24
    int additionalOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private OVRGLTFType dataType
    // Size: 0x4
    // Offset: 0x28
    ::GlobalNamespace::OVRGLTFType dataType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRGLTFType) == 0x4);
    // private OVRGLTFComponentType componentType
    // Size: 0x4
    // Offset: 0x2C
    ::GlobalNamespace::OVRGLTFComponentType componentType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRGLTFComponentType) == 0x4);
    // private System.Int32 dataCount
    // Size: 0x4
    // Offset: 0x30
    int dataCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Int32 byteOffset
    [[deprecated]] int& dyn_byteOffset();
    // Get instance field reference: private System.Int32 byteLength
    [[deprecated]] int& dyn_byteLength();
    // Get instance field reference: private System.Int32 byteStride
    [[deprecated]] int& dyn_byteStride();
    // Get instance field reference: private System.Int32 bufferId
    [[deprecated]] int& dyn_bufferId();
    // Get instance field reference: private System.Int32 bufferLength
    [[deprecated]] int& dyn_bufferLength();
    // Get instance field reference: private System.Int32 additionalOffset
    [[deprecated]] int& dyn_additionalOffset();
    // Get instance field reference: private OVRGLTFType dataType
    [[deprecated]] ::GlobalNamespace::OVRGLTFType& dyn_dataType();
    // Get instance field reference: private OVRGLTFComponentType componentType
    [[deprecated]] ::GlobalNamespace::OVRGLTFComponentType& dyn_componentType();
    // Get instance field reference: private System.Int32 dataCount
    [[deprecated]] int& dyn_dataCount();
    // public System.Void .ctor(OVRSimpleJSON.JSONNode node, OVRSimpleJSON.JSONNode root, System.Boolean bufferViewOnly)
    // Offset: 0xFB6278
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRGLTFAccessor* New_ctor(::OVRSimpleJSON::JSONNode* node, ::OVRSimpleJSON::JSONNode* root, bool bufferViewOnly) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRGLTFAccessor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRGLTFAccessor*, creationType>(node, root, bufferViewOnly)));
    }
    // public System.Int32 GetDataCount()
    // Offset: 0xFB6738
    int GetDataCount();
    // static private OVRGLTFType ToOVRType(System.String type)
    // Offset: 0xFB65C4
    static ::GlobalNamespace::OVRGLTFType ToOVRType(::StringW type);
    // public System.Void ReadAsInt(OVRBinaryChunk chunk, ref System.Int32[] data, System.Int32 offset)
    // Offset: 0xFB6740
    void ReadAsInt(::GlobalNamespace::OVRBinaryChunk chunk, ByRef<::ArrayW<int>> data, int offset);
    // public System.Void ReadAsVector2(OVRBinaryChunk chunk, ref UnityEngine.Vector2[] data, System.Int32 offset)
    // Offset: 0xFB6BE0
    void ReadAsVector2(::GlobalNamespace::OVRBinaryChunk chunk, ByRef<::ArrayW<::UnityEngine::Vector2>> data, int offset);
    // public System.Void ReadAsVector3(OVRBinaryChunk chunk, ref UnityEngine.Vector3[] data, System.Int32 offset, UnityEngine.Vector3 conversionScale)
    // Offset: 0xFB6EE0
    void ReadAsVector3(::GlobalNamespace::OVRBinaryChunk chunk, ByRef<::ArrayW<::UnityEngine::Vector3>> data, int offset, ::UnityEngine::Vector3 conversionScale);
    // public System.Void ReadAsVector4(OVRBinaryChunk chunk, ref UnityEngine.Vector4[] data, System.Int32 offset, UnityEngine.Vector4 conversionScale)
    // Offset: 0xFB72C0
    void ReadAsVector4(::GlobalNamespace::OVRBinaryChunk chunk, ByRef<::ArrayW<::UnityEngine::Vector4>> data, int offset, ::UnityEngine::Vector4 conversionScale);
    // public System.Void ReadAsColor(OVRBinaryChunk chunk, ref UnityEngine.Color[] data, System.Int32 offset)
    // Offset: 0xFB76FC
    void ReadAsColor(::GlobalNamespace::OVRBinaryChunk chunk, ByRef<::ArrayW<::UnityEngine::Color>> data, int offset);
    // public System.Void ReadAsMatrix4x4(OVRBinaryChunk chunk, ref UnityEngine.Matrix4x4[] data, System.Int32 offset, UnityEngine.Vector3 conversionScale)
    // Offset: 0xFB7BDC
    void ReadAsMatrix4x4(::GlobalNamespace::OVRBinaryChunk chunk, ByRef<::ArrayW<::UnityEngine::Matrix4x4>> data, int offset, ::UnityEngine::Vector3 conversionScale);
    // public System.Byte[] ReadAsKtxTexture(OVRBinaryChunk chunk)
    // Offset: 0xFB7F58
    ::ArrayW<uint8_t> ReadAsKtxTexture(::GlobalNamespace::OVRBinaryChunk chunk);
    // public System.Void ReadAsBoneWeights(OVRBinaryChunk chunk, ref UnityEngine.Vector4[] data, System.Int32 offset)
    // Offset: 0xFB807C
    void ReadAsBoneWeights(::GlobalNamespace::OVRBinaryChunk chunk, ByRef<::ArrayW<::UnityEngine::Vector4>> data, int offset);
    // private System.Int32 GetStrideForType(OVRGLTFComponentType type)
    // Offset: 0xFB697C
    int GetStrideForType(::GlobalNamespace::OVRGLTFComponentType type);
    // private System.Single GetMaxValueForType(OVRGLTFComponentType type)
    // Offset: 0xFB7BB4
    float GetMaxValueForType(::GlobalNamespace::OVRGLTFComponentType type);
    // private System.UInt32 ReadElementAsUint(System.Byte[] data, System.Int32 index, OVRGLTFComponentType type)
    // Offset: 0xFB69A4
    uint ReadElementAsUint(::ArrayW<uint8_t> data, int index, ::GlobalNamespace::OVRGLTFComponentType type);
    // private System.Single ReadElementAsFloat(System.Byte[] data, System.Int32 index)
    // Offset: 0xFB6E6C
    float ReadElementAsFloat(::ArrayW<uint8_t> data, int index);
  }; // OVRGLTFAccessor
  #pragma pack(pop)
  static check_size<sizeof(OVRGLTFAccessor), 48 + sizeof(int)> __GlobalNamespace_OVRGLTFAccessorSizeCheck;
  static_assert(sizeof(OVRGLTFAccessor) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRGLTFAccessor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRGLTFAccessor::GetDataCount
// Il2CppName: GetDataCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::OVRGLTFAccessor::*)()>(&GlobalNamespace::OVRGLTFAccessor::GetDataCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGLTFAccessor*), "GetDataCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGLTFAccessor::ToOVRType
// Il2CppName: ToOVRType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRGLTFType (*)(::StringW)>(&GlobalNamespace::OVRGLTFAccessor::ToOVRType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGLTFAccessor*), "ToOVRType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGLTFAccessor::ReadAsInt
// Il2CppName: ReadAsInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGLTFAccessor::*)(::GlobalNamespace::OVRBinaryChunk, ByRef<::ArrayW<int>>, int)>(&GlobalNamespace::OVRGLTFAccessor::ReadAsInt)> {
  static const MethodInfo* get() {
    static auto* chunk = &::il2cpp_utils::GetClassFromName("", "OVRBinaryChunk")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->this_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGLTFAccessor*), "ReadAsInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chunk, data, offset});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGLTFAccessor::ReadAsVector2
// Il2CppName: ReadAsVector2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGLTFAccessor::*)(::GlobalNamespace::OVRBinaryChunk, ByRef<::ArrayW<::UnityEngine::Vector2>>, int)>(&GlobalNamespace::OVRGLTFAccessor::ReadAsVector2)> {
  static const MethodInfo* get() {
    static auto* chunk = &::il2cpp_utils::GetClassFromName("", "OVRBinaryChunk")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2"), 1)->this_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGLTFAccessor*), "ReadAsVector2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chunk, data, offset});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGLTFAccessor::ReadAsVector3
// Il2CppName: ReadAsVector3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGLTFAccessor::*)(::GlobalNamespace::OVRBinaryChunk, ByRef<::ArrayW<::UnityEngine::Vector3>>, int, ::UnityEngine::Vector3)>(&GlobalNamespace::OVRGLTFAccessor::ReadAsVector3)> {
  static const MethodInfo* get() {
    static auto* chunk = &::il2cpp_utils::GetClassFromName("", "OVRBinaryChunk")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->this_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* conversionScale = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGLTFAccessor*), "ReadAsVector3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chunk, data, offset, conversionScale});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGLTFAccessor::ReadAsVector4
// Il2CppName: ReadAsVector4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGLTFAccessor::*)(::GlobalNamespace::OVRBinaryChunk, ByRef<::ArrayW<::UnityEngine::Vector4>>, int, ::UnityEngine::Vector4)>(&GlobalNamespace::OVRGLTFAccessor::ReadAsVector4)> {
  static const MethodInfo* get() {
    static auto* chunk = &::il2cpp_utils::GetClassFromName("", "OVRBinaryChunk")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4"), 1)->this_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* conversionScale = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGLTFAccessor*), "ReadAsVector4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chunk, data, offset, conversionScale});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGLTFAccessor::ReadAsColor
// Il2CppName: ReadAsColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGLTFAccessor::*)(::GlobalNamespace::OVRBinaryChunk, ByRef<::ArrayW<::UnityEngine::Color>>, int)>(&GlobalNamespace::OVRGLTFAccessor::ReadAsColor)> {
  static const MethodInfo* get() {
    static auto* chunk = &::il2cpp_utils::GetClassFromName("", "OVRBinaryChunk")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Color"), 1)->this_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGLTFAccessor*), "ReadAsColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chunk, data, offset});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGLTFAccessor::ReadAsMatrix4x4
// Il2CppName: ReadAsMatrix4x4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGLTFAccessor::*)(::GlobalNamespace::OVRBinaryChunk, ByRef<::ArrayW<::UnityEngine::Matrix4x4>>, int, ::UnityEngine::Vector3)>(&GlobalNamespace::OVRGLTFAccessor::ReadAsMatrix4x4)> {
  static const MethodInfo* get() {
    static auto* chunk = &::il2cpp_utils::GetClassFromName("", "OVRBinaryChunk")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4"), 1)->this_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* conversionScale = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGLTFAccessor*), "ReadAsMatrix4x4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chunk, data, offset, conversionScale});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGLTFAccessor::ReadAsKtxTexture
// Il2CppName: ReadAsKtxTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (GlobalNamespace::OVRGLTFAccessor::*)(::GlobalNamespace::OVRBinaryChunk)>(&GlobalNamespace::OVRGLTFAccessor::ReadAsKtxTexture)> {
  static const MethodInfo* get() {
    static auto* chunk = &::il2cpp_utils::GetClassFromName("", "OVRBinaryChunk")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGLTFAccessor*), "ReadAsKtxTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chunk});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGLTFAccessor::ReadAsBoneWeights
// Il2CppName: ReadAsBoneWeights
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGLTFAccessor::*)(::GlobalNamespace::OVRBinaryChunk, ByRef<::ArrayW<::UnityEngine::Vector4>>, int)>(&GlobalNamespace::OVRGLTFAccessor::ReadAsBoneWeights)> {
  static const MethodInfo* get() {
    static auto* chunk = &::il2cpp_utils::GetClassFromName("", "OVRBinaryChunk")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4"), 1)->this_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGLTFAccessor*), "ReadAsBoneWeights", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chunk, data, offset});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGLTFAccessor::GetStrideForType
// Il2CppName: GetStrideForType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::OVRGLTFAccessor::*)(::GlobalNamespace::OVRGLTFComponentType)>(&GlobalNamespace::OVRGLTFAccessor::GetStrideForType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("", "OVRGLTFComponentType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGLTFAccessor*), "GetStrideForType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGLTFAccessor::GetMaxValueForType
// Il2CppName: GetMaxValueForType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::OVRGLTFAccessor::*)(::GlobalNamespace::OVRGLTFComponentType)>(&GlobalNamespace::OVRGLTFAccessor::GetMaxValueForType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("", "OVRGLTFComponentType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGLTFAccessor*), "GetMaxValueForType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGLTFAccessor::ReadElementAsUint
// Il2CppName: ReadElementAsUint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (GlobalNamespace::OVRGLTFAccessor::*)(::ArrayW<uint8_t>, int, ::GlobalNamespace::OVRGLTFComponentType)>(&GlobalNamespace::OVRGLTFAccessor::ReadElementAsUint)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("", "OVRGLTFComponentType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGLTFAccessor*), "ReadElementAsUint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, index, type});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGLTFAccessor::ReadElementAsFloat
// Il2CppName: ReadElementAsFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::OVRGLTFAccessor::*)(::ArrayW<uint8_t>, int)>(&GlobalNamespace::OVRGLTFAccessor::ReadElementAsFloat)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGLTFAccessor*), "ReadElementAsFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, index});
  }
};
