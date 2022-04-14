// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Attribute
  class Attribute;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Array
  class Array;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: AttributeCollection
  class AttributeCollection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::AttributeCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::AttributeCollection*, "System.ComponentModel", "AttributeCollection");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.AttributeCollection
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 69C938
  // [DefaultMemberAttribute] Offset: 69C938
  class AttributeCollection : public ::Il2CppObject/*, public ::System::Collections::ICollection*/ {
    public:
    // Nested type: ::System::ComponentModel::AttributeCollection::AttributeEntry
    struct AttributeEntry;
    // Size: 0xC
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: System.ComponentModel.AttributeCollection/System.ComponentModel.AttributeEntry
    // [TokenAttribute] Offset: FFFFFFFF
    struct AttributeEntry/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Type type
      // Size: 0x8
      // Offset: 0x0
      ::System::Type* type;
      // Field size check
      static_assert(sizeof(::System::Type*) == 0x8);
      // public System.Int32 index
      // Size: 0x4
      // Offset: 0x8
      int index;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: AttributeEntry
      constexpr AttributeEntry(::System::Type* type_ = {}, int index_ = {}) noexcept : type{type_}, index{index_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public System.Type type
      [[deprecated]] ::System::Type*& dyn_type();
      // Get instance field reference: public System.Int32 index
      [[deprecated]] int& dyn_index();
    }; // System.ComponentModel.AttributeCollection/System.ComponentModel.AttributeEntry
    #pragma pack(pop)
    static check_size<sizeof(AttributeCollection::AttributeEntry), 8 + sizeof(int)> __System_ComponentModel_AttributeCollection_AttributeEntrySizeCheck;
    static_assert(sizeof(AttributeCollection::AttributeEntry) == 0xC);
    public:
    // private System.Attribute[] _attributes
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::System::Attribute*> attributes;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Attribute*>) == 0x8);
    // private System.ComponentModel.AttributeCollection/System.ComponentModel.AttributeEntry[] _foundAttributeTypes
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::System::ComponentModel::AttributeCollection::AttributeEntry> foundAttributeTypes;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::ComponentModel::AttributeCollection::AttributeEntry>) == 0x8);
    // private System.Int32 _index
    // Size: 0x4
    // Offset: 0x20
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::ICollection
    operator ::System::Collections::ICollection() noexcept {
      return *reinterpret_cast<::System::Collections::ICollection*>(this);
    }
    // Get static field: static public readonly System.ComponentModel.AttributeCollection Empty
    static ::System::ComponentModel::AttributeCollection* _get_Empty();
    // Set static field: static public readonly System.ComponentModel.AttributeCollection Empty
    static void _set_Empty(::System::ComponentModel::AttributeCollection* value);
    // Get static field: static private System.Collections.Hashtable _defaultAttributes
    static ::System::Collections::Hashtable* _get__defaultAttributes();
    // Set static field: static private System.Collections.Hashtable _defaultAttributes
    static void _set__defaultAttributes(::System::Collections::Hashtable* value);
    // Get static field: static private System.Object internalSyncObject
    static ::Il2CppObject* _get_internalSyncObject();
    // Set static field: static private System.Object internalSyncObject
    static void _set_internalSyncObject(::Il2CppObject* value);
    // Get instance field reference: private System.Attribute[] _attributes
    [[deprecated]] ::ArrayW<::System::Attribute*>& dyn__attributes();
    // Get instance field reference: private System.ComponentModel.AttributeCollection/System.ComponentModel.AttributeEntry[] _foundAttributeTypes
    [[deprecated]] ::ArrayW<::System::ComponentModel::AttributeCollection::AttributeEntry>& dyn__foundAttributeTypes();
    // Get instance field reference: private System.Int32 _index
    [[deprecated]] int& dyn__index();
    // protected System.Attribute[] get_Attributes()
    // Offset: 0x10D768C
    ::ArrayW<::System::Attribute*> get_Attributes();
    // public System.Int32 get_Count()
    // Offset: 0x10D7694
    int get_Count();
    // public System.Attribute get_Item(System.Type attributeType)
    // Offset: 0x10D76BC
    ::System::Attribute* get_Item(::System::Type* attributeType);
    // private System.Int32 System.Collections.ICollection.get_Count()
    // Offset: 0x10D8208
    int System_Collections_ICollection_get_Count();
    // private System.Object System.Collections.ICollection.get_SyncRoot()
    // Offset: 0x10D8230
    ::Il2CppObject* System_Collections_ICollection_get_SyncRoot();
    // public System.Void .ctor(params System.Attribute[] attributes)
    // Offset: 0x10D7584
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AttributeCollection* New_ctor(::ArrayW<::System::Attribute*> attributes) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::AttributeCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AttributeCollection*, creationType>(attributes)));
    }
    // static private System.Void .cctor()
    // Offset: 0x10D82AC
    static void _cctor();
    // public System.Boolean Contains(System.Attribute attribute)
    // Offset: 0x10D8174
    bool Contains(::System::Attribute* attribute);
    // protected System.Attribute GetDefaultAttribute(System.Type attributeType)
    // Offset: 0x10D7C44
    ::System::Attribute* GetDefaultAttribute(::System::Type* attributeType);
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x10D81E0
    ::System::Collections::IEnumerator* GetEnumerator();
    // public System.Void CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x10D8238
    void CopyTo(::System::Array* array, int index);
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x10D82A8
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // System.ComponentModel.AttributeCollection
  #pragma pack(pop)
  static check_size<sizeof(AttributeCollection), 32 + sizeof(int)> __System_ComponentModel_AttributeCollectionSizeCheck;
  static_assert(sizeof(AttributeCollection) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::AttributeCollection::AttributeEntry, "System.ComponentModel", "AttributeCollection/AttributeEntry");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::AttributeCollection::get_Attributes
// Il2CppName: get_Attributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Attribute*> (System::ComponentModel::AttributeCollection::*)()>(&System::ComponentModel::AttributeCollection::get_Attributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::AttributeCollection*), "get_Attributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::AttributeCollection::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::AttributeCollection::*)()>(&System::ComponentModel::AttributeCollection::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::AttributeCollection*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::AttributeCollection::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Attribute* (System::ComponentModel::AttributeCollection::*)(::System::Type*)>(&System::ComponentModel::AttributeCollection::get_Item)> {
  static const MethodInfo* get() {
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::AttributeCollection*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributeType});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::AttributeCollection::System_Collections_ICollection_get_Count
// Il2CppName: System.Collections.ICollection.get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::AttributeCollection::*)()>(&System::ComponentModel::AttributeCollection::System_Collections_ICollection_get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::AttributeCollection*), "System.Collections.ICollection.get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::AttributeCollection::System_Collections_ICollection_get_SyncRoot
// Il2CppName: System.Collections.ICollection.get_SyncRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::AttributeCollection::*)()>(&System::ComponentModel::AttributeCollection::System_Collections_ICollection_get_SyncRoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::AttributeCollection*), "System.Collections.ICollection.get_SyncRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::AttributeCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::AttributeCollection::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::ComponentModel::AttributeCollection::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::AttributeCollection*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::AttributeCollection::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::AttributeCollection::*)(::System::Attribute*)>(&System::ComponentModel::AttributeCollection::Contains)> {
  static const MethodInfo* get() {
    static auto* attribute = &::il2cpp_utils::GetClassFromName("System", "Attribute")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::AttributeCollection*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attribute});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::AttributeCollection::GetDefaultAttribute
// Il2CppName: GetDefaultAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Attribute* (System::ComponentModel::AttributeCollection::*)(::System::Type*)>(&System::ComponentModel::AttributeCollection::GetDefaultAttribute)> {
  static const MethodInfo* get() {
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::AttributeCollection*), "GetDefaultAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributeType});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::AttributeCollection::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::ComponentModel::AttributeCollection::*)()>(&System::ComponentModel::AttributeCollection::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::AttributeCollection*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::AttributeCollection::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::AttributeCollection::*)(::System::Array*, int)>(&System::ComponentModel::AttributeCollection::CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::AttributeCollection*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, index});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::AttributeCollection::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::ComponentModel::AttributeCollection::*)()>(&System::ComponentModel::AttributeCollection::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::AttributeCollection*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
