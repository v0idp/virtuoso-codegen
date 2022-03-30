// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Rendering.VertexAttribute
#include "UnityEngine/Rendering/VertexAttribute.hpp"
// Including type: UnityEngine.Rendering.VertexAttributeFormat
#include "UnityEngine/Rendering/VertexAttributeFormat.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: VertexAttributeDescriptor
  struct VertexAttributeDescriptor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::VertexAttributeDescriptor, "UnityEngine.Rendering", "VertexAttributeDescriptor");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.VertexAttributeDescriptor
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: 568C48
  struct VertexAttributeDescriptor/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::Rendering::VertexAttributeDescriptor>*/ {
    public:
    public:
    // [DebuggerBrowsableAttribute] Offset: 0x56C008
    // private UnityEngine.Rendering.VertexAttribute <attribute>k__BackingField
    // Size: 0x14
    // Offset: 0x0
    ::UnityEngine::Rendering::VertexAttribute attribute;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::VertexAttribute) == 0x14);
    // [DebuggerBrowsableAttribute] Offset: 0x56C044
    // private UnityEngine.Rendering.VertexAttributeFormat <format>k__BackingField
    // Size: 0x14
    // Offset: 0x4
    ::UnityEngine::Rendering::VertexAttributeFormat format;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::VertexAttributeFormat) == 0x14);
    // [DebuggerBrowsableAttribute] Offset: 0x56C080
    // private System.Int32 <dimension>k__BackingField
    // Size: 0x4
    // Offset: 0x8
    int dimension;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0x56C0BC
    // private System.Int32 <stream>k__BackingField
    // Size: 0x4
    // Offset: 0xC
    int stream;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: VertexAttributeDescriptor
    constexpr VertexAttributeDescriptor(::UnityEngine::Rendering::VertexAttribute attribute_ = {}, ::UnityEngine::Rendering::VertexAttributeFormat format_ = {}, int dimension_ = {}, int stream_ = {}) noexcept : attribute{attribute_}, format{format_}, dimension{dimension_}, stream{stream_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::Rendering::VertexAttributeDescriptor>
    operator ::System::IEquatable_1<::UnityEngine::Rendering::VertexAttributeDescriptor>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::Rendering::VertexAttributeDescriptor>*>(this);
    }
    // Get instance field reference: private UnityEngine.Rendering.VertexAttribute <attribute>k__BackingField
    ::UnityEngine::Rendering::VertexAttribute& dyn_$attribute$k__BackingField();
    // Get instance field reference: private UnityEngine.Rendering.VertexAttributeFormat <format>k__BackingField
    ::UnityEngine::Rendering::VertexAttributeFormat& dyn_$format$k__BackingField();
    // Get instance field reference: private System.Int32 <dimension>k__BackingField
    int& dyn_$dimension$k__BackingField();
    // Get instance field reference: private System.Int32 <stream>k__BackingField
    int& dyn_$stream$k__BackingField();
    // public UnityEngine.Rendering.VertexAttribute get_attribute()
    // Offset: 0x124D0A8
    ::UnityEngine::Rendering::VertexAttribute get_attribute();
    // public UnityEngine.Rendering.VertexAttributeFormat get_format()
    // Offset: 0x124D0B0
    ::UnityEngine::Rendering::VertexAttributeFormat get_format();
    // public System.Int32 get_dimension()
    // Offset: 0x124D0B8
    int get_dimension();
    // public System.Int32 get_stream()
    // Offset: 0x124D0C0
    int get_stream();
    // public System.Boolean Equals(UnityEngine.Rendering.VertexAttributeDescriptor other)
    // Offset: 0x124D384
    bool Equals(::UnityEngine::Rendering::VertexAttributeDescriptor other);
    // public override System.String ToString()
    // Offset: 0x124D0C8
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
    // public override System.Int32 GetHashCode()
    // Offset: 0x124D2A8
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0x124D2D0
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
  }; // UnityEngine.Rendering.VertexAttributeDescriptor
  #pragma pack(pop)
  static check_size<sizeof(VertexAttributeDescriptor), 12 + sizeof(int)> __UnityEngine_Rendering_VertexAttributeDescriptorSizeCheck;
  static_assert(sizeof(VertexAttributeDescriptor) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::VertexAttributeDescriptor::get_attribute
// Il2CppName: get_attribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::VertexAttribute (UnityEngine::Rendering::VertexAttributeDescriptor::*)()>(&UnityEngine::Rendering::VertexAttributeDescriptor::get_attribute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VertexAttributeDescriptor), "get_attribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VertexAttributeDescriptor::get_format
// Il2CppName: get_format
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::VertexAttributeFormat (UnityEngine::Rendering::VertexAttributeDescriptor::*)()>(&UnityEngine::Rendering::VertexAttributeDescriptor::get_format)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VertexAttributeDescriptor), "get_format", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VertexAttributeDescriptor::get_dimension
// Il2CppName: get_dimension
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::VertexAttributeDescriptor::*)()>(&UnityEngine::Rendering::VertexAttributeDescriptor::get_dimension)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VertexAttributeDescriptor), "get_dimension", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VertexAttributeDescriptor::get_stream
// Il2CppName: get_stream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::VertexAttributeDescriptor::*)()>(&UnityEngine::Rendering::VertexAttributeDescriptor::get_stream)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VertexAttributeDescriptor), "get_stream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VertexAttributeDescriptor::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::VertexAttributeDescriptor::*)(::UnityEngine::Rendering::VertexAttributeDescriptor)>(&UnityEngine::Rendering::VertexAttributeDescriptor::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "VertexAttributeDescriptor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VertexAttributeDescriptor), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VertexAttributeDescriptor::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Rendering::VertexAttributeDescriptor::*)()>(&UnityEngine::Rendering::VertexAttributeDescriptor::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VertexAttributeDescriptor), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VertexAttributeDescriptor::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::VertexAttributeDescriptor::*)()>(&UnityEngine::Rendering::VertexAttributeDescriptor::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VertexAttributeDescriptor), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VertexAttributeDescriptor::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::VertexAttributeDescriptor::*)(::Il2CppObject*)>(&UnityEngine::Rendering::VertexAttributeDescriptor::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VertexAttributeDescriptor), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};