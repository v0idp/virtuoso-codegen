// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Resources
namespace System::Resources {
  // Forward declaring type: ResourceTypeCode
  struct ResourceTypeCode;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Resources
namespace System::Resources {
  // Forward declaring type: ResourceLocator
  struct ResourceLocator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::ResourceLocator, "System.Resources", "ResourceLocator");
// Type namespace: System.Resources
namespace System::Resources {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Resources.ResourceLocator
  // [TokenAttribute] Offset: FFFFFFFF
  struct ResourceLocator/*, public ::System::ValueType*/ {
    public:
    public:
    // System.Object _value
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppObject* value;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // System.Int32 _dataPos
    // Size: 0x4
    // Offset: 0x8
    int dataPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ResourceLocator
    constexpr ResourceLocator(::Il2CppObject* value_ = {}, int dataPos_ = {}) noexcept : value{value_}, dataPos{dataPos_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: System.Object _value
    ::Il2CppObject*& dyn__value();
    // Get instance field reference: System.Int32 _dataPos
    int& dyn__dataPos();
    // System.Int32 get_DataPosition()
    // Offset: 0xD4A7B0
    int get_DataPosition();
    // System.Object get_Value()
    // Offset: 0xD4A7B8
    ::Il2CppObject* get_Value();
    // System.Void set_Value(System.Object value)
    // Offset: 0xD4A7C0
    void set_Value(::Il2CppObject* value);
    // System.Void .ctor(System.Int32 dataPos, System.Object value)
    // Offset: 0xD4A7A4
    ResourceLocator(int dataPos, ::Il2CppObject* value);
    // static System.Boolean CanCache(System.Resources.ResourceTypeCode value)
    // Offset: 0xD4A7C8
    static bool CanCache(::System::Resources::ResourceTypeCode value);
  }; // System.Resources.ResourceLocator
  #pragma pack(pop)
  static check_size<sizeof(ResourceLocator), 8 + sizeof(int)> __System_Resources_ResourceLocatorSizeCheck;
  static_assert(sizeof(ResourceLocator) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Resources::ResourceLocator::get_DataPosition
// Il2CppName: get_DataPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Resources::ResourceLocator::*)()>(&System::Resources::ResourceLocator::get_DataPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceLocator), "get_DataPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceLocator::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Resources::ResourceLocator::*)()>(&System::Resources::ResourceLocator::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceLocator), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceLocator::set_Value
// Il2CppName: set_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Resources::ResourceLocator::*)(::Il2CppObject*)>(&System::Resources::ResourceLocator::set_Value)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceLocator), "set_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceLocator::ResourceLocator
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Resources::ResourceLocator::CanCache
// Il2CppName: CanCache
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Resources::ResourceTypeCode)>(&System::Resources::ResourceLocator::CanCache)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Resources", "ResourceTypeCode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceLocator), "CanCache", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
